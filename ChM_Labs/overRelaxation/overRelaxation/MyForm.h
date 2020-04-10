#pragma once
#include "mOverRelaxation.h"

namespace overRelaxation {

  double omega = 1.;

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
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
  private: System::Windows::Forms::DataGridView^  dataGridView2;
  private: System::Windows::Forms::TabControl^  tabControl1;
  private: System::Windows::Forms::TextBox^  textBox1;
  private: System::Windows::Forms::Label^  label2;
  private: System::Windows::Forms::TextBox^  textBox2;
  private: System::Windows::Forms::Label^  label3;
  private: System::Windows::Forms::TextBox^  textBox3;
  private: System::Windows::Forms::TextBox^  textBox5;
  private: System::Windows::Forms::Label^  label6;
  private: System::Windows::Forms::TextBox^  textBox4;
  private: System::Windows::Forms::Label^  label5;
  private: System::Windows::Forms::Label^  label4;
  private: System::Windows::Forms::Label^  label7;
  private: System::Windows::Forms::TextBox^  textBox6;
  private: System::Windows::Forms::Label^  label8;
  private: System::Windows::Forms::Label^  label1;
  private: System::Windows::Forms::CheckBox^  checkBox1;
  private: System::Windows::Forms::TextBox^  textBox7;
  private: System::Windows::Forms::TabPage^  tabPage1;
  private: System::Windows::Forms::RadioButton^  radioButton2;
  private: System::Windows::Forms::RadioButton^  radioButton1;
  private: System::Windows::Forms::RadioButton^  radioButton4;
  private: System::Windows::Forms::RadioButton^  radioButton3;
  private: ZedGraph::ZedGraphControl^  zedGraphControl1;
  private: System::Windows::Forms::Label^  label9;

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
      this->components = (gcnew System::ComponentModel::Container());
      this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
      this->label8 = (gcnew System::Windows::Forms::Label());
      this->label7 = (gcnew System::Windows::Forms::Label());
      this->textBox6 = (gcnew System::Windows::Forms::TextBox());
      this->textBox5 = (gcnew System::Windows::Forms::TextBox());
      this->label6 = (gcnew System::Windows::Forms::Label());
      this->textBox4 = (gcnew System::Windows::Forms::TextBox());
      this->label5 = (gcnew System::Windows::Forms::Label());
      this->label4 = (gcnew System::Windows::Forms::Label());
      this->textBox3 = (gcnew System::Windows::Forms::TextBox());
      this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
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
      this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
      this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
      this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
      this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
      this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
      this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
      this->tabPage2->SuspendLayout();
      this->groupBox5->SuspendLayout();
      this->groupBox7->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
      this->tabControl1->SuspendLayout();
      this->tabPage1->SuspendLayout();
      this->SuspendLayout();
      // 
      // tabPage2
      // 
      this->tabPage2->Controls->Add(this->label8);
      this->tabPage2->Controls->Add(this->label7);
      this->tabPage2->Controls->Add(this->textBox6);
      this->tabPage2->Controls->Add(this->textBox5);
      this->tabPage2->Controls->Add(this->label6);
      this->tabPage2->Controls->Add(this->textBox4);
      this->tabPage2->Controls->Add(this->label5);
      this->tabPage2->Controls->Add(this->label4);
      this->tabPage2->Controls->Add(this->textBox3);
      this->tabPage2->Controls->Add(this->groupBox5);
      this->tabPage2->Controls->Add(this->Button1);
      this->tabPage2->Controls->Add(this->groupBox7);
      this->tabPage2->Controls->Add(this->dataGridView2);
      this->tabPage2->Location = System::Drawing::Point(4, 22);
      this->tabPage2->Margin = System::Windows::Forms::Padding(2);
      this->tabPage2->Name = L"tabPage2";
      this->tabPage2->Padding = System::Windows::Forms::Padding(2);
      this->tabPage2->Size = System::Drawing::Size(1121, 440);
      this->tabPage2->TabIndex = 1;
      this->tabPage2->Text = L"Метод верхней релаксации";
      this->tabPage2->UseVisualStyleBackColor = true;
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
      this->label7->Location = System::Drawing::Point(978, 314);
      this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label7->Name = L"label7";
      this->label7->Size = System::Drawing::Size(114, 13);
      this->label7->TabIndex = 31;
      this->label7->Text = L"Общая погрешность:";
      // 
      // textBox6
      // 
      this->textBox6->Location = System::Drawing::Point(979, 329);
      this->textBox6->Margin = System::Windows::Forms::Padding(2);
      this->textBox6->Name = L"textBox6";
      this->textBox6->Size = System::Drawing::Size(133, 20);
      this->textBox6->TabIndex = 30;
      // 
      // textBox5
      // 
      this->textBox5->Location = System::Drawing::Point(979, 292);
      this->textBox5->Margin = System::Windows::Forms::Padding(2);
      this->textBox5->Name = L"textBox5";
      this->textBox5->Size = System::Drawing::Size(133, 20);
      this->textBox5->TabIndex = 29;
      // 
      // label6
      // 
      this->label6->AutoSize = true;
      this->label6->Location = System::Drawing::Point(979, 277);
      this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label6->Name = L"label6";
      this->label6->Size = System::Drawing::Size(54, 13);
      this->label6->TabIndex = 28;
      this->label6->Text = L"Невязка:";
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
      this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
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
      // dataGridView2
      // 
      this->dataGridView2->AllowUserToAddRows = false;
      this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView2->Location = System::Drawing::Point(9, 105);
      this->dataGridView2->Name = L"dataGridView2";
      this->dataGridView2->RowHeadersWidth = 51;
      this->dataGridView2->Size = System::Drawing::Size(953, 324);
      this->dataGridView2->TabIndex = 2;
      // 
      // tabControl1
      // 
      this->tabControl1->Controls->Add(this->tabPage2);
      this->tabControl1->Controls->Add(this->tabPage1);
      this->tabControl1->Location = System::Drawing::Point(-1, 2);
      this->tabControl1->Margin = System::Windows::Forms::Padding(2);
      this->tabControl1->Name = L"tabControl1";
      this->tabControl1->SelectedIndex = 0;
      this->tabControl1->Size = System::Drawing::Size(1129, 466);
      this->tabControl1->TabIndex = 14;
      // 
      // tabPage1
      // 
      this->tabPage1->Controls->Add(this->radioButton4);
      this->tabPage1->Controls->Add(this->radioButton3);
      this->tabPage1->Controls->Add(this->zedGraphControl1);
      this->tabPage1->Location = System::Drawing::Point(4, 22);
      this->tabPage1->Name = L"tabPage1";
      this->tabPage1->Size = System::Drawing::Size(1121, 440);
      this->tabPage1->TabIndex = 2;
      this->tabPage1->Text = L"Графики";
      this->tabPage1->UseVisualStyleBackColor = true;
      // 
      // radioButton4
      // 
      this->radioButton4->AutoSize = true;
      this->radioButton4->Location = System::Drawing::Point(999, 36);
      this->radioButton4->Name = L"radioButton4";
      this->radioButton4->Size = System::Drawing::Size(113, 17);
      this->radioButton4->TabIndex = 31;
      this->radioButton4->TabStop = true;
      this->radioButton4->Text = L"Основная задача";
      this->radioButton4->UseVisualStyleBackColor = true;
      // 
      // radioButton3
      // 
      this->radioButton3->AutoSize = true;
      this->radioButton3->Location = System::Drawing::Point(999, 12);
      this->radioButton3->Name = L"radioButton3";
      this->radioButton3->Size = System::Drawing::Size(111, 17);
      this->radioButton3->TabIndex = 30;
      this->radioButton3->TabStop = true;
      this->radioButton3->Text = L"Тестовая задача";
      this->radioButton3->UseVisualStyleBackColor = true;
      this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
      // 
      // zedGraphControl1
      // 
      this->zedGraphControl1->Location = System::Drawing::Point(3, 3);
      this->zedGraphControl1->Name = L"zedGraphControl1";
      this->zedGraphControl1->ScrollGrace = 0;
      this->zedGraphControl1->ScrollMaxX = 0;
      this->zedGraphControl1->ScrollMaxY = 0;
      this->zedGraphControl1->ScrollMaxY2 = 0;
      this->zedGraphControl1->ScrollMinX = 0;
      this->zedGraphControl1->ScrollMinY = 0;
      this->zedGraphControl1->ScrollMinY2 = 0;
      this->zedGraphControl1->Size = System::Drawing::Size(990, 434);
      this->zedGraphControl1->TabIndex = 0;
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
      this->groupBox5->ResumeLayout(false);
      this->groupBox5->PerformLayout();
      this->groupBox7->ResumeLayout(false);
      this->groupBox7->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
      this->tabControl1->ResumeLayout(false);
      this->tabPage1->ResumeLayout(false);
      this->tabPage1->PerformLayout();
      this->ResumeLayout(false);

    }
