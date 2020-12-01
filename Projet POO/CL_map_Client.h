#pragma once
#include "CL_map_Adresse.h"
#include "CL_map_Date.h"

using namespace System;
namespace NS_Composants
{
	ref class CL_map_Client
	{
	private:
		int num_client;
		String^ nom;
		String^ prenom;

	public:
		CL_map_Adresse^ adresse1;
		CL_map_Date^ date1;
		CL_map_Client();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void PsetID(int);
		void setPrenom(String^);
		void setNom(String^);
		int PgetId(void);
		String^ getNom(void);
		String^ getPrenom(void);
	};
}
