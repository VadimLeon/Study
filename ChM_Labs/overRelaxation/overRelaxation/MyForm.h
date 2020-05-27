#pragma once
#include <math.h>
#include <iostream>
#define _USE_MATH_DEFINES

#include "overRelax.h"
#include "SimpleIteration.h"

namespace overRelaxation {

  SimpleIteration testSIt;
  SimpleIteration mainSIt1;
  SimpleIteration mainSIt2;
  OverRelax testOver;
  OverRelax mainOver1;
  OverRelax mainOver2;
  int n, m;
  double omega = 1., h, k;
  bool isTests;

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

    //столбцы первой таблицы
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ V;
  private: System::Windows::Forms::TabPage^  tabPage2;
  private: System::Windows::Forms::GroupBox^  groupBox5;
  private: System::Windows::Forms::Label^  label18;
  private: System::Windows::Forms::Label^  label19;
  private: System::Windows::Forms::Label^  label21;
  private: System::Windows::Forms::Label^  label22;
  private: System::Windows::Forms::Button^  Button1;
  private: System::Windows::Forms::GroupBox^  groupBox7;
  private: System::Windows::Forms::Label^  label12;
  private: System::Windows::Forms::TextBox^  textBox10;
  private: System::Windows::Forms::Label^  label13;
  private: System::Windows::Forms::TextBox^  textBox11;

  private: System::Windows::Forms::TabControl^  tabControl1;
  private: System::Windows::Forms::TextBox^  textBox1;
  private: System::Windows::Forms::Label^  label2;
  private: System::Windows::Forms::TextBox^  textBox2;
  private: System::Windows::Forms::Label^  label3;
  private: System::Windows::Forms::TextBox^  textBox3;


  private: System::Windows::Forms::TextBox^  textBox4;
  private: System::Windows::Forms::Label^  label5;
  private: System::Windows::Forms::Label^  label4;
  private: System::Windows::Forms::Label^  label7;
  private: System::Windows::Forms::TextBox^  textBox6;
  private: System::Windows::Forms::Label^  label8;
  private: System::Windows::Forms::Label^  label1;
  private: System::Windows::Forms::CheckBox^  checkBox1;
  private: System::Windows::Forms::TextBox^  textBox7;
  private: System::Windows::Forms::RadioButton^  radioButton2;
  private: System::Windows::Forms::RadioButton^  radioButton1;

  private: System::Windows::Forms::Label^  label9;
  private: System::Windows::Forms::TabControl^  tabControl2;
  private: System::Windows::Forms::TabPage^  tabPage1;
  private: System::Windows::Forms::TabControl^  tabControl3;
  private: System::Windows::Forms::TabPage^  tabPage4;
  private: System::Windows::Forms::DataGridView^  dataGridView2;
  private: System::Windows::Forms::TabPage^  tabPage5;
  private: System::Windows::Forms::TabPage^  tabPage6;
  private: System::Windows::Forms::TabPage^  tabPage3;
  private: System::Windows::Forms::DataGridView^  dataGridView1;
  private: System::Windows::Forms::DataGridView^  dataGridView3;
  private: System::Windows::Forms::TabControl^  tabControl4;
  private: System::Windows::Forms::TabPage^  tabPage7;
  private: System::Windows::Forms::DataGridView^  dataGridView4;
  private: System::Windows::Forms::TabPage^  tabPage8;
  private: System::Windows::Forms::DataGridView^  dataGridView5;
  private: System::Windows::Forms::TabPage^  tabPage9;
  private: System::Windows::Forms::DataGridView^  dataGridView6;
  private: System::Windows::Forms::Label^  label10;
  private: System::Windows::Forms::Label^  label6;
  private: System::Windows::Forms::ComboBox^  comboBox1;

