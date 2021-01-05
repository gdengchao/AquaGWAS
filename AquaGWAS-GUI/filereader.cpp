#include "filereader.h"

FileReader::FileReader()
{

}

void FileReader::setPhenotypeFile(QString const dir)
{
    this->phenotypeFile = dir;
}

QString FileReader::getPhenotypeFile(void)
{
    return this->phenotypeFile;
}

void FileReader::setGenotypeFile(QString const dir)
{
    this->genotypeFile = dir;
}

QString FileReader::getGenotypeFile(void)
{
    return this->genotypeFile;
}

void FileReader::setMapFile(QString const dir)
{
    this->mapFile = dir;
}

QString FileReader::getMapFile(void)
{
    return this->mapFile;
}

void FileReader::setCovariateFile(QString const dir)
{
    this->covariateFile = dir;
}

QString FileReader::getCovariateFile(void)
{
    return this->covariateFile;
}

void FileReader::setKinshipFile(QString const dir)
{
    this->kinshipFile = dir;
}

QString FileReader::getKinshipFile(void)
{
    return this->kinshipFile;
}

/**
 * @brief FileReader::getFIDList
 *          get family ID in src file.
 * @param src
 * @param col: the No.col column is the fid in src file.
 * @return
 */
QStringList FileReader::getFIDList(QString const src, int col)
{
    QStringList fidList;
    if (src.isNull() || col < 1)
    {   // The path is not correct or the objective column is wrong.
        return fidList; // return empty list.
    }
    QFile file(src);
    QTextStream fileStream(&file);
    if (!file.open(QIODevice::ReadOnly))
    {   // Open file error.
        return fidList;
    }
    while (!fileStream.atEnd())
    {   // Read a line and split it by space(s).
        QStringList curLine = fileStream.readLine().split(QRegExp("\\s+"), QString::SkipEmptyParts);
        if (col > curLine.length())
        {   // The objective column bigger than length of current line.
            return fidList; // return empty list.
        }
        if (fidList.indexOf(curLine[col-1]) == -1)
        {   // Append to FID list if not in FID list.
            fidList.append(curLine[col-1]);
        }
    }
    return fidList;
}

/**
 * @brief transformCovariateFile
 * @param srcCovar                      FID IID 1 covar_1 covar_2 ... covar_n
 * @param desCovar                      1 covar_1 covar_2 ... covar_n
 */
bool FileReader::transformCovariateFile(QString srcCovar, QString desCovar)
{
    if (srcCovar.isNull() || desCovar.isNull())
    {
        return false;
    }

    QFile srcCovarFile(srcCovar);
    QFile desCovarFile(desCovar);

    QTextStream srcCovarFileStream(&srcCovarFile);
    QTextStream desCovarFileStream(&desCovarFile);

    if (!srcCovarFile.open(QIODevice::ReadOnly) ||
            !desCovarFile.open(QIODevice::ReadWrite))
    {   // Open file error.
        return false;
    }
    while (!srcCovarFileStream.atEnd())
    {   // Read file line by line respectively.
        QString srcCovarCurLine = srcCovarFileStream.readLine();
        // Replace "NA" to "-9"
        QStringList srcCovarCurLineList =
                srcCovarCurLine/*.replace("NA", "-9")*/.split(QRegExp("\\s+"),
                                                              QString::SkipEmptyParts);
        srcCovarCurLineList.removeFirst();
        srcCovarCurLineList.removeFirst();

        desCovarFileStream << srcCovarCurLineList.join("\t") << endl;
    }
    // Close file finally.
    srcCovarFile.close();
    desCovarFile.close();

    return true;
}

/**
 * @brief FileReader::makeAvinputAndSnpposFile
 * @param vcfFilePath           Extrac position of SNP and save to outFile.(reserve p-value) and make avinput file.
 * @param pvalFilePath          pvalFilePath  p-value file (Two column: SNP_ID P-VAL)
 * @param avinputFilePath
 * @param snpPosFilePath        snpPosFilePath   output file(SNP_ID, p-value, CHR, BP)
 * @return
 */
