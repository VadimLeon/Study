﻿#pragma once
#include <iostream>
#include "PossibilityMeeting.h"

PossibilityMeeting* myGirl;
int countN;

namespace SolidVariable {


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

  protected:
  private: System::Windows::Forms::TabControl^  tabControl1;
  private: System::Windows::Forms::TabPage^  tabPage1;
  private: System::Windows::Forms::Label^  label1;
  private: System::Windows::Forms::TextBox^  textBox1;
  private: System::Windows::Forms::DataGridView^  dataGridView1;
  private: System::Windows::Forms::Label^  label2;
  private: System::Windows::Forms::DataGridView^  dataGridView2;
  private: System::Windows::Forms::CheckBox^  checkBox1;
  private: System::Windows::Forms::Button^  button1;
  private: System::Windows::Forms::CheckBox^  checkBox2;
  private: System::Windows::Forms::TabPage^  tabPage2;
  private: System::Windows::Forms::DataGridView^  dataGridView3;
  private: System::Windows::Forms::DataGridView^  dataGridView5;
  private: System::Windows::Forms::DataGridView^  dataGridView4;
  private: System::Windows::Forms::TabPage^  tabPage3;
  private: System::Windows::Forms::TabControl^  tabControl2;
  private: System::Windows::Forms::TabPage^  tabPage4;
  private: System::Windows::Forms::TabPage^  tabPage5;
  private: System::Windows::Forms::TextBox^  textBox2;
  private: System::Windows::Forms::Label^  label3;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
  private: System::Windows::Forms::CheckBox^  checkBox3;


