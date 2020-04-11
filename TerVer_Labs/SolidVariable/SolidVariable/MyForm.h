#pragma once

#include <cstdlib>
#include <ctime>
#include <map>
#include <iostream>
#include <vector>


namespace SolidVariablek
{
  int MB_OK = 0x00000000L;
  int N;
  double lam;
  double del;
  double tmp;
  std::multimap<double, int> a;
  std::multimap<double, int>::iterator b;

  int num_int;

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

  private: System::Windows::Forms::TextBox^ textBox1;
  private: System::Windows::Forms::TextBox^ textBox2;
  private: System::Windows::Forms::TextBox^ textBox3;
  private: System::Windows::Forms::TextBox^ textBox4;
  private: System::Windows::Forms::TextBox^ textBox5;
  private: System::Windows::Forms::TextBox^ textBox6;
  private: System::Windows::Forms::TextBox^ textBox7;
  private: System::Windows::Forms::TextBox^ textBox8;
  private: System::Windows::Forms::TextBox^ textBox9;
  private: System::Windows::Forms::TextBox^ textBox10;
  private: System::Windows::Forms::TextBox^ textBox11;
  private: System::Windows::Forms::TextBox^ textBox12;
  private: System::Windows::Forms::CheckBox^ checkBox1;
  private: System::Windows::Forms::CheckBox^ checkBox2;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::Label^ label5;
  private: System::Windows::Forms::Label^ label6;
  private: System::Windows::Forms::Label^ label7;
  private: System::Windows::Forms::Label^ label8;
  private: System::Windows::Forms::Label^ label9;
  private: System::Windows::Forms::Label^ label10;
  private: System::Windows::Forms::Label^ label11;
  private: System::Windows::Forms::Label^ label12;
  private: System::Windows::Forms::Label^ label13;
  private: System::Windows::Forms::Label^ label14;
  private: System::Windows::Forms::Label^ label15;
  private: System::Windows::Forms::Button^ button1;
  private: System::Windows::Forms::Button^ button2;
  private: System::Windows::Forms::Button^ button3;
  private: System::Windows::Forms::Button^ button4;
  private: System::Windows::Forms::Button^ button5;
  private: System::Windows::Forms::TabPage^ tabPage1;
  private: System::Windows::Forms::TabPage^ tabPage2;
  private: System::Windows::Forms::TabPage^ tabPage3;
  private: System::Windows::Forms::TabControl^ tabControl1;
  private: System::Windows::Forms::PictureBox^ pictureBox1;
  private: System::Windows::Forms::DataGridView^ dataGridView1;
  private: System::Windows::Forms::DataGridView^ dataGridView2;
  private: System::Windows::Forms::DataGridView^ dataGridView3;
  private: System::Windows::Forms::DataGridView^ dataGridView4;
  private: System::Windows::Forms::DataGridView^ dataGridView5;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
  private: System::Windows::Forms::DataGridView^  dataGridView6;
  private: System::Windows::Forms::TextBox^  textBox14;
  private: System::Windows::Forms::TextBox^  textBox13;
  private: System::Windows::Forms::Label^  label18;
  private: System::Windows::Forms::Label^  label17;
  private: System::Windows::Forms::Label^  label16;
           //private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
           //private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;

