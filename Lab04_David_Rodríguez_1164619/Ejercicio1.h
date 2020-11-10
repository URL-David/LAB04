#pragma once
#include <iostream>
#include <cstdlib>


namespace Lab04DavidRodríguez1164619 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Resumen de Ejercicio1
	/// </summary>
	public ref class Ejercicio1 : public System::Windows::Forms::Form
	{
	public:
		Ejercicio1(void)
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
		~Ejercicio1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Data::DataSet^ dataSet2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;






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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataSet2 = (gcnew System::Data::DataSet());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(463, 337);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Ejercicio1::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 371);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 47);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Ejercicio1::button1_Click);
			// 
			// dataSet2
			// 
			this->dataSet2->DataSetName = L"NewDataSet";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(191, 384);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Ejercicio1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(272, 383);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Ejercicio1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(354, 383);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Ejercicio1::button4_Click);
			// 
			// Ejercicio1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(488, 430);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Ejercicio1";
			this->Text = L"Ejercicio1";
			this->Load += gcnew System::EventHandler(this, &Ejercicio1::Ejercicio1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
		   void Bubble(int arreglo[], int count) {
			   for (int i = 0; i < count - 1; i++) {
				   for (int j = i + 1; j < count; j++) {
					   if (arreglo[j] < arreglo[i]) {
						   int temp = arreglo[j];
						   arreglo[j] = arreglo[i];
						   arreglo[i] = temp;
					   }
				   }
			   }
		   }

		   void Quick(int* arr, int izquierda, int derecha) {
			   int i = izquierda;
			   int j = derecha;
			   int temp;
			   int p = arr[(izquierda + derecha) / 2];
			   while (i <= j) {
				   while (arr[i] < p) {
					   i++;
					   while (arr[j] > p) {
						   if (i <= j) {
							   temp = arr[i];
							   arr[i] = arr[j];
							   arr[j] = temp;
							   i++;
							   j--;
						   }
					   }
				   }
			   }
			   if (izquierda < j) {
				   Quick(arr, izquierda, j);
				   if (i < derecha) {
					   Quick(arr, i, derecha);
				   }
			   }
		   }
		   void Merge(int arr[], int l, int r)
		   {
			   if (l < r)
			   {

				   int m = l + (r - l) / 2;
				   Merge(arr, l, m);
				   Merge(arr, m + 1, r);

				   merge(arr, l, m, r);
			   }
		   }

		   void merge(int arr[], int l, int m, int r)
		   {
			 

			   int n1 = m - l + 1;
			   int n2 = r - m;

			   
			   int L[100];
			   int R[100];

			 
			   for (int i = 0; i < n1; i++)
				   L[i] = arr[l + i];
			   for (int j = 0; j < n2; j++)
				   R[j] = arr[m + 1 + j];

			 

			  
			   int i = 0;

			
			   int j = 0;

			  
			   int k = l;

			   while (i < n1 && j < n2)
			   {
				   if (L[i] <= R[j])
				   {
					   arr[k] = L[i];
					   i++;
				   }
				   else
				   {
					   arr[k] = R[j];
					   j++;
				   }
				   k++;
			   }

			
			   while (i < n1)
			   {
				   arr[k] = L[i];
				   i++;
				   k++;
			   }

			   while (j < n2)
			   {
				   arr[k] = R[j];
				   j++;
				   k++;
			   }
		   }
	private: System::Void Ejercicio1_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	MessageBox::Show("" + n);
	Bubble(arr, n);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	Quick(arr, 0, n - 1);
}
	  
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	Merge(arr, 0, n - 1);
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
