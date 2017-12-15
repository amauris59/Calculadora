#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  rbsuma;
	private: System::Windows::Forms::RadioButton^  rbresta;
	private: System::Windows::Forms::RadioButton^  rbdivide;
	private: System::Windows::Forms::RadioButton^  rbmultiplica;
	private: System::Windows::Forms::TextBox^  txtvalor1;
	private: System::Windows::Forms::TextBox^  txtvalor2;
	private: System::Windows::Forms::TextBox^  txtresultado;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->rbsuma = (gcnew System::Windows::Forms::RadioButton());
			this->rbresta = (gcnew System::Windows::Forms::RadioButton());
			this->rbdivide = (gcnew System::Windows::Forms::RadioButton());
			this->rbmultiplica = (gcnew System::Windows::Forms::RadioButton());
			this->txtvalor1 = (gcnew System::Windows::Forms::TextBox());
			this->txtvalor2 = (gcnew System::Windows::Forms::TextBox());
			this->txtresultado = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(189, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CALCULADORA BASICA";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(229, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"LIMPIAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// rbsuma
			// 
			this->rbsuma->AutoSize = true;
			this->rbsuma->Location = System::Drawing::Point(313, 77);
			this->rbsuma->Name = L"rbsuma";
			this->rbsuma->Size = System::Drawing::Size(52, 17);
			this->rbsuma->TabIndex = 2;
			this->rbsuma->TabStop = true;
			this->rbsuma->Text = L"Suma";
			this->rbsuma->UseVisualStyleBackColor = true;
			this->rbsuma->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbsuma_CheckedChanged);
			// 
			// rbresta
			// 
			this->rbresta->AutoSize = true;
			this->rbresta->Location = System::Drawing::Point(313, 116);
			this->rbresta->Name = L"rbresta";
			this->rbresta->Size = System::Drawing::Size(53, 17);
			this->rbresta->TabIndex = 3;
			this->rbresta->TabStop = true;
			this->rbresta->Text = L"Resta";
			this->rbresta->UseVisualStyleBackColor = true;
			this->rbresta->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbresta_CheckedChanged);
			// 
			// rbdivide
			// 
			this->rbdivide->AutoSize = true;
			this->rbdivide->Location = System::Drawing::Point(313, 153);
			this->rbdivide->Name = L"rbdivide";
			this->rbdivide->Size = System::Drawing::Size(55, 17);
			this->rbdivide->TabIndex = 4;
			this->rbdivide->TabStop = true;
			this->rbdivide->Text = L"Divide";
			this->rbdivide->UseVisualStyleBackColor = true;
			this->rbdivide->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbdivide_CheckedChanged);
			// 
			// rbmultiplica
			// 
			this->rbmultiplica->AutoSize = true;
			this->rbmultiplica->Location = System::Drawing::Point(313, 198);
			this->rbmultiplica->Name = L"rbmultiplica";
			this->rbmultiplica->Size = System::Drawing::Size(69, 17);
			this->rbmultiplica->TabIndex = 5;
			this->rbmultiplica->TabStop = true;
			this->rbmultiplica->Text = L"Multiplica";
			this->rbmultiplica->UseVisualStyleBackColor = true;
			this->rbmultiplica->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbmultiplica_CheckedChanged);
			// 
			// txtvalor1
			// 
			this->txtvalor1->Location = System::Drawing::Point(116, 77);
			this->txtvalor1->Name = L"txtvalor1";
			this->txtvalor1->Size = System::Drawing::Size(100, 20);
			this->txtvalor1->TabIndex = 6;
			// 
			// txtvalor2
			// 
			this->txtvalor2->Location = System::Drawing::Point(116, 135);
			this->txtvalor2->Name = L"txtvalor2";
			this->txtvalor2->Size = System::Drawing::Size(100, 20);
			this->txtvalor2->TabIndex = 7;
			// 
			// txtresultado
			// 
			this->txtresultado->Enabled = false;
			this->txtresultado->Location = System::Drawing::Point(116, 195);
			this->txtresultado->Name = L"txtresultado";
			this->txtresultado->Size = System::Drawing::Size(100, 20);
			this->txtresultado->TabIndex = 8;
			this->txtresultado->TextChanged += gcnew System::EventHandler(this, &MyForm::txtresultado_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"VALOR 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"VALOR 2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"RESULTADO";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 407);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtresultado);
			this->Controls->Add(this->txtvalor2);
			this->Controls->Add(this->txtvalor1);
			this->Controls->Add(this->rbmultiplica);
			this->Controls->Add(this->rbdivide);
			this->Controls->Add(this->rbresta);
			this->Controls->Add(this->rbsuma);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txtresultado_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void rbsuma_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 int numero1;
			 int numero2;
			 int resultado;
			 numero1 = Convert::ToInt32(this->txtvalor1->Text);
			 numero2 = Convert::ToInt32(this->txtvalor2->Text);
			 txtresultado->Text = Convert::ToString(numero1 + numero2);
}
private: System::Void rbresta_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 int numero1;
			 int numero2;
			 int resultado;
			 numero1 = Convert::ToInt32(this->txtvalor1->Text);
			 numero2 = Convert::ToInt32(this->txtvalor2->Text);
			 txtresultado->Text = Convert::ToString(numero1 - numero2);
}
private: System::Void rbdivide_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 int numero1;
			 int numero2;
			 int resultado;
			 numero1 = Convert::ToInt32(this->txtvalor1->Text);
			 numero2 = Convert::ToInt32(this->txtvalor2->Text);
			 txtresultado->Text = Convert::ToString(numero1 / numero2);
}
private: System::Void rbmultiplica_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 int numero1;
			 int numero2;
			 int resultado;
			 numero1 = Convert::ToInt32(this->txtvalor1->Text);
			 numero2 = Convert::ToInt32(this->txtvalor2->Text);
			 txtresultado->Text = Convert::ToString(numero1 * numero2);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->txtvalor1->Text = "";
			 this->txtvalor2->Text = "";
			 this->txtresultado->Text = "";

}
};
}
