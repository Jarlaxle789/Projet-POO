#pragma once

using namespace System;
using namespace System::Xml;
using namespace System::Data;
using namespace System::Data::SqlClient; //pour SQL Server
namespace NS_Composants
{
	ref class CL_map_Stat
	{
	private:
		int id_stat; 
		int panier; // panier moyen (après remise
		int CA; // chiffre d’affaire sur un mois
		int montant_total; //  montant total des achats pour un clien
		int VComStock; // valeur commerciale du stock
		int VAchatStock; // valeur d’achat du stock
	public:
		CL_map_Stat();
		int CalculPanier(int); 
		int CalculCA(int); // calcul chiffre d'affaire
		int CalculMT(int); //calcul montant total
		int CalculVComStock(int); // calcul valeur commerciale du stock
		int CalculVAchatStock(int); // calcul valeur d’achat du stock
		DataSet^ Afficher();
		String^ ArtPlusVendus();
		String^ ArtMoinsVendus();

		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void PsetID(int);
		int PgetId(void);
	};
}