#include "CL_map_Date.h"

namespace NS_Composants
{
    NS_Composants::CL_map_Date::CL_map_Date()
    {
        this->id_date = -1;
        this->jour = 0;
        this->mois = 0;
        this->an = 0;
        this->jourA = 0;
        this->moisA = 0;
        this->anA = 0;
    }

    void CL_map_Date::DsetID(int id_date)
    {
        if (id_date > 0)
        {
            this->id_date = id_date;
        }
    }

    int CL_map_Date::DgetId(void)
    {
        return this->id_date;
    }

    void CL_map_Date::setJour(int jour)
    {
        if (jour >= 0 && jour <= 31)
        {
            this->jour = jour;
        }
    }
    void CL_map_Date::setMois(int mois)
    {
        if (mois >= 0 && mois <= 12)
        {
            this->mois = mois;
        }
    }
    void CL_map_Date::setAnnee(int an)
    {
        if (an >= 1900)
        {
            this->an = an;
        }
    }

    void CL_map_Date::setJourA(int jour)
    {
        if (jour >= 0 && jour <= 31)
        {
            this->jourA = jour;
        }
    }

    void CL_map_Date::setMoisA(int mois)
    {
        if (mois >= 0 && mois <= 12)
        {
            this->moisA = mois;
        }
    }

    void CL_map_Date::setAnneeA(int an)
    {
        if (an >= 1900)
        {
            this->anA = an;
        }
    }

    int CL_map_Date::getJour(void)
    {
        return this->jour;
    }
    int CL_map_Date::getMois(void)
    {
        return this->mois;
    }
    int CL_map_Date::getAnnee(void)
    {
        return this->an;
    }
    int CL_map_Date::getJourA(void)
    {
        return this->jourA;
    }
    int CL_map_Date::getMoisA(void)
    {
        return this->moisA;
    }
    int CL_map_Date::getAnneeA(void)
    {
        return this->anA;
    }
}