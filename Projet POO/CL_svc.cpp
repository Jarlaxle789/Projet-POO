#include "CL_svc.h"

namespace NS_Svc
{
    CL_svc::CL_svc(void)
    {
        this->cad = gcnew NS_Composants::CL_CAD();
        this->personne = gcnew NS_Composants::CL_map();
        this->client = gcnew NS_Composants::CL_map_Client();
        this->ds = gcnew Data::DataSet();
    }
    DataSet^ CL_svc::afficher(String^ dataTableName)
    {
        this->ds->Clear();
        this->ds = this->cad->getRows(this->personne->SELECT(), dataTableName);
        return this->ds;
    }
    DataSet^ CL_svc::afficherC(String^ dataTableName)
    {
        this->ds->Clear();
        this->ds = this->cad->getRows(this->client->SELECT(), dataTableName);
        return this->ds;
    }
    int CL_svc::ajouter(String^ nom, String^ prenom, String^ superieur, String^ adresse, String^ ville, String^ cp, int jour, int mois, int an)
    {
        int id_personne;
        this->personne->setNom(nom);
        this->personne->setPrenom(prenom);
        this->personne->setSuperieur(superieur);
        this->personne->adresse->setAdresse(adresse);
        this->personne->adresse->setVille(ville);
        this->personne->adresse->setCP(cp);
        this->personne->date->setJour(jour);
        this->personne->date->setMois(mois);
        this->personne->date->setAnnee(an);
        id_personne = this->cad->actionRowsID(this->personne->INSERT());
        return id_personne;
    }
    int CL_svc::ajouterA(String^ nom, String^ prenom, String^ adresse, String^ ville, String^ cp, int jour, int mois, int an, int jourA, int moisA, int anA)
    {
        int num_client;
        this->client->setNom(nom);
        this->client->setPrenom(prenom);
        this->client->adresse1->setAdresse(adresse);
        this->client->adresse1->setVille(ville);
        this->client->adresse1->setCP(cp);
        this->client->date1->setJour(jour);
        this->client->date1->setMois(mois);
        this->client->date1->setAnnee(an);
        this->client->date1->setJourA(jourA);
        this->client->date1->setMoisA(moisA);
        this->client->date1->setAnneeA(anA);
        num_client = this->cad->actionRowsID(this->client->INSERT());
        return num_client;
    }
    void CL_svc::modifier(int id_personne, String^ nom, String^ prenom, String^ superieur, String^ adresse, String^ ville, String^ cp, int jour, int mois, int an)
    {
        this->personne->PsetID(id_personne);
        this->personne->setNom(nom);
        this->personne->setPrenom(prenom);
        this->personne->setSuperieur(superieur);
        this->personne->adresse->setAdresse(adresse);
        this->personne->adresse->setVille(ville);
        this->personne->adresse->setCP(cp);
        this->personne->date->setJour(jour);
        this->personne->date->setMois(mois);
        this->personne->date->setAnnee(an);
        this->cad->actionRows(this->personne->UPDATE());
    }
    void CL_svc::modifierA(int id_personne, String^ nom, String^ prenom, String^ adresse, String^ ville, String^ cp, int jour, int mois, int an, int jourA, int moisA, int anA)
    {
        this->client->PsetID(id_personne);
        this->client->setNom(nom);
        this->client->setPrenom(prenom);
        this->client->adresse1->setAdresse(adresse);
        this->client->adresse1->setVille(ville);
        this->client->adresse1->setCP(cp);
        this->client->date1->setJour(jour);
        this->client->date1->setMois(mois);
        this->client->date1->setAnnee(an);
        this->client->date1->setJourA(jourA);
        this->client->date1->setMoisA(moisA);
        this->client->date1->setAnneeA(anA);
        this->cad->actionRows(this->client->UPDATE());
    }
    void CL_svc::supprimer(int id_personne)
    {
        this->personne->PsetID(id_personne);
        this->cad->actionRows(this->personne->DELETE());
    }
    void CL_svc::supprimerA(int id_personne)
    {
        this->client->PsetID(id_personne);
        this->cad->actionRows(this->client->DELETE());
    }
}