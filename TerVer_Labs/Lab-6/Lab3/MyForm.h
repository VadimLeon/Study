#pragma once

#include <iostream>
#include <string>
#include<stdlib.h>
#include"RK4.h"
#include"CheckLF.h"
using namespace std;
double x, v, h, V1, V2;
int C1=0, C2=0;
bool TypeFlag;


namespace Lab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Globalization;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;
	
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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button2;











	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label6;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::DataGridView^  dataGridView3;









	private: System::Windows::Forms::Label^  label18;
	private: ZedGraph::ZedGraphControl^  zedGraphControl3;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox33;
private: System::Windows::Forms::TextBox^  textBox34;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TextBox^  textBox35;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn18;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;













	private: System::ComponentModel::IContainer^  components;



	protected:















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(732, 13);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(420, 356);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(13, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1238, 447);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox21);
			this->tabPage1->Controls->Add(this->textBox22);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->textBox14);
			this->tabPage1->Controls->Add(this->textBox13);
			this->tabPage1->Controls->Add(this->textBox12);
			this->tabPage1->Controls->Add(this->textBox11);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->zedGraphControl1);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1230, 421);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тест";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(41, 167);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(54, 21);
			this->textBox21->TabIndex = 39;
			this->textBox21->Text = L"0.0001";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(41, 140);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(54, 21);
			this->textBox22->TabIndex = 38;
			this->textBox22->Text = L"5";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 170);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 13);
			this->label13->TabIndex = 37;
			this->label13->Text = L"E";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 143);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(33, 13);
			this->label14->TabIndex = 36;
			this->label14->Text = L"Xmax";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(9, 335);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 21);
			this->textBox14->TabIndex = 17;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(9, 307);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 21);
			this->textBox13->TabIndex = 16;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(9, 279);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 21);
			this->textBox12->TabIndex = 15;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(9, 252);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 21);
			this->textBox11->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 223);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"С контролем";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"N";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(40, 114);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(55, 21);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"10";
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column11,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9,
					this->Column10
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Location = System::Drawing::Point(108, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(591, 409);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 63);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"h";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(40, 87);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(55, 21);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"0.001";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 194);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Без контроля";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Eps";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"V0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"X0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(40, 60);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(55, 21);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"0.001";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(40, 33);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(55, 21);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(40, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(55, 21);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"1";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox20);
			this->tabPage2->Controls->Add(this->textBox19);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->textBox18);
			this->tabPage2->Controls->Add(this->textBox17);
			this->tabPage2->Controls->Add(this->textBox16);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->zedGraphControl2);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(866, 369);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Осн1";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(41, 168);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(51, 21);
			this->textBox20->TabIndex = 35;
			this->textBox20->Text = L"0.0001";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(41, 141);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(51, 21);
			this->textBox19->TabIndex = 34;
			this->textBox19->Text = L"5";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 171);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 33;
			this->label12->Text = L"E";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 144);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 13);
			this->label11->TabIndex = 32;
			this->label11->Text = L"Xmax";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(714, 245);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 21);
			this->textBox18->TabIndex = 31;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(714, 217);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 21);
			this->textBox17->TabIndex = 30;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(714, 189);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 21);
			this->textBox16->TabIndex = 29;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(714, 162);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 21);
			this->textBox15->TabIndex = 28;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 224);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 23);
			this->button3->TabIndex = 27;
			this->button3->Text = L"С контролем";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"N";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(41, 114);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(51, 21);
			this->textBox6->TabIndex = 25;
			this->textBox6->Text = L"10";
			// 
			// dataGridView2
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView2->Location = System::Drawing::Point(109, 6);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView2->Size = System::Drawing::Size(705, 150);
			this->dataGridView2->TabIndex = 24;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"i";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Xi";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Vi";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"V2i";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Vi-V2i";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"ОЛП";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"hi";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"C1";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"C2";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 23;
			this->label6->Text = L"h";
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(109, 159);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(599, 204);
			this->zedGraphControl2->TabIndex = 14;
			this->zedGraphControl2->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl2_Load);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(41, 87);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(51, 21);
			this->textBox7->TabIndex = 22;
			this->textBox7->Text = L"0.001";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 195);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 23);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Без контроля";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 90);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Eps";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 36);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"V0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"X0";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(41, 60);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(51, 21);
			this->textBox8->TabIndex = 17;
			this->textBox8->Text = L"0.001";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(41, 33);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(51, 21);
			this->textBox9->TabIndex = 16;
			this->textBox9->Text = L"1";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(41, 6);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(51, 21);
			this->textBox10->TabIndex = 15;
			this->textBox10->Text = L"1";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->textBox35);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->textBox34);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->textBox23);
			this->tabPage3->Controls->Add(this->textBox24);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->textBox25);
			this->tabPage3->Controls->Add(this->textBox26);
			this->tabPage3->Controls->Add(this->textBox27);
			this->tabPage3->Controls->Add(this->textBox28);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->textBox29);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->zedGraphControl3);
			this->tabPage3->Controls->Add(this->textBox30);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->textBox31);
			this->tabPage3->Controls->Add(this->textBox32);
			this->tabPage3->Controls->Add(this->textBox33);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(866, 369);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Осн2";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(716, 330);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 64;
			this->button9->Text = L"Faz";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(717, 300);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 63;
			this->button8->Text = L"XOV2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(717, 270);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 62;
			this->button7->Text = L"XOV1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(43, 221);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(51, 21);
			this->textBox35->TabIndex = 61;
			this->textBox35->Text = L"2";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(15, 224);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(13, 13);
			this->label23->TabIndex = 60;
			this->label23->Text = L"a";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(43, 58);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(51, 21);
			this->textBox34->TabIndex = 59;
			this->textBox34->Text = L"1";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(9, 61);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(25, 13);
			this->label22->TabIndex = 58;
			this->label22->Text = L"V02";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(43, 193);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(51, 21);
			this->textBox23->TabIndex = 57;
			this->textBox23->Text = L"0.0001";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(43, 166);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(51, 21);
			this->textBox24->TabIndex = 56;
			this->textBox24->Text = L"5";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(14, 196);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 55;
			this->label15->Text = L"E";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(8, 169);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(33, 13);
			this->label16->TabIndex = 54;
			this->label16->Text = L"Xmax";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(716, 242);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 21);
			this->textBox25->TabIndex = 53;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(716, 214);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 21);
			this->textBox26->TabIndex = 52;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(716, 186);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(100, 21);
			this->textBox27->TabIndex = 51;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(716, 159);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 21);
			this->textBox28->TabIndex = 50;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(8, 277);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 23);
			this->button5->TabIndex = 49;
			this->button5->Text = L"С контролем";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(14, 142);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(14, 13);
			this->label17->TabIndex = 48;
			this->label17->Text = L"N";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(43, 139);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(51, 21);
			this->textBox29->TabIndex = 47;
			this->textBox29->Text = L"10";
			// 
			// dataGridView3
			// 
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
				this->dataGridViewTextBoxColumn10,
					this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13, this->Column12, this->Column13,
					this->dataGridViewTextBoxColumn14, this->Column14, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16, this->dataGridViewTextBoxColumn17,
					this->dataGridViewTextBoxColumn18
			});
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView3->Location = System::Drawing::Point(111, 3);
			this->dataGridView3->Name = L"dataGridView3";
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView3->Size = System::Drawing::Size(705, 150);
			this->dataGridView3->TabIndex = 46;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"i";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Xi";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"V1i";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"V2i";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"V1i/2";
			this->Column12->Name = L"Column12";
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"V2i/2";
			this->Column13->Name = L"Column13";
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"V1i-V1i/2";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"V2i-V2i/2";
			this->Column14->Name = L"Column14";
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"ОЛП";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"hi";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"C1";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"C2";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(9, 88);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 45;
			this->label18->Text = L"h";
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(111, 156);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(599, 204);
			this->zedGraphControl3->TabIndex = 36;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(43, 112);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(51, 21);
			this->textBox30->TabIndex = 44;
			this->textBox30->Text = L"0.001";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(8, 248);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(86, 23);
			this->button6->TabIndex = 43;
			this->button6->Text = L"Без контроля";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(9, 115);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(24, 13);
			this->label19->TabIndex = 42;
			this->label19->Text = L"Eps";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(8, 33);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(25, 13);
			this->label20->TabIndex = 41;
			this->label20->Text = L"V01";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(9, 6);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(19, 13);
			this->label21->TabIndex = 40;
			this->label21->Text = L"X0";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(43, 85);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(51, 21);
			this->textBox31->TabIndex = 39;
			this->textBox31->Text = L"0.001";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(43, 30);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(51, 21);
			this->textBox32->TabIndex = 38;
			this->textBox32->Text = L"1";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(43, 3);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(51, 21);
			this->textBox33->TabIndex = 37;
			this->textBox33->Text = L"1";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"i";
			this->Column11->Name = L"Column11";
			this->Column11->Width = 30;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Xi";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Vi";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"V2i";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Vi-V2i";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"ОЛП";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"hi";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"C1";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"C2";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Ui";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"|Ui-Vi|";
			this->Column10->Name = L"Column10";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1263, 463);
			this->Controls->Add(this->tabControl1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"ArithmeticProcessing";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();

	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	PointPairList^ f2_list = gcnew ZedGraph::PointPairList();	

	double MaxLp = 0, MinLp = 10000;
	double E, Xmax;
	C1 = 0;
	C2 = 0;
	x = Convert::ToDouble(textBox1->Text, CultureInfo::InvariantCulture);
	v = Convert::ToDouble(textBox2->Text, CultureInfo::InvariantCulture);
	h = Convert::ToDouble(textBox3->Text, CultureInfo::InvariantCulture);
	E = Convert::ToDouble(textBox21->Text, CultureInfo::InvariantCulture);
	Xmax = Convert::ToDouble(textBox22->Text, CultureInfo::InvariantCulture);
	double eps = Convert::ToDouble(textBox4->Text, CultureInfo::InvariantCulture);
	int k = Convert::ToDouble(textBox5->Text);
	int i = 1;
	dataGridView1->Rows->Add();
	f2_list->Add(x, v);
	f1_list->Add(x, v);
	int num = 1;
	double C = v / exp(3 * x);
	while ((i < k) && (Xmax - x > E))
	{
		double vStart = v;	
		double xStart = x;
		dataGridView1->Rows->Add();
		HalfStepRungeKutt4(num, x, v, h);
		dataGridView1->Rows[i]->Cells[0]->Value = i;
		dataGridView1->Rows[i]->Cells[3]->Value = v;
		v = vStart;
		//x = xStart;
		RungeKutt4(num, x, v, h);
		dataGridView1->Rows[i]->Cells[2]->Value = v;
		dataGridView1->Rows[i]->Cells[1]->Value = x;
		double c1 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[2]->Value->ToString());
		double c2 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[3]->Value->ToString());
		dataGridView1->Rows[i]->Cells[4]->Value = c1 - c2;
		double LocalFault = Convert::ToDouble(dataGridView1->Rows[i]->Cells[4]->Value->ToString());
		LocalFault = abs( LocalFault * 16 / 15);
		if (LocalFault < MinLp)
		{
			MinLp = LocalFault;
			textBox11->Text = "MinLP = " + MinLp;
			textBox12->Text = Convert::ToString(x);
		}
		else if (LocalFault > MaxLp)
		{
			MaxLp = LocalFault;
			textBox13->Text = "MaxLP = " + MaxLp;
			textBox14->Text = Convert::ToString(x);
		}
		dataGridView1->Rows[i]->Cells[5]->Value = LocalFault;
		dataGridView1->Rows[i]->Cells[6]->Value = h;
		dataGridView1->Rows[i]->Cells[7]->Value = C1;
		dataGridView1->Rows[i]->Cells[8]->Value = C2;
		
		dataGridView1->Rows[i]->Cells[9]->Value = C * exp(3 * x); //1 + exp(3 * x) + C;
		c1 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[9]->Value->ToString());
		c2 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[2]->Value->ToString());
		dataGridView1->Rows[i]->Cells[10]->Value = abs(c1 - c2);
		double kk = Convert::ToDouble(dataGridView1->Rows[i]->Cells[9]->Value->ToString());
		f2_list->Add(x, kk);
		f1_list->Add(x, v);
		
		i++;
		
	}
	LineItem ^Curve1 = panel->AddCurve("Метод 1", f1_list, Color::Red, SymbolType::None);
	LineItem ^Curve2 = panel->AddCurve("Метод 1", f2_list, Color::Green, SymbolType:: None);
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();
	
	i = 0;
	

}
private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
	double MaxLp = 0, MinLp = 10000;
	double E, Xmax;
	C1 = 0;
	C2 = 0;
	x = Convert::ToDouble(textBox1->Text, CultureInfo::InvariantCulture);
	v = Convert::ToDouble(textBox2->Text, CultureInfo::InvariantCulture);
	h = Convert::ToDouble(textBox3->Text, CultureInfo::InvariantCulture);
	E = Convert::ToDouble(textBox21->Text, CultureInfo::InvariantCulture);
	Xmax = Convert::ToDouble(textBox22->Text, CultureInfo::InvariantCulture);
	double eps = Convert::ToDouble(textBox4->Text, CultureInfo::InvariantCulture);
	int k = Convert::ToDouble(textBox5->Text);
	int i = 1;
	dataGridView1->Rows->Add();
	f2_list->Add(x, v);
	f1_list->Add(x, v);
	int num = 1;
	double C = v / exp(3 * x);
	while ((i < k) && (Xmax - x > E))
	{
		double vStart = v;
		double hStart = h;
		double xStart = x;
		double vRK4 = 0;
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[0]->Value = i;
		RungeKutt4(num, x, v, h);
		v = vStart;
		x = xStart;
		CheckLocalFault(num, xStart, v, h, eps, C1, C2);
	    RungeKutt4(num, x, v, h);		
		dataGridView1->Rows[i]->Cells[2]->Value = v;
		dataGridView1->Rows[i]->Cells[1]->Value = x;
		v = vStart;
		//x = xStart;
		HalfStepRungeKutt4(num, xStart, v, h);
		dataGridView1->Rows[i]->Cells[3]->Value = v;
		double c1 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[2]->Value->ToString());
		double c2 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[3]->Value->ToString());
		dataGridView1->Rows[i]->Cells[4]->Value = c1 - c2;
		double LocalFault = Convert::ToDouble(dataGridView1->Rows[i]->Cells[4]->Value->ToString());
		LocalFault = abs(LocalFault * 16 / 15);
		if (LocalFault < MinLp)
		{
			MinLp = LocalFault;
			textBox11->Text = "MinLP = " + MinLp;
			textBox12->Text = "x = " + Convert::ToString(x);
		}
		else if (LocalFault > MaxLp)
		{
			MaxLp = LocalFault;
			textBox13->Text = "MaxLP = " + MaxLp;
			textBox14->Text = "x = " + Convert::ToString(x);
		}
		dataGridView1->Rows[i]->Cells[5]->Value = LocalFault;
		dataGridView1->Rows[i]->Cells[6]->Value = h;
		dataGridView1->Rows[i]->Cells[7]->Value = C1;
		dataGridView1->Rows[i]->Cells[8]->Value = C2;
		dataGridView1->Rows[i]->Cells[9]->Value = C * exp(3 * x); //1 + exp(3 * x) + C;
		c1 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[9]->Value->ToString());
		c2 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[2]->Value->ToString());
		dataGridView1->Rows[i]->Cells[10]->Value = c1 - c2;
		f2_list->Add(x, Convert::ToDouble(dataGridView1->Rows[i]->Cells[9]->Value->ToString()));
		f1_list->Add(x, v);
		i++;
	}
	LineItem ^Curve1 = panel->AddCurve("Метод 1", f1_list, Color::Red, SymbolType::None);
	LineItem ^Curve2 = panel->AddCurve("Метод 1", f2_list, Color::Green, SymbolType::None);
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();

}
private: System::Void zedGraphControl2_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView2->Rows->Clear();

	GraphPane^ panel = zedGraphControl2->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	double MaxLp = 0, MinLp = 10000;
	double E, Xmax;

	C1 = 0;
	C2 = 0;
	x = Convert::ToDouble(textBox10->Text, CultureInfo::InvariantCulture);
	v = Convert::ToDouble(textBox9->Text, CultureInfo::InvariantCulture);
	h = Convert::ToDouble(textBox8->Text, CultureInfo::InvariantCulture);
	E = Convert::ToDouble(textBox20->Text, CultureInfo::InvariantCulture);
	Xmax = Convert::ToDouble(textBox19->Text, CultureInfo::InvariantCulture);
	double eps = Convert::ToDouble(textBox7->Text, CultureInfo::InvariantCulture);
	int k = Convert::ToDouble(textBox6->Text);
	int i = 0;
	int num = 2;
	while ((i < k) && (Xmax - x > E))
	{
		double vStart = v;
		double xStart = x;
		dataGridView2->Rows->Add();
		HalfStepRungeKutt4(num, x, v, h);
		dataGridView2->Rows[i]->Cells[0]->Value = i;
		dataGridView2->Rows[i]->Cells[3]->Value = v;
		v = vStart;
		//x = xStart;
		RungeKutt4(num, x, v, h);
		dataGridView2->Rows[i]->Cells[2]->Value = v;
		dataGridView2->Rows[i]->Cells[1]->Value = x;
		double c1 = Convert::ToDouble(dataGridView2->Rows[i]->Cells[2]->Value->ToString());
		double c2 = Convert::ToDouble(dataGridView2->Rows[i]->Cells[3]->Value->ToString());
		dataGridView2->Rows[i]->Cells[4]->Value = c1 - c2;
		double LocalFault = Convert::ToDouble(dataGridView2->Rows[i]->Cells[4]->Value->ToString());
		LocalFault = abs(LocalFault * 16 / 15);
		if (LocalFault < MinLp)
		{
			MinLp = LocalFault;
			textBox15->Text = "MinLP = " + MinLp;
			textBox16->Text = "x = " + Convert::ToString(x);
		}
		else if (LocalFault > MaxLp)
		{
			MaxLp = LocalFault;
			textBox17->Text = "MaxLP = " + MaxLp;
			textBox18->Text = "x = " + Convert::ToString(x);
		}
		dataGridView2->Rows[i]->Cells[5]->Value = LocalFault;
		dataGridView2->Rows[i]->Cells[6]->Value = h;
		dataGridView2->Rows[i]->Cells[7]->Value = C1;
		dataGridView2->Rows[i]->Cells[8]->Value = C2;
		f1_list->Add(x, v);
		i++;

	}
	LineItem ^Curve1 = panel->AddCurve("Метод 1", f1_list, Color::Red, SymbolType::None);
	zedGraphControl2->AxisChange();
	// Обновляем график
	zedGraphControl2->Invalidate();
	i = 0;


}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView2->Rows->Clear();
	GraphPane^ panel = zedGraphControl2->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	double MaxLp = 0, MinLp = 10000;
	double E, Xmax;
	C1 = 0;
	C2 = 0;
	x = Convert::ToDouble(textBox10->Text, CultureInfo::InvariantCulture);
	v = Convert::ToDouble(textBox9->Text, CultureInfo::InvariantCulture);
	h = Convert::ToDouble(textBox8->Text, CultureInfo::InvariantCulture);
	E = Convert::ToDouble(textBox20->Text, CultureInfo::InvariantCulture);
	Xmax = Convert::ToDouble(textBox19->Text, CultureInfo::InvariantCulture);
	double eps = Convert::ToDouble(textBox7->Text, CultureInfo::InvariantCulture);
	int k = Convert::ToDouble(textBox6->Text);
	int i = 0;
	int num = 2;
	while ((i < k) && (Xmax - x > E))
	{
		double vStart = v;
		double hStart = h;
		double xStart = x;		
		dataGridView2->Rows->Add();
		dataGridView2->Rows[i]->Cells[0]->Value = i;
		RungeKutt4(num, x, v, h);		
		v = vStart;
		x = xStart;
		CheckLocalFault(num, xStart, v, h, eps, C1, C2);
		RungeKutt4(num, x, v, h);
		dataGridView2->Rows[i]->Cells[2]->Value = v;
		dataGridView2->Rows[i]->Cells[1]->Value = x;
		v = vStart;
		//x = xStart;
		HalfStepRungeKutt4(num, xStart, v, h);
		dataGridView2->Rows[i]->Cells[3]->Value = v;
		double c1 = Convert::ToDouble(dataGridView2->Rows[i]->Cells[2]->Value->ToString());
		double c2 = Convert::ToDouble(dataGridView2->Rows[i]->Cells[3]->Value->ToString());
		dataGridView2->Rows[i]->Cells[4]->Value = c1 - c2;
		double LocalFault = Convert::ToDouble(dataGridView2->Rows[i]->Cells[4]->Value->ToString());
		LocalFault = abs(LocalFault * 16 / 15);
		if (LocalFault < MinLp)
		{
			MinLp = LocalFault;
			textBox15->Text = "MinLP = " + MinLp;
			textBox16->Text = "x = " + Convert::ToString(x);
		}
		else if (LocalFault > MaxLp)
		{
			MaxLp = LocalFault;
			textBox17->Text = "MaxLP = " + MaxLp;
			textBox18->Text = "x = " + Convert::ToString(x);
		}
		dataGridView2->Rows[i]->Cells[5]->Value = LocalFault;
		dataGridView2->Rows[i]->Cells[6]->Value = h;
		dataGridView2->Rows[i]->Cells[7]->Value = C1;
		dataGridView2->Rows[i]->Cells[8]->Value = C2;
		f1_list->Add(x, Convert::ToDouble(dataGridView2->Rows[i]->Cells[2]->Value->ToString()));
		i++;
	}
	LineItem ^Curve1 = panel->AddCurve("Метод 1", f1_list, Color::Red, SymbolType::None);
	zedGraphControl2->AxisChange();
	// Обновляем график
	zedGraphControl2->Invalidate();
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void Test3(double E, double Xmax, double eps, int k, double a)
{	
	dataGridView3->Rows->Clear();
	f1_list = gcnew ZedGraph::PointPairList();
	f2_list = gcnew ZedGraph::PointPairList();
	f3_list = gcnew ZedGraph::PointPairList();
	double MaxLp = 0, MinLp = 10000;
	C1 = 0;
	C2 = 0;	
	int i = 0;
	int num = 2;
	while ((i < k) && (Xmax - x > E))
	{
		double v1Start = V1;
		double v2Start = V2;
		double xStart = x;
		dataGridView3->Rows->Add();
		RungeKutt4System(x, V1, V2, h / 2, a);
		RungeKutt4System(x, V1, V2, h / 2, a);
		dataGridView3->Rows[i]->Cells[0]->Value = i;
		dataGridView3->Rows[i]->Cells[4]->Value = V1;
		dataGridView3->Rows[i]->Cells[5]->Value = V2;
		V1 = v1Start;
		V2 = v2Start;
		x = xStart;
		RungeKutt4System(x, V1, V2, h, a);
		dataGridView3->Rows[i]->Cells[2]->Value = V1;
		dataGridView3->Rows[i]->Cells[3]->Value = V2;
		dataGridView3->Rows[i]->Cells[1]->Value = x;
		double c1 = Convert::ToDouble(dataGridView3->Rows[i]->Cells[2]->Value->ToString());
		double c2 = Convert::ToDouble(dataGridView3->Rows[i]->Cells[4]->Value->ToString());
		dataGridView3->Rows[i]->Cells[6]->Value = c1 - c2;
		c1 = Convert::ToDouble(dataGridView3->Rows[i]->Cells[3]->Value->ToString());
		c2 = Convert::ToDouble(dataGridView3->Rows[i]->Cells[5]->Value->ToString());
		dataGridView3->Rows[i]->Cells[7]->Value = c1 - c2;
		double LocalFault1 = Convert::ToDouble(dataGridView3->Rows[i]->Cells[6]->Value->ToString());
		LocalFault1 = abs(LocalFault1 * 16 / 15);
		double LocalFault2 = Convert::ToDouble(dataGridView3->Rows[i]->Cells[7]->Value->ToString());
		LocalFault2 = abs(LocalFault2 * 16 / 15);
		double LocalFault = sqrt(LocalFault1 * LocalFault1 + LocalFault2 * LocalFault2);

		if (LocalFault < MinLp)
		{
			MinLp = LocalFault;
			textBox28->Text = "MinLP = " + MinLp;
			textBox27->Text = "x = " + Convert::ToString(x);
		}
		else if (LocalFault > MaxLp)
		{
			MaxLp = LocalFault;
			textBox26->Text = "MaxLP = " + MaxLp;
			textBox25->Text = "x = " + Convert::ToString(x);
		}
		dataGridView3->Rows[i]->Cells[8]->Value = LocalFault;
		dataGridView3->Rows[i]->Cells[9]->Value = h;
		dataGridView3->Rows[i]->Cells[10]->Value = C1;
		dataGridView3->Rows[i]->Cells[11]->Value = C2;

		f1_list->Add(x, V1);
		f2_list->Add(x, V2);
		f3_list->Add(V1, V2);
		i++;

	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	double E, Xmax;
	x = Convert::ToDouble(textBox33->Text, CultureInfo::InvariantCulture);
	V1 = Convert::ToDouble(textBox32->Text, CultureInfo::InvariantCulture);
	V2 = Convert::ToDouble(textBox34->Text, CultureInfo::InvariantCulture);
	h = Convert::ToDouble(textBox31->Text, CultureInfo::InvariantCulture);
	E = Convert::ToDouble(textBox30->Text, CultureInfo::InvariantCulture);
	Xmax = Convert::ToDouble(textBox24->Text, CultureInfo::InvariantCulture);
	double eps = Convert::ToDouble(textBox23->Text, CultureInfo::InvariantCulture);
	int k = Convert::ToDouble(textBox29->Text);
	double a = Convert::ToDouble(textBox35->Text, CultureInfo::InvariantCulture);
	TypeFlag = 1;
	GraphPane^ panel = zedGraphControl3->GraphPane;
	panel->CurveList->Clear();
	Test3(E, Xmax, eps, k, a);
	LineItem ^Curve1 = panel->AddCurve("Метод 1", f1_list, Color::Red, SymbolType::None);
	zedGraphControl3->AxisChange();
	// Обновляем график
	zedGraphControl3->Invalidate();
//	i = 0;

}
public: System::Void Test31(double E, double Xmax, double eps, int k, double a)
{
	dataGridView3->Rows->Clear();

	
	f1_list = gcnew ZedGraph::PointPairList();
	f2_list = gcnew ZedGraph::PointPairList();
	f3_list = gcnew ZedGraph::PointPairList();
	double MaxLp = 0, MinLp = 10000;
	C1 = 0;
	C2 = 0;	
	int i = 0;
	int num = 2;
	while ((i < k) && (Xmax - x > E))
	{
		double v1Start = V1;
		double v2Start = V2;
		double xStart = x;
		dataGridView3->Rows->Add();
		CheckLocalFaultSystem(x, V1, V2, h, a, eps, C1, C2);
		RungeKutt4System(x, V1, V2, h / 2, a);
		RungeKutt4System(x, V1, V2, h / 2, a);
		dataGridView3->Rows[i]->Cells[0]->Value = i;
		dataGridView3->Rows[i]->Cells[4]->Value = V1;
		dataGridView3->Rows[i]->Cells[5]->Value = V2;
		V1 = v1Start;
		V2 = v2Start;
		x = xStart;
		RungeKutt4System(x, V1, V2, h, a);
		dataGridView3->Rows[i]->Cells[2]->Value = V1;
		dataGridView3->Rows[i]->Cells[3]->Value = V2;
		dataGridView3->Rows[i]->Cells[1]->Value = x;
		double c1 = Convert::ToDouble(dataGridView3->Rows[i]->Cells[2]->Value->ToString());
		double c2 = Convert::ToDouble(dataGridView3->Rows[i]->Cells[4]->Value->ToString());
		dataGridView3->Rows[i]->Cells[6]->Value = c1 - c2;
		c1 = Convert::ToDouble(dataGridView3->Rows[i]->Cells[3]->Value->ToString());
		c2 = Convert::ToDouble(dataGridView3->Rows[i]->Cells[5]->Value->ToString());
		dataGridView3->Rows[i]->Cells[7]->Value = c1 - c2;
		double LocalFault1 = Convert::ToDouble(dataGridView3->Rows[i]->Cells[6]->Value->ToString());
		LocalFault1 = abs(LocalFault1 * 16 / 15);
		double LocalFault2 = Convert::ToDouble(dataGridView3->Rows[i]->Cells[7]->Value->ToString());
		LocalFault2 = abs(LocalFault2 * 16 / 15);
		double LocalFault = sqrt(LocalFault1 * LocalFault1 + LocalFault2 * LocalFault2);

		if (LocalFault < MinLp)
		{
			MinLp = LocalFault;
			textBox28->Text = "MinLP = " + MinLp;
			textBox27->Text = "x = " + Convert::ToString(x);
		}
		else if (LocalFault > MaxLp)
		{
			MaxLp = LocalFault;
			textBox26->Text = "MaxLP = " + MaxLp;
			textBox25->Text = "x = " + Convert::ToString(x);
		}
		dataGridView3->Rows[i]->Cells[8]->Value = LocalFault;
		dataGridView3->Rows[i]->Cells[9]->Value = h;
		dataGridView3->Rows[i]->Cells[10]->Value = C1;
		dataGridView3->Rows[i]->Cells[11]->Value = C2;

		f1_list->Add(x, V1);
		f2_list->Add(x, V2);
		f3_list->Add(V1, V2);
		i++;

	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	double E, Xmax;
	x = Convert::ToDouble(textBox33->Text, CultureInfo::InvariantCulture);
	V1 = Convert::ToDouble(textBox32->Text, CultureInfo::InvariantCulture);
	V2 = Convert::ToDouble(textBox34->Text, CultureInfo::InvariantCulture);
	h = Convert::ToDouble(textBox31->Text, CultureInfo::InvariantCulture);
	E = Convert::ToDouble(textBox30->Text, CultureInfo::InvariantCulture);
	Xmax = Convert::ToDouble(textBox24->Text, CultureInfo::InvariantCulture);
	double eps = Convert::ToDouble(textBox23->Text, CultureInfo::InvariantCulture);
	int k = Convert::ToDouble(textBox29->Text);
	double a = Convert::ToDouble(textBox35->Text, CultureInfo::InvariantCulture);
	TypeFlag = 0;
	GraphPane^ panel = zedGraphControl3->GraphPane;
	panel->CurveList->Clear();
	Test31(E, Xmax, eps, k, a);
	LineItem ^Curve1 = panel->AddCurve("Метод 1", f1_list, Color::Red, SymbolType::None);
	zedGraphControl3->AxisChange();
	// Обновляем график
	zedGraphControl3->Invalidate();
//	i = 0;

}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	GraphPane^ panel = zedGraphControl3->GraphPane;
	panel->CurveList->Clear();
	LineItem ^Curve1 = panel->AddCurve("XOV1", f1_list, Color::Red, SymbolType::None);
	zedGraphControl3->AxisChange();
	// Обновляем график
	zedGraphControl3->Invalidate();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
{
	GraphPane^ panel = zedGraphControl3->GraphPane;
	panel->CurveList->Clear();
	LineItem ^Curve1 = panel->AddCurve("XOV2", f2_list, Color::Red, SymbolType::None);
	zedGraphControl3->AxisChange();
	// Обновляем график
	zedGraphControl3->Invalidate();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
{
	double E, Xmax;
	x = Convert::ToDouble(textBox33->Text, CultureInfo::InvariantCulture);
	V1 = Convert::ToDouble(textBox32->Text, CultureInfo::InvariantCulture);
	V2 = Convert::ToDouble(textBox34->Text, CultureInfo::InvariantCulture);
	h = Convert::ToDouble(textBox31->Text, CultureInfo::InvariantCulture);
	E = Convert::ToDouble(textBox30->Text, CultureInfo::InvariantCulture);
	Xmax = Convert::ToDouble(textBox24->Text, CultureInfo::InvariantCulture);
	double eps = Convert::ToDouble(textBox23->Text, CultureInfo::InvariantCulture);
	int k = Convert::ToDouble(textBox29->Text);
	double a = Convert::ToDouble(textBox35->Text, CultureInfo::InvariantCulture);
	GraphPane^ panel = zedGraphControl3->GraphPane;
	panel->CurveList->Clear();
	/*for (int i = 0; i < 5; i++)
	{
		x = i;
		V1 = i;
		V2 = i ;
		int j;
		if (TypeFlag)
		{
			while ((j < k) && (Xmax - x > E))
			{				
				RungeKutt4System(x, V1, V2, h, a);
				f3_list->Add(V1, V2);
				j++;
			}
		}
		else
		{
			while ((j < k) && (Xmax - x > E))
			{
				CheckLocalFaultSystem(x, V1, V2, h, a, eps, C1, C2);
				RungeKutt4System(x, V1, V2, h, a);
				f3_list->Add(V1, V2);
				j++;
			}
		}
		LineItem ^Curve1 = panel->AddCurve("Faz", f3_list, Color::Red, SymbolType::None);
		zedGraphControl3->AxisChange();
	}*/

	LineItem ^Curve1 = panel->AddCurve("Faz", f3_list, Color::Red, SymbolType::None);
	zedGraphControl3->AxisChange();
	// Обновляем график
	zedGraphControl3->Invalidate();
}

};
}