bool FileReader::makeAvinputAndSnpposFile(QString vcfFilePath, QString pvalFilePath,
                                          QString avinputFilePath, QString snpPosFilePath)
{
    if (vcfFilePath.isNull() || pvalFilePath.isNull() || avinputFilePath.isNull() || snpPosFilePath.isNull())
    {
        return false;
    }

    // Get the SNP which need to extract and save to snpID(QSet).
    QFile pvalFile(pvalFilePath);
    if (!pvalFile.open(QIODevice::ReadOnly))
    {
        return false;
    }
    QTextStream pvalFileStream(&pvalFile);
    QMap<QString, QString> snpIDMap;    // SNPs need to extract.
    while (!pvalFileStream.atEnd())
    {
        QStringList curLine = pvalFileStream.readLine().split(QRegExp("\\s+"), QString::SkipEmptyParts);
        snpIDMap.insert(curLine[0], curLine[0]+"\t"+curLine[1]);   // cut the SNP_ID and p-value
    }

    QFile vcfFile(vcfFilePath);
    QFile avinputFile(avinputFilePath);
    QFile snpPosFile(snpPosFilePath);
    if (!vcfFile.open(QIODevice::ReadOnly) ||
            !avinputFile.open(QIODevice::WriteOnly) ||
            !snpPosFile.open(QIODevice::WriteOnly))
    {
        return false;
    }

    // traverse map file, extract SNP.
    QTextStream vcfFileStream(&vcfFile);
    QTextStream avinputFileStream(&avinputFile);
    QTextStream snpPosFileStream(&snpPosFile);
    while (!vcfFileStream.atEnd())
    {
        QString curLine = vcfFileStream.readLine();
        if (curLine[0] == '#')
        {
            continue;
        }
        QStringList curLineList = curLine.split(QRegExp("\\s+"), QString::SkipEmptyParts);

        QString snpID = curLineList[2];
        if (snpID == '.')
        {
            snpID = (isNumber(curLineList[0]) ? "chr"+curLineList[0] : curLineList[0]) +":"+curLineList[1];
        }
        if (snpIDMap.find(snpID) != snpIDMap.end())
        {
            snpPosFileStream << snpIDMap[snpID] << "\t"
                             << (isNumber(curLineList[0]) ? "chr"+curLineList[0] : curLineList[0])
                    << "\t" << curLineList[1] << endl;
            avinputFileStream << (isNumber(curLineList[0]) ? "chr"+curLineList[0] : curLineList[0]) << "\t"
                                                                                                    << curLineList[1] << "\t" << curLineList[1] << "\t"
                                                                                                    << curLineList[3] << "\t" << curLineList[4] << endl;
        }
    }

    return true;
}

bool FileReader::isNumber(QString str)
{
    for (auto i:str)
    {
        if (i<'0' || i > '9')
        {
            return false;
        }
    }
    return true;
}

/**
 * @brief FileReader::completeTfamFromPheno
 *          Modify tfam, ensure the FID and IID same as phenotype file.
 * @param phenoFilePath:    FID IID PHE
 * @param tfamFilePath: FID IID else
 * @return
 */
