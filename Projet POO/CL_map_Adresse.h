#pragma once

using namespace System;
namespace NS_Composants
{
	ref class CL_map_Adresse
	{
	private:
		int id_adresse;
		String^ adresse;
		String^ ville;
		String^ cp; // Code postal

	public:
		CL_map_Adresse();
		void AsetID(int);
		int AgetId(void);
		void setAdresse(String^);
		void setVille(String^);
		void setCP(String^);
		String^ getAdresse(void);
		String^ getVille(void);
		String^ getCP(void);
	};
}