  protected:

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
      this->button1 = (gcnew System::Windows::Forms::Button());
      this->button2 = (gcnew System::Windows::Forms::Button());
      this->button3 = (gcnew System::Windows::Forms::Button());
      this->button4 = (gcnew System::Windows::Forms::Button());
      this->button5 = (gcnew System::Windows::Forms::Button());
      this->textBox1 = (gcnew System::Windows::Forms::TextBox());
      this->textBox2 = (gcnew System::Windows::Forms::TextBox());
      this->textBox3 = (gcnew System::Windows::Forms::TextBox());
      this->textBox4 = (gcnew System::Windows::Forms::TextBox());
      this->textBox5 = (gcnew System::Windows::Forms::TextBox());
      this->textBox6 = (gcnew System::Windows::Forms::TextBox());
      this->textBox7 = (gcnew System::Windows::Forms::TextBox());
      this->textBox8 = (gcnew System::Windows::Forms::TextBox());
      this->textBox9 = (gcnew System::Windows::Forms::TextBox());
      this->textBox10 = (gcnew System::Windows::Forms::TextBox());
      this->textBox11 = (gcnew System::Windows::Forms::TextBox());
      this->textBox12 = (gcnew System::Windows::Forms::TextBox());
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->label3 = (gcnew System::Windows::Forms::Label());
      this->label4 = (gcnew System::Windows::Forms::Label());
      this->label5 = (gcnew System::Windows::Forms::Label());
      this->label6 = (gcnew System::Windows::Forms::Label());
      this->label7 = (gcnew System::Windows::Forms::Label());
      this->label8 = (gcnew System::Windows::Forms::Label());
      this->label9 = (gcnew System::Windows::Forms::Label());
      this->label10 = (gcnew System::Windows::Forms::Label());
      this->label11 = (gcnew System::Windows::Forms::Label());
      this->label12 = (gcnew System::Windows::Forms::Label());
      this->label13 = (gcnew System::Windows::Forms::Label());
      this->label14 = (gcnew System::Windows::Forms::Label());
      this->label15 = (gcnew System::Windows::Forms::Label());
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
      this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
      this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
      this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
      this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
      this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
      this->textBox14 = (gcnew System::Windows::Forms::TextBox());
      this->textBox13 = (gcnew System::Windows::Forms::TextBox());
      this->label18 = (gcnew System::Windows::Forms::Label());
      this->label17 = (gcnew System::Windows::Forms::Label());
      this->label16 = (gcnew System::Windows::Forms::Label());
      this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
      this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
      this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
      this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
      this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
      this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
      this->tabPage3->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
      this->tabControl1->SuspendLayout();
      this->SuspendLayout();
      // 
      // button1
      // 
      this->button1->BackColor = System::Drawing::Color::RosyBrown;
      this->button1->Location = System::Drawing::Point(208, 240);
      this->button1->Margin = System::Windows::Forms::Padding(2);
      this->button1->Name = L"button1";
      this->button1->Size = System::Drawing::Size(96, 29);
      this->button1->TabIndex = 3;
      this->button1->Text = L"Begin";
      this->button1->UseVisualStyleBackColor = false;
      this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
      // 
      // button2
      // 
      this->button2->Location = System::Drawing::Point(321, 240);
      this->button2->Margin = System::Windows::Forms::Padding(2);
      this->button2->Name = L"button2";
      this->button2->Size = System::Drawing::Size(105, 29);
      this->button2->TabIndex = 11;
      this->button2->Text = L"Grap";
      this->button2->UseVisualStyleBackColor = true;
      this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
      // 
      // button3
      // 
      this->button3->Location = System::Drawing::Point(441, 240);
      this->button3->Margin = System::Windows::Forms::Padding(2);
      this->button3->Name = L"button3";
      this->button3->Size = System::Drawing::Size(96, 29);
      this->button3->TabIndex = 12;
      this->button3->Text = L"Aproksi";
      this->button3->UseVisualStyleBackColor = true;
      this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
      // 
      // button4
      // 
      this->button4->Location = System::Drawing::Point(208, 329);
      this->button4->Margin = System::Windows::Forms::Padding(2);
      this->button4->Name = L"button4";
      this->button4->Size = System::Drawing::Size(96, 24);
      this->button4->TabIndex = 13;
      this->button4->Text = L"Ok";
      this->button4->UseVisualStyleBackColor = true;
      this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
      // 
      // button5
      // 
      this->button5->BackColor = System::Drawing::Color::Salmon;
      this->button5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
      this->button5->Location = System::Drawing::Point(30, 197);
      this->button5->Margin = System::Windows::Forms::Padding(2);
      this->button5->Name = L"button5";
      this->button5->Size = System::Drawing::Size(126, 38);
      this->button5->TabIndex = 0;
      this->button5->Text = L"Go";
      this->button5->UseVisualStyleBackColor = false;
      this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
      // 
      // textBox1
      // 
      this->textBox1->Location = System::Drawing::Point(56, 264);
      this->textBox1->Margin = System::Windows::Forms::Padding(2);
      this->textBox1->Name = L"textBox1";
      this->textBox1->Size = System::Drawing::Size(76, 20);
      this->textBox1->TabIndex = 2;
      this->textBox1->Text = L"20";
      // 
      // textBox2
      // 
      this->textBox2->Location = System::Drawing::Point(56, 292);
      this->textBox2->Margin = System::Windows::Forms::Padding(2);
      this->textBox2->Name = L"textBox2";
      this->textBox2->Size = System::Drawing::Size(76, 20);
      this->textBox2->TabIndex = 5;
      this->textBox2->Text = L"10";
      // 
      // textBox3
      // 
      this->textBox3->Location = System::Drawing::Point(610, 13);
      this->textBox3->Margin = System::Windows::Forms::Padding(2);
      this->textBox3->Name = L"textBox3";
      this->textBox3->ReadOnly = true;
      this->textBox3->Size = System::Drawing::Size(76, 20);
      this->textBox3->TabIndex = 18;
      // 
      // textBox4
      // 
      this->textBox4->Location = System::Drawing::Point(689, 13);
      this->textBox4->Margin = System::Windows::Forms::Padding(2);
      this->textBox4->Name = L"textBox4";
      this->textBox4->Size = System::Drawing::Size(76, 20);
      this->textBox4->TabIndex = 19;
      // 
      // textBox5
      // 
      this->textBox5->Location = System::Drawing::Point(771, 13);
      this->textBox5->Margin = System::Windows::Forms::Padding(2);
      this->textBox5->Name = L"textBox5";
      this->textBox5->Size = System::Drawing::Size(76, 20);
      this->textBox5->TabIndex = 20;
      // 
      // textBox6
      // 
      this->textBox6->Location = System::Drawing::Point(853, 13);
      this->textBox6->Margin = System::Windows::Forms::Padding(2);
      this->textBox6->Name = L"textBox6";
      this->textBox6->Size = System::Drawing::Size(76, 20);
      this->textBox6->TabIndex = 21;
      // 
      // textBox7
      // 
      this->textBox7->Location = System::Drawing::Point(932, 13);
      this->textBox7->Margin = System::Windows::Forms::Padding(2);
      this->textBox7->Name = L"textBox7";
      this->textBox7->Size = System::Drawing::Size(76, 20);
      this->textBox7->TabIndex = 22;
      // 
      // textBox8
      // 
      this->textBox8->Location = System::Drawing::Point(1012, 13);
      this->textBox8->Margin = System::Windows::Forms::Padding(2);
      this->textBox8->Name = L"textBox8";
      this->textBox8->Size = System::Drawing::Size(76, 20);
      this->textBox8->TabIndex = 23;
      // 
      // textBox9
      // 
      this->textBox9->Location = System::Drawing::Point(1090, 13);
      this->textBox9->Margin = System::Windows::Forms::Padding(2);
      this->textBox9->Name = L"textBox9";
      this->textBox9->ReadOnly = true;
      this->textBox9->Size = System::Drawing::Size(76, 20);
      this->textBox9->TabIndex = 24;
      // 
      // textBox10
      // 
      this->textBox10->Location = System::Drawing::Point(374, 306);
      this->textBox10->Margin = System::Windows::Forms::Padding(2);
      this->textBox10->Name = L"textBox10";
      this->textBox10->Size = System::Drawing::Size(76, 20);
      this->textBox10->TabIndex = 34;
      // 
      // textBox11
      // 
      this->textBox11->Location = System::Drawing::Point(142, 80);
      this->textBox11->Margin = System::Windows::Forms::Padding(2);
      this->textBox11->Name = L"textBox11";
      this->textBox11->Size = System::Drawing::Size(84, 20);
      this->textBox11->TabIndex = 2;
      this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
      // 
      // textBox12
      // 
      this->textBox12->Location = System::Drawing::Point(142, 142);
      this->textBox12->Margin = System::Windows::Forms::Padding(2);
      this->textBox12->Name = L"textBox12";
      this->textBox12->Size = System::Drawing::Size(84, 20);
      this->textBox12->TabIndex = 6;
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Location = System::Drawing::Point(2, 266);
      this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(27, 13);
      this->label1->TabIndex = 1;
      this->label1->Text = L" N =";
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Location = System::Drawing::Point(2, 293);
      this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(50, 13);
      this->label2->TabIndex = 4;
      this->label2->Text = L"lambda =\r\n";
      // 
      // label3
      // 
      this->label3->AutoSize = true;
      this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
      this->label3->Location = System::Drawing::Point(4, 240);
      this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label3->Name = L"label3";
      this->label3->Size = System::Drawing::Size(57, 13);
      this->label3->TabIndex = 6;
      this->label3->Text = L"N - Kol Iter";
      // 
      // label4
      // 
      this->label4->AutoSize = true;
      this->label4->Location = System::Drawing::Point(14, 348);
      this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label4->Name = L"label4";
      this->label4->Size = System::Drawing::Size(0, 13);
      this->label4->TabIndex = 26;
      // 
      // label5
      // 
      this->label5->AutoSize = true;
      this->label5->Location = System::Drawing::Point(14, 322);
      this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label5->Name = L"label5";
      this->label5->Size = System::Drawing::Size(0, 13);
      this->label5->TabIndex = 9;
      // 
      // label6
      // 
      this->label6->AutoSize = true;
      this->label6->Location = System::Drawing::Point(834, 285);
      this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label6->Name = L"label6";
      this->label6->Size = System::Drawing::Size(80, 13);
      this->label6->TabIndex = 15;
      this->label6->Text = L"D - ksi F * F^ = ";
      // 
      // label7
      // 
      this->label7->AutoSize = true;
      this->label7->Location = System::Drawing::Point(402, 740);
      this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label7->Name = L"label7";
      this->label7->Size = System::Drawing::Size(0, 13);
      this->label7->TabIndex = 16;
      // 
      // label8
      // 
      this->label8->AutoSize = true;
      this->label8->Location = System::Drawing::Point(608, 66);
      this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label8->Name = L"label8";
      this->label8->Size = System::Drawing::Size(0, 13);
      this->label8->TabIndex = 25;
      // 
      // label9
      // 
      this->label9->AutoSize = true;
      this->label9->Location = System::Drawing::Point(834, 240);
      this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label9->Name = L"label9";
      this->label9->Size = System::Drawing::Size(133, 13);
      this->label9->TabIndex = 29;
      this->label9->Text = L"max |n(j)/(N*delta(j)) - f(j)| = ";
      // 
      // label10
      // 
      this->label10->AutoSize = true;
      this->label10->Location = System::Drawing::Point(765, 266);
      this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label10->Name = L"label10";
      this->label10->Size = System::Drawing::Size(0, 13);
      this->label10->TabIndex = 30;
      // 
      // label11
      // 
      this->label11->AutoSize = true;
      this->label11->Location = System::Drawing::Point(28, 80);
      this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label11->Name = L"label11";
      this->label11->Size = System::Drawing::Size(28, 13);
      this->label11->TabIndex = 1;
      this->label11->Text = L"Text";
      // 
      // label12
      // 
      this->label12->AutoSize = true;
      this->label12->Location = System::Drawing::Point(28, 142);
      this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label12->Name = L"label12";
      this->label12->Size = System::Drawing::Size(31, 13);
      this->label12->TabIndex = 3;
      this->label12->Text = L"Alpfa";
      // 
      // label13
      // 
      this->label13->AutoSize = true;
      this->label13->Location = System::Drawing::Point(28, 286);
      this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label13->Name = L"label13";
      this->label13->Size = System::Drawing::Size(0, 13);
      this->label13->TabIndex = 4;
      // 
      // label14
      // 
      this->label14->AutoSize = true;
      this->label14->Location = System::Drawing::Point(140, 286);
      this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label14->Name = L"label14";
      this->label14->Size = System::Drawing::Size(0, 13);
      this->label14->TabIndex = 5;
      // 
      // label15
      // 
      this->label15->AutoSize = true;
      this->label15->Location = System::Drawing::Point(356, 22);
      this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label15->Name = L"label15";
      this->label15->Size = System::Drawing::Size(25, 13);
      this->label15->TabIndex = 9;
      this->label15->Text = L"Log";
      // 
      // Column1
      // 
      this->Column1->HeaderText = L"Number";
      this->Column1->Name = L"Column1";
      this->Column1->Width = 60;
      // 
      // Column2
      // 
      this->Column2->HeaderText = L"Value";
      this->Column2->Name = L"Column2";
      // 
      // Column3
      // 
      this->Column3->HeaderText = L"M_nu";
      this->Column3->Name = L"Column3";
      // 
      // Column4
      // 
      this->Column4->HeaderText = L"x vyb_sr";
      this->Column4->Name = L"Column4";
      // 
      // Column5
      // 
      this->Column5->HeaderText = L"|M_nu - x vyb_sr|";
      this->Column5->Name = L"Column5";
      // 
      // Column6
      // 
      this->Column6->HeaderText = L"D_nu";
      this->Column6->Name = L"Column6";
      // 
      // Column7
      // 
      this->Column7->HeaderText = L"S^2";
      this->Column7->Name = L"Column7";
      // 
      // Column8
      // 
      this->Column8->HeaderText = L"|D_nu - S^2|";
      this->Column8->Name = L"Column8";
      // 
      // Column9
      // 
      this->Column9->HeaderText = L"Me";
      this->Column9->Name = L"Column9";
      // 
      // Column10
      // 
      this->Column10->HeaderText = L"R";
      this->Column10->Name = L"Column10";
      // 
      // Column11
      // 
      this->Column11->HeaderText = L"z(j)";
      this->Column11->Name = L"Column11";
      // 
      // Column12
      // 
      this->Column12->HeaderText = L"f(z(j))";
      this->Column12->Name = L"Column12";
      // 
      // Column13
      // 
      this->Column13->HeaderText = L"n(j)/(N*delta(j))";
      this->Column13->Name = L"Column13";
      // 
      // pictureBox1
      // 
      this->pictureBox1->Location = System::Drawing::Point(4, 4);
      this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
      this->pictureBox1->Name = L"pictureBox1";
      this->pictureBox1->Size = System::Drawing::Size(572, 220);
      this->pictureBox1->TabIndex = 0;
      this->pictureBox1->TabStop = false;
      // 
      // checkBox1
      // 
      this->checkBox1->AutoSize = true;
      this->checkBox1->Location = System::Drawing::Point(208, 285);
      this->checkBox1->Margin = System::Windows::Forms::Padding(2);
      this->checkBox1->Name = L"checkBox1";
      this->checkBox1->Size = System::Drawing::Size(35, 17);
      this->checkBox1->TabIndex = 32;
      this->checkBox1->Text = L"6 ";
      this->checkBox1->UseVisualStyleBackColor = true;
      this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
      // 
      // checkBox2
      // 
      this->checkBox2->AutoSize = true;
      this->checkBox2->Location = System::Drawing::Point(208, 307);
      this->checkBox2->Margin = System::Windows::Forms::Padding(2);
      this->checkBox2->Name = L"checkBox2";
      this->checkBox2->Size = System::Drawing::Size(44, 17);
      this->checkBox2->TabIndex = 33;
      this->checkBox2->Text = L"end";
      this->checkBox2->UseVisualStyleBackColor = true;
      this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
      // 
      // tabPage3
      // 
      this->tabPage3->Controls->Add(this->dataGridView6);
      this->tabPage3->Controls->Add(this->textBox14);
      this->tabPage3->Controls->Add(this->textBox13);
      this->tabPage3->Controls->Add(this->label18);
      this->tabPage3->Controls->Add(this->label17);
      this->tabPage3->Controls->Add(this->label16);
      this->tabPage3->Location = System::Drawing::Point(4, 22);
      this->tabPage3->Margin = System::Windows::Forms::Padding(2);
      this->tabPage3->Name = L"tabPage3";
      this->tabPage3->Size = System::Drawing::Size(842, 439);
      this->tabPage3->TabIndex = 0;
      this->tabPage3->Text = L"Teory";
      // 
      // dataGridView6
      // 
      this->dataGridView6->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
      this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView6->Location = System::Drawing::Point(15, 85);
      this->dataGridView6->Size = System::Drawing::Size(100, 150);
      this->dataGridView6->Name = L"dataGridView6";
      this->dataGridView6->TabIndex = 5;
      // 
      // textBox14
      // 
      this->textBox14->Location = System::Drawing::Point(186, 300);
      this->textBox14->Name = L"textBox14";
      this->textBox14->Size = System::Drawing::Size(100, 20);
      this->textBox14->TabIndex = 4;
      // 
      // textBox13
      // 
      this->textBox13->Location = System::Drawing::Point(14, 58);
      this->textBox13->Name = L"textBox13";
      this->textBox13->Size = System::Drawing::Size(100, 20);
      this->textBox13->TabIndex = 3;
      // 
      // label18
      // 
      this->label18->AutoSize = true;
      this->label18->Location = System::Drawing::Point(183, 267);
      this->label18->Name = L"label18";
      this->label18->Size = System::Drawing::Size(23, 13);
      this->label18->TabIndex = 2;
      this->label18->Text = L"ksi:";
      // 
      // label17
      // 
      this->label17->AutoSize = true;
      this->label17->Location = System::Drawing::Point(183, 235);
      this->label17->Name = L"label17";
      this->label17->Size = System::Drawing::Size(54, 13);
      this->label17->TabIndex = 1;
      this->label17->Text = L"exp(1/ksi)";
      // 
      // label16
      // 
      this->label16->AutoSize = true;
      this->label16->Location = System::Drawing::Point(11, 42);
      this->label16->Name = L"label16";
      this->label16->Size = System::Drawing::Size(75, 13);
      this->label16->TabIndex = 0;
      this->label16->Text = L"Number boys: ";
      // 
      // dataGridView3
      // 
      this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
        this->Column11,
          this->Column12, this->Column13
      });
      this->dataGridView3->Location = System::Drawing::Point(822, 49);
      this->dataGridView3->Margin = System::Windows::Forms::Padding(2);
      this->dataGridView3->Name = L"dataGridView3";
      this->dataGridView3->RowTemplate->Height = 24;
      this->dataGridView3->Size = System::Drawing::Size(356, 156);
      this->dataGridView3->TabIndex = 28;
      // 
      // dataGridView2
      // 
      this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
        this->Column3,
          this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
      });
      this->dataGridView2->Location = System::Drawing::Point(5, 382);
      this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
      this->dataGridView2->Name = L"dataGridView2";
      this->dataGridView2->RowTemplate->Height = 24;
      this->dataGridView2->Size = System::Drawing::Size(846, 67);
      this->dataGridView2->TabIndex = 10;
      // 
      // dataGridView1
      // 
      this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
        this->Column1,
          this->Column2
      });
      this->dataGridView1->Location = System::Drawing::Point(610, 49);
      this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
      this->dataGridView1->Name = L"dataGridView1";
      this->dataGridView1->RowHeadersWidth = 40;
      this->dataGridView1->RowTemplate->Height = 24;
      this->dataGridView1->Size = System::Drawing::Size(208, 329);
      this->dataGridView1->TabIndex = 7;
      // 
      // dataGridView5
      // 
      this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView5->Location = System::Drawing::Point(358, 233);
      this->dataGridView5->Margin = System::Windows::Forms::Padding(2);
      this->dataGridView5->Name = L"dataGridView5";
      this->dataGridView5->RowTemplate->Height = 24;
      this->dataGridView5->Size = System::Drawing::Size(649, 98);
      this->dataGridView5->TabIndex = 8;
      // 
      // dataGridView4
      // 
      this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView4->Location = System::Drawing::Point(358, 54);
      this->dataGridView4->Margin = System::Windows::Forms::Padding(2);
      this->dataGridView4->Name = L"dataGridView4";
      this->dataGridView4->RowTemplate->Height = 24;
      this->dataGridView4->Size = System::Drawing::Size(649, 102);
      this->dataGridView4->TabIndex = 7;
      // 
      // tabControl1
      // 
      this->tabControl1->Controls->Add(this->tabPage3);
      this->tabControl1->Location = System::Drawing::Point(-5, 0);
      this->tabControl1->Margin = System::Windows::Forms::Padding(2);
      this->tabControl1->Name = L"tabControl1";
      this->tabControl1->SelectedIndex = 0;
      this->tabControl1->Size = System::Drawing::Size(850, 465);
      this->tabControl1->TabIndex = 35;
      // 
      // MyForm
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(839, 461);
      this->Controls->Add(this->tabControl1);
      this->Margin = System::Windows::Forms::Padding(2);
      this->Name = L"MyForm";
      this->Text = L"Solid_variable";
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
      this->tabPage3->ResumeLayout(false);
      this->tabPage3->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
      this->tabControl1->ResumeLayout(false);
      this->ResumeLayout(false);

    }

