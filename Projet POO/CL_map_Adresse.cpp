#include "CL_map_Adresse.h"

namespace NS_Composants
{
	CL_map_Adresse::CL_map_Adresse()
	{
        this->id_adresse = -1;
        this->adresse = "RIEN";
        this->ville = "RIEN";
        this->cp = "RIEN";
    }

    void CL_map_Adresse::AsetID(int id_adresse)
    {
        if (id_adresse > 0)
        {
            this->id_adresse = id_adresse;
        }
    }

    int CL_map_Adresse::AgetId(void)
    {
        return this->id_adresse;
    }

    void CL_map_Adresse::setAdresse(String^ adresse)
    {
        if (adresse != "")
        {
            this->adresse = adresse;
        }
    }
    void CL_map_Adresse::setVille(String^ ville)
    {
        if (ville != "")
        {
            this->ville = ville;
        }
    }
    void CL_map_Adresse::setCP(String^ cp)
    {
        if (cp != "")
        {
            this->cp = cp;
        }
    }

    String^ CL_map_Adresse::getAdresse(void)
    {
        return this->adresse;
    }
    String^ CL_map_Adresse::getVille(void)
    {
        return this->ville;
    }
    String^ CL_map_Adresse::getCP(void)
    {
        return this->cp;
    }
}