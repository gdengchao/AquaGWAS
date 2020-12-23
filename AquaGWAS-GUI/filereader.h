#ifndef FILEREADER_H
#define FILEREADER_H

#include <QMap>
#include <QString>
#include <QDebug>
#include <QFileInfo>
#include <QTextStream>
#include <QApplication>

class FileReader
{
public:
    FileReader();
    void setPhenotypeFile(QString const dir);
    QString getPhenotypeFile(void);
    void setGenotypeFile(QString const dir);
    QString getGenotypeFile(void);
    void setMapFile(QString dir);
    QString getMapFile(void);
    void setCovariateFile(QString const dir);
    QString getCovariateFile(void);
    void setKinshipFile(QString const dir);
    QString getKinshipFile(void);

    QStringList getFIDList(QString const src, int col);
    bool transformCovariateFile(QString srcCovar, QString desCovar);
    bool makeAvinputAndSnpposFile(QString vcfFilePath, QString pvalFilePath,
                                  QString avinputFilePath, QString snpPosFilePath);
    bool completeTfamFromPheno(QString phenoFilePath, QString tfamFilePath);
    bool completeFIDofTfam(QString fidFilePath, QString tfamFilePath);
    bool completeFIDofPed(QString fidFilePath, QString pedFilePath);
    bool isNumber(QString str);
    bool filterSNPByChrFromMap(QString mapFilePath, QString chrListFilePath, QString snpListFilePath);
private:
    QString phenotypeFile;
    QString genotypeFile;
    QString mapFile;
    QString covariateFile;
    QString kinshipFile;
};

#endif // FILEREADER_H