bool FileReader::completeTfamFromPheno(QString phenoFilePath, QString tfamFilePath)
{
    if (phenoFilePath.isNull() || tfamFilePath.isNull())
    {
        return false;
    }

    QFile phenoFile(phenoFilePath);
    QFile tfamFile(tfamFilePath);

    if (!phenoFile.open(QIODevice::ReadOnly) ||
            !tfamFile.open(QIODevice::ReadOnly))
    {
        return false;
    }

    QString tmpTfamFilePath = tfamFilePath+".tmp";
    QFile tmpTfamFile(tmpTfamFilePath);
    if (!tmpTfamFile.open(QIODevice::WriteOnly))
    {
        return false;
    }

    QTextStream phenoFileStream(&phenoFile);
    QTextStream tfamFileStream(&tfamFile);
    QTextStream tmpTfamFileStream(&tmpTfamFile);

    QMap<QString, QString> fidMap;
    QStringList fidInfo = phenoFileStream.readAll().split("\n");
    for (auto line : fidInfo)
    {
        QStringList curLineList = line.split(QRegExp("\\s+"));
        if (curLineList.length() >= 2)
        {
            fidMap[curLineList[1]] = curLineList[0];
        }
    }

    while (!tfamFileStream.atEnd())
    {
        QStringList tfamCurLineList = tfamFileStream.readLine().split(QRegExp("\\s+"), QString::SkipEmptyParts);

        if (fidMap.find(tfamCurLineList[1]) != fidMap.end())
        {   // IID don't match
            tfamCurLineList[0] = fidMap[tfamCurLineList[1]];
        }


        tmpTfamFileStream << tfamCurLineList.join("\t") << endl;
    }

    //    phenoFile.close();
    //    tfamFile.close();
    //    tmpTfamFile.close();

    tfamFile.remove();
    tmpTfamFile.rename(tfamFilePath);

    return true;
}


bool FileReader::completePedFromPheno(QString phenoFilePath, QString pedFilePath)
{
    if (phenoFilePath.isNull() || pedFilePath.isNull())
    {
        return false;
    }

    QFile phenoFile(phenoFilePath);
    QFile pedFile(pedFilePath);

    if (!phenoFile.open(QIODevice::ReadOnly) ||
            !pedFile.open(QIODevice::ReadOnly))
    {
        return false;
    }

    QString tmpPedFilePath = pedFilePath+".tmp";
    QFile tmpPedFile(tmpPedFilePath);
    if (!tmpPedFile.open(QIODevice::WriteOnly))
    {
        return false;
    }

    QTextStream phenoFileStream(&phenoFile);
    QTextStream pedFileStream(&pedFile);
    QTextStream tmpPedFileStream(&tmpPedFile);

    QMap<QString, QString> fidMap;
    QStringList fidInfo = phenoFileStream.readAll().split("\n");
    for (auto line : fidInfo)
    {
        QStringList curLineList = line.split(QRegExp("\\s+"));
        if (curLineList.length() >= 2)
        {
            fidMap[curLineList[1]] = curLineList[0];
        }
    }

    while (!pedFileStream.atEnd())
    {
        QStringList pedCurLineList = pedFileStream.readLine().split(QRegExp("\\s+"), QString::SkipEmptyParts);

        if (fidMap.find(pedCurLineList[1]) != fidMap.end())
        {   // IID don't match
            pedCurLineList[0] = fidMap[pedCurLineList[1]];
        }

        tmpPedFileStream << pedCurLineList.join("\t") << endl;
    }

    //    phenoFile.close();
    //    tfamFile.close();
    //    tmpTfamFile.close();

    pedFile.remove();
    tmpPedFile.rename(pedFilePath);

    return true;
}

/**
 * @brief FileReader::completeFIDofTfam
 * @param fidFilePath: FID IID (PID MID SEX)
 * @param tfamFilePath
 * @return
 */
