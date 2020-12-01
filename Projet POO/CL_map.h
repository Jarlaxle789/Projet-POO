#pragma once
#include "CL_map_Adresse.h"
#include "CL_map_Date.h"

using namespace System;
namespace NS_Composants
{
	ref class CL_map
	{
	private:
		int id_personne;
		String^ nom;
		String^ prenom;
		String^ superieur;

	public:
		CL_map_Adresse^ adresse;
		CL_map_Date^ date;
		CL_map();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void PsetID(int);
		void setPrenom(String^);
		void setNom(String^);
		void setSuperieur(String^);
		int PgetId(void);
		String^ getNom(void);
		String^ getPrenom(void);
		String^ getSuperieur(void);
	};
}