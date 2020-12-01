#pragma once

using namespace System;
namespace NS_Composants
{
	ref class CL_map_Date
	{
	private:
		int id_date;
		int jour; // jour inscription
		int mois; // mois inscription
		int an; // année inscription
		int jourA; // jour anniversaire
		int moisA; // mois anniversaire
		int anA; // année anniversaire

	public:
		CL_map_Date();
		void DsetID(int);
		int DgetId(void);
		void setJour(int);
		void setMois(int);
		void setAnnee(int);
		void setJourA(int);
		void setMoisA(int);
		void setAnneeA(int);
		int getJour(void);
		int getMois(void);
		int getAnnee(void);
		int getJourA(void);
		int getMoisA(void);
		int getAnneeA(void);
	};
}