bool FileReader::completeFIDofTfam(QString fidFilePath, QString tfamFilePath)
{
    if (fidFilePath.isNull() || tfamFilePath.isNull())
    {
        return false;
    }

    QFile fidFile(fidFilePath);
    QFile tfamFile(tfamFilePath);

    if (!fidFile.open(QIODevice::ReadOnly) ||
            !tfamFile.open(QIODevice::ReadOnly))
    {
        return false;
    }

    QString tmpTfamFilePath = tfamFilePath+".tmp";
    QFile tmpTfamFile(tmpTfamFilePath);
    if (!tmpTfamFile.open(QIODevice::WriteOnly))
    {
        return false;
    }

    QTextStream fidFileStream(&fidFile);
    QTextStream tfamFileStream(&tfamFile);
    QTextStream tmpTfamFileStream(&tmpTfamFile);

    QMap<QString, QStringList> fidMap;
    QStringList fidInfo = fidFileStream.readAll().split("\n");
    for (auto line : fidInfo)
    {
        QStringList curLineList = line.split(QRegExp("\\s+"));
        if (curLineList.length() >= 2 && curLineList.length() < 5)
        {
            fidMap[curLineList[1]] = QStringList() << curLineList[0];
        }
        else if (curLineList.length() >= 5)
        {
            QStringList tmpList;
            for (int i = 0; i < 5; ++i)
            {
                tmpList.append(curLineList[i]);
            }
            fidMap[curLineList[1]] = tmpList;
        }
        else
        {
            continue;
        }
    }

    while (!tfamFileStream.atEnd())
    {
        QStringList tfamCurLineList = tfamFileStream.readLine().split(QRegExp("\\s+"), QString::SkipEmptyParts);

        if (fidMap.find(tfamCurLineList[1]) != fidMap.end())
        {   // IID don't match
            tfamCurLineList[0] = fidMap[tfamCurLineList[1]][0];
            //            tfamCurLineList[0] = fidMap[tfamCurLineList[1]];
            if (fidMap[tfamCurLineList[1]].length() == 5)
            {
                tfamCurLineList[2] = fidMap[tfamCurLineList[1]][2];
                tfamCurLineList[3] = fidMap[tfamCurLineList[1]][3];
                tfamCurLineList[4] = fidMap[tfamCurLineList[1]][4];
            }
        }


        tmpTfamFileStream << tfamCurLineList.join("\t") << endl;
    }

    //    phenoFile.close();
    //    tfamFile.close();
    //    tmpTfamFile.close();

    tfamFile.remove();
    tmpTfamFile.rename(tfamFilePath);

    return true;
}

bool FileReader::completeFIDofPed(QString fidFilePath, QString pedFilePath)
{
    if (fidFilePath.isNull() || pedFilePath.isNull())
    {
        return false;
    }

    QFile fidFile(fidFilePath);
    QFile pedFile(pedFilePath);

    if (!fidFile.open(QIODevice::ReadOnly) ||
            !pedFile.open(QIODevice::ReadOnly))
    {
        return false;
    }

    QString tmpPedFilePath = pedFilePath+".tmp";
    QFile tmpPedFile(tmpPedFilePath);
    if (!tmpPedFile.open(QIODevice::WriteOnly))
    {
        return false;
    }

    QTextStream fidFileStream(&fidFile);
    QTextStream pedFileStream(&pedFile);
    QTextStream tmpPedFileStream(&tmpPedFile);

    QMap<QString, QStringList> fidMap;
    QStringList fidInfo = fidFileStream.readAll().split("\n");
    for (auto line : fidInfo)
    {
        QStringList curLineList = line.split(QRegExp("\\s+"));
        if (curLineList.length() >= 2 && curLineList.length() < 5)
        {
            fidMap[curLineList[1]] = QStringList() << curLineList[0];
        }
        else if (curLineList.length() >= 5)
        {
            QStringList tmpList;
            for (int i = 0; i < 5; ++i)
            {
                tmpList.append(curLineList[i]);
            }
            fidMap[curLineList[1]] = tmpList;
        }
        else
        {
            continue;
        }
    }

    while (!pedFileStream.atEnd())
    {
        QStringList pedCurLineList = pedFileStream.readLine().split(QRegExp("\\s+"), QString::SkipEmptyParts);

        if (fidMap.find(pedCurLineList[1]) != fidMap.end())
        {   // IID don't match
            pedCurLineList[0] = fidMap[pedCurLineList[1]][0];
            //            tfamCurLineList[0] = fidMap[tfamCurLineList[1]];
            if (fidMap[pedCurLineList[1]].length() == 5)
            {
                pedCurLineList[2] = fidMap[pedCurLineList[1]][2];
                pedCurLineList[3] = fidMap[pedCurLineList[1]][3];
                pedCurLineList[4] = fidMap[pedCurLineList[1]][4];
            }
        }


        tmpPedFileStream << pedCurLineList.join("\t") << endl;
    }

    pedFile.remove();
    tmpPedFile.rename(pedFilePath);

    return true;
}