  private: ZedGraph::ZedGraphControl^  zedGraphControl1;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
  private: ZedGraph::ZedGraphControl^  zedGraphControl2;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
  private: System::Windows::Forms::CheckBox^  checkBox4;
  private: System::Windows::Forms::TextBox^  textBox3;
  private: System::Windows::Forms::Label^  label4;
  private: System::Windows::Forms::TextBox^  textBox4;
  private: System::Windows::Forms::Label^  label6;
  private: System::Windows::Forms::Label^  label5;
  private: System::Windows::Forms::Button^  button2;
  private: System::Windows::Forms::TabPage^  tabPage6;
  private: ZedGraph::ZedGraphControl^  zedGraphControl3;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
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
      this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
      this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
      this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
      this->textBox2 = (gcnew System::Windows::Forms::TextBox());
      this->label3 = (gcnew System::Windows::Forms::Label());
      this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
      this->button1 = (gcnew System::Windows::Forms::Button());
      this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
      this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
      this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->textBox1 = (gcnew System::Windows::Forms::TextBox());
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
      this->button2 = (gcnew System::Windows::Forms::Button());
      this->textBox4 = (gcnew System::Windows::Forms::TextBox());
      this->label6 = (gcnew System::Windows::Forms::Label());
      this->label5 = (gcnew System::Windows::Forms::Label());
      this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
      this->textBox3 = (gcnew System::Windows::Forms::TextBox());
      this->label4 = (gcnew System::Windows::Forms::Label());
      this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
      this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
      this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
      this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
      this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
      this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
      this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
      this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
      this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
      this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
      this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
      this->tabControl1->SuspendLayout();
      this->tabPage1->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
      this->tabPage2->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
      this->tabPage3->SuspendLayout();
      this->tabControl2->SuspendLayout();
      this->tabPage4->SuspendLayout();
      this->tabPage5->SuspendLayout();
      this->tabPage6->SuspendLayout();
      this->SuspendLayout();
      // 
      // tabControl1
      // 
      this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
      this->tabControl1->Controls->Add(this->tabPage1);
      this->tabControl1->Controls->Add(this->tabPage2);
      this->tabControl1->Controls->Add(this->tabPage3);
      this->tabControl1->Location = System::Drawing::Point(0, 0);
      this->tabControl1->Name = L"tabControl1";
      this->tabControl1->SelectedIndex = 0;
      this->tabControl1->Size = System::Drawing::Size(451, 371);
      this->tabControl1->TabIndex = 0;
      // 
      // tabPage1
      // 
      this->tabPage1->AutoScroll = true;
      this->tabPage1->AutoScrollMinSize = System::Drawing::Size(300, 0);
      this->tabPage1->Controls->Add(this->checkBox3);
      this->tabPage1->Controls->Add(this->textBox2);
      this->tabPage1->Controls->Add(this->label3);
      this->tabPage1->Controls->Add(this->checkBox2);
      this->tabPage1->Controls->Add(this->button1);
      this->tabPage1->Controls->Add(this->checkBox1);
      this->tabPage1->Controls->Add(this->label2);
      this->tabPage1->Controls->Add(this->dataGridView2);
      this->tabPage1->Controls->Add(this->dataGridView1);
      this->tabPage1->Controls->Add(this->textBox1);
      this->tabPage1->Controls->Add(this->label1);
      this->tabPage1->Location = System::Drawing::Point(4, 22);
      this->tabPage1->Name = L"tabPage1";
      this->tabPage1->Padding = System::Windows::Forms::Padding(3);
      this->tabPage1->Size = System::Drawing::Size(443, 345);
      this->tabPage1->TabIndex = 0;
      this->tabPage1->Text = L"Tryst";
      this->tabPage1->UseVisualStyleBackColor = true;
      // 
      // checkBox3
      // 
      this->checkBox3->AutoSize = true;
      this->checkBox3->Location = System::Drawing::Point(161, 62);
      this->checkBox3->Name = L"checkBox3";
      this->checkBox3->Size = System::Drawing::Size(15, 14);
      this->checkBox3->TabIndex = 10;
      this->checkBox3->UseVisualStyleBackColor = true;
      this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
      // 
      // textBox2
      // 
      this->textBox2->Location = System::Drawing::Point(8, 59);
      this->textBox2->Name = L"textBox2";
      this->textBox2->Size = System::Drawing::Size(147, 20);
      this->textBox2->TabIndex = 9;
      this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
      // 
      // label3
      // 
      this->label3->AutoSize = true;
      this->label3->Location = System::Drawing::Point(6, 42);
      this->label3->Name = L"label3";
      this->label3->Size = System::Drawing::Size(94, 13);
      this->label3->TabIndex = 8;
      this->label3->Text = L"Count experiments";
      // 
      // checkBox2
      // 
      this->checkBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
      this->checkBox2->AutoSize = true;
      this->checkBox2->Location = System::Drawing::Point(13, 314);
      this->checkBox2->Name = L"checkBox2";
      this->checkBox2->Size = System::Drawing::Size(63, 17);
      this->checkBox2->TabIndex = 7;
      this->checkBox2->Text = L"Refresh";
      this->checkBox2->UseVisualStyleBackColor = true;
      // 
      // button1
      // 
      this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
      this->button1->Location = System::Drawing::Point(84, 311);
      this->button1->Name = L"button1";
      this->button1->Size = System::Drawing::Size(92, 23);
      this->button1->TabIndex = 6;
      this->button1->Text = L"Compute";
      this->button1->UseVisualStyleBackColor = true;
      this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
      // 
      // checkBox1
      // 
      this->checkBox1->AutoSize = true;
      this->checkBox1->Location = System::Drawing::Point(161, 22);
      this->checkBox1->Name = L"checkBox1";
      this->checkBox1->Size = System::Drawing::Size(15, 14);
      this->checkBox1->TabIndex = 5;
      this->checkBox1->UseVisualStyleBackColor = true;
      this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Location = System::Drawing::Point(215, 3);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(62, 13);
      this->label2->TabIndex = 4;
      this->label2->Text = L"Information:";
      // 
      // dataGridView2
      // 
      this->dataGridView2->AllowUserToAddRows = false;
      this->dataGridView2->AllowUserToDeleteRows = false;
      this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left));
      this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
        this->Column11,
          this->Column10
      });
      this->dataGridView2->Location = System::Drawing::Point(218, 19);
      this->dataGridView2->Name = L"dataGridView2";
      this->dataGridView2->ReadOnly = true;
      this->dataGridView2->RowHeadersVisible = false;
      this->dataGridView2->RowTemplate->ReadOnly = true;
      this->dataGridView2->Size = System::Drawing::Size(198, 286);
      this->dataGridView2->TabIndex = 3;
      // 
      // Column11
      // 
      this->Column11->HeaderText = L"№ boy";
      this->Column11->MaxInputLength = 10;
      this->Column11->MinimumWidth = 20;
      this->Column11->Name = L"Column11";
      this->Column11->ReadOnly = true;
      this->Column11->Width = 30;
      // 
      // Column10
      // 
      this->Column10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
      this->Column10->HeaderText = L"Chance";
      this->Column10->MaxInputLength = 327;
      this->Column10->MinimumWidth = 20;
      this->Column10->Name = L"Column10";
      this->Column10->ReadOnly = true;
      this->Column10->Width = 69;
      // 
      // dataGridView1
      // 
      this->dataGridView1->AllowUserToAddRows = false;
      this->dataGridView1->AllowUserToDeleteRows = false;
      this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left));
      this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
      this->dataGridView1->Location = System::Drawing::Point(6, 85);
      this->dataGridView1->Name = L"dataGridView1";
      this->dataGridView1->ReadOnly = true;
      this->dataGridView1->Size = System::Drawing::Size(170, 213);
      this->dataGridView1->TabIndex = 2;
      // 
      // Column1
      // 
      this->Column1->HeaderText = L"Average_latency";
      this->Column1->MaxInputLength = 20;
      this->Column1->MinimumWidth = 50;
      this->Column1->Name = L"Column1";
      this->Column1->ReadOnly = true;
      // 
      // textBox1
      // 
      this->textBox1->Location = System::Drawing::Point(8, 19);
      this->textBox1->Name = L"textBox1";
      this->textBox1->Size = System::Drawing::Size(147, 20);
      this->textBox1->TabIndex = 1;
      this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Location = System::Drawing::Point(8, 3);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(75, 13);
      this->label1->TabIndex = 0;
      this->label1->Text = L"Number boys: ";
      // 
      // tabPage2
      // 
      this->tabPage2->Controls->Add(this->button2);
      this->tabPage2->Controls->Add(this->textBox4);
      this->tabPage2->Controls->Add(this->label6);
      this->tabPage2->Controls->Add(this->label5);
      this->tabPage2->Controls->Add(this->checkBox4);
      this->tabPage2->Controls->Add(this->textBox3);
      this->tabPage2->Controls->Add(this->label4);
      this->tabPage2->Controls->Add(this->dataGridView5);
      this->tabPage2->Controls->Add(this->dataGridView4);
      this->tabPage2->Controls->Add(this->dataGridView3);
      this->tabPage2->Location = System::Drawing::Point(4, 22);
      this->tabPage2->Name = L"tabPage2";
      this->tabPage2->Padding = System::Windows::Forms::Padding(3);
      this->tabPage2->Size = System::Drawing::Size(443, 345);
      this->tabPage2->TabIndex = 1;
      this->tabPage2->Text = L"Characteristics";
      this->tabPage2->UseVisualStyleBackColor = true;
      // 
      // button2
      // 
      this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
      this->button2->Location = System::Drawing::Point(6, 316);
      this->button2->Name = L"button2";
      this->button2->Size = System::Drawing::Size(167, 23);
      this->button2->TabIndex = 9;
      this->button2->Text = L"Compute";
      this->button2->UseVisualStyleBackColor = true;
      this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
      // 
      // textBox4
      // 
      this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
      this->textBox4->Location = System::Drawing::Point(300, 318);
      this->textBox4->Name = L"textBox4";
      this->textBox4->ReadOnly = true;
      this->textBox4->Size = System::Drawing::Size(137, 20);
      this->textBox4->TabIndex = 8;
      // 
      // label6
      // 
      this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
      this->label6->AutoSize = true;
      this->label6->Location = System::Drawing::Point(179, 321);
      this->label6->Name = L"label6";
      this->label6->Size = System::Drawing::Size(115, 13);
      this->label6->TabIndex = 7;
      this->label6->Text = L"max | nj/(n|^\'j|) - f(zj) | = ";
      // 
      // label5
      // 
      this->label5->AutoSize = true;
      this->label5->Location = System::Drawing::Point(179, 100);
      this->label5->Name = L"label5";
      this->label5->Size = System::Drawing::Size(95, 13);
      this->label5->TabIndex = 6;
      this->label5->Text = L"Distribution density";
      // 
      // checkBox4
      // 
      this->checkBox4->AutoSize = true;
      this->checkBox4->Location = System::Drawing::Point(158, 96);
      this->checkBox4->Name = L"checkBox4";
      this->checkBox4->Size = System::Drawing::Size(15, 14);
      this->checkBox4->TabIndex = 5;
      this->checkBox4->UseVisualStyleBackColor = true;
      this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
      // 
      // textBox3
      // 
      this->textBox3->Location = System::Drawing::Point(6, 93);
      this->textBox3->Name = L"textBox3";
      this->textBox3->Size = System::Drawing::Size(146, 20);
      this->textBox3->TabIndex = 4;
      this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
      // 
      // label4
      // 
      this->label4->AutoSize = true;
      this->label4->Location = System::Drawing::Point(6, 77);
      this->label4->Name = L"label4";
      this->label4->Size = System::Drawing::Size(135, 13);
      this->label4->TabIndex = 3;
      this->label4->Text = L"Number of Gap Boundaries";
      // 
      // dataGridView5
      // 
      this->dataGridView5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
      this->dataGridView5->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
        this->Column12,
          this->Column13, this->Column14
      });
      this->dataGridView5->Location = System::Drawing::Point(179, 119);
      this->dataGridView5->Name = L"dataGridView5";
      this->dataGridView5->RowHeadersVisible = false;
      this->dataGridView5->Size = System::Drawing::Size(261, 194);
      this->dataGridView5->TabIndex = 2;
      // 
      // Column12
      // 
      this->Column12->HeaderText = L"z_j";
      this->Column12->Name = L"Column12";
      this->Column12->ReadOnly = true;
      // 
      // Column13
      // 
      this->Column13->HeaderText = L"f(z_j)";
      this->Column13->Name = L"Column13";
      this->Column13->ReadOnly = true;
      // 
      // Column14
      // 
      this->Column14->HeaderText = L"z_j / n |^\'j |";
      this->Column14->Name = L"Column14";
      this->Column14->ReadOnly = true;
      // 
      // dataGridView4
      // 
      this->dataGridView4->AllowUserToAddRows = false;
      this->dataGridView4->AllowUserToDeleteRows = false;
      this->dataGridView4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left));
      this->dataGridView4->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView4->ColumnHeadersVisible = false;
      this->dataGridView4->Location = System::Drawing::Point(3, 119);
      this->dataGridView4->Name = L"dataGridView4";
      this->dataGridView4->RowHeadersWidth = 60;
      this->dataGridView4->Size = System::Drawing::Size(170, 194);
      this->dataGridView4->TabIndex = 1;
      // 
      // dataGridView3
      // 
      this->dataGridView3->AllowUserToAddRows = false;
      this->dataGridView3->AllowUserToDeleteRows = false;
      this->dataGridView3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
      this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
        this->Column2,
          this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
      });
      this->dataGridView3->Location = System::Drawing::Point(3, 7);
      this->dataGridView3->Name = L"dataGridView3";
      this->dataGridView3->ReadOnly = true;
      this->dataGridView3->RowHeadersVisible = false;
      this->dataGridView3->Size = System::Drawing::Size(437, 63);
      this->dataGridView3->TabIndex = 0;
      // 
      // Column2
      // 
      this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
      this->Column2->HeaderText = L"Eɳ";
      this->Column2->Name = L"Column2";
      this->Column2->ReadOnly = true;
      this->Column2->Width = 45;
      // 
      // Column3
      // 
      this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
      this->Column3->HeaderText = L"x̅";
      this->Column3->Name = L"Column3";
      this->Column3->ReadOnly = true;
      this->Column3->Width = 37;
      // 
      // Column4
      // 
      this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
      this->Column4->HeaderText = L"| Eɳ - x̅ |";
      this->Column4->Name = L"Column4";
      this->Column4->ReadOnly = true;
      this->Column4->Width = 69;
      // 
      // Column5
      // 
      this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
      this->Column5->HeaderText = L"Dɳ";
      this->Column5->Name = L"Column5";
      this->Column5->ReadOnly = true;
      this->Column5->Width = 46;
      // 
      // Column6
      // 
      this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
      this->Column6->HeaderText = L"S^2";
      this->Column6->Name = L"Column6";
      this->Column6->ReadOnly = true;
      this->Column6->Width = 51;
      // 
      // Column7
      // 
      this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
      this->Column7->HeaderText = L"| Dɳ - S^2 |";
      this->Column7->Name = L"Column7";
      this->Column7->ReadOnly = true;
      this->Column7->Width = 84;
      // 
      // Column8
      // 
      this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
      this->Column8->HeaderText = L"Me\'";
      this->Column8->Name = L"Column8";
      this->Column8->ReadOnly = true;
      this->Column8->Width = 49;
      // 
      // Column9
      // 
      this->Column9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
      this->Column9->HeaderText = L"R\'";
      this->Column9->Name = L"Column9";
      this->Column9->ReadOnly = true;
      this->Column9->Width = 42;
      // 
      // tabPage3
      // 
      this->tabPage3->Controls->Add(this->tabControl2);
      this->tabPage3->Location = System::Drawing::Point(4, 22);
      this->tabPage3->Name = L"tabPage3";
      this->tabPage3->Padding = System::Windows::Forms::Padding(3);
      this->tabPage3->Size = System::Drawing::Size(443, 345);
      this->tabPage3->TabIndex = 2;
      this->tabPage3->Text = L"Graphics";
      this->tabPage3->UseVisualStyleBackColor = true;
      // 
      // tabControl2
      // 
      this->tabControl2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
      this->tabControl2->Controls->Add(this->tabPage4);
      this->tabControl2->Controls->Add(this->tabPage5);
      this->tabControl2->Controls->Add(this->tabPage6);
      this->tabControl2->Location = System::Drawing::Point(-4, 0);
      this->tabControl2->Name = L"tabControl2";
      this->tabControl2->SelectedIndex = 0;
      this->tabControl2->Size = System::Drawing::Size(451, 349);
      this->tabControl2->TabIndex = 0;
      // 
      // tabPage4
      // 
      this->tabPage4->Controls->Add(this->zedGraphControl1);
      this->tabPage4->Location = System::Drawing::Point(4, 22);
      this->tabPage4->Name = L"tabPage4";
      this->tabPage4->Padding = System::Windows::Forms::Padding(3);
      this->tabPage4->Size = System::Drawing::Size(443, 323);
      this->tabPage4->TabIndex = 0;
      this->tabPage4->Text = L"Distribution functions";
      this->tabPage4->UseVisualStyleBackColor = true;
      // 
      // zedGraphControl1
      // 
      this->zedGraphControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
      this->zedGraphControl1->Location = System::Drawing::Point(3, 3);
      this->zedGraphControl1->Name = L"zedGraphControl1";
      this->zedGraphControl1->ScrollGrace = 0;
      this->zedGraphControl1->ScrollMaxX = 0;
      this->zedGraphControl1->ScrollMaxY = 0;
      this->zedGraphControl1->ScrollMaxY2 = 0;
      this->zedGraphControl1->ScrollMinX = 0;
      this->zedGraphControl1->ScrollMinY = 0;
      this->zedGraphControl1->ScrollMinY2 = 0;
      this->zedGraphControl1->Size = System::Drawing::Size(437, 317);
      this->zedGraphControl1->TabIndex = 0;
      // 
      // tabPage5
      // 
      this->tabPage5->Controls->Add(this->zedGraphControl2);
      this->tabPage5->Location = System::Drawing::Point(4, 22);
      this->tabPage5->Name = L"tabPage5";
      this->tabPage5->Padding = System::Windows::Forms::Padding(3);
      this->tabPage5->Size = System::Drawing::Size(443, 323);
      this->tabPage5->TabIndex = 1;
      this->tabPage5->Text = L"Statistics";
      this->tabPage5->UseVisualStyleBackColor = true;
      // 
      // zedGraphControl2
      // 
      this->zedGraphControl2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
      this->zedGraphControl2->Location = System::Drawing::Point(3, 3);
      this->zedGraphControl2->Name = L"zedGraphControl2";
      this->zedGraphControl2->ScrollGrace = 0;
      this->zedGraphControl2->ScrollMaxX = 0;
      this->zedGraphControl2->ScrollMaxY = 0;
      this->zedGraphControl2->ScrollMaxY2 = 0;
      this->zedGraphControl2->ScrollMinX = 0;
      this->zedGraphControl2->ScrollMinY = 0;
      this->zedGraphControl2->ScrollMinY2 = 0;
      this->zedGraphControl2->Size = System::Drawing::Size(437, 317);
      this->zedGraphControl2->TabIndex = 0;
      // 
      // tabPage6
      // 
      this->tabPage6->Controls->Add(this->zedGraphControl3);
      this->tabPage6->Location = System::Drawing::Point(4, 22);
      this->tabPage6->Name = L"tabPage6";
      this->tabPage6->Padding = System::Windows::Forms::Padding(3);
      this->tabPage6->Size = System::Drawing::Size(443, 323);
      this->tabPage6->TabIndex = 2;
      this->tabPage6->Text = L"Histogram";
      this->tabPage6->UseVisualStyleBackColor = true;
      // 
      // zedGraphControl3
      // 
      this->zedGraphControl3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
      this->zedGraphControl3->Location = System::Drawing::Point(3, 3);
      this->zedGraphControl3->Name = L"zedGraphControl3";
      this->zedGraphControl3->ScrollGrace = 0;
      this->zedGraphControl3->ScrollMaxX = 0;
      this->zedGraphControl3->ScrollMaxY = 0;
      this->zedGraphControl3->ScrollMaxY2 = 0;
      this->zedGraphControl3->ScrollMinX = 0;
      this->zedGraphControl3->ScrollMinY = 0;
      this->zedGraphControl3->ScrollMinY2 = 0;
      this->zedGraphControl3->Size = System::Drawing::Size(437, 317);
      this->zedGraphControl3->TabIndex = 0;
      // 
      // MyForm
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(449, 368);
      this->Controls->Add(this->tabControl1);
      this->Name = L"MyForm";
      this->Text = L"Tryst with the first boyfriend";
      this->Load += gcnew System::EventHandler(this, &MyForm::MyForm1_Load);
      this->tabControl1->ResumeLayout(false);
      this->tabPage1->ResumeLayout(false);
      this->tabPage1->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
      this->tabPage2->ResumeLayout(false);
      this->tabPage2->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
      this->tabPage3->ResumeLayout(false);
      this->tabControl2->ResumeLayout(false);
      this->tabPage4->ResumeLayout(false);
      this->tabPage5->ResumeLayout(false);
      this->tabPage6->ResumeLayout(false);
      this->ResumeLayout(false);

    }

