#pragma once
#include "stdafx.h"
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::DataGridView^  table1;
    protected:

    protected:

    protected:

    protected:
    private: System::Windows::Forms::Button^  btnCalc;
    private: System::Windows::Forms::DataGridView^  table2;

    private: System::Windows::Forms::GroupBox^  groupBox1;
    private: System::Windows::Forms::GroupBox^  groupBox2;
    private: System::Windows::Forms::GroupBox^  groupBox3;
    private: System::Windows::Forms::ComboBox^  selectTask;
    private: System::Windows::Forms::TextBox^  textBoxEps;

    private: System::Windows::Forms::Label^  label7;



    private: System::Windows::Forms::Label^  label5;
    private: System::Windows::Forms::TextBox^  textBoxN;
    private: System::Windows::Forms::Label^  label4;
    private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::TextBox^  textBoxMy;
    private: System::Windows::Forms::TextBox^  textBoxNx;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  labelN;
    private: System::Windows::Forms::Label^  labelEpsM;

    private: System::Windows::Forms::Label^  label9;
    private: System::Windows::Forms::Label^  label8;
    private: System::Windows::Forms::Label^  label11;
    private: System::Windows::Forms::Label^  label10;
    private: System::Windows::Forms::TabControl^  tabControl1;
    private: System::Windows::Forms::TabPage^  tabPage1;
    private: System::Windows::Forms::TabPage^  tabPage2;
    private: System::Windows::Forms::TabPage^  tabPage3;
    private: System::Windows::Forms::DataGridView^  table3;

    private: System::Windows::Forms::Label^  labelEps;

    private: System::Windows::Forms::Label^  labelUV;
    private: System::Windows::Forms::Label^  label12;
    private: System::Windows::Forms::TextBox^  textBoxRes;

    private: System::Windows::Forms::TextBox^  textBoxInfo;
    private: System::Windows::Forms::Label^  labelEpsM2;

    private: System::Windows::Forms::Label^  eps2;
    private: System::Windows::Forms::Label^  labelY;
    private: System::Windows::Forms::Label^  labelX;
    private: System::Windows::Forms::Label^  label13;
    private: System::Windows::Forms::Label^  label6;




	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
            this->table1 = (gcnew System::Windows::Forms::DataGridView());
            this->btnCalc = (gcnew System::Windows::Forms::Button());
            this->table2 = (gcnew System::Windows::Forms::DataGridView());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->textBoxInfo = (gcnew System::Windows::Forms::TextBox());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->textBoxEps = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->textBoxN = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBoxMy = (gcnew System::Windows::Forms::TextBox());
            this->textBoxNx = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
            this->labelY = (gcnew System::Windows::Forms::Label());
            this->labelX = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->labelEpsM2 = (gcnew System::Windows::Forms::Label());
            this->eps2 = (gcnew System::Windows::Forms::Label());
            this->labelEps = (gcnew System::Windows::Forms::Label());
            this->labelUV = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->textBoxRes = (gcnew System::Windows::Forms::TextBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->labelN = (gcnew System::Windows::Forms::Label());
            this->labelEpsM = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->selectTask = (gcnew System::Windows::Forms::ComboBox());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->table3 = (gcnew System::Windows::Forms::DataGridView());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table2))->BeginInit();
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->groupBox3->SuspendLayout();
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->tabPage2->SuspendLayout();
            this->tabPage3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table3))->BeginInit();
            this->SuspendLayout();
            // 
            // table1
            // 
            this->table1->AllowUserToAddRows = false;
            this->table1->AllowUserToDeleteRows = false;
            this->table1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->table1->Location = System::Drawing::Point(0, 0);
            this->table1->Name = L"table1";
            this->table1->ReadOnly = true;
            this->table1->Size = System::Drawing::Size(768, 577);
            this->table1->TabIndex = 0;
            // 
            // btnCalc
            // 
            this->btnCalc->Location = System::Drawing::Point(12, 572);
            this->btnCalc->Name = L"btnCalc";
            this->btnCalc->Size = System::Drawing::Size(128, 37);
            this->btnCalc->TabIndex = 1;
            this->btnCalc->Text = L"Счет";
            this->btnCalc->UseVisualStyleBackColor = true;
            this->btnCalc->Click += gcnew System::EventHandler(this, &Form1::btnCalc_Click);
            // 
            // table2
            // 
            this->table2->AllowUserToAddRows = false;
            this->table2->AllowUserToDeleteRows = false;
            this->table2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->table2->Location = System::Drawing::Point(-3, 0);
            this->table2->Name = L"table2";
            this->table2->ReadOnly = true;
            this->table2->Size = System::Drawing::Size(768, 577);
            this->table2->TabIndex = 2;
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->textBoxInfo);
            this->groupBox1->Location = System::Drawing::Point(12, 53);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(450, 159);
            this->groupBox1->TabIndex = 3;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Справка";
            // 
            // textBoxInfo
            // 
            this->textBoxInfo->Location = System::Drawing::Point(6, 19);
            this->textBoxInfo->Multiline = true;
            this->textBoxInfo->Name = L"textBoxInfo";
            this->textBoxInfo->Size = System::Drawing::Size(422, 126);
            this->textBoxInfo->TabIndex = 0;
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->textBoxEps);
            this->groupBox2->Controls->Add(this->label7);
            this->groupBox2->Controls->Add(this->label5);
            this->groupBox2->Controls->Add(this->textBoxN);
            this->groupBox2->Controls->Add(this->label4);
            this->groupBox2->Controls->Add(this->label3);
            this->groupBox2->Controls->Add(this->label2);
            this->groupBox2->Controls->Add(this->textBoxMy);
            this->groupBox2->Controls->Add(this->textBoxNx);
            this->groupBox2->Controls->Add(this->label1);
            this->groupBox2->Location = System::Drawing::Point(12, 218);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(450, 138);
            this->groupBox2->TabIndex = 4;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Параметры";
            // 
            // textBoxEps
            // 
            this->textBoxEps->Location = System::Drawing::Point(120, 75);
            this->textBoxEps->Name = L"textBoxEps";
            this->textBoxEps->Size = System::Drawing::Size(55, 20);
            this->textBoxEps->TabIndex = 12;
            this->textBoxEps->Text = L"1e-8";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(11, 78);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(94, 13);
            this->label7->TabIndex = 11;
            this->label7->Text = L"Точность метода";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(117, 48);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(15, 13);
            this->label5->TabIndex = 7;
            this->label5->Text = L"N";
            // 
            // textBoxN
            // 
            this->textBoxN->Location = System::Drawing::Point(135, 45);
            this->textBoxN->Name = L"textBoxN";
            this->textBoxN->Size = System::Drawing::Size(40, 20);
            this->textBoxN->TabIndex = 6;
            this->textBoxN->Text = L"500";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(11, 48);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(103, 13);
            this->label4->TabIndex = 5;
            this->label4->Text = L"Количество шагов:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(188, 22);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(15, 13);
            this->label3->TabIndex = 4;
            this->label3->Text = L"m";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(119, 22);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(13, 13);
            this->label2->TabIndex = 3;
            this->label2->Text = L"n";
            // 
            // textBoxMy
            // 
            this->textBoxMy->Location = System::Drawing::Point(207, 19);
            this->textBoxMy->Name = L"textBoxMy";
            this->textBoxMy->Size = System::Drawing::Size(40, 20);
            this->textBoxMy->TabIndex = 2;
            this->textBoxMy->Text = L"100";
            // 
            // textBoxNx
            // 
            this->textBoxNx->Location = System::Drawing::Point(135, 19);
            this->textBoxNx->Name = L"textBoxNx";
            this->textBoxNx->Size = System::Drawing::Size(40, 20);
            this->textBoxNx->TabIndex = 1;
            this->textBoxNx->Text = L"100";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(11, 22);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(110, 13);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Размер сетки (n,m): ";
            // 
            // groupBox3
            // 
            this->groupBox3->Controls->Add(this->labelY);
            this->groupBox3->Controls->Add(this->labelX);
            this->groupBox3->Controls->Add(this->label13);
            this->groupBox3->Controls->Add(this->label6);
            this->groupBox3->Controls->Add(this->labelEpsM2);
            this->groupBox3->Controls->Add(this->eps2);
            this->groupBox3->Controls->Add(this->labelEps);
            this->groupBox3->Controls->Add(this->labelUV);
            this->groupBox3->Controls->Add(this->label12);
            this->groupBox3->Controls->Add(this->textBoxRes);
            this->groupBox3->Controls->Add(this->label11);
            this->groupBox3->Controls->Add(this->label10);
            this->groupBox3->Controls->Add(this->labelN);
            this->groupBox3->Controls->Add(this->labelEpsM);
            this->groupBox3->Controls->Add(this->label9);
            this->groupBox3->Controls->Add(this->label8);
            this->groupBox3->Location = System::Drawing::Point(12, 363);
            this->groupBox3->Name = L"groupBox3";
            this->groupBox3->Size = System::Drawing::Size(450, 203);
            this->groupBox3->TabIndex = 5;
            this->groupBox3->TabStop = false;
            this->groupBox3->Text = L"Результат";
            // 
            // labelY
            // 
            this->labelY->AutoSize = true;
            this->labelY->Location = System::Drawing::Point(387, 172);
            this->labelY->Name = L"labelY";
            this->labelY->Size = System::Drawing::Size(0, 13);
            this->labelY->TabIndex = 15;
            // 
            // labelX
            // 
            this->labelX->AutoSize = true;
            this->labelX->Location = System::Drawing::Point(387, 158);
            this->labelX->Name = L"labelX";
            this->labelX->Size = System::Drawing::Size(0, 13);
            this->labelX->TabIndex = 14;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(368, 172);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(12, 13);
            this->label13->TabIndex = 13;
            this->label13->Text = L"y";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(368, 159);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(12, 13);
            this->label6->TabIndex = 12;
            this->label6->Text = L"x";
            // 
            // labelEpsM2
            // 
            this->labelEpsM2->AutoSize = true;
            this->labelEpsM2->Location = System::Drawing::Point(215, 148);
            this->labelEpsM2->Name = L"labelEpsM2";
            this->labelEpsM2->Size = System::Drawing::Size(10, 13);
            this->labelEpsM2->TabIndex = 11;
            this->labelEpsM2->Text = L" ";
            this->labelEpsM2->Visible = false;
            // 
            // eps2
            // 
            this->eps2->AutoSize = true;
            this->eps2->Location = System::Drawing::Point(175, 148);
            this->eps2->Name = L"eps2";
            this->eps2->Size = System::Drawing::Size(34, 13);
            this->eps2->TabIndex = 10;
            this->eps2->Text = L"ε2  = ";
            this->eps2->Visible = false;
            // 
            // labelEps
            // 
            this->labelEps->AutoSize = true;
            this->labelEps->Location = System::Drawing::Point(225, 172);
            this->labelEps->Name = L"labelEps";
            this->labelEps->Size = System::Drawing::Size(10, 13);
            this->labelEps->TabIndex = 9;
            this->labelEps->Text = L" ";
            // 
            // labelUV
            // 
            this->labelUV->AutoSize = true;
            this->labelUV->Location = System::Drawing::Point(159, 172);
            this->labelUV->Name = L"labelUV";
            this->labelUV->Size = System::Drawing::Size(60, 13);
            this->labelUV->TabIndex = 8;
            this->labelUV->Text = L"max|V-U| = ";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(-1, 172);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(152, 13);
            this->label12->TabIndex = 7;
            this->label12->Text = L"Задача решена с точностью:";
            // 
            // textBoxRes
            // 
            this->textBoxRes->Location = System::Drawing::Point(6, 19);
            this->textBoxRes->Multiline = true;
            this->textBoxRes->Name = L"textBoxRes";
            this->textBoxRes->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBoxRes->Size = System::Drawing::Size(404, 78);
            this->textBoxRes->TabIndex = 6;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(6, 100);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(94, 13);
            this->label11->TabIndex = 5;
            this->label11->Text = L"Затрачено шагов";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(6, 123);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(160, 13);
            this->label10->TabIndex = 4;
            this->label10->Text = L"Достигнутая точность метода";
            // 
            // labelN
            // 
            this->labelN->AutoSize = true;
            this->labelN->Location = System::Drawing::Point(133, 100);
            this->labelN->Name = L"labelN";
            this->labelN->Size = System::Drawing::Size(10, 13);
            this->labelN->TabIndex = 3;
            this->labelN->Text = L" ";
            // 
            // labelEpsM
            // 
            this->labelEpsM->AutoSize = true;
            this->labelEpsM->Location = System::Drawing::Point(209, 123);
            this->labelEpsM->Name = L"labelEpsM";
            this->labelEpsM->Size = System::Drawing::Size(10, 13);
            this->labelEpsM->TabIndex = 2;
            this->labelEpsM->Text = L" ";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(103, 100);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(24, 13);
            this->label9->TabIndex = 1;
            this->label9->Text = L"N =";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(175, 123);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(28, 13);
            this->label8->TabIndex = 0;
            this->label8->Text = L"ε  = ";
            // 
            // selectTask
            // 
            this->selectTask->FormattingEnabled = true;
            this->selectTask->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Тестовая задача", L"Основная задача" });
            this->selectTask->Location = System::Drawing::Point(12, 12);
            this->selectTask->Name = L"selectTask";
            this->selectTask->Size = System::Drawing::Size(238, 21);
            this->selectTask->TabIndex = 6;
            this->selectTask->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::selectTask_SelectedIndexChanged);
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage3);
            this->tabControl1->Location = System::Drawing::Point(487, 12);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(776, 604);
            this->tabControl1->TabIndex = 7;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->table1);
            this->tabPage1->Location = System::Drawing::Point(4, 22);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(768, 578);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"V(x,y)";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->table2);
            this->tabPage2->Location = System::Drawing::Point(4, 22);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(768, 578);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"U(x,y)";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->table3);
            this->tabPage3->Location = System::Drawing::Point(4, 22);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3);
            this->tabPage3->Size = System::Drawing::Size(768, 578);
            this->tabPage3->TabIndex = 2;
            this->tabPage3->Text = L"|U(x,y)-V(x,y)|";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // table3
            // 
            this->table3->AllowUserToAddRows = false;
            this->table3->AllowUserToDeleteRows = false;
            this->table3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->table3->Location = System::Drawing::Point(0, 0);
            this->table3->Name = L"table3";
            this->table3->ReadOnly = true;
            this->table3->Size = System::Drawing::Size(768, 578);
            this->table3->TabIndex = 0;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1284, 621);
            this->Controls->Add(this->tabControl1);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->selectTask);
            this->Controls->Add(this->groupBox3);
            this->Controls->Add(this->btnCalc);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table2))->EndInit();
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->groupBox3->ResumeLayout(false);
            this->groupBox3->PerformLayout();
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage2->ResumeLayout(false);
            this->tabPage3->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table3))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
     System::Void prepareTables(Task& t) {
         //clear tables
         table1->Rows->Clear();
         table1->Columns->Clear();
         table2->Rows->Clear();
         table2->Columns->Clear();
         table3->Rows->Clear();
         table3->Columns->Clear();
         //cols header
         table1->Columns->Add("Col" + System::Convert::ToString(0), System::Convert::ToString("i"));
         table2->Columns->Add("Col" + System::Convert::ToString(0), System::Convert::ToString("i"));
         table3->Columns->Add("Col" + System::Convert::ToString(0), System::Convert::ToString("i"));
         //color
         table1->EnableHeadersVisualStyles = false;
         table1->ColumnHeadersDefaultCellStyle->BackColor = Color::LightGray;
         table2->EnableHeadersVisualStyles = false;
         table2->ColumnHeadersDefaultCellStyle->BackColor = Color::LightGray;
         table3->EnableHeadersVisualStyles = false;
         table3->ColumnHeadersDefaultCellStyle->BackColor = Color::LightGray;
   
         //rows header
         table1->Rows->Add();
         table1->Rows[0]->HeaderCell->Value = "j"; \
         table1->Rows[0]->HeaderCell->Style->BackColor = Color::LightGray;
         table1->Rows[0]->Cells[0]->Value = "Y \\ X";
         table1->Rows[0]->Cells[0]->Style->BackColor = Color::LightGray;

         table2->Rows->Add();
         table2->Rows[0]->HeaderCell->Value = "j";
         table2->Rows[0]->HeaderCell->Style->BackColor = Color::LightGray;
         table2->Rows[0]->Cells[0]->Value = "Y \\ X";
         table2->Rows[0]->Cells[0]->Style->BackColor = Color::LightGray;

         table3->Rows->Add();
         table3->Rows[0]->HeaderCell->Value = "j";
         table3->Rows[0]->HeaderCell->Style->BackColor = Color::LightGray;
         table3->Rows[0]->Cells[0]->Value = "Y \\ X";
         table3->Rows[0]->Cells[0]->Style->BackColor = Color::LightGray;

    
         table1->AutoResizeRowHeadersWidth(
             System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders);
         table1->AutoResizeColumns(System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells);

         table2->AutoResizeRowHeadersWidth(
             System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders);
         table2->AutoResizeColumns(System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells);

         table3->AutoResizeRowHeadersWidth(
             System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders);
         table3->AutoResizeColumns(System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells);
     }

     void outputTableTest(Task& t) {
         double currEps = 0, maxEps = 0;
         double V = 0, U = 0;
         double x = 0,  y = 0;
         int i = 0, j = 0, stepi = 1, stepj = 1,
             ti = 0, tj = 0;
         if (t.m >= 100)
             stepj = 2;
         if (t.n >= 100)
             stepi = 2;
         if (t.m >= 500)
             stepj = 10;
         if (t.n >= 500)
             stepi = 10;
         while (j < t.m) {
             //add header rows
             if (j % stepj == 0) {
                 tj = j / stepj;
                 table1->Rows->Add();
                 table1->Rows[tj+ 1]->HeaderCell->Value = System::Convert::ToString(j);
                 table1->Rows[tj + 1]->HeaderCell->Style->BackColor = Color::LightGray;
                 table2->Rows->Add();
                 table2->Rows[tj + 1]->HeaderCell->Value = System::Convert::ToString(j);
                 table2->Rows[tj + 1]->HeaderCell->Style->BackColor = Color::LightGray;
                 table3->Rows->Add();
                 table3->Rows[tj + 1]->HeaderCell->Value = System::Convert::ToString(j);
                 table3->Rows[tj + 1]->HeaderCell->Style->BackColor = Color::LightGray;
             }
             while(i < t.n) {
                 U = u(t.a + t.h*i, t.c + t.k*j);
                 V = t.V[j][i];
                 currEps = abs(V - U);
                 if (i % stepi == 0 && j % stepj == 0) {
                     ti = i/stepi;
                     //add header cols
                     if (j == 0) {
                         table1->Columns->Add("Col" + System::Convert::ToString(ti + 1), System::Convert::ToString(i));
                         table2->Columns->Add("Col" + System::Convert::ToString(ti + 1), System::Convert::ToString(i));
                         table3->Columns->Add("Col" + System::Convert::ToString(ti + 1), System::Convert::ToString(i));
                         table1->Rows[0]->Cells[ti + 1]->Value = t.a + t.h*i;
                         table1->Rows[0]->Cells[ti + 1]->Style->BackColor = Color::Lavender;
                         table2->Rows[0]->Cells[ti + 1]->Value = t.a + t.h*i;
                         table2->Rows[0]->Cells[ti + 1]->Style->BackColor = Color::Lavender;;

                         table3->Rows[0]->Cells[ti + 1]->Value = t.a + t.h*i;
                         table3->Rows[0]->Cells[ti + 1]->Style->BackColor = Color::Lavender;
                     }
                     //data
                     table1->Rows[tj + 1]->Cells[ti + 1]->Value = V;
                     table2->Rows[tj + 1]->Cells[ti + 1]->Value = U;
                     table3->Rows[tj + 1]->Cells[ti + 1]->Value = currEps;
                 }

                 if (currEps > maxEps) {
                     maxEps = currEps;
                     x = t.a + t.h*i;
                     y = t.c + t.k*j;
                 }
                 i++;
             }

             if (j % stepj == 0) {
                 table1->Rows[tj + 1]->Cells[0]->Value = t.c + t.k*j;
                 table1->Rows[tj + 1]->Cells[0]->Style->BackColor = Color::Lavender;

                 table2->Rows[tj + 1]->Cells[0]->Value = t.c + t.k*j;
                 table2->Rows[tj + 1]->Cells[0]->Style->BackColor = Color::Lavender;;

                 table3->Rows[tj + 1]->Cells[0]->Value = t.c + t.k*j;
                 table3->Rows[tj + 1]->Cells[0]->Style->BackColor = Color::Lavender;
             }
             j++;
             i = 0;
         }
         table1->AutoResizeColumns(System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells);
         table2->AutoResizeColumns(System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells);
         table3->AutoResizeColumns(System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells);
         labelEpsM->Text = Convert::ToString(t.epsM);
         labelN->Text = Convert::ToString(t.N);
         labelEps->Text = Convert::ToString(maxEps);
         labelX->Text = Convert::ToString(x);
         labelY->Text = Convert::ToString(y);
         textBoxRes->Text = "Для решения тестовой задачи методом Зейделя использована сетка " + Environment::NewLine;
         textBoxRes->Text += "c числом разбиений по x n = " + Convert::ToString(t.n - 1) +
             " и числом разбиений по y m = " + Convert::ToString(t.m - 1) + Environment::NewLine +
             "Затрачено шагов N = " + Convert::ToString(t.N) + Environment::NewLine +
             "Невязка составила = " + Convert::ToString(t.res) + Environment::NewLine;
     }

     void outputTableMain(Task& t, Task& t2) {
         double currEps = 0, maxEps = 0;
         double V = 0, V2 = 0;
         double x = 0;
         double y = 0;
         int i = 0, j = 0, stepi = 1, stepj = 1,
             ti = 0, tj = 0;
         if (t.m >= 100)
             stepj = 2;
         if (t.n >= 100)
             stepi = 2;
         if (t.m >= 500)
             stepj = 10;
         if (t.n >= 500)
             stepi = 10;
         while (j < t.m) {
             //add header rows
             if (j % stepj == 0) {
                 tj = j / stepj;
                 table1->Rows->Add();
                 table1->Rows[tj + 1]->HeaderCell->Value = System::Convert::ToString(j);
                 table1->Rows[tj + 1]->HeaderCell->Style->BackColor = Color::LightGray;
                 table2->Rows->Add();
                 table2->Rows[tj + 1]->HeaderCell->Value = System::Convert::ToString(j*2);
                 table2->Rows[tj + 1]->HeaderCell->Style->BackColor = Color::LightGray;
                 table3->Rows->Add();
                 table3->Rows[tj + 1]->HeaderCell->Value = System::Convert::ToString(j);
                 table3->Rows[tj + 1]->HeaderCell->Style->BackColor = Color::LightGray;
             }
             while (i < t.n) {
                 V2 = t2.V[2*j][2*i];
                 V = t.V[j][i];
                 currEps = abs(V - V2);
                 if (i % stepi == 0 && j % stepj == 0) {
                     ti = i / stepi;
                     //add header cols
                     if (j == 0) {
                         table1->Columns->Add("Col" + System::Convert::ToString(ti + 1), System::Convert::ToString(i));
                         table2->Columns->Add("Col" + System::Convert::ToString(ti + 1), System::Convert::ToString(i*2));
                         table3->Columns->Add("Col" + System::Convert::ToString(ti + 1), System::Convert::ToString(i));
                         table1->Rows[0]->Cells[ti + 1]->Value = t.a + t.h*i;
                         table1->Rows[0]->Cells[ti + 1]->Style->BackColor = Color::Lavender;

                         table2->Rows[0]->Cells[ti + 1]->Value = t.a + t.h*i;
                         table2->Rows[0]->Cells[ti + 1]->Style->BackColor = Color::Lavender;;

                         table3->Rows[0]->Cells[ti + 1]->Value = t.a + t.h*i;
                         table3->Rows[0]->Cells[ti + 1]->Style->BackColor = Color::Lavender;
                     }
                     //data
                     
                     table1->Rows[tj + 1]->Cells[ti + 1]->Value = V;
                     table2->Rows[tj + 1]->Cells[ti + 1]->Value = V2;
                     table3->Rows[tj + 1]->Cells[ti + 1]->Value = currEps;
                 }

                 if (currEps > maxEps) {
                     x = t.a + t.h*i;
                     y = t.c + t.k*j;
                     maxEps = currEps;
                 }
                 i++;
             }

             if (j % stepj == 0) {
                 table1->Rows[tj + 1]->Cells[0]->Value = t.c + t.k*j;
                 table1->Rows[tj + 1]->Cells[0]->Style->BackColor = Color::Lavender;

                 table2->Rows[tj + 1]->Cells[0]->Value = t.c + t.k*j;
                 table2->Rows[tj + 1]->Cells[0]->Style->BackColor = Color::Lavender;;

                 table3->Rows[tj + 1]->Cells[0]->Value = t.c + t.k*j;
                 table3->Rows[tj + 1]->Cells[0]->Style->BackColor = Color::Lavender;
             }
             j++;
             i = 0;
         }
         table1->AutoResizeColumns(System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells);
         table2->AutoResizeColumns(System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells);
         table3->AutoResizeColumns(System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells);
         labelEpsM->Text = Convert::ToString(t.epsM);
         labelEpsM2->Text = Convert::ToString(t2.epsM);
         labelN->Text = Convert::ToString(t.N);
         labelEps->Text = Convert::ToString(maxEps);
         labelX->Text = Convert::ToString(x);
         labelY->Text = Convert::ToString(y);

         textBoxRes->Text = "Для решения основной  задачи методом Зейделя использована сетка " + Environment::NewLine;
         textBoxRes->Text += "c числом разбиений по x n = " + Convert::ToString(t.n - 1) +
             " и числом разбиений по y m = " + Convert::ToString(t.m - 1) + Environment::NewLine +
             "Затрачено шагов N = " + Convert::ToString(t.N) + Environment::NewLine +
             "Невязка составила = " + Convert::ToString(t.res) + Environment::NewLine
             + "При пересчете с половинным шагом достигнута точность метода"
             + Environment::NewLine + "eps = " + Convert::ToString(t2.epsM)
             + Environment::NewLine + "Затрачено шагов N = " + Convert::ToString(t2.N) + Environment::NewLine +
             "Невязка составила = " + Convert::ToString(t2.res) + Environment::NewLine;
     }
    private: System::Void btnCalc_Click(System::Object^  sender, System::EventArgs^  e) {
        double(*m1)(double) = mu1_test;
        double(*m2)(double) = mu2_test;
        double(*m3)(double) = mu3_test;
        double(*m4)(double) = mu4_test;
        double(*F)(double, double) = f_test;
        String^ name = "U";
        if (selectTask->SelectedIndex == 1) {
            m1 = mu1;
            m2 = mu2;
            m3 = mu3;
            m4 = mu4;
            F = f;
            name = "V2";
        }
        Task t(Convert::ToInt32(textBoxNx->Text), Convert::ToInt32(textBoxMy->Text),
            -1.0, 1.0, -1.0, 1.0,
            Convert::ToDouble(textBoxEps->Text), Convert::ToInt32(textBoxN->Text),
            m1, m2, m3, m4, F);
       
        t.Zeidel();
        t.Residual();
        prepareTables(t);
        if (selectTask->SelectedIndex == 0) {
            outputTableTest(t);
        }
        else {
            Task t2(2*Convert::ToInt32(textBoxNx->Text), 2*Convert::ToInt32(textBoxMy->Text),
                -1.0, 1.0, -1.0, 1.0,
                Convert::ToDouble(textBoxEps->Text), Convert::ToInt32(textBoxN->Text),
                m1, m2, m3, m4, F);
            t2.Zeidel();
            t2.Residual();
            outputTableMain(t, t2);
        }
        
    }

    private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
        selectTask->SelectedIndex = 0;
        textBoxInfo->Text = "laplace operator U(x,y) = -f(x,y), x = (a,b), y = (c,d)"+ Environment::NewLine;
        textBoxInfo->Text += "a = -1, b = 1, c = 1, d = -1" + Environment::NewLine;
        textBoxInfo->Text += "U(a,y) = exp(-y^2), U(b,y) = exp(-y^2)" + Environment::NewLine;
        textBoxInfo->Text += "U(x,c) = exp(-x^2), U(x,d) = exp(-x^2)" + Environment::NewLine;
        textBoxInfo->Text += "U(x, y) = exp(1-x^2-y^2)" + Environment::NewLine;
        textBoxInfo->Text += "f(x,y) =  -4*exp(1 - x^2 - y^2)*(x^2 + y^2 - 1);" + Environment::NewLine;
    }

