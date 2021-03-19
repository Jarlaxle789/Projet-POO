#pragma once
#include "CL_CAD.h"
#include "CL_map_Client.h"
#include "CL_map_Stat.h"
#include "CL_map_article.h"
#include "CL_map_commande.h"

using namespace System;
using namespace System::Xml;
using namespace System::Data;
using namespace System::Data::SqlClient; //pour SQL Server

namespace NS_Svc {
	ref class CL_svc_Stat
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_Client^ client;
		NS_Composants::CL_map_Stat^ stat;
		NS_Composants::CL_map_commande^ commande;
		NS_Composants::CL_map_article^ article;
		DataSet^ ds;

	public:
		CL_svc_Stat();
		DataSet^ afficher(String^);
		int afficherplus(String^);
	};
}
