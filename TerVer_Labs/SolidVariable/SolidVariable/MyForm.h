#pragma once
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
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
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
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;

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
      this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
      this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->textBox1 = (gcnew System::Windows::Forms::TextBox());
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
      this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
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
      this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
      this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
      this->textBox1->Location = System::Drawing::Point(6, 19);
      this->textBox1->Name = L"textBox1";
      this->textBox1->Size = System::Drawing::Size(149, 20);
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
      // dataGridView5
      // 
      this->dataGridView5->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView5->Location = System::Drawing::Point(8, 216);
      this->dataGridView5->Name = L"dataGridView5";
      this->dataGridView5->Size = System::Drawing::Size(452, 85);
      this->dataGridView5->TabIndex = 2;
      // 
      // dataGridView4
      // 
      this->dataGridView4->AllowUserToAddRows = false;
      this->dataGridView4->AllowUserToDeleteRows = false;
      this->dataGridView4->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView4->Location = System::Drawing::Point(8, 143);
      this->dataGridView4->Name = L"dataGridView4";
      this->dataGridView4->ReadOnly = true;
      this->dataGridView4->Size = System::Drawing::Size(452, 67);
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
      this->dataGridView3->Location = System::Drawing::Point(8, 7);
      this->dataGridView3->Name = L"dataGridView3";
      this->dataGridView3->ReadOnly = true;
      this->dataGridView3->RowHeadersVisible = false;
      this->dataGridView3->Size = System::Drawing::Size(452, 77);
      this->dataGridView3->TabIndex = 0;
      // 
      // Column2
      // 
      this->Column2->HeaderText = L"Eɳ";
      this->Column2->Name = L"Column2";
      this->Column2->ReadOnly = true;
      // 
      // Column3
      // 
      this->Column3->HeaderText = L"x̅";
      this->Column3->Name = L"Column3";
      this->Column3->ReadOnly = true;
      // 
      // Column4
      // 
      this->Column4->HeaderText = L"| Eɳ - x̅ |";
      this->Column4->Name = L"Column4";
      this->Column4->ReadOnly = true;
      // 
      // Column5
      // 
      this->Column5->HeaderText = L"Dɳ";
      this->Column5->Name = L"Column5";
      this->Column5->ReadOnly = true;
      // 
      // Column6
      // 
      this->Column6->HeaderText = L"S^2";
      this->Column6->Name = L"Column6";
      this->Column6->ReadOnly = true;
      // 
      // Column7
      // 
      this->Column7->HeaderText = L"| Dɳ - S^2 |";
      this->Column7->Name = L"Column7";
      this->Column7->ReadOnly = true;
      // 
      // Column8
      // 
      this->Column8->HeaderText = L"Me\'";
      this->Column8->Name = L"Column8";
      this->Column8->ReadOnly = true;
      // 
      // Column9
      // 
      this->Column9->HeaderText = L"R\'";
      this->Column9->Name = L"Column9";
      this->Column9->ReadOnly = true;
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
      this->tabControl2->Controls->Add(this->tabPage4);
      this->tabControl2->Controls->Add(this->tabPage5);
      this->tabControl2->Location = System::Drawing::Point(0, 0);
      this->tabControl2->Name = L"tabControl2";
      this->tabControl2->SelectedIndex = 0;
      this->tabControl2->Size = System::Drawing::Size(470, 307);
      this->tabControl2->TabIndex = 0;
      // 
      // tabPage4
      // 
      this->tabPage4->Location = System::Drawing::Point(4, 22);
      this->tabPage4->Name = L"tabPage4";
      this->tabPage4->Padding = System::Windows::Forms::Padding(3);
      this->tabPage4->Size = System::Drawing::Size(462, 281);
      this->tabPage4->TabIndex = 0;
      this->tabPage4->Text = L"tabPage4";
      this->tabPage4->UseVisualStyleBackColor = true;
      // 
      // tabPage5
      // 
      this->tabPage5->Location = System::Drawing::Point(4, 22);
      this->tabPage5->Name = L"tabPage5";
      this->tabPage5->Padding = System::Windows::Forms::Padding(3);
      this->tabPage5->Size = System::Drawing::Size(462, 281);
      this->tabPage5->TabIndex = 1;
      this->tabPage5->Text = L"tabPage5";
      this->tabPage5->UseVisualStyleBackColor = true;
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
      this->Column10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
      this->Column10->HeaderText = L"Chance";
      this->Column10->MinimumWidth = 20;
      this->Column10->Name = L"Column10";
      this->Column10->ReadOnly = true;
      this->Column10->Width = 69;
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
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
      this->tabPage3->ResumeLayout(false);
      this->tabControl2->ResumeLayout(false);
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
    textBox1->Text = "5";
    textBox2->Text = "15";

    dataGridView1->RowHeadersWidth = 50;
    dataGridView2->RowHeadersWidth = 50;

    dataGridView3->RowCount = 1;

    //vvvvvvvvvvvvvvvvvvvvvvv
    myGirl = new PossibilityMeeting();
    textBox1->Text = "10";
    myGirl->setCount(Convert::ToInt32(textBox2->Text));
    countN = Convert::ToInt32(textBox1->Text);
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
        myGirl->setCount(Convert::ToInt32(textBox2->Text));
        updateTableK(sender, e);
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
        myGirl->setCount(Convert::ToInt32(textBox2->Text));
        this->button1->Enabled = checkBox1->Checked;
      }
    }
    else
    {
      this->button1->Enabled = checkBox3->Checked;
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

    myGirl->setMidTime(tmp, (int)tmp.size(), checkBox2->Checked);
    updateTableT(sender, e);

    label2->Visible = true;
    dataGridView2->Visible = true;
  }

  private: System::Void updateTableK(System::Object^  sender, System::EventArgs^  e)
  {
    int nBoys = Convert::ToInt32(textBox1->Text);
    dataGridView1->RowCount = nBoys;

    for (int i = 0; i < nBoys; ++i)
    {
      dataGridView1->Rows[i]->HeaderCell->Value = (i + 1).ToString();
    }
  }
  private: System::Void updateTableT(System::Object^  sender, System::EventArgs^  e)
  {
    int nExpirements = myGirl->getCount();
    dataGridView2->RowCount = nExpirements;

    int k = 0;
    for (const auto &x : myGirl->getBestBoys())
    {
      dataGridView2->Rows[k]->Cells[0]->Value = (x.first + 1).ToString();
      dataGridView2->Rows[k++]->Cells[1]->Value = x.second.ToString();
    }
    dataGridView2->Sort(dataGridView2->Columns[1], ListSortDirection::Ascending);
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
  };
}
