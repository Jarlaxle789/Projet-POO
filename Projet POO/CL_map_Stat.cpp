#include "CL_map_Stat.h"

namespace NS_Composants {
    CL_map_Stat::CL_map_Stat()
    {
        this->id_stat = -1;
        this->panier = 0;
        this->CA = 0;
        this->montant_total = 0;
        this->VComStock = 0;
        this->VAchatStock = 0;
    }

    int CL_map_Stat::CalculPanier(int)
    {
        return 0;
    }

    int CL_map_Stat::CalculCA(int)
    {
        return 0;
    }

    int CL_map_Stat::CalculMT(int)
    {
        return 0;
    }

    int CL_map_Stat::CalculVComStock(int)
    {
        return 0;
    }

    int CL_map_Stat::CalculVAchatStock(int)
    {
        return 0;
    }

    DataSet^ CL_map_Stat::Afficher()
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }

    String^ CL_map_Stat::ArtPlusVendus()
    {
        return "SELECT Nom, Référence, Désignation FROM Article WHERE Quantité%10;";
    }

    String^ CL_map_Stat::ArtMoinsVendus()
    {
        return "SELECT Nom, Référence, Désignation FROM Article WHERE Quantité%10;";
    }

    String^ CL_map_Stat::SELECT(void)
    {
        return "SELECT Id_Personne, Nom, Prenom, Superieur_Hierarchique " + "FROM Personnel;"
            + "SELECT Id_Adresse, Adresse, Ville, CP " + "FROM Adresse;"
            + "SELECT Id_Date, Jour, Mois, Annee " + "FROM Date;";
    }

    String^ CL_map_Stat::INSERT(void)
    {
        return "INSERT INTO Personnel " +
            "(Nom, Prenom, Superieur_Hierarchique) " + "VALUES('" + this->getNom() + "', '" + this->getPrenom() + this->getSuperieur() + "');SELECT @@IDENTITY;"
            "INSERT INTO Adresse " +
            "(Adresse, Ville, CP) " + "VALUES('" + this->adresse->getAdresse() + "', '" + this->adresse->getVille() + "', '" + this->adresse->getCP() + "');SELECT @@IDENTITY;"
            "INSERT INTO Date " +
            "(Jour, Mois, Annee) " + "VALUES('" + this->date->getJour() + "', '" + this->date->getMois() + "', '" + this->date->getAnnee() + "');SELECT @@IDENTITY;";
    }

    String^ CL_map_Stat::UPDATE(void)
    {
        return "UPDATE Personnel " +
            "SET Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "', Superieur_Hierarchique = '" + this->getSuperieur() + "' " +
            "WHERE(Id_Personne = " + this->PgetId() + ");"
            + "UPDATE Adresse " +
            "SET Adresse = '" + this->adresse->getAdresse() + "', Ville = '" + this->adresse->getVille() + "', CP = '" + this->adresse->getCP() + "' " +
            "WHERE(Id_Personne = " + this->PgetId() + ");"
            + "UPDATE Date "
            + "SET Jour = '" + this->date->getJour() + "', Mois = '" + this->date->getMois() + "', Annee = '" + this->date->getAnnee() + "' " +
            "WHERE(Id_Personne = " + this->PgetId() + ");";
    }

    String^ CL_map_Stat::DELETE(void)
    {
        return "DELETE FROM Personnel " +
            "WHERE(Id_Personne = " + this->PgetId() + ");";
    }

    void CL_map_Stat::PsetID(int id_stat)
    {
        if (id_stat > 0)
        {
            this->id_stat = id_stat;
        }
    }

    int CL_map_Stat::PgetId(void)
    {
        return this->id_stat;
    }
}