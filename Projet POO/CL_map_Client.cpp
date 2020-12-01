#include "CL_map_Client.h"

namespace NS_Composants {
    CL_map_Client::CL_map_Client()
    {
        this->num_client = -1;
        this->nom = "RIEN";
        this->prenom = "RIEN";
        adresse1 = gcnew CL_map_Adresse;
        date1 = gcnew CL_map_Date;
    }

    String^ CL_map_Client::SELECT(void)
    {
        return "SELECT Num_Client, Nom, Prenom, " + "FROM Client;"
            + "SELECT Id_Adresse, Adresse, Ville, CP " + "FROM Adresse;"
            + "SELECT Id_Date, Jour, Mois, Annee, JourA, MoisA, AnneeA " + "FROM Date;";
    }

    String^ CL_map_Client::INSERT(void)
    {
        return "INSERT INTO Client " +
            "(Nom, Prenom) " + "VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');SELECT @@IDENTITY;"
            "INSERT INTO Adresse " +
            "(Adresse, Ville, CP) " + "VALUES('" + this->adresse1->getAdresse() + "', '" + this->adresse1->getVille() + "', '" + this->adresse1->getCP() + "');SELECT @@IDENTITY;"
            "INSERT INTO Date " +
            "(Jour, Mois, Annee, JourA, MoisA, AnneeA) " 
            + "VALUES('" + this->date1->getJour() + "', '" + this->date1->getMois() + "', '" + this->date1->getAnnee() + this->date1->getJourA() + "', '" + this->date1->getMoisA() + "', '" + this->date1->getAnneeA() + "');SELECT @@IDENTITY;";
    }

    String^ CL_map_Client::UPDATE(void)
    {
        return "UPDATE Client " +
            "SET Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "' " +
            "WHERE(Num_Client = " + this->PgetId() + ");"
            + "UPDATE Adresse " +
            "SET Adresse = '" + this->adresse1->getAdresse() + "', Ville = '" + this->adresse1->getVille() + "', CP = '" + this->adresse1->getCP() + "' " +
            "WHERE(Num_Client = " + this->PgetId() + ");"
            + "UPDATE Date "
            + "SET Jour = '" + this->date1->getJour() + "', Mois = '" + this->date1->getMois() + "', Annee = '" + this->date1->getAnnee() + "' " 
            +"SET JourA = '" + this->date1->getJourA() + "', MoisA = '" + this->date1->getMoisA() + "', Annee = '" + this->date1->getAnneeA() + "' " +
            "WHERE(Num_Client = " + this->PgetId() + ");";
    }

    String^ CL_map_Client::DELETE(void)
    {
        return "DELETE FROM Client " +
            "WHERE(Num_Client = " + this->PgetId() + ");";
    }

    void CL_map_Client::PsetID(int id_personne)
    {
        if (id_personne > 0)
        {
            this->num_client = id_personne;
        }
    }

    void CL_map_Client::setPrenom(String^ prenom)
    {
        if (prenom != "")
        {
            this->prenom = prenom;
        }
    }

    void CL_map_Client::setNom(String^ nom)
    {
        if (nom != "")
        {
            this->nom = nom;
        }
    }

    int CL_map_Client::PgetId(void)
    {
        return this->num_client;
    }

    String^ CL_map_Client::getNom(void)
    {
        return this->nom;
    }

    String^ CL_map_Client::getPrenom(void)
    {
        return this->prenom;
    }
}