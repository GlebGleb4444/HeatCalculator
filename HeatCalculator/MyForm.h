#pragma once

#include "HeatModel.h"

namespace HeatCalculator {

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
			calculator = gcnew HeatModel();
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
	private: System::Windows::Forms::GroupBox^ grpInput;
	private: System::Windows::Forms::Label^ lblSubstance;
	private: System::Windows::Forms::ComboBox^ cmbSubstance;
	private: System::Windows::Forms::Label^ lblMass;
	private: System::Windows::Forms::TextBox^ txtMass;
	private: System::Windows::Forms::Label^ lblSpecificHeat;
	private: System::Windows::Forms::TextBox^ txtSpecificHeat;
	private: System::Windows::Forms::Label^ lblT1;
	private: System::Windows::Forms::TextBox^ txtT1;
	private: System::Windows::Forms::Label^ lblT2;
	private: System::Windows::Forms::TextBox^ txtT2;
	private: System::Windows::Forms::Button^ btnCalculate;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::GroupBox^ grpOutput;
	private: System::Windows::Forms::Label^ lblDeltaT;
	private: System::Windows::Forms::Label^ lblQ;
	private: System::Windows::Forms::Label^ lblQkJ;
	private: System::Windows::Forms::Label^ lblStatus;
	private: HeatModel^ calculator;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->grpInput = (gcnew System::Windows::Forms::GroupBox());
			this->txtT2 = (gcnew System::Windows::Forms::TextBox());
			this->lblT2 = (gcnew System::Windows::Forms::Label());
			this->txtT1 = (gcnew System::Windows::Forms::TextBox());
			this->lblT1 = (gcnew System::Windows::Forms::Label());
			this->txtSpecificHeat = (gcnew System::Windows::Forms::TextBox());
			this->lblSpecificHeat = (gcnew System::Windows::Forms::Label());
			this->txtMass = (gcnew System::Windows::Forms::TextBox());
			this->lblMass = (gcnew System::Windows::Forms::Label());
			this->cmbSubstance = (gcnew System::Windows::Forms::ComboBox());
			this->lblSubstance = (gcnew System::Windows::Forms::Label());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->grpOutput = (gcnew System::Windows::Forms::GroupBox());
			this->lblStatus = (gcnew System::Windows::Forms::Label());
			this->lblQkJ = (gcnew System::Windows::Forms::Label());
			this->lblQ = (gcnew System::Windows::Forms::Label());
			this->lblDeltaT = (gcnew System::Windows::Forms::Label());
			this->grpInput->SuspendLayout();
			this->grpOutput->SuspendLayout();
			this->SuspendLayout();
			// 
			// grpInput
			// 
			this->grpInput->Controls->Add(this->txtT2);
			this->grpInput->Controls->Add(this->lblT2);
			this->grpInput->Controls->Add(this->txtT1);
			this->grpInput->Controls->Add(this->lblT1);
			this->grpInput->Controls->Add(this->txtSpecificHeat);
			this->grpInput->Controls->Add(this->lblSpecificHeat);
			this->grpInput->Controls->Add(this->txtMass);
			this->grpInput->Controls->Add(this->lblMass);
			this->grpInput->Controls->Add(this->cmbSubstance);
			this->grpInput->Controls->Add(this->lblSubstance);
			this->grpInput->Location = System::Drawing::Point(15, 15);
			this->grpInput->Name = L"grpInput";
			this->grpInput->Size = System::Drawing::Size(480, 220);
			this->grpInput->TabIndex = 0;
			this->grpInput->TabStop = false;
			this->grpInput->Text = L"Вхідні дані";
			// 
			// txtT2
			// 
			this->txtT2->Location = System::Drawing::Point(300, 159);
			this->txtT2->Name = L"txtT2";
			this->txtT2->Size = System::Drawing::Size(150, 20);
			this->txtT2->TabIndex = 9;
			// 
			// lblT2
			// 
			this->lblT2->AutoSize = true;
			this->lblT2->Location = System::Drawing::Point(15, 162);
			this->lblT2->Name = L"lblT2";
			this->lblT2->Size = System::Drawing::Size(150, 13);
			this->lblT2->TabIndex = 8;
			this->lblT2->Text = L"Кінцева температура T2, °C:";
			// 
			// txtT1
			// 
			this->txtT1->Location = System::Drawing::Point(300, 127);
			this->txtT1->Name = L"txtT1";
			this->txtT1->Size = System::Drawing::Size(150, 20);
			this->txtT1->TabIndex = 7;
			// 
			// lblT1
			// 
			this->lblT1->AutoSize = true;
			this->lblT1->Location = System::Drawing::Point(15, 130);
			this->lblT1->Name = L"lblT1";
			this->lblT1->Size = System::Drawing::Size(165, 13);
			this->lblT1->TabIndex = 6;
			this->lblT1->Text = L"Початкова температура T1, °C:";
			// 
			// txtSpecificHeat
			// 
			this->txtSpecificHeat->Location = System::Drawing::Point(180, 94);
			this->txtSpecificHeat->Name = L"txtSpecificHeat";
			this->txtSpecificHeat->Size = System::Drawing::Size(270, 20);
			this->txtSpecificHeat->TabIndex = 5;
			// 
			// lblSpecificHeat
			// 
			this->lblSpecificHeat->AutoSize = true;
			this->lblSpecificHeat->Location = System::Drawing::Point(15, 97);
			this->lblSpecificHeat->Name = L"lblSpecificHeat";
			this->lblSpecificHeat->Size = System::Drawing::Size(188, 13);
			this->lblSpecificHeat->TabIndex = 4;
			this->lblSpecificHeat->Text = L"Питома теплоємність c, Дж/(кг·°C):";
			// 
			// txtMass
			// 
			this->txtMass->Location = System::Drawing::Point(180, 62);
			this->txtMass->Name = L"txtMass";
			this->txtMass->Size = System::Drawing::Size(270, 20);
			this->txtMass->TabIndex = 3;
			// 
			// lblMass
			// 
			this->lblMass->AutoSize = true;
			this->lblMass->Location = System::Drawing::Point(15, 65);
			this->lblMass->Name = L"lblMass";
			this->lblMass->Size = System::Drawing::Size(65, 13);
			this->lblMass->TabIndex = 2;
			this->lblMass->Text = L"Маса m, кг:";
			// 
			// cmbSubstance
			// 
			this->cmbSubstance->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbSubstance->FormattingEnabled = true;
			this->cmbSubstance->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Вода", L"Лід", L"Залізо", L"Мідь", L"Алюміній",
					L"Оливкова олія", L"Скло"
			});
			this->cmbSubstance->Location = System::Drawing::Point(180, 27);
			this->cmbSubstance->Name = L"cmbSubstance";
			this->cmbSubstance->Size = System::Drawing::Size(270, 21);
			this->cmbSubstance->TabIndex = 1;
			this->cmbSubstance->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmbSubstance_SelectedIndexChanged);
			// 
			// lblSubstance
			// 
			this->lblSubstance->AutoSize = true;
			this->lblSubstance->Location = System::Drawing::Point(15, 30);
			this->lblSubstance->Name = L"lblSubstance";
			this->lblSubstance->Size = System::Drawing::Size(58, 13);
			this->lblSubstance->TabIndex = 0;
			this->lblSubstance->Text = L"Речовина:";
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(15, 245);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(150, 35);
			this->btnCalculate->TabIndex = 1;
			this->btnCalculate->Text = L"Розрахувати";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MyForm::btnCalculate_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(180, 245);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(150, 35);
			this->btnClear->TabIndex = 2;
			this->btnClear->Text = L"Очистити";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// grpOutput
			// 
			this->grpOutput->Controls->Add(this->lblStatus);
			this->grpOutput->Controls->Add(this->lblQkJ);
			this->grpOutput->Controls->Add(this->lblQ);
			this->grpOutput->Controls->Add(this->lblDeltaT);
			this->grpOutput->Location = System::Drawing::Point(15, 290);
			this->grpOutput->Name = L"grpOutput";
			this->grpOutput->Size = System::Drawing::Size(480, 140);
			this->grpOutput->TabIndex = 3;
			this->grpOutput->TabStop = false;
			this->grpOutput->Text = L"Результати";
			// 
			// lblStatus
			// 
			this->lblStatus->AutoSize = true;
			this->lblStatus->Location = System::Drawing::Point(15, 100);
			this->lblStatus->Name = L"lblStatus";
			this->lblStatus->Size = System::Drawing::Size(111, 13);
			this->lblStatus->TabIndex = 3;
			this->lblStatus->Text = L"Характер процесу: —";
			// 
			// lblQkJ
			// 
			this->lblQkJ->AutoSize = true;
			this->lblQkJ->Location = System::Drawing::Point(15, 75);
			this->lblQkJ->Name = L"lblQkJ";
			this->lblQkJ->Size = System::Drawing::Size(59, 13);
			this->lblQkJ->TabIndex = 2;
			this->lblQkJ->Text = L"Q = — кДж";
			// 
			// lblQ
			// 
			this->lblQ->AutoSize = true;
			this->lblQ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->lblQ->Location = System::Drawing::Point(15, 50);
			this->lblQ->Name = L"lblQ";
			this->lblQ->Size = System::Drawing::Size(75, 17);
			this->lblQ->TabIndex = 1;
			this->lblQ->Text = L"Q = — Дж";
			// 
			// lblDeltaT
			// 
			this->lblDeltaT->AutoSize = true;
			this->lblDeltaT->Location = System::Drawing::Point(15, 25);
			this->lblDeltaT->Name = L"lblDeltaT";
			this->lblDeltaT->Size = System::Drawing::Size(53, 13);
			this->lblDeltaT->TabIndex = 0;
			this->lblDeltaT->Text = L"ΔT = — °C";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(510, 450);
			this->Controls->Add(this->grpOutput);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->grpInput);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Розрахунок кількості теплоти Q = m·c·(T2 − T1)";
			this->grpInput->ResumeLayout(false);
			this->grpInput->PerformLayout();
			this->grpOutput->ResumeLayout(false);
			this->grpOutput->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void cmbSubstance_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		switch (cmbSubstance->SelectedIndex)
		{
		case 0: txtSpecificHeat->Text = "4200"; break;
		case 1: txtSpecificHeat->Text = "2100"; break;
		case 2: txtSpecificHeat->Text = "460";  break;
		case 3: txtSpecificHeat->Text = "385";  break;
		case 4: txtSpecificHeat->Text = "900";  break;
		case 5: txtSpecificHeat->Text = "1970"; break;
		case 6: txtSpecificHeat->Text = "840";  break;
		}
	}

	private: System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double m = 0, c = 0, t1 = 0, t2 = 0;

		if (!TryParseDouble(txtMass, "Маса m", m)) return;
		if (!TryParseDouble(txtSpecificHeat, "Питома теплоємність c", c)) return;
		if (!TryParseDouble(txtT1, "Початкова температура T1", t1)) return;
		if (!TryParseDouble(txtT2, "Кінцева температура T2", t2)) return;

		calculator->m = m;
		calculator->c = c;
		calculator->T1 = t1;
		calculator->T2 = t2;

		String^ error = calculator->Validate();
		if (!String::IsNullOrEmpty(error))
		{
			ShowError(error);
			return;
		}

		calculator->Calculate();

		lblDeltaT->Text = String::Format("ΔT = {0:F2} °C", calculator->DeltaT);
		lblQ->Text = String::Format("Q  = {0:F2} Дж", calculator->Q);
		lblQkJ->Text = String::Format("Q  = {0:F4} кДж", calculator->Q / 1000.0);
		lblStatus->Text = "Характер процесу: " + calculator->ProcessStatus;
	}

	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		cmbSubstance->SelectedIndex = -1;
		txtMass->Clear();
		txtSpecificHeat->Clear();
		txtT1->Clear();
		txtT2->Clear();

		lblDeltaT->Text = "ΔT = — °C";
		lblQ->Text = "Q = — Дж";
		lblQkJ->Text = "Q = — кДж";
		lblStatus->Text = "Характер процесу: —";
	}

	private: bool TryParseDouble(System::Windows::Forms::TextBox^ box, String^ fieldName, double% value)
	{
		if (String::IsNullOrWhiteSpace(box->Text))
		{
			ShowError("Поле «" + fieldName + "» не повинно бути порожнім.");
			return false;
		}
		if (!Double::TryParse(box->Text, value))
		{
			ShowError("Поле «" + fieldName + "» повинно містити числове значення.");
			return false;
		}
		return true;
	}

	private: void ShowError(String^ message)
	{
		MessageBox::Show(message, "Помилка введення даних",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	};
}