/**
 * @brief FileReader::filterSNPByChrFromMap
 * @param mapFilePath:  CHR SNP_ID Morgan BP(Allow file the first column is CHR)
 * @param chrListFilePath
 * @param keepFilePath
 * @return
 */
bool FileReader::filterSNPByChr(QString filePath, QString chrListFilePath, QString snpListFilePath)
{
    if (filePath.isNull() || chrListFilePath.isNull() || snpListFilePath.isNull())
    {
        return false;
    }

    QFile file(filePath);
    QFile chrListFile(chrListFilePath);
    QFile snpListFile(snpListFilePath);

    //    bool a  = chrListFile.open(QIODevice::ReadOnly);
    //    bool b = mapFile.open(QIODevice::ReadOnly);
    //    bool c = snpListFile.open(QIODevice::WriteOnly);
    if (!chrListFile.open(QIODevice::ReadOnly) ||
            !file.open(QIODevice::ReadOnly) ||
            !snpListFile.open(QIODevice::ReadWrite))
    {
        return false;
    }

    QFileInfo fileInfo(file);
    QString suffix = fileInfo.suffix();

    int snpIndex = -1;

    if (suffix == "vcf")
    {
        snpIndex = 2;
    }
    else if (suffix == "map")
    {
        snpIndex = 1;
    }
    else if (suffix == "bim")
    {
        snpIndex = 1;
    }
    else if(suffix == "tped")
    {
        snpIndex = 1;
    }
    else
    {
        return false;
    }

    QTextStream fileStream(&file);
    QTextStream snpListFileStream(&snpListFile);
    QTextStream chrListFileStream(&chrListFile);
    QStringList chrList = chrListFileStream.readAll().split("\n", QString::SkipEmptyParts);
    chrList.removeDuplicates();

    while (!fileStream.atEnd())
    {
        QString curLine = fileStream.readLine();
        QStringList curLineList = curLine.split(QRegExp("\\s+"), QString::SkipEmptyParts);
        if (chrList.indexOf(curLineList[0]) != -1)
        {
            snpListFileStream << curLineList[snpIndex] << endl;
        }
    }

    chrListFile.close();
    file.close();
    snpListFile.close();
    return true;
}

/**
 * @brief FileReader::modifyChr
 *      Hicam0 --> 0; Avoid error of gcta.(Modify original file)
 * @param file
 *      The first column is Chr.
 * @return
 */
bool FileReader::modifyChr(QString filePath)
{
    if (filePath.isNull())
    {
        return false;
    }
    QString tmpFilePath = filePath+".tmp";
    QFile file(filePath);
    QFile tmpFile(tmpFilePath);
    if (!file.open(QIODevice::ReadOnly) || !tmpFile.open(QIODevice::WriteOnly))
    {
        return false;
    }

    QTextStream srcFileStream(&file);
    QTextStream tmpFileStream(&tmpFile);

    int curLineNum = 0;
    while (!srcFileStream.atEnd())
    {
        QString curLine = srcFileStream.readLine();
        QStringList curLineList = curLine.split("\t", QString::SkipEmptyParts);
        curLineNum ++;
        if (curLineList[0].toLower().indexOf(QRegExp("^(chr)?\\d+")) != -1)
        {
            tmpFile.remove();
            qDebug() << "No matching: " << curLineNum << "\t" << curLineList[0];
            return true;
        }
        QRegExp regExp(".*([0-9]+)");
        int pos = regExp.indexIn(curLineList[0]);
        if (pos < 0)
        {
            qDebug() << "Pos less than 0.";
            return false;
        }
        QStringList list = regExp.capturedTexts();
        qDebug() << curLineNum << "\t" << curLineList.join("\t");
        curLineList[0] = regExp.cap(1);
        tmpFileStream << curLineList.join("\t") << endl;
    }

    file.remove();
    tmpFile.rename(filePath);

    return true;
}

