#pragma once
#include "Ejercicio1.h"
#include "Ejercicio2.h"

namespace Lab04DavidRodríguez1164619 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Menu1
	/// </summary>
	public ref class Menu1 : public System::Windows::Forms::Form
	{
	public:
		Menu1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Menu1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnEj1;
	protected:
	private: System::Windows::Forms::Button^ btnEj2;
	private: System::Windows::Forms::Button^ btnCerrar;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnEj1 = (gcnew System::Windows::Forms::Button());
			this->btnEj2 = (gcnew System::Windows::Forms::Button());
			this->btnCerrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnEj1
			// 
			this->btnEj1->Location = System::Drawing::Point(116, 130);
			this->btnEj1->Name = L"btnEj1";
			this->btnEj1->Size = System::Drawing::Size(362, 78);
			this->btnEj1->TabIndex = 0;
			this->btnEj1->Text = L"Ejercicio #1";
			this->btnEj1->UseVisualStyleBackColor = true;
			this->btnEj1->Click += gcnew System::EventHandler(this, &Menu1::btnEj1_Click);
			// 
			// btnEj2
			// 
			this->btnEj2->Location = System::Drawing::Point(116, 249);
			this->btnEj2->Name = L"btnEj2";
			this->btnEj2->Size = System::Drawing::Size(362, 78);
			this->btnEj2->TabIndex = 1;
			this->btnEj2->Text = L"Ejercicio #2";
			this->btnEj2->UseVisualStyleBackColor = true;
			this->btnEj2->Click += gcnew System::EventHandler(this, &Menu1::btnEj2_Click);
			// 
			// btnCerrar
			// 
			this->btnCerrar->Location = System::Drawing::Point(526, 373);
			this->btnCerrar->Name = L"btnCerrar";
			this->btnCerrar->Size = System::Drawing::Size(75, 23);
			this->btnCerrar->TabIndex = 2;
			this->btnCerrar->Text = L"Cerrar";
			this->btnCerrar->UseVisualStyleBackColor = true;
			this->btnCerrar->Click += gcnew System::EventHandler(this, &Menu1::btnCerrar_Click);
			// 
			// Menu1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 408);
			this->Controls->Add(this->btnCerrar);
			this->Controls->Add(this->btnEj2);
			this->Controls->Add(this->btnEj1);
			this->Name = L"Menu1";
			this->Text = L"Menu1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnEj1_Click(System::Object^ sender, System::EventArgs^ e) {
		Ejercicio1^ Mi_EJ1 = gcnew Ejercicio1();
		this->Hide();
		Mi_EJ1->ShowDialog();
		this->Show();
	}
	private: System::Void btnEj2_Click(System::Object^ sender, System::EventArgs^ e) {
		Ejercicio2^ Mi_EJ2 = gcnew Ejercicio2();
		this->Hide();
		Mi_EJ2->ShowDialog();
		this->Show();
	}
	private: System::Void btnCerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