private: System::Void selectTask_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
    if (selectTask->SelectedIndex == 1) {
        textBoxInfo->Text = "laplace operator U(x,y) = -f(x,y), x = (a,b), y = (c,d)" + Environment::NewLine;
        textBoxInfo->Text += "a = -1, b = 1, c = 1, d = -1" + Environment::NewLine;
        textBoxInfo->Text += "U(a,y) = 1-y^2, U(b,y) = (1-y^2)*exp(y)" + Environment::NewLine;
        textBoxInfo->Text += "U(x,c) = 1-x^2, U(x,d) = 1-x^2" + Environment::NewLine;
        textBoxInfo->Text += "f(x,y) =  |x^2-y^2|" + Environment::NewLine;
        tabControl1->TabPages[1]->Text = "V2(x,y)";
        tabControl1->TabPages[2]->Text = "|V(x,y) - V2(x,y)|";
        table1->Rows->Clear();
        table1->Columns->Clear();
        table2->Rows->Clear();
        table2->Columns->Clear();
        table3->Rows->Clear();
        table3->Columns->Clear();
        textBoxRes->Clear();
        labelUV->Text = "max|V-V2| = ";
        eps2->Show();
        labelEpsM2->Show();
    }
    else {
        textBoxInfo->Text = "laplace operator U(x,y) = -f(x,y), x = (a,b), y = (c,d)" + Environment::NewLine;
        textBoxInfo->Text += "a = -1, b = 1, c = 1, d = -1" + Environment::NewLine;
        textBoxInfo->Text += "U(a,y) = exp(-y^2), U(b,y) = exp(-y^2)" + Environment::NewLine;
        textBoxInfo->Text += "U(x,c) = exp(-x^2), U(x,d) = exp(-x^2)" + Environment::NewLine;
        textBoxInfo->Text += "U(x, y) = exp(1-x^2-y^2)" + Environment::NewLine;
        textBoxInfo->Text += "f(x,y) =  -4*exp(1 - x^2 - y^2)*(x^2 + y^2 - 1)" + Environment::NewLine;
        tabControl1->TabPages[1]->Text = "U(x,y)";
        tabControl1->TabPages[2]->Text = "|U(x,y) - V(x,y)|";
        table1->Rows->Clear();
        table1->Columns->Clear();
        table2->Rows->Clear();
        table2->Columns->Clear();
        table3->Rows->Clear();
        table3->Columns->Clear();
        textBoxRes->Clear();
        labelUV->Text = "max|V-U| = ";
        eps2->Hide();
        labelEpsM2->Hide();
    }
}
};
}