  protected:
  private: System::ComponentModel::IContainer^ components;

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
      this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
      this->label10 = (gcnew System::Windows::Forms::Label());
      this->label6 = (gcnew System::Windows::Forms::Label());
      this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
      this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
      this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
      this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
      this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
      this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
      this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
      this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
      this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
      this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
      this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
      this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
      this->label8 = (gcnew System::Windows::Forms::Label());
      this->label7 = (gcnew System::Windows::Forms::Label());
      this->textBox6 = (gcnew System::Windows::Forms::TextBox());
      this->textBox4 = (gcnew System::Windows::Forms::TextBox());
      this->label5 = (gcnew System::Windows::Forms::Label());
      this->label4 = (gcnew System::Windows::Forms::Label());
      this->textBox3 = (gcnew System::Windows::Forms::TextBox());
      this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
      this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
      this->label9 = (gcnew System::Windows::Forms::Label());
      this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
      this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
      this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
      this->textBox2 = (gcnew System::Windows::Forms::TextBox());
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->label3 = (gcnew System::Windows::Forms::Label());
      this->textBox7 = (gcnew System::Windows::Forms::TextBox());
      this->textBox1 = (gcnew System::Windows::Forms::TextBox());
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->label18 = (gcnew System::Windows::Forms::Label());
      this->label19 = (gcnew System::Windows::Forms::Label());
      this->label21 = (gcnew System::Windows::Forms::Label());
      this->label22 = (gcnew System::Windows::Forms::Label());
      this->Button1 = (gcnew System::Windows::Forms::Button());
      this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
      this->label12 = (gcnew System::Windows::Forms::Label());
      this->textBox10 = (gcnew System::Windows::Forms::TextBox());
      this->label13 = (gcnew System::Windows::Forms::Label());
      this->textBox11 = (gcnew System::Windows::Forms::TextBox());
      this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
      this->tabPage2->SuspendLayout();
      this->tabControl2->SuspendLayout();
      this->tabPage1->SuspendLayout();
      this->tabControl3->SuspendLayout();
      this->tabPage4->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
      this->tabPage5->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
      this->tabPage6->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
      this->tabPage3->SuspendLayout();
      this->tabControl4->SuspendLayout();
      this->tabPage7->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
      this->tabPage8->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
      this->tabPage9->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
      this->groupBox5->SuspendLayout();
      this->groupBox7->SuspendLayout();
      this->tabControl1->SuspendLayout();
      this->SuspendLayout();
      // 
      // tabPage2
      // 
      this->tabPage2->Controls->Add(this->label10);
      this->tabPage2->Controls->Add(this->label6);
      this->tabPage2->Controls->Add(this->tabControl2);
      this->tabPage2->Controls->Add(this->label8);
      this->tabPage2->Controls->Add(this->label7);
      this->tabPage2->Controls->Add(this->textBox6);
      this->tabPage2->Controls->Add(this->textBox4);
      this->tabPage2->Controls->Add(this->label5);
      this->tabPage2->Controls->Add(this->label4);
      this->tabPage2->Controls->Add(this->textBox3);
      this->tabPage2->Controls->Add(this->groupBox5);
      this->tabPage2->Controls->Add(this->Button1);
      this->tabPage2->Controls->Add(this->groupBox7);
      this->tabPage2->Location = System::Drawing::Point(4, 22);
      this->tabPage2->Margin = System::Windows::Forms::Padding(2);
      this->tabPage2->Name = L"tabPage2";
      this->tabPage2->Padding = System::Windows::Forms::Padding(2);
      this->tabPage2->Size = System::Drawing::Size(1121, 440);
      this->tabPage2->TabIndex = 1;
      this->tabPage2->Text = L"Методы решения СЛАУ";
      this->tabPage2->UseVisualStyleBackColor = true;
      // 
      // label10
      // 
      this->label10->AutoSize = true;
      this->label10->Location = System::Drawing::Point(1041, 324);
      this->label10->Name = L"label10";
      this->label10->Size = System::Drawing::Size(0, 13);
      this->label10->TabIndex = 35;
      // 
      // label6
      // 
      this->label6->AutoSize = true;
      this->label6->Location = System::Drawing::Point(980, 324);
      this->label6->Name = L"label6";
      this->label6->Size = System::Drawing::Size(0, 13);
      this->label6->TabIndex = 34;
      // 
      // tabControl2
      // 
      this->tabControl2->Controls->Add(this->tabPage1);
      this->tabControl2->Controls->Add(this->tabPage3);
      this->tabControl2->Location = System::Drawing::Point(9, 106);
      this->tabControl2->Name = L"tabControl2";
      this->tabControl2->SelectedIndex = 0;
      this->tabControl2->Size = System::Drawing::Size(953, 331);
      this->tabControl2->TabIndex = 33;
      // 
      // tabPage1
      // 
      this->tabPage1->Controls->Add(this->tabControl3);
      this->tabPage1->Location = System::Drawing::Point(4, 22);
      this->tabPage1->Name = L"tabPage1";
      this->tabPage1->Padding = System::Windows::Forms::Padding(3);
      this->tabPage1->Size = System::Drawing::Size(945, 305);
      this->tabPage1->TabIndex = 0;
      this->tabPage1->Text = L"Test";
      this->tabPage1->UseVisualStyleBackColor = true;
      // 
      // tabControl3
      // 
      this->tabControl3->Controls->Add(this->tabPage4);
      this->tabControl3->Controls->Add(this->tabPage5);
      this->tabControl3->Controls->Add(this->tabPage6);
      this->tabControl3->Location = System::Drawing::Point(0, 0);
      this->tabControl3->Name = L"tabControl3";
      this->tabControl3->SelectedIndex = 0;
      this->tabControl3->Size = System::Drawing::Size(949, 309);
      this->tabControl3->TabIndex = 0;
      // 
      // tabPage4
      // 
      this->tabPage4->Controls->Add(this->dataGridView2);
      this->tabPage4->Location = System::Drawing::Point(4, 22);
      this->tabPage4->Name = L"tabPage4";
      this->tabPage4->Padding = System::Windows::Forms::Padding(3);
      this->tabPage4->Size = System::Drawing::Size(941, 283);
      this->tabPage4->TabIndex = 0;
      this->tabPage4->Text = L"v(x, y)";
      this->tabPage4->UseVisualStyleBackColor = true;
      // 
      // dataGridView2
      // 
      this->dataGridView2->AllowUserToAddRows = false;
      this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView2->Location = System::Drawing::Point(0, 0);
      this->dataGridView2->Name = L"dataGridView2";
      this->dataGridView2->RowHeadersWidth = 51;
      this->dataGridView2->Size = System::Drawing::Size(941, 283);
      this->dataGridView2->TabIndex = 3;
      // 
      // tabPage5
      // 
      this->tabPage5->Controls->Add(this->dataGridView1);
      this->tabPage5->Location = System::Drawing::Point(4, 22);
      this->tabPage5->Name = L"tabPage5";
      this->tabPage5->Padding = System::Windows::Forms::Padding(3);
      this->tabPage5->Size = System::Drawing::Size(941, 283);
      this->tabPage5->TabIndex = 1;
      this->tabPage5->Text = L"u(x, y)";
      this->tabPage5->UseVisualStyleBackColor = true;
      // 
      // dataGridView1
      // 
      this->dataGridView1->AllowUserToAddRows = false;
      this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView1->Location = System::Drawing::Point(0, 0);
      this->dataGridView1->Name = L"dataGridView1";
      this->dataGridView1->Size = System::Drawing::Size(941, 283);
      this->dataGridView1->TabIndex = 0;
      // 
      // tabPage6
      // 
      this->tabPage6->Controls->Add(this->dataGridView3);
      this->tabPage6->Location = System::Drawing::Point(4, 22);
      this->tabPage6->Name = L"tabPage6";
      this->tabPage6->Size = System::Drawing::Size(941, 283);
      this->tabPage6->TabIndex = 2;
      this->tabPage6->Text = L"R";
      this->tabPage6->UseVisualStyleBackColor = true;
      // 
      // dataGridView3
      // 
      this->dataGridView3->AllowUserToAddRows = false;
      this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView3->Location = System::Drawing::Point(0, 0);
      this->dataGridView3->Name = L"dataGridView3";
      this->dataGridView3->Size = System::Drawing::Size(941, 283);
      this->dataGridView3->TabIndex = 0;
      // 
      // tabPage3
      // 
      this->tabPage3->Controls->Add(this->tabControl4);
      this->tabPage3->Location = System::Drawing::Point(4, 22);
      this->tabPage3->Name = L"tabPage3";
      this->tabPage3->Padding = System::Windows::Forms::Padding(3);
      this->tabPage3->Size = System::Drawing::Size(945, 305);
      this->tabPage3->TabIndex = 1;
      this->tabPage3->Text = L"Main";
      this->tabPage3->UseVisualStyleBackColor = true;
      // 
      // tabControl4
      // 
      this->tabControl4->Controls->Add(this->tabPage7);
      this->tabControl4->Controls->Add(this->tabPage8);
      this->tabControl4->Controls->Add(this->tabPage9);
      this->tabControl4->Location = System::Drawing::Point(0, 0);
      this->tabControl4->Name = L"tabControl4";
      this->tabControl4->SelectedIndex = 0;
      this->tabControl4->Size = System::Drawing::Size(953, 309);
      this->tabControl4->TabIndex = 0;
      // 
      // tabPage7
      // 
      this->tabPage7->Controls->Add(this->dataGridView4);
      this->tabPage7->Location = System::Drawing::Point(4, 22);
      this->tabPage7->Name = L"tabPage7";
      this->tabPage7->Padding = System::Windows::Forms::Padding(3);
      this->tabPage7->Size = System::Drawing::Size(945, 283);
      this->tabPage7->TabIndex = 0;
      this->tabPage7->Text = L"v(x, y)";
      this->tabPage7->UseVisualStyleBackColor = true;
      // 
      // dataGridView4
      // 
      this->dataGridView4->AllowUserToAddRows = false;
      this->dataGridView4->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView4->Location = System::Drawing::Point(0, 0);
      this->dataGridView4->Name = L"dataGridView4";
      this->dataGridView4->Size = System::Drawing::Size(941, 283);
      this->dataGridView4->TabIndex = 0;
      // 
      // tabPage8
      // 
      this->tabPage8->Controls->Add(this->dataGridView5);
      this->tabPage8->Location = System::Drawing::Point(4, 22);
      this->tabPage8->Name = L"tabPage8";
      this->tabPage8->Padding = System::Windows::Forms::Padding(3);
      this->tabPage8->Size = System::Drawing::Size(945, 283);
      this->tabPage8->TabIndex = 1;
      this->tabPage8->Text = L"v2(x, y)";
      this->tabPage8->UseVisualStyleBackColor = true;
      // 
      // dataGridView5
      // 
      this->dataGridView5->AllowUserToAddRows = false;
      this->dataGridView5->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView5->Location = System::Drawing::Point(0, 0);
      this->dataGridView5->Name = L"dataGridView5";
      this->dataGridView5->Size = System::Drawing::Size(941, 283);
      this->dataGridView5->TabIndex = 0;
      // 
      // tabPage9
      // 
      this->tabPage9->Controls->Add(this->dataGridView6);
      this->tabPage9->Location = System::Drawing::Point(4, 22);
      this->tabPage9->Name = L"tabPage9";
      this->tabPage9->Size = System::Drawing::Size(945, 283);
      this->tabPage9->TabIndex = 2;
      this->tabPage9->Text = L"R";
      this->tabPage9->UseVisualStyleBackColor = true;
      // 
      // dataGridView6
      // 
      this->dataGridView6->AllowUserToAddRows = false;
      this->dataGridView6->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView6->Location = System::Drawing::Point(0, 0);
      this->dataGridView6->Name = L"dataGridView6";
      this->dataGridView6->Size = System::Drawing::Size(941, 283);
      this->dataGridView6->TabIndex = 0;
      // 
      // label8
      // 
      this->label8->AutoSize = true;
      this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label8->Location = System::Drawing::Point(986, 159);
      this->label8->Name = L"label8";
      this->label8->Size = System::Drawing::Size(124, 20);
      this->label8->TabIndex = 32;
      this->label8->Text = L"Информация:";
      // 
      // label7
      // 
      this->label7->AutoSize = true;
      this->label7->Location = System::Drawing::Point(978, 278);
      this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label7->Name = L"label7";
      this->label7->Size = System::Drawing::Size(114, 13);
      this->label7->TabIndex = 31;
      this->label7->Text = L"Общая погрешность:";
      // 
      // textBox6
      // 
      this->textBox6->Location = System::Drawing::Point(979, 293);
      this->textBox6->Margin = System::Windows::Forms::Padding(2);
      this->textBox6->Name = L"textBox6";
      this->textBox6->Size = System::Drawing::Size(133, 20);
      this->textBox6->TabIndex = 30;
      // 
      // textBox4
      // 
      this->textBox4->Location = System::Drawing::Point(979, 255);
      this->textBox4->Margin = System::Windows::Forms::Padding(2);
      this->textBox4->Name = L"textBox4";
      this->textBox4->Size = System::Drawing::Size(133, 20);
      this->textBox4->TabIndex = 27;
      // 
      // label5
      // 
      this->label5->AutoSize = true;
      this->label5->Location = System::Drawing::Point(976, 227);
      this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label5->Name = L"label5";
      this->label5->Size = System::Drawing::Size(95, 26);
      this->label5->TabIndex = 26;
      this->label5->Text = L"Достигнутая \r\nточность метода:";
      // 
      // label4
      // 
      this->label4->AutoSize = true;
      this->label4->Location = System::Drawing::Point(979, 190);
      this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label4->Name = L"label4";
      this->label4->Size = System::Drawing::Size(92, 13);
      this->label4->TabIndex = 25;
      this->label4->Text = L"Число итераций:";
      // 
      // textBox3
      // 
      this->textBox3->Location = System::Drawing::Point(979, 205);
      this->textBox3->Margin = System::Windows::Forms::Padding(2);
      this->textBox3->Name = L"textBox3";
      this->textBox3->Size = System::Drawing::Size(133, 20);
      this->textBox3->TabIndex = 24;
      // 
      // groupBox5
      // 
      this->groupBox5->BackColor = System::Drawing::SystemColors::ButtonFace;
      this->groupBox5->Controls->Add(this->comboBox1);
      this->groupBox5->Controls->Add(this->label9);
      this->groupBox5->Controls->Add(this->radioButton2);
      this->groupBox5->Controls->Add(this->radioButton1);
      this->groupBox5->Controls->Add(this->checkBox1);
      this->groupBox5->Controls->Add(this->textBox2);
      this->groupBox5->Controls->Add(this->label1);
      this->groupBox5->Controls->Add(this->label3);
      this->groupBox5->Controls->Add(this->textBox7);
      this->groupBox5->Controls->Add(this->textBox1);
      this->groupBox5->Controls->Add(this->label2);
      this->groupBox5->Controls->Add(this->label18);
      this->groupBox5->Controls->Add(this->label19);
      this->groupBox5->Controls->Add(this->label21);
      this->groupBox5->Controls->Add(this->label22);
      this->groupBox5->Cursor = System::Windows::Forms::Cursors::Default;
      this->groupBox5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
      this->groupBox5->Location = System::Drawing::Point(9, 10);
      this->groupBox5->Margin = System::Windows::Forms::Padding(2);
      this->groupBox5->Name = L"groupBox5";
      this->groupBox5->Padding = System::Windows::Forms::Padding(2);
      this->groupBox5->Size = System::Drawing::Size(813, 90);
      this->groupBox5->TabIndex = 22;
      this->groupBox5->TabStop = false;
      this->groupBox5->Text = L"Параметры";
      // 
      // comboBox1
      // 
      this->comboBox1->FormattingEnabled = true;
      this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
        L"Верхней релаксации", L"Простой итерации", L"Минимальных невязок",
          L"С Чебышевскими параметрами"
      });
      this->comboBox1->Location = System::Drawing::Point(255, 18);
      this->comboBox1->Name = L"comboBox1";
      this->comboBox1->Size = System::Drawing::Size(135, 21);
      this->comboBox1->TabIndex = 31;
      // 
      // label9
      // 
      this->label9->AutoSize = true;
      this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label9->Location = System::Drawing::Point(5, 18);
      this->label9->Name = L"label9";
      this->label9->Size = System::Drawing::Size(243, 60);
      this->label9->TabIndex = 30;
      this->label9->Text = L"u (x, y) = –sin^2 (πxy), при x∈(a, b), y∈(c, d);\r\n\r\nu (a, y) = sin(πy),   u (b, y"
        L") = sin(πy),   y∈[c, d];\r\nu (x, c) = x−x^2,    u (x, d) = x−x^2,   x∈[a, b].";
      // 
      // radioButton2
      // 
      this->radioButton2->AutoSize = true;
      this->radioButton2->Location = System::Drawing::Point(694, 37);
      this->radioButton2->Name = L"radioButton2";
      this->radioButton2->Size = System::Drawing::Size(113, 17);
      this->radioButton2->TabIndex = 29;
      this->radioButton2->TabStop = true;
      this->radioButton2->Text = L"Основная задача";
      this->radioButton2->UseVisualStyleBackColor = true;
      // 
      // radioButton1
      // 
      this->radioButton1->AutoSize = true;
      this->radioButton1->Location = System::Drawing::Point(694, 13);
      this->radioButton1->Name = L"radioButton1";
      this->radioButton1->Size = System::Drawing::Size(111, 17);
      this->radioButton1->TabIndex = 28;
      this->radioButton1->TabStop = true;
      this->radioButton1->Text = L"Тестовая задача";
      this->radioButton1->UseVisualStyleBackColor = true;
      // 
      // checkBox1
      // 
      this->checkBox1->AutoSize = true;
      this->checkBox1->Location = System::Drawing::Point(629, 62);
      this->checkBox1->Name = L"checkBox1";
      this->checkBox1->Size = System::Drawing::Size(108, 17);
      this->checkBox1->TabIndex = 27;
      this->checkBox1->Text = L"Оптимальный ω";
      this->checkBox1->UseVisualStyleBackColor = true;
      this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
      // 
      // textBox2
      // 
      this->textBox2->Location = System::Drawing::Point(512, 36);
      this->textBox2->MaxLength = 20;
      this->textBox2->Name = L"textBox2";
      this->textBox2->Size = System::Drawing::Size(111, 20);
      this->textBox2->TabIndex = 26;
      this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Location = System::Drawing::Point(396, 62);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(72, 13);
      this->label1->TabIndex = 25;
      this->label1->Text = L"Параметр ω:";
      // 
      // label3
      // 
      this->label3->AutoSize = true;
      this->label3->Location = System::Drawing::Point(396, 39);
      this->label3->Name = L"label3";
      this->label3->Size = System::Drawing::Size(110, 13);
      this->label3->TabIndex = 25;
      this->label3->Text = L"Ограничение шагов:";
      // 
      // textBox7
      // 
      this->textBox7->Location = System::Drawing::Point(512, 59);
      this->textBox7->Name = L"textBox7";
      this->textBox7->Size = System::Drawing::Size(111, 20);
      this->textBox7->TabIndex = 24;
      this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox7_KeyPress);
      // 
      // textBox1
      // 
      this->textBox1->Location = System::Drawing::Point(512, 12);
      this->textBox1->MaxLength = 20;
      this->textBox1->Name = L"textBox1";
      this->textBox1->Size = System::Drawing::Size(111, 20);
      this->textBox1->TabIndex = 24;
      this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Location = System::Drawing::Point(396, 15);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(97, 13);
      this->label2->TabIndex = 24;
      this->label2->Text = L"Точность метода:";
      // 
      // label18
      // 
      this->label18->AutoSize = true;
      this->label18->Location = System::Drawing::Point(273, 53);
      this->label18->Name = L"label18";
      this->label18->Size = System::Drawing::Size(31, 13);
      this->label18->TabIndex = 7;
      this->label18->Text = L"a = 0";
      // 
      // label19
      // 
      this->label19->AutoSize = true;
      this->label19->Location = System::Drawing::Point(310, 53);
      this->label19->Name = L"label19";
      this->label19->Size = System::Drawing::Size(31, 13);
      this->label19->TabIndex = 5;
      this->label19->Text = L"b = 1";
      // 
      // label21
      // 
      this->label21->AutoSize = true;
      this->label21->Location = System::Drawing::Point(273, 66);
      this->label21->Name = L"label21";
      this->label21->Size = System::Drawing::Size(31, 13);
      this->label21->TabIndex = 12;
      this->label21->Text = L"c = 0";
      // 
      // label22
      // 
      this->label22->AutoSize = true;
      this->label22->Location = System::Drawing::Point(310, 66);
      this->label22->Name = L"label22";
      this->label22->Size = System::Drawing::Size(31, 13);
      this->label22->TabIndex = 3;
      this->label22->Text = L"d = 1";
      // 
      // Button1
      // 
      this->Button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
      this->Button1->Location = System::Drawing::Point(967, 10);
      this->Button1->Name = L"Button1";
      this->Button1->Size = System::Drawing::Size(145, 90);
      this->Button1->TabIndex = 19;
      this->Button1->Text = L"Вычислить";
      this->Button1->UseVisualStyleBackColor = true;
      this->Button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
      // 
      // groupBox7
      // 
      this->groupBox7->BackColor = System::Drawing::SystemColors::ButtonFace;
      this->groupBox7->Controls->Add(this->label12);
      this->groupBox7->Controls->Add(this->textBox10);
      this->groupBox7->Controls->Add(this->label13);
      this->groupBox7->Controls->Add(this->textBox11);
      this->groupBox7->Location = System::Drawing::Point(826, 10);
      this->groupBox7->Margin = System::Windows::Forms::Padding(2);
      this->groupBox7->Name = L"groupBox7";
      this->groupBox7->Padding = System::Windows::Forms::Padding(2);
      this->groupBox7->Size = System::Drawing::Size(136, 90);
      this->groupBox7->TabIndex = 18;
      this->groupBox7->TabStop = false;
      this->groupBox7->Text = L"Число разбиений";
      // 
      // label12
      // 
      this->label12->AutoSize = true;
      this->label12->Location = System::Drawing::Point(35, 61);
      this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label12->Name = L"label12";
      this->label12->Size = System::Drawing::Size(32, 13);
      this->label12->TabIndex = 18;
      this->label12->Text = L"По у:";
      // 
      // textBox10
      // 
      this->textBox10->Location = System::Drawing::Point(69, 58);
      this->textBox10->Margin = System::Windows::Forms::Padding(2);
      this->textBox10->MaxLength = 20;
      this->textBox10->Name = L"textBox10";
      this->textBox10->Size = System::Drawing::Size(42, 20);
      this->textBox10->TabIndex = 17;
      this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox10_KeyPress);
      // 
      // label13
      // 
      this->label13->AutoSize = true;
      this->label13->Location = System::Drawing::Point(35, 26);
      this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label13->Name = L"label13";
      this->label13->Size = System::Drawing::Size(32, 13);
      this->label13->TabIndex = 16;
      this->label13->Text = L"По х:";
      // 
      // textBox11
      // 
      this->textBox11->Location = System::Drawing::Point(68, 23);
      this->textBox11->Margin = System::Windows::Forms::Padding(2);
      this->textBox11->MaxLength = 20;
      this->textBox11->Name = L"textBox11";
      this->textBox11->Size = System::Drawing::Size(42, 20);
      this->textBox11->TabIndex = 15;
      this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox11_KeyPress);
      // 
      // tabControl1
      // 
      this->tabControl1->Controls->Add(this->tabPage2);
      this->tabControl1->Location = System::Drawing::Point(-1, 2);
      this->tabControl1->Margin = System::Windows::Forms::Padding(2);
      this->tabControl1->Name = L"tabControl1";
      this->tabControl1->SelectedIndex = 0;
      this->tabControl1->Size = System::Drawing::Size(1129, 466);
      this->tabControl1->TabIndex = 14;
      // 
      // MyForm
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(1125, 465);
      this->Controls->Add(this->tabControl1);
      this->MaximumSize = System::Drawing::Size(1142, 505);
      this->MinimumSize = System::Drawing::Size(1140, 500);
      this->Name = L"MyForm";
      this->Text = L"Задача Дирихле";
      this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
      this->tabPage2->ResumeLayout(false);
      this->tabPage2->PerformLayout();
      this->tabControl2->ResumeLayout(false);
      this->tabPage1->ResumeLayout(false);
      this->tabControl3->ResumeLayout(false);
      this->tabPage4->ResumeLayout(false);
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
      this->tabPage5->ResumeLayout(false);
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
      this->tabPage6->ResumeLayout(false);
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
      this->tabPage3->ResumeLayout(false);
      this->tabControl4->ResumeLayout(false);
      this->tabPage7->ResumeLayout(false);
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
      this->tabPage8->ResumeLayout(false);
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
      this->tabPage9->ResumeLayout(false);
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
      this->groupBox5->ResumeLayout(false);
      this->groupBox5->PerformLayout();
      this->groupBox7->ResumeLayout(false);
      this->groupBox7->PerformLayout();
      this->tabControl1->ResumeLayout(false);
      this->ResumeLayout(false);

    }
