#pragma once
#include "CL_svc.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_1er;
	private: System::Windows::Forms::Button^ button_last;
	private: System::Windows::Forms::Button^ button_before;
	private: System::Windows::Forms::Button^ button_after;
	private: System::Windows::Forms::Button^ button_Ajouter;
	private: System::Windows::Forms::Button^ button_Modifier;
	protected:






	private: System::Windows::Forms::Button^ button_Afficher;
	private: System::Windows::Forms::Button^ button_Supprimer;


	private: System::Windows::Forms::DataGridView^ Dates;
	private: System::Windows::Forms::TextBox^ Nom;
	private: System::Windows::Forms::TextBox^ Prenom;
	private: System::Windows::Forms::TextBox^ Superieur;




	private: System::Windows::Forms::DataGridView^ Adresses;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_1er = (gcnew System::Windows::Forms::Button());
			this->button_last = (gcnew System::Windows::Forms::Button());
			this->button_before = (gcnew System::Windows::Forms::Button());
			this->button_after = (gcnew System::Windows::Forms::Button());
			this->button_Ajouter = (gcnew System::Windows::Forms::Button());
			this->button_Modifier = (gcnew System::Windows::Forms::Button());
			this->button_Afficher = (gcnew System::Windows::Forms::Button());
			this->button_Supprimer = (gcnew System::Windows::Forms::Button());
			this->Dates = (gcnew System::Windows::Forms::DataGridView());
			this->Nom = (gcnew System::Windows::Forms::TextBox());
			this->Prenom = (gcnew System::Windows::Forms::TextBox());
			this->Superieur = (gcnew System::Windows::Forms::TextBox());
			this->Adresses = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dates))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Adresses))->BeginInit();
			this->SuspendLayout();
			// 
			// button_1er
			// 
			this->button_1er->Location = System::Drawing::Point(30, 218);
			this->button_1er->Name = L"button_1er";
			this->button_1er->Size = System::Drawing::Size(39, 28);
			this->button_1er->TabIndex = 0;
			this->button_1er->Text = L"<<";
			this->button_1er->UseVisualStyleBackColor = true;
			this->button_1er->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button_last
			// 
			this->button_last->Location = System::Drawing::Point(311, 218);
			this->button_last->Name = L"button_last";
			this->button_last->Size = System::Drawing::Size(39, 28);
			this->button_last->TabIndex = 1;
			this->button_last->Text = L">>";
			this->button_last->UseVisualStyleBackColor = true;
			this->button_last->Click += gcnew System::EventHandler(this, &MyForm::button_last_Click);
			// 
			// button_before
			// 
			this->button_before->Location = System::Drawing::Point(112, 218);
			this->button_before->Name = L"button_before";
			this->button_before->Size = System::Drawing::Size(39, 28);
			this->button_before->TabIndex = 2;
			this->button_before->Text = L"<";
			this->button_before->UseVisualStyleBackColor = true;
			this->button_before->Click += gcnew System::EventHandler(this, &MyForm::button_before_Click);
			// 
			// button_after
			// 
			this->button_after->Location = System::Drawing::Point(229, 218);
			this->button_after->Name = L"button_after";
			this->button_after->Size = System::Drawing::Size(39, 28);
			this->button_after->TabIndex = 3;
			this->button_after->Text = L">";
			this->button_after->UseVisualStyleBackColor = true;
			this->button_after->Click += gcnew System::EventHandler(this, &MyForm::button_after_Click);
			// 
			// button_Ajouter
			// 
			this->button_Ajouter->Location = System::Drawing::Point(30, 274);
			this->button_Ajouter->Name = L"button_Ajouter";
			this->button_Ajouter->Size = System::Drawing::Size(121, 109);
			this->button_Ajouter->TabIndex = 4;
			this->button_Ajouter->Text = L"Ajouter";
			this->button_Ajouter->UseVisualStyleBackColor = true;
			this->button_Ajouter->Click += gcnew System::EventHandler(this, &MyForm::button_Ajouter_Click);
			// 
			// button_Modifier
			// 
			this->button_Modifier->Location = System::Drawing::Point(30, 413);
			this->button_Modifier->Name = L"button_Modifier";
			this->button_Modifier->Size = System::Drawing::Size(121, 109);
			this->button_Modifier->TabIndex = 5;
			this->button_Modifier->Text = L"Modifier";
			this->button_Modifier->UseVisualStyleBackColor = true;
			this->button_Modifier->Click += gcnew System::EventHandler(this, &MyForm::button_Modifier_Click);
			// 
			// button_Afficher
			// 
			this->button_Afficher->Location = System::Drawing::Point(229, 274);
			this->button_Afficher->Name = L"button_Afficher";
			this->button_Afficher->Size = System::Drawing::Size(121, 109);
			this->button_Afficher->TabIndex = 6;
			this->button_Afficher->Text = L"Afficher";
			this->button_Afficher->UseVisualStyleBackColor = true;
			this->button_Afficher->Click += gcnew System::EventHandler(this, &MyForm::button_Afficher_Click);
			// 
			// button_Supprimer
			// 
			this->button_Supprimer->Location = System::Drawing::Point(229, 413);
			this->button_Supprimer->Name = L"button_Supprimer";
			this->button_Supprimer->Size = System::Drawing::Size(121, 109);
			this->button_Supprimer->TabIndex = 7;
			this->button_Supprimer->Text = L"Supprimer";
			this->button_Supprimer->UseVisualStyleBackColor = true;
			this->button_Supprimer->Click += gcnew System::EventHandler(this, &MyForm::button_Supprimer_Click);
			// 
			// Dates
			// 
			this->Dates->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Dates->Location = System::Drawing::Point(396, 314);
			this->Dates->Name = L"Dates";
			this->Dates->RowHeadersWidth = 51;
			this->Dates->RowTemplate->Height = 24;
			this->Dates->Size = System::Drawing::Size(568, 208);
			this->Dates->TabIndex = 8;
			this->Dates->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::Dates_CellContentClick);
			// 
			// Nom
			// 
			this->Nom->AccessibleDescription = L"Nom";
			this->Nom->Location = System::Drawing::Point(30, 62);
			this->Nom->Name = L"Nom";
			this->Nom->Size = System::Drawing::Size(320, 22);
			this->Nom->TabIndex = 9;
			this->Nom->TextChanged += gcnew System::EventHandler(this, &MyForm::Nom_TextChanged);
			// 
			// Prenom
			// 
			this->Prenom->Location = System::Drawing::Point(30, 107);
			this->Prenom->Name = L"Prenom";
			this->Prenom->Size = System::Drawing::Size(320, 22);
			this->Prenom->TabIndex = 10;
			this->Prenom->TextChanged += gcnew System::EventHandler(this, &MyForm::Prenom_TextChanged);
			// 
			// Superieur
			// 
			this->Superieur->Location = System::Drawing::Point(30, 155);
			this->Superieur->Name = L"Superieur";
			this->Superieur->Size = System::Drawing::Size(320, 22);
			this->Superieur->TabIndex = 11;
			this->Superieur->TextChanged += gcnew System::EventHandler(this, &MyForm::Superieur_TextChanged);
			// 
			// Adresses
			// 
			this->Adresses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Adresses->Location = System::Drawing::Point(396, 62);
			this->Adresses->Name = L"Adresses";
			this->Adresses->RowHeadersWidth = 51;
			this->Adresses->RowTemplate->Height = 24;
			this->Adresses->Size = System::Drawing::Size(568, 208);
			this->Adresses->TabIndex = 12;
			this->Adresses->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::Adresses_CellContentClick);
			// 
			// MyForm
			// 
			this->AccessibleDescription = L"";
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1006, 585);
			this->Controls->Add(this->Adresses);
			this->Controls->Add(this->Superieur);
			this->Controls->Add(this->Prenom);
			this->Controls->Add(this->Nom);
			this->Controls->Add(this->Dates);
			this->Controls->Add(this->button_Supprimer);
			this->Controls->Add(this->button_Afficher);
			this->Controls->Add(this->button_Modifier);
			this->Controls->Add(this->button_Ajouter);
			this->Controls->Add(this->button_after);
			this->Controls->Add(this->button_before);
			this->Controls->Add(this->button_last);
			this->Controls->Add(this->button_1er);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dates))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Adresses))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button_before_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_after_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_last_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Dates_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void Adresses_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void Nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Prenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Superieur_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_Svc::CL_svc^ o = gcnew NS_Svc::CL_svc;
	o->ajouter();
}
private: System::Void button_Afficher_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