bool FileReader::modifyChr(QString srcFilePath, QString dstFilePath)
{
    if (srcFilePath.isNull() || dstFilePath.isNull())
    {
        return false;
    }

    QFile srcFile(srcFilePath);
    QFile dstFile(dstFilePath);
    if (!srcFile.open(QIODevice::ReadOnly) || !dstFile.open(QIODevice::WriteOnly))
    {
        return false;
    }

    QTextStream srcFileStream(&srcFile);
    QTextStream dstFileStream(&dstFile);

    while (!srcFileStream.atEnd())
    {
        QStringList curLineList = srcFileStream.readLine().split("\t", QString::SkipEmptyParts);

        if (curLineList[0].toLower().indexOf(QRegExp("^(chr)?\\d+")) != -1)
        {
            return true;
        }
        QRegExp regExp(".*([0-9]+)");
        int pos = regExp.indexIn(curLineList[0]);
        if (pos < 0)
        {
            qDebug() << "Pos less than 0.";
            return false;
        }
        QStringList list = regExp.capturedTexts();
//        QString strA = regExp.cap(1);
        curLineList[0] = regExp.cap(1);
        dstFileStream << curLineList.join("\t") << endl;
    }

    return true;
}

/**
 * @brief FileReader::completeSnpID
 * @param filePath
 *          vcf:    CHR Pos SNP ...
 *          map:    CHR SNP Morgan BP
 *          bim:    CHR SNP Morgan BP ...
 *          tped:   CHR SNP Morgan BP ...
 * @return
 */
bool FileReader::completeSnpID(QString filePath)
{
    if (filePath.isNull())
    {
        return false;
    }

    QString tmpFilePath = filePath+".tmp";
    QFile file(filePath);
    QFile tmpFile(tmpFilePath);

    if (!file.open(QIODevice::ReadOnly) || !tmpFile.open(QIODevice::WriteOnly))
    {
        return false;
    }

    QFileInfo fileInfo(file);
    QString suffix = fileInfo.suffix();

    int chrIndex = -1;
    int bpIndex = -1;
    int snpIndex = -1;

    if (suffix == "vcf")
    {
        chrIndex = 0;
        bpIndex = 1;
        snpIndex = 2;
    }
    else if (suffix == "map")
    {
        chrIndex = 0;
        snpIndex = 1;
        bpIndex = 4;
    }
    else if (suffix == "bim")
    {
        chrIndex = 0;
        snpIndex = 1;
        bpIndex = 4;
    }
    else if(suffix == "tped")
    {
        chrIndex = 0;
        snpIndex = 1;
        bpIndex = 4;
    }
    else
    {
        return false;
    }

    QTextStream fileStream(&file);
    QTextStream tmpFileStream(&tmpFile);

    while (!fileStream.atEnd())
    {
        QString curLine = fileStream.readLine();
        if (curLine[0] == "#")
        {
            tmpFileStream << curLine << endl;
            continue;
        }
        QStringList curLineList = curLine.split("\t", QString::SkipEmptyParts);

        if(curLineList[snpIndex] != '.')
        {   // Dose not need to be completed.
            tmpFile.remove();
            return true;
        }

        QString debugSnp = curLineList[snpIndex];

        qDebug() << "Before: " << debugSnp;

        curLineList[snpIndex] = curLineList[chrIndex] + ":" + curLineList[bpIndex];
        if (isNumber(curLineList[chrIndex]))
        {
            curLineList[snpIndex] = "chr" + curLineList[snpIndex];
        }

        qDebug() << "After: " << curLineList[snpIndex];
        tmpFileStream << curLineList.join("\t") << endl;
    }

    file.remove();
    tmpFile.rename(filePath);

    return true;
}

bool FileReader::isVcfFile(QString file) // Just consider filename.
{
    if (file.isNull() || file.isEmpty())
    {
        return false;
    }

    QFileInfo fileInfo = QFileInfo(file);
    QStringList fileNameList = fileInfo.fileName().split(".");         // demo.vcf.gz

    for (QString item : fileNameList)
    {
        if (item == "vcf")
        {
            return true;
        }
    }

    return false;
}
