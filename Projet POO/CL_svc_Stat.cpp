#include "CL_svc_Stat.h"

NS_Svc::CL_svc_Stat::CL_svc_Stat()
{
    this->cad = gcnew NS_Composants::CL_CAD();
    this->stat = gcnew NS_Composants::CL_map_Stat();
    this->client = gcnew NS_Composants::CL_map_Client();
    this->commande = gcnew NS_Composants::CL_map_commande();
    this->article = gcnew NS_Composants::CL_map_article();
    this->ds = gcnew Data::DataSet();
}

DataSet^ NS_Svc::CL_svc_Stat::afficher(String^ dataTableName)
{
    this->ds->Clear();
    this->ds = this->cad->getRows(this->stat->SELECT(), dataTableName);
    return this->ds;
}

int NS_Svc::CL_svc_Stat::afficherplus(String^ dataTableName)
{
    this->ds->Clear();
    this->ds = this->cad->getRows(this->stat->SELECT(), dataTableName);
    return this->ds;
}