#pragma endregion

  private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
  {
    textBox1->Text = "1e-8";
    textBox2->Text = "500";
    textBox11->Text = "5";
    textBox10->Text = "5";
    testOver.setH(1.0 / Convert::ToDouble(textBox11->Text));
    testOver.setOmega(0.0, true);
    textBox7->Text = testOver.getOmega().ToString();
    textBox3->ReadOnly = true;
    textBox4->ReadOnly = true;
    textBox6->ReadOnly = true;
    textBox7->ReadOnly = true;
    dataGridView1->ReadOnly = true;
    dataGridView1->RowHeadersVisible = false;
    dataGridView1->ColumnHeadersVisible = false;
    dataGridView2->ReadOnly = true;
    dataGridView2->RowHeadersVisible = false;
    dataGridView2->ColumnHeadersVisible = false;
    dataGridView3->ReadOnly = true;
    dataGridView3->RowHeadersVisible = false;
    dataGridView3->ColumnHeadersVisible = false;
    dataGridView4->ReadOnly = true;
    dataGridView4->RowHeadersVisible = false;
    dataGridView4->ColumnHeadersVisible = false;
    dataGridView5->ReadOnly = true;
    dataGridView5->RowHeadersVisible = false;
    dataGridView5->ColumnHeadersVisible = false;
    dataGridView6->ReadOnly = true;
    dataGridView6->RowHeadersVisible = false;
    dataGridView6->ColumnHeadersVisible = false;
    checkBox1->Checked = true;
    radioButton1->Checked = true;
    comboBox1->SelectedIndex = 3;
  }

  private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
    double a = 0.;
    double b = 1.;
    double c = 0.;
    double d = 1.;
    n = Convert::ToInt32(textBox10->Text);
    m = Convert::ToInt32(textBox11->Text);
    h = static_cast<double>(b - a) / static_cast<double>(n);
    k = static_cast<double>(d - c) / static_cast<double>(m);
    double eps = Convert::ToDouble(textBox1->Text);
    int countStep = Convert::ToInt32(textBox2->Text);

    if (!checkBox1->Checked) { SetOmegaFalse(); }
    else { SetOmegaTrue(); }

    int rMaxX, rMaxY;
    isTests = radioButton1->Checked;
    if (isTests)
    {
      switch (comboBox1->SelectedIndex)
      {
        case 0:
          testOver.setParameters(n, m, eps, countStep, a, b, c, d, omega);
          testOver.solveDifferenceScheme(true);
          resetHedarsTableT();
          updateTableOver_t();
          textBox3->Text = testOver.getCountIt().ToString();
          textBox4->Text = testOver.getEps().ToString("E");
          textBox6->Text = (testOver.getMaxR(rMaxX, rMaxY)).ToString("E");
          break;
        
        case 1:
          testSIt.setParameters(n, m, eps, countStep, a, b, c, d, omega);
          testSIt.solveDifferenceScheme(true);
          resetHedarsTableT();
          updateTableSit_t();
          textBox3->Text = testSIt.getCountIt().ToString();
          textBox4->Text = testSIt.getEps().ToString("E");
          textBox6->Text = (testSIt.getMaxR(rMaxX, rMaxY)).ToString("E");
          break;

        case 2:

          break;

        case 3:

          break;

        default: break;
      }
    }
    else
    {
      switch (comboBox1->SelectedIndex)
      {
        case 0:
          mainOver1.setParameters(n, m, eps, countStep, a, b, c, d, omega);
          mainOver1.solveDifferenceScheme(false);
          mainOver2.setParameters(2 * n, 2 * m, eps, countStep, a, b, c, d, omega);
          mainOver2.solveDifferenceScheme(false);
          resetHedarsTableM();
          updateTableOver_m();
          textBox3->Text = mainOver1.getCountIt().ToString();
          textBox4->Text = mainOver1.getEps().ToString("E");
          textBox6->Text = (mainOver1.getMaxR(mainOver2, rMaxX, rMaxY)).ToString("E");
          break;
        
        case 1:
          mainSIt1.setParameters(n, m, eps, countStep, a, b, c, d, omega);
          mainSIt1.solveDifferenceScheme(false);
          mainSIt2.setParameters((2 * n), (2 * m), eps, countStep, a, b, c, d, sqr(0.5 * h) * 0.25);
          mainSIt2.solveDifferenceScheme(false);
          resetHedarsTableM();
          updateTableSit_m();
          textBox3->Text = mainSIt1.getCountIt().ToString();
          textBox4->Text = mainSIt1.getEps().ToString("E");
          textBox6->Text = (mainSIt1.getMaxR(SimpleIteration(), rMaxX, rMaxY)).ToString("E");
          break;

        case 2:

          break;

        case 3:

          break;

        default: break;
      }
    }

    label6->Text = ("x: " + rMaxX.ToString());
    label10->Text = ("y: " + rMaxY.ToString());
  }

  private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
  {
      textBox7->ReadOnly = checkBox1->Checked;
      if (checkBox1->Checked) SetOmegaTrue();
  }

  private: System::Void SetOmegaTrue()
  {
    switch (comboBox1->SelectedIndex)
    {
      case 0:
        h = 1.0 / Convert::ToDouble(textBox11->Text);

        testOver.setH(h);
        mainOver1.setH(h);
        mainOver2.setH(h);

        testOver.setOmega(0.0, true);
        mainOver1.setOmega(0.0, true);
        mainOver2.setOmega(0.0, true);

        omega = testOver.getOmega();

        textBox7->Text = omega.ToString();
        break;

      case 1:
        h = 1.0 / Convert::ToDouble(textBox11->Text);

        testSIt.setH(h);
        mainSIt1.setH(h);
        mainSIt2.setH(h);

        testSIt.setOmega(0.0, true);
        mainSIt1.setOmega(0.0, true);
        mainSIt2.set2Omega(0.0, true);

        omega = testSIt.getOmega();

        textBox7->Text = omega.ToString();
        break;

      case 2:
        break;

      case 3:
        break;
      default: break;
    }
  }
  private: System::Void SetOmegaFalse()
  {
    switch (comboBox1->SelectedIndex)
    {
      case 0:
        omega = Convert::ToDouble(textBox7->Text);

        testOver.setOmega(omega);
        mainOver1.setOmega(omega);
        mainOver2.setOmega(omega);
        break;

      case 1:
        omega = Convert::ToDouble(textBox7->Text);

        testSIt.setOmega(omega);
        mainSIt1.setOmega(omega);
        mainSIt2.set2Omega(omega, true);
        break;

      case 2:
        break;

      case 3:
        break;
      default: break;
    }
  }

  private: System::Void resetHedarsTableM()
  {
    dataGridView4->Rows->Clear();
    dataGridView4->ColumnCount = (int)n + 3;
    dataGridView5->Rows->Clear();
    dataGridView5->ColumnCount = (int)n * 2 + 3;
    dataGridView6->Rows->Clear();
    dataGridView6->ColumnCount = (int)n + 3;

    for (int i = 0; i <= m + 2; i++) {
      dataGridView4->Rows->Add();
      dataGridView5->Rows->Add();
      dataGridView5->Rows->Add();
      dataGridView6->Rows->Add();
    }

    dataGridView4->Rows[0]->Cells[1]->Value = "i";
    dataGridView5->Rows[0]->Cells[1]->Value = "i";
    dataGridView6->Rows[0]->Cells[1]->Value = "i";
    dataGridView4->Rows[1]->Cells[0]->Value = "j";
    dataGridView5->Rows[1]->Cells[0]->Value = "j";
    dataGridView6->Rows[1]->Cells[0]->Value = "j";
    dataGridView4->Rows[1]->Cells[1]->Value = "Y\\X";
    dataGridView5->Rows[1]->Cells[1]->Value = "Y\\X";
    dataGridView6->Rows[1]->Cells[1]->Value = "Y\\X";

    for (int i = 2; i <= n + 2; i++) {
      dataGridView4->Rows[0]->Cells[i]->Value = i - 2;
      dataGridView6->Rows[0]->Cells[i]->Value = i - 2;
      dataGridView4->Rows[1]->Cells[i]->Value = h * (i - 2);
      dataGridView6->Rows[1]->Cells[i]->Value = h * (i - 2);
    }
    for (int i = 2; i <= n * 2 + 2; i++) {
      dataGridView5->Rows[0]->Cells[i]->Value = i - 2;
      dataGridView5->Rows[1]->Cells[i]->Value = (h * 0.5) * (i - 2);
    }
    for (int i = (int)n + 2; i > 1; i--) {
      dataGridView4->Rows[i]->Cells[1]->Value = k * (n - i + 2);
      dataGridView6->Rows[i]->Cells[1]->Value = k * (n - i + 2);
      dataGridView4->Rows[i]->Cells[0]->Value = n - i + 2;
      dataGridView6->Rows[i]->Cells[0]->Value = n - i + 2;
    }
    for (int i = (int)n * 2 + 2; i > 1; i--) {
      dataGridView5->Rows[i]->Cells[1]->Value = k * 0.5 * (n * 2 - i + 2);
      dataGridView5->Rows[i]->Cells[0]->Value = n * 2 - i + 2;
    }
  }
  private: System::Void resetHedarsTableT()
  {
    dataGridView2->Rows->Clear();
    dataGridView2->ColumnCount = (int)n + 3;
    dataGridView1->Rows->Clear();
    dataGridView1->ColumnCount = (int)n + 3;
    dataGridView3->Rows->Clear();
    dataGridView3->ColumnCount = (int)n + 3;

    for (int i = 0; i <= m + 2; i++)
    {
      dataGridView2->Rows->Add();
      dataGridView1->Rows->Add();
      dataGridView3->Rows->Add();
    }

    dataGridView2->Rows[0]->Cells[1]->Value = "i";
    dataGridView1->Rows[0]->Cells[1]->Value = "i";
    dataGridView3->Rows[0]->Cells[1]->Value = "i";
    dataGridView2->Rows[1]->Cells[0]->Value = "j";
    dataGridView1->Rows[1]->Cells[0]->Value = "j";
    dataGridView3->Rows[1]->Cells[0]->Value = "j";
    dataGridView2->Rows[1]->Cells[1]->Value = "Y\\X";
    dataGridView1->Rows[1]->Cells[1]->Value = "Y\\X";
    dataGridView3->Rows[1]->Cells[1]->Value = "Y\\X";

    for (int i = 2; i <= n + 2; i++)
    {
      dataGridView2->Rows[0]->Cells[i]->Value = i - 2;
      dataGridView1->Rows[0]->Cells[i]->Value = i - 2;
      dataGridView3->Rows[0]->Cells[i]->Value = i - 2;
      dataGridView2->Rows[1]->Cells[i]->Value = h * (i - 2);
      dataGridView1->Rows[1]->Cells[i]->Value = h * (i - 2);
      dataGridView3->Rows[1]->Cells[i]->Value = h * (i - 2);
    }
    for (int i = (int)n + 2; i > 1; i--)
    {
      dataGridView2->Rows[i]->Cells[0]->Value = n - i + 2;
      dataGridView1->Rows[i]->Cells[0]->Value = n - i + 2;
      dataGridView3->Rows[i]->Cells[0]->Value = n - i + 2;
      dataGridView2->Rows[i]->Cells[1]->Value = k * (n - i + 2);
      dataGridView1->Rows[i]->Cells[1]->Value = k * (n - i + 2);
      dataGridView3->Rows[i]->Cells[1]->Value = k * (n - i + 2);
    }
  }
  private: System::Void updateTableOver_m()
  {
    double tmpMaxR = 0., tmpR;
    int rMaxX, rMaxY;

    for (int i = 2; i < mainOver1.getW() + 3; i++)
    {
      for (int j = 2; j < mainOver1.getH() + 3; j++)
      {
        dataGridView4->Rows[mainOver1.getH() - j + 4]->Cells[i]->Value = mainOver1.getV(i - 2, j - 2).ToString("E");
        tmpR = abs(mainOver2.getV(2 * i - 4, 2 * j - 4) - mainOver1.getV(i - 2, j - 2));
        dataGridView6->Rows[mainOver1.getH() - j + 4]->Cells[i]->Value = tmpR.ToString("E");
        if (tmpR > tmpMaxR)
        {
          tmpMaxR = tmpR;
          rMaxX = i - 2;
          rMaxY = j - 2;
        }
      }
    }
    for (int i = 2; i < mainOver2.getW() + 3; i++)
    {
      for (int j = 2; j < mainOver2.getH() + 3; j++)
      {
        dataGridView5->Rows[mainOver2.getH() - j + 4]->Cells[i]->Value = mainOver2.getV(i - 2, j - 2).ToString("E");
      }
    }

    textBox6->Text = tmpMaxR.ToString("E");
    label6->Text = ("x: " + rMaxX.ToString());
    label10->Text = ("y: " + rMaxY.ToString());
  }
  private: System::Void updateTableOver_t()
  {
    for (int i = 2; i < testOver.getW() + 3; i++)
    {
      for (int j = 2; j < testOver.getH() + 3; j++)
      {
        dataGridView2->Rows[testOver.getH() - j + 4]->Cells[i]->Value = testOver.getV(i - 2, j - 2).ToString("E");
        dataGridView1->Rows[testOver.getH() - j + 4]->Cells[i]->Value = testOver.getU(i - 2, j - 2).ToString("E");
        dataGridView3->Rows[testOver.getH() - j + 4]->Cells[i]->Value = (abs(testOver.getU(i - 2, j - 2) - testOver.getV(i - 2, j - 2))).ToString("E");
      }
    }
  }
  private: System::Void updateTableSit_m()
  {
    double tmpMaxR = 0., tmpR;
    int rMaxX, rMaxY;

    for (int i = 2; i < mainSIt1.getW() + 3; i++)
    {
      for (int j = 2; j < mainSIt1.getH() + 3; j++)
      {
        dataGridView4->Rows[mainSIt1.getH() - j + 4]->Cells[i]->Value = mainSIt1.getV(i - 2, j - 2).ToString("E");
        tmpR = abs(mainSIt2.getV(2 * i - 4, 2 * j - 4) - mainSIt1.getV(i - 2, j - 2));
        dataGridView6->Rows[mainSIt1.getH() - j + 4]->Cells[i]->Value = tmpR.ToString("E");
        if (tmpR > tmpMaxR)
        {
          tmpMaxR = tmpR;
          rMaxX = i - 2;
          rMaxY = j - 2;
        }
      }
    }
    for (int i = 2; i < mainSIt2.getW() + 3; i++)
    {
      for (int j = 2; j < mainSIt2.getH() + 3; j++)
      {
        dataGridView5->Rows[mainSIt2.getH() - j + 4]->Cells[i]->Value = (mainSIt2.getV(i - 2, j - 2)).ToString("E");
      }
    }

    textBox6->Text = tmpMaxR.ToString("E");
    label6->Text = ("x: " + rMaxX.ToString());
    label10->Text = ("y: " + rMaxY.ToString());
  }
  private: System::Void updateTableSit_t()
  {
    for (int i = 2; i < testSIt.getW() + 3; i++)
    {
      for (int j = 2; j < testSIt.getH() + 3; j++)
      {
        dataGridView2->Rows[testSIt.getH() - j + 4]->Cells[i]->Value = testSIt.getV(i - 2, j - 2).ToString("E");
        dataGridView1->Rows[testSIt.getH() - j + 4]->Cells[i]->Value = testSIt.getU(i - 2, j - 2).ToString("E");
        dataGridView3->Rows[testSIt.getH() - j + 4]->Cells[i]->Value = (abs(testSIt.getU(i - 2, j - 2) - testSIt.getV(i - 2, j - 2))).ToString("E");
      }
    }
  }

  private: System::Void textBox11_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
  {
    char number = (char)e->KeyChar;
    if (!Char::IsDigit(number) && number != 8)
    {
      e->Handled = true;
    }
  }
  private: System::Void textBox10_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
  {
    char number = (char)e->KeyChar;
    if (!Char::IsDigit(number) && number != 8)
    {
      e->Handled = true;
    }
  }
  private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
  {
    char number = (char)e->KeyChar;
    if (!Char::IsDigit(number) && number != 8 && number != 44 && number != 45 && number != 46 && number != 101)
    {
      e->Handled = true;
    }
  }
  private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
  {
    char number = (char)e->KeyChar;
    if (!Char::IsDigit(number) && number != 8)
    {
      e->Handled = true;
    }
  }
  private: System::Void textBox7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
  {
    char number = (char)e->KeyChar;
    if (!Char::IsDigit(number) && number != 8 && number != 44 && number != 45 && number != 46 && number != 101)
    {
      e->Handled = true;
    }
  }
  };
}
