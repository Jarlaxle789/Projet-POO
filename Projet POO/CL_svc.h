#pragma once
#include "CL_CAD.h"
#include "CL_map.h"
#include "CL_map_Client.h"

using namespace System;
using namespace System::Xml;
using namespace System::Data;
using namespace System::Data::SqlClient; //pour SQL Server

namespace NS_Svc {
	ref class CL_svc
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map^ personne;
		NS_Composants::CL_map_Client^ client;
		DataSet^ ds;

	public:
		CL_svc();
		DataSet^ afficher(String^);
		DataSet^ afficherC(String^);
		int ajouter(String^, String^, String^, String^, String^, String^, int, int, int);
		int ajouterA(String^, String^, String^, String^, String^, int, int, int, int, int, int);
		void modifier(int, String^, String^, String^, String^, String^, String^, int, int, int);
		void modifierA(int, String^, String^, String^, String^, String^, int, int, int, int, int, int);
		void supprimer(int);
		void supprimerA(int);
	};
}