#pragma endregion


  private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {}


           //***********************************************************************************************************************//
  private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
  {
    a.clear();
    dataGridView1->Rows->Clear();
    N = N.Parse(textBox1->Text);
    lam = lam.Parse(textBox2->Text);

    if (lam <= 1)
      label4->Text = L"lam > 1";
    else
      label4->Text = L" ";
    if (N < 0)
      label5->Text = L" N";
    else
      label5->Text = L" ";

    srand(time(0));

    if (N > 0 && lam > 1)
    {
      del = 1 - 1 / lam;
      for (int i = 1; i <= N; i++)
      {
        tmp = (double)rand() / RAND_MAX;
        if (tmp < del)
          a.insert(std::make_pair((sqrt(tmp) - sqrt(del)) * 2 * sqrt(del), i));
        if (tmp >= del)
          a.insert(std::make_pair(-log((1 - tmp)*lam) / lam, i));
      }

      for (b = a.begin(); b != a.end(); b++)
        dataGridView1->Rows->Add(b->second, b->first);

    }
  }

           //***********************************************************************************************************************//
  private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
  {
    a.clear();
    dataGridView2->Rows->Clear();

    double sr_vyb = 0;
    double disp_vyb = 0;
    double z1 = 0, z2 = 0, razm = 0;
    double mat_oj = 0, disp = 0, med_vyb = 0;

    for (int i = 0; i < N; i++)
    {
      sr_vyb = sr_vyb + (double)(dataGridView1->Rows[i]->Cells[1]->Value);
    }
    sr_vyb = sr_vyb / N;

    for (int i = 0; i < N; i++)
    {
      disp_vyb = disp_vyb + pow(((double)(dataGridView1->Rows[i]->Cells[1]->Value) - sr_vyb), 2);
    }
    disp_vyb = disp_vyb / N;

    z1 = (double)(dataGridView1->Rows[0]->Cells[1]->Value);
    z2 = (double)(dataGridView1->Rows[N - 1]->Cells[1]->Value);
    razm = z2 - z1;

    if (N % 2 == 1)
    {
      med_vyb = (double)(dataGridView1->Rows[N / 2]->Cells[1]->Value);
    }
    else if (N % 2 == 0)
    {
      med_vyb = ((double)(dataGridView1->Rows[N / 2 - 1]->Cells[1]->Value) + (double)(dataGridView1->Rows[N / 2]->Cells[1]->Value)) / 2;
    }

    mat_oj = (1 / pow(lam, 2) + 4 / lam - 2) / 3;
    disp = (-1 / pow(lam, 4) + 4 / pow(lam, 3) + 6 / pow(lam, 2) - 2 / lam + 2) / 9;

    dataGridView2->Rows[0]->Cells[0]->Value = mat_oj;
    dataGridView2->Rows[0]->Cells[1]->Value = sr_vyb;
    dataGridView2->Rows[0]->Cells[2]->Value = abs(mat_oj - sr_vyb);
    dataGridView2->Rows[0]->Cells[3]->Value = disp;
    dataGridView2->Rows[0]->Cells[4]->Value = disp_vyb;
    dataGridView2->Rows[0]->Cells[5]->Value = abs(disp - disp_vyb);
    dataGridView2->Rows[0]->Cells[6]->Value = med_vyb;
    dataGridView2->Rows[0]->Cells[7]->Value = razm;
  }

           double func(double Xi)
           {
             double F;
             if (Xi < -2 * del)
               F = 0;
             if ((Xi > -2 * del || Xi == -2 * del) && Xi < 0)
               F = del + Xi + Xi*Xi / (4 * del);
             if (Xi > 0 || Xi == 0)
               F = 1 - exp(-lam*Xi) / lam;
             return F;
           }



           //****************************************************************************************************************************//
  private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
  {
    //chart1->Series[0]->Points->Clear();
    //chart1->Series[1]->Points->Clear();

    std::vector<double> m_, R;

    double x_ = 0, g = 0, F_ = 0;
    int sum = 0;

    double x = 0;
    double x1 = (double)(dataGridView1->Rows[0]->Cells[1]->Value);
    double x2 = (double)(dataGridView1->Rows[N - 1]->Cells[1]->Value);
    double h = (x2 - x1) / 1000;

    int i = 0;
    double r1, r2, r;

    for (x = x1 - 1; x <= x2 + 1; x += h)
    {
      //chart1->Series[0]->Points->AddXY(x, func(x));
    }

    while (i < N)
    {
      x_ = (double)(dataGridView1->Rows[i]->Cells[1]->Value);
      for (int j = 0; j < N; j++)
      {
        g = (double)(dataGridView1->Rows[j]->Cells[1]->Value);
        if (g < x_)
          sum += 1;
      }
      F_ = (double)sum / (double)N;
      m_.push_back(F_);
      sum = 0;
      i++;
    }
    m_.push_back(1);



    //for (x = x1-1; x < x1; x += h)
    //chart1->Series[1]->Points->AddXY(x, 0);

    i = 0;
    while (i < N)
    {
      //chart1->Series[1]->Points->AddXY((double)(dataGridView1->Rows[i]->Cells[1]->Value), m_[i]);
      //chart1->Series[1]->Points->AddXY((double)(dataGridView1->Rows[i]->Cells[1]->Value), m_[i + 1]);

      if (i != 0)
      {
        r1 = abs(m_[i] - func((double)(dataGridView1->Rows[i - 1]->Cells[1]->Value)));
        r2 = abs(m_[i] - func((double)(dataGridView1->Rows[i]->Cells[1]->Value)));
        if (r1 > r2) r = r1; else r = r2;
        R.push_back(r);
      }

      i++;
    }


    //for (x = x2; x < x2 + 1; x += h)
    //chart1->Series[1]->Points->AddXY(x, 1);

    // D
    double max = m_[0];
    for (int l = 0; l < N - 1; l++)
    {
      if (R[l] > max)
        max = R[l];
    }
    label7->Text = Convert::ToString(max);
  }

  private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
  {
    //chart2->Series[0]->Points->Clear();
    if (checkBox1->Checked == true)
    {
      this->textBox3->Visible = true;
      this->textBox4->Visible = true;
      this->textBox5->Visible = true;
      this->textBox6->Visible = true;
      this->textBox7->Visible = true;
      this->textBox8->Visible = true;
      this->textBox9->Visible = true;
    }
  }

  private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
  {
    //chart2->Series[0]->Points->Clear();
    if (checkBox2->Checked == true)
    {
      this->textBox3->Visible = false;
      this->textBox4->Visible = false;
      this->textBox5->Visible = false;
      this->textBox6->Visible = false;
      this->textBox7->Visible = false;
      this->textBox8->Visible = false;
      this->textBox9->Visible = false;
    }
    label8->Text = L" ";
  }


           //***********************************************************************************************************************//
  private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
  {
    double mas_gr[7];
    int mas_col[1000];
    int sum = 0;
    int i = 0;
    double p = 0, p1 = 0;
    double sered = 0;
    double dr = 0;
    double f = 0;
    double max = 0;


    //chart2->Series[0]->Points->Clear();
    dataGridView3->Rows->Clear();
    label10->Text = L" ";


    if (checkBox1->Checked == true)
    {
      //double gr0 = (double)dataGridView1->Rows[0]->Cells[1]->Value;
      //double gr1 = gr1.Parse(textBox4->Text);
      //double gr2 = gr2.Parse(textBox5->Text);
      //double gr3 = gr3.Parse(textBox6->Text);
      //double gr4 = gr4.Parse(textBox7->Text);
      //double gr5 = gr5.Parse(textBox8->Text);
      //double gr6 = (double)dataGridView1->Rows[N - 1]->Cells[1]->Value;

      //textBox3->Text = Convert::ToString(gr0);
      //textBox9->Text = Convert::ToString(gr6);

      //mas_gr[0] = gr0;
      //mas_gr[1] = gr1;
      //mas_gr[2] = gr2;
      //mas_gr[3] = gr3;
      //mas_gr[4] = gr4;
      //mas_gr[5] = gr5;
      //mas_gr[6] = gr6;

      //bool w = (gr0 < gr1) && (gr1 < gr2) && (gr2 < gr3) && (gr3 < gr4) && (gr4 < gr5) && (gr5 < gr6);

      //  if (w == true)
      //  {
      //    label8->Text = L" ";

      //    for (int j = 0; j < 6; j++)
      //    {
      //      while (i < N)
      //      {
      //        p = (double)(dataGridView1->Rows[i]->Cells[1]->Value);
      //        if ((p >= mas_gr[j]) && (p < mas_gr[j + 1]))
      //          sum += 1;
      //        i++;
      //      }
      //      if (j == 5) sum += 1;
      //      mas_col[j] = sum;
      //      sum = 0;
      //      i = 0;

      //      dr = mas_col[j] / (N*(mas_gr[j + 1] - mas_gr[j]));
      //      //chart2->Series[0]->Points->AddXY(mas_gr[j], 0);
      //      //chart2->Series[0]->Points->AddXY(mas_gr[j], dr);
      //      //chart2->Series[0]->Points->AddXY(mas_gr[j + 1], dr);

      //      dataGridView3->Rows->Add();
      //      sered = (mas_gr[j + 1] + mas_gr[j]) / 2;
      //      dataGridView3->Rows[j]->Cells[0]->Value = sered;

      //      if (sered < (-2 * del))
      //        f = 0;
      //      if ((sered >= (-2 * del)) && (sered < 0))
      //        f = sered / (2 * del) + 1;
      //      if (sered >= 0)
      //        f = exp(-lam*sered);
      //      dataGridView3->Rows[j]->Cells[1]->Value = f;

      //      dataGridView3->Rows[j]->Cells[2]->Value = dr;

      //      if (abs(dr - f) > max)
      //        max = abs(dr - f);
      //    }  
      //    //chart2->Series[0]->Points->AddXY(mas_gr[6], 0);
      //    label10->Text = Convert::ToString(max);
      //  }
      //  else
      //    label8->Text = L"Enable";
      //}

      if (checkBox2->Checked == true)
      {
        int col_prom = /*col_prom.Parse*/Convert::ToInt32(textBox10->Text);
        double dlina = ((double)(dataGridView1->Rows[N - 1]->Cells[1]->Value) - (double)(dataGridView1->Rows[0]->Cells[1]->Value)) / col_prom;

        for (int j = 0; j < col_prom; j++)
        {
          while (i < N)
          {
            p = (double)(dataGridView1->Rows[i]->Cells[1]->Value);
            p1 = (double)(dataGridView1->Rows[0]->Cells[1]->Value);
            if ((p >= (p1 + dlina*j)) && (p < (p1 + dlina*(j + 1))))
              sum += 1;
            i++;
          }
          if (j == col_prom - 1) sum += 1;
          mas_col[j] = sum;
          sum = 0;
          i = 0;

          dr = mas_col[j] / (N*dlina);
          //chart2->Series[0]->Points->AddXY(p1 + dlina*j, 0);
          //chart2->Series[0]->Points->AddXY(p1 + dlina*j, dr);
          //chart2->Series[0]->Points->AddXY(p1 + dlina*(j + 1), dr);

          dataGridView3->Rows->Add();
          sered = (p1 + dlina*j + dlina / 2);
          dataGridView3->Rows[j]->Cells[0]->Value = sered;

          if (sered < (-2 * del))
            f = 0;
          if ((sered >= (-2 * del)) && (sered < 0))
            f = sered / (2 * del) + 1;
          if (sered >= 0)
            f = exp(-lam*sered);

          dataGridView3->Rows[j]->Cells[1]->Value = f;
          dataGridView3->Rows[j]->Cells[2]->Value = dr;

          if (abs(dr - f) > max)
            max = abs(dr - f);
        }
        //chart2->Series[0]->Points->AddXY(p1+dlina*col_prom, 0);
        label10->Text = Convert::ToString(max);
      }
    }
  }


           //*************************************************************************************************************
           double X2(int r, double x)
           {
             if (x > 0)
               return pow(x, r / 2 - 1) * exp(-x / 2) / tgamma(r / 2) / pow(2, r / 2);
             else
               return 0;
           }


           double Frev(int r, double x)
           {
             int n = (int)(x * 1000);
             double h = x / n;
             double res = 0;
             for (int i = 0; i < N; i++)
               res = res + (X2(r, i*h) + X2(r, (i + 1)*h)) * h / 2;
             return 1 - res;
           }


  private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e)
  {
    num_int = num_int.Parse(textBox11->Text);

    dataGridView4->RowHeadersVisible = false;
    dataGridView4->ColumnHeadersVisible = false;
    dataGridView4->RowCount = 2;
    dataGridView4->ColumnCount = num_int + 1;
    for (int i = 0; i <= num_int; i++)
      dataGridView4->Rows[0]->Cells[i]->Value = i + 1;
    dataGridView4->Rows[1]->Cells[0]->Value = -INFINITY;
    dataGridView4->Rows[1]->Cells[num_int]->Value = INFINITY;


    dataGridView5->RowHeadersVisible = false;
    dataGridView5->ColumnHeadersVisible = false;
    dataGridView5->RowCount = 2;
    dataGridView5->ColumnCount = num_int;
    for (int i = 0; i < num_int; i++)
      dataGridView5->Rows[0]->Cells[i]->Value = i + 1;

  }


  private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
  {
    double alpfa = /*alpfa.Parse*/Convert::ToDouble(textBox12->Text);
    std::vector<double> z, q, nums;
    double uzel = 0;
    double R0 = 0;
    double p = 0;
    int j = 0, sum = 0;
    double testval = 0;


    z.push_back(-INFINITY);
    for (int i = 1; i < num_int; i++)
    {
      uzel = uzel.Parse(dataGridView4->Rows[1]->Cells[i]->FormattedValue->ToString());
      z.push_back(uzel);
    }
    z.push_back(INFINITY);


    //qj
    for (int i = 0; i < num_int; i++)
    {
      dataGridView5->Rows[1]->Cells[i]->Value = func(z[i + 1]) - func(z[i]);
      q.push_back(func(z[i + 1]) - func(z[i]));
    }

    for (int i = 0; i < num_int; i++)
    {
      while (j < N)
      {
        p = (double)(dataGridView1->Rows[j]->Cells[1]->Value);
        if ((p >= z[i]) && (p < z[i + 1]))
          sum += 1;
        j++;
      }
      nums.push_back(sum);
      sum = 0;
      j = 0;
    }

    for (int i = 0; i < num_int; i++)
      R0 = R0 + (nums[i] - N * q[i]) * (nums[i] - N * q[i]) / (N * q[i]);

    testval = Frev(num_int - 1, R0);

    if (testval > alpfa)
      label13->Text = L"�������� �������";
    else
      label13->Text = L"�������� ����������";
    label14->Text = Convert::ToString(testval);
  }
  };
}