#pragma endregion
  private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e)
  {
    this->dataGridView1->Visible = false;
    this->dataGridView2->Visible = false;
    this->checkBox2->Visible = false;
    this->button1->Visible = false;
    this->label2->Visible = false;
    this->textBox4->Visible = false;
    this->label6->Visible = false;
    this->dataGridView5->Visible = false;
    this->label5->Visible = false;
    this->button2->Visible = false;
    this->dataGridView4->Visible = false;

    textBox1->Text = "5";
    textBox2->Text = "15";
    textBox3->Text = "5";

    dataGridView1->RowHeadersWidth = 50;
    dataGridView2->RowHeadersWidth = 50;

    //vvvvvvvvvvvvvvvvvvvvvvv
    myGirl = new PossibilityMeeting();
    textBox1->Text = "10";
    myGirl->SetCount(Convert::ToInt32(textBox2->Text));
    countN = Convert::ToInt32(textBox1->Text);
    checkBox4->Checked = true;
    checkBox1->Checked = true;
    checkBox3->Checked = true;
    for (int i = 0; i < countN; ++i)
    {
      dataGridView1->Rows[i]->HeaderCell->Value = (i + 1).ToString();
      dataGridView1->Rows[i]->Cells[0]->Value = 0.348 + 0.042 * i;
    }
    //^^^^^^^^^^^^^^^^^^^^^^^
  }

  private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
  {
    textBox1->ReadOnly = checkBox1->Checked;

    if (checkBox1->Checked)
    {
      if (textBox1->Text == "") { checkBox1->Checked = false; }
      else
      {
        myGirl->SetCount(Convert::ToInt32(textBox2->Text));
        updateTableK();
        this->dataGridView1->Visible = true;
        this->checkBox2->Visible = true;
        this->button1->Visible = true;
        this->button1->Enabled = checkBox3->Checked;
      }
    }
    else
    {
      this->dataGridView1->Visible = false;
      this->dataGridView2->Visible = false;
      this->checkBox2->Visible = false;
      this->button1->Visible = false;
      this->label2->Visible = false;
      this->dataGridView1->Rows->Clear();
      this->dataGridView2->Rows->Clear();
    }
  }
  private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
  {
    textBox2->ReadOnly = checkBox3->Checked;

    if (checkBox3->Checked)
    {
      if (textBox2->Text == "") { checkBox3->Checked = false; }
      else
      {
        myGirl->SetCount(Convert::ToInt32(textBox2->Text));
        this->button1->Enabled = checkBox1->Checked;
      }
    }
    else
    {
      this->button1->Enabled = checkBox3->Checked;
    }
  }
  private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
  {
    this->textBox3->ReadOnly = checkBox4->Checked;

    if (checkBox4->Checked)
    {
      if (textBox3->Text == "") { checkBox4->Checked = false; }
      else
      {
        myGirl->SetNumberBorders(Convert::ToInt32(textBox3->Text));
        updateTableBorder();
        this->dataGridView4->Visible = true;
        this->button2->Visible = true;
      }
    }
    else
    {
      this->textBox4->Visible = false;
      this->label6->Visible = false;
      this->dataGridView5->Visible = false;
      this->label5->Visible = false;
      this->button2->Visible = false;
      this->dataGridView4->Visible = false;
      this->dataGridView4->Rows->Clear();
      this->dataGridView5->Rows->Clear();
    }
  }

  private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
  {
    int mBoyK = Convert::ToInt32(textBox1->Text);
    std::vector<double> tmp;
    for (int i = 0; i < mBoyK; ++i)
    {
      tmp.push_back(Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value->ToString()));
    }

    myGirl->SetMidTime(tmp, (int)tmp.size(), checkBox2->Checked);
    updateTableT();
    updateTableCharacter();

    label2->Visible = true;
    dataGridView2->Visible = true;
    updateZedFun();
  }
  private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
  {
    std::vector<double> bordersN;
    for (int i = 0; i < myGirl->getNumberBorders(); ++i)
    {
      bordersN.push_back(Convert::ToDouble(dataGridView4->Rows[i]->Cells[0]->Value->ToString()));
    }
    myGirl->SetBordersValue(bordersN);

    this->textBox4->Visible = true;
    this->label6->Visible = true;
    this->dataGridView5->Visible = true;
    this->label5->Visible = true;
  }

  private: System::Void updateTableK()
  {
    int nBoys = Convert::ToInt32(textBox1->Text);
    dataGridView1->RowCount = nBoys;

    for (int i = 0; i < nBoys; ++i)
    {
      dataGridView1->Rows[i]->HeaderCell->Value = (i + 1).ToString();
    }
  }
  private: System::Void updateTableT()
  {
    int nExpirements = myGirl->getCount();
    dataGridView2->RowCount = nExpirements;

    int k = 0;
    for (const auto &x : myGirl->getBestBoys())
    {
      dataGridView2->Rows[k]->Cells[0]->Value = (x.second + 1).ToString();
      dataGridView2->Rows[k++]->Cells[1]->Value = x.first.ToString();
    }
    dataGridView2->Sort(dataGridView2->Columns[1], ListSortDirection::Ascending);
  }
  private: System::Void updateTableCharacter()
  {
    dataGridView3->Rows->Clear();
    dataGridView3->RowCount = 1;

    double E = myGirl->getE();
    double X = myGirl->getX();
    double D = myGirl->getMaxD();
    double S2 = myGirl->getS2();

    dataGridView3->Rows[0]->Cells[0]->Value = E.ToString();
    dataGridView3->Rows[0]->Cells[1]->Value = X.ToString();
    dataGridView3->Rows[0]->Cells[2]->Value = (std::abs(E - X)).ToString();
    dataGridView3->Rows[0]->Cells[3]->Value = D.ToString();
    dataGridView3->Rows[0]->Cells[4]->Value = S2.ToString();
    dataGridView3->Rows[0]->Cells[5]->Value = (std::abs(D - S2)).ToString();
    dataGridView3->Rows[0]->Cells[6]->Value = (myGirl->getMe()).ToString();
    dataGridView3->Rows[0]->Cells[7]->Value = (myGirl->getR()).ToString();
  }
  private: System::Void updateTableBorder()
  {
    int N = myGirl->getNumberBorders();
    dataGridView4->RowCount = N;
    dataGridView5->RowCount = N;

    for (int i = 0; i < N; ++i)
    {
      dataGridView4->Rows[i]->HeaderCell->Value = "z_" + i.ToString();
    }
  }

  private: System::Void updateZedFun()
  {
    ZedGraph::GraphPane^ paneFun = zedGraphControl1->GraphPane;
    paneFun->CurveList->Clear();
    ZedGraph::PointPairList^ listMain = gcnew ZedGraph::PointPairList;
    listMain->Add(0., 0.);
    ZedGraph::PointPairList^ listSample = gcnew ZedGraph::PointPairList;
    listSample->Add(0., 0.);

    ZedGraph::GraphPane^ paneBoy = zedGraphControl2->GraphPane;
    paneBoy->CurveList->Clear();
    ZedGraph::PointPairList^ listBoys = gcnew ZedGraph::PointPairList;

    int n = Convert::ToInt32(textBox2->Text);
    for (int i = 0; i < n; ++i)
    {
      listMain->Add(Convert::ToDouble(dataGridView2->Rows[i]->Cells[1]->Value->ToString()),
                    myGirl->getY(Convert::ToDouble(dataGridView2->Rows[i]->Cells[1]->Value->ToString())));

      double Xx = Convert::ToDouble(dataGridView2->Rows[i]->Cells[1]->Value->ToString());
      int index = (Convert::ToInt32(dataGridView2->Rows[i]->Cells[0]->Value->ToString()) - 1);
      double Yx = Convert::ToDouble(dataGridView1->Rows[index]->Cells[0]->Value->ToString());
      listSample->Add(Convert::ToDouble(dataGridView2->Rows[i]->Cells[1]->Value->ToString()), myGirl->getY(Xx, Yx));
      listBoys->Add(i + 1, Convert::ToInt32(dataGridView2->Rows[i]->Cells[0]->Value->ToString()));
    }

    paneFun->AddCurve("F(x)", listMain, Color::Red, ZedGraph::SymbolType::None);
    paneFun->AddCurve("F'(x)", listSample, Color::Blue, ZedGraph::SymbolType::None);
    zedGraphControl1->AxisChange();
    zedGraphControl1->Invalidate();

    paneBoy->AddCurve("Boy(N)", listBoys, Color::Red, ZedGraph::SymbolType::None);
    zedGraphControl2->AxisChange();
    zedGraphControl2->Invalidate();
  }
  private: System::Void updateZedHistogram()
  {

  }

  private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
  {
    char number = (char)e->KeyChar;
    if (!Char::IsDigit(number) && number != 8 && number != 44 && number != 46)
    {
      e->Handled = true;
    }
  }
  private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
  {
    char number = (char)e->KeyChar;
    if (!Char::IsDigit(number) && number != 8 && number != 44 && number != 46)
    {
      e->Handled = true;
    }
  }
  private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
  {
    char number = (char)e->KeyChar;
    if (!Char::IsDigit(number) && number != 8 && number != 44 && number != 46)
    {
      e->Handled = true;
    }
  }
  };
}