#pragma endregion

  private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
  {
    textBox1->Text = "1e-8";
    textBox2->Text = "500";
    textBox7->Text = "1.93908437292";
    textBox11->Text = "4";
    textBox10->Text = "4";
    textBox3->ReadOnly = true;
    textBox4->ReadOnly = true;
    textBox5->ReadOnly = true;
    textBox6->ReadOnly = true;
    dataGridView2->ReadOnly = true;
    dataGridView2->RowHeadersVisible = false;
    dataGridView2->ColumnHeadersVisible = false;
    textBox7->ReadOnly = true;
    checkBox1->Checked = true;
    radioButton1->Checked = true;
  }

  private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
    if (checkBox1->Checked)
    {
      resetomega();
      textBox7->Text = omega.ToString();
      textBox7->ReadOnly = true;
    }
    else
    {
      textBox7->ReadOnly = false;
    }
  }

  private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
    radioButton3->Checked ? radioButton1->Checked = true : radioButton2->Checked = true;
  }

  private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
    radioButton1->Checked ? radioButton3->Checked = true : radioButton4->Checked = true;
  }

  private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
    double a = 0.;
    double b = 1.;
    double c = 0.;
    double d = 1.;
    omega = Convert::ToDouble(textBox7->Text);
    double eps = Convert::ToDouble(textBox1->Text);
    int    n = Convert::ToInt32(textBox10->Text);
    int    m = Convert::ToInt32(textBox11->Text);
    double h = static_cast<double>(b - a) / static_cast<double>(n);
    double k = static_cast<double>(d - c) / static_cast<double>(m);
    int countStep = Convert::ToInt32(textBox2->Text);
    std::vector<double> ans;
    std::vector<std::vector<double, std::allocator<double> >, std::allocator<std::vector<double, std::allocator<double> > > > v;
    
    radioButton1->Checked ? 
      v = solveDifferenceScheme(ft, mut, a, b, c, d, n, m, eps, countStep, ans, omega, radioButton1->Checked) :
      v = solveDifferenceScheme(ft, muu, a, b, c, d, n, m, eps, countStep, ans, omega, radioButton1->Checked);

    dataGridView2->Rows->Clear();
    dataGridView2->ColumnCount = (int)n + 3;

    for (int i = 0; i <= m + 2; i++) {
      dataGridView2->Rows->Add();
    }

    dataGridView2->Rows[0]->Cells[1]->Value = "i";
    dataGridView2->Rows[1]->Cells[0]->Value = "j";
    dataGridView2->Rows[1]->Cells[1]->Value = "Y\\X";

    for (int i = 2; i <= n + 2; i++) {
      dataGridView2->Rows[0]->Cells[i]->Value = i - 2;
      dataGridView2->Rows[1]->Cells[i]->Value = a + h * (i - 2);
    }
    for (int i = (int)n + 2; i > 1; i--) {
      dataGridView2->Rows[i]->Cells[1]->Value = c + k * (n - i + 2);
      dataGridView2->Rows[i]->Cells[0]->Value = n - i + 2;
    }
    for (int i = 2; i < v.size() + 2; i++)
    {
      for (int j = 2; j < v[i - 2].size() + 2; j++)
      {
        //Печать в таблицу
        dataGridView2->Rows[v[i - 2].size() - j + 3]->Cells[i]->Value = v[i - 2][j - 2].ToString("E");
      }
    }

    textBox3->Text = ans[0].ToString();
    textBox4->Text = ans[1].ToString("E");
    textBox5->Text = ans[2].ToString("E");
    textBox6->Text = ans[3].ToString("E");
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
  public: System::Void resetomega()
  {
    omega = 1.43866195273655;
  }
  };
}
