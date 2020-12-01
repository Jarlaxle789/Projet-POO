#include "CL_map.h"

namespace NS_Composants {
    CL_map::CL_map()
    {
        this->id_personne = -1;
        this->nom = "RIEN";
        this->prenom = "RIEN";
        this->superieur = "RIEN";
        adresse = gcnew CL_map_Adresse;
        date = gcnew CL_map_Date;
    }

    String^ CL_map::SELECT(void)
    {
        return "SELECT Id_Personne, Nom, Prenom, Superieur_Hierarchique " + "FROM Personnel;" 
            + "SELECT Id_Adresse, Adresse, Ville, CP " + "FROM Adresse;"
            + "SELECT Id_Date, Jour, Mois, Annee " + "FROM Date;";
    }

    String^ CL_map::INSERT(void)
    {
        return "INSERT INTO Personnel " +
            "(Nom, Prenom, Superieur_Hierarchique) " + "VALUES('" + this->getNom() + "', '" + this->getPrenom() + this->getSuperieur() + "');SELECT @@IDENTITY;"
            "INSERT INTO Adresse " +
            "(Adresse, Ville, CP) " + "VALUES('" + this->adresse->getAdresse() + "', '" + this->adresse->getVille() + "', '" + this->adresse->getCP() + "');SELECT @@IDENTITY;"
            "INSERT INTO Date " +
            "(Jour, Mois, Annee) " + "VALUES('" + this->date->getJour() + "', '" + this->date->getMois() + "', '" + this->date->getAnnee() + "');SELECT @@IDENTITY;";
    }

    String^ CL_map::UPDATE(void)
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

    String^ CL_map::DELETE(void)
    {
        return "DELETE FROM Personnel " +
            "WHERE(Id_Personne = " + this->PgetId() + ");";
    }

    void CL_map::PsetID(int id_personne)
    {
        if (id_personne > 0)
        {
            this->id_personne = id_personne;
        }
    }

    void CL_map::setPrenom(String^ prenom)
    {
        if (prenom != "")
        {
            this->prenom = prenom;
        }
    }

    void CL_map::setNom(String^ nom)
    {
        if (nom != "")
        {
            this->nom = nom;
        }
    }

    void CL_map::setSuperieur(String^ superieur)
    {
        if (superieur != "")
        {
            this->superieur = superieur;
        }
    }
   
    int CL_map::PgetId(void)
    {
        return this->id_personne;
    }

    String^ CL_map::getNom(void)
    {
        return this->nom;
    }

    String^ CL_map::getPrenom(void)
    {
        return this->prenom;
    }

    String^ CL_map::getSuperieur(void)
    {
        return this->superieur;
    }
}