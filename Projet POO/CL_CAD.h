#pragma once

using namespace System;
using namespace System::Xml;
using namespace System::Data;
using namespace System::Data::SqlClient; //pour SQL Server

namespace NS_Composants {
	ref class CL_CAD
	{
	private:
		String^ cnx;
		String^ rq_sql;
		SqlConnection^ CNX;
		SqlCommand^ CMD;
		SqlDataAdapter^ DA;
		DataSet^ DS;
		void setSQL(String^);

	public:
		CL_CAD();
		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);
	};
}
