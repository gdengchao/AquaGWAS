#include "emmax.h"

Emmax::Emmax()
{
    this->model << "EMMA";
    this->paramlist.clear();
}

/**
 * @brief Emmax::makeKinship
 *          make kinship file.
 * @param genotype  genotype file path.
 * @param moreParam parameters read from EmmaxParamWidget.
 * @return
 */
bool Emmax:: makeKinship(QString genotype, QString kinmat)
{
    if (genotype.isNull())
    {
        return false;
    }

    // BN:  emmax-kin -v -h -d 10 222_filter1_rec12
    // IBS: emmax-kin -v -h -s -d 10 222_filter1_rec12
    this->paramlist.clear();
    this->paramlist.append("-v");
    this->paramlist.append("-h");
    this->paramlist.append("-d");
    this->paramlist.append("10");

    if (kinmat == "IBS")
    {
        this->paramlist.append("-s");
    }

    this->paramlist.append(genotype);

    return true;
}

/**
 * @brief Emmax::runGWAS
 *          set practical GWAS parameters of emmax.
 * @param genotype          the prefix(whole path) of tped/fam file.
 * @param phenotype         the path of phenotype file.
 * @param covariate         the path of covariate file.
 * @param kinship           the path of kinship file.
 * @param out               the prefix(whole path) of out file.
 * @param moreParam         parameters read from EmmaxParamWidget.
 * @return
 */
bool Emmax::runGWAS(QString genotype, QString phenotype, QString covariate, QString kinship,
                    QString out, QString kinmat)
{
    if (genotype.isNull() || phenotype.isNull())
    {
        if (phenotype.isNull())
        {
            return false;
        }
        if (genotype.isNull())
        {
            return false;
        }
        return false;
    }

    if (kinmat.isEmpty())
    {

    }

    // emmax -v -d 10 -t 222_filter1_rec12 -p phe1_fall_time -k 222_filter1_rec12.hBN.kinf -o 222_filter1_phe1_BN
    this->paramlist.clear();            // Clear paramlist before set parameter.
    this->paramlist.append("-v");
    this->paramlist.append("-d");
    this->paramlist.append("10");
    this->paramlist.append("-t");
    this->paramlist.append(genotype);
    this->paramlist.append("-p");
    this->paramlist.append(phenotype);

    if (!covariate.isNull())
    {
        this->paramlist.append("-c");
        this->paramlist.append(covariate);
    }
    if (!kinship.isNull())
    {   //
        this->paramlist.append("-k");
        this->paramlist.append(kinship);
    }

    this->paramlist.append("-o");
    this->paramlist.append(out);

    return true;
}

