#pragma once
#include "mZeidel.h"

namespace overRelaxation {

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
  private: System::Windows::Forms::TextBox^  textBox19;
  private: System::Windows::Forms::Label^  label13;
  private: System::Windows::Forms::TextBox^  textBox20;
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
      this->textBox2 = (gcnew System::Windows::Forms::TextBox());
      this->label3 = (gcnew System::Windows::Forms::Label());
      this->textBox1 = (gcnew System::Windows::Forms::TextBox());
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->label18 = (gcnew System::Windows::Forms::Label());
      this->label19 = (gcnew System::Windows::Forms::Label());
      this->label21 = (gcnew System::Windows::Forms::Label());
      this->label22 = (gcnew System::Windows::Forms::Label());
      this->Button1 = (gcnew System::Windows::Forms::Button());
      this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
      this->label12 = (gcnew System::Windows::Forms::Label());
      this->textBox19 = (gcnew System::Windows::Forms::TextBox());
      this->label13 = (gcnew System::Windows::Forms::Label());
      this->textBox20 = (gcnew System::Windows::Forms::TextBox());
      this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
      this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
      this->tabPage2->SuspendLayout();
      this->groupBox5->SuspendLayout();
      this->groupBox7->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
      this->tabControl1->SuspendLayout();
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
      this->tabPage2->Size = System::Drawing::Size(1083, 442);
      this->tabPage2->TabIndex = 1;
      this->tabPage2->Text = L"Метод Зейделя";
      this->tabPage2->UseVisualStyleBackColor = true;
      // 
      // label8
      // 
      this->label8->AutoSize = true;
      this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label8->Location = System::Drawing::Point(17, 71);
      this->label8->Name = L"label8";
      this->label8->Size = System::Drawing::Size(124, 20);
      this->label8->TabIndex = 32;
      this->label8->Text = L"Информация:";
      // 
      // label7
      // 
      this->label7->AutoSize = true;
      this->label7->Location = System::Drawing::Point(9, 226);
      this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label7->Name = L"label7";
      this->label7->Size = System::Drawing::Size(114, 13);
      this->label7->TabIndex = 31;
      this->label7->Text = L"Общая погрешность:";
      // 
      // textBox6
      // 
      this->textBox6->Location = System::Drawing::Point(10, 241);
      this->textBox6->Margin = System::Windows::Forms::Padding(2);
      this->textBox6->Name = L"textBox6";
      this->textBox6->Size = System::Drawing::Size(133, 20);
      this->textBox6->TabIndex = 30;
      // 
      // textBox5
      // 
      this->textBox5->Location = System::Drawing::Point(10, 204);
      this->textBox5->Margin = System::Windows::Forms::Padding(2);
      this->textBox5->Name = L"textBox5";
      this->textBox5->Size = System::Drawing::Size(133, 20);
      this->textBox5->TabIndex = 29;
      // 
      // label6
      // 
      this->label6->AutoSize = true;
      this->label6->Location = System::Drawing::Point(10, 189);
      this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label6->Name = L"label6";
      this->label6->Size = System::Drawing::Size(54, 13);
      this->label6->TabIndex = 28;
      this->label6->Text = L"Невязка:";
      // 
      // textBox4
      // 
      this->textBox4->Location = System::Drawing::Point(10, 167);
      this->textBox4->Margin = System::Windows::Forms::Padding(2);
      this->textBox4->Name = L"textBox4";
      this->textBox4->Size = System::Drawing::Size(133, 20);
      this->textBox4->TabIndex = 27;
      // 
      // label5
      // 
      this->label5->AutoSize = true;
      this->label5->Location = System::Drawing::Point(7, 139);
      this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label5->Name = L"label5";
      this->label5->Size = System::Drawing::Size(95, 26);
      this->label5->TabIndex = 26;
      this->label5->Text = L"Достигнутая \r\nточность метода:";
      // 
      // label4
      // 
      this->label4->AutoSize = true;
      this->label4->Location = System::Drawing::Point(10, 102);
      this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label4->Name = L"label4";
      this->label4->Size = System::Drawing::Size(92, 13);
      this->label4->TabIndex = 25;
      this->label4->Text = L"Число итераций:";
      // 
      // textBox3
      // 
      this->textBox3->Location = System::Drawing::Point(10, 117);
      this->textBox3->Margin = System::Windows::Forms::Padding(2);
      this->textBox3->Name = L"textBox3";
      this->textBox3->Size = System::Drawing::Size(133, 20);
      this->textBox3->TabIndex = 24;
      // 
      // groupBox5
      // 
      this->groupBox5->BackColor = System::Drawing::SystemColors::ButtonFace;
      this->groupBox5->Controls->Add(this->textBox2);
      this->groupBox5->Controls->Add(this->label3);
      this->groupBox5->Controls->Add(this->textBox1);
      this->groupBox5->Controls->Add(this->label2);
      this->groupBox5->Controls->Add(this->label18);
      this->groupBox5->Controls->Add(this->label19);
      this->groupBox5->Controls->Add(this->label21);
      this->groupBox5->Controls->Add(this->label22);
      this->groupBox5->Cursor = System::Windows::Forms::Cursors::Default;
      this->groupBox5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
      this->groupBox5->Location = System::Drawing::Point(151, 14);
      this->groupBox5->Margin = System::Windows::Forms::Padding(2);
      this->groupBox5->Name = L"groupBox5";
      this->groupBox5->Padding = System::Windows::Forms::Padding(2);
      this->groupBox5->Size = System::Drawing::Size(538, 47);
      this->groupBox5->TabIndex = 22;
      this->groupBox5->TabStop = false;
      this->groupBox5->Text = L"Параметры";
      // 
      // textBox2
      // 
      this->textBox2->Location = System::Drawing::Point(467, 18);
      this->textBox2->Name = L"textBox2";
      this->textBox2->Size = System::Drawing::Size(50, 20);
      this->textBox2->TabIndex = 26;
      this->textBox2->Text = L"500";
      // 
      // label3
      // 
      this->label3->AutoSize = true;
      this->label3->Location = System::Drawing::Point(351, 21);
      this->label3->Name = L"label3";
      this->label3->Size = System::Drawing::Size(110, 13);
      this->label3->TabIndex = 25;
      this->label3->Text = L"Ограничение шагов:";
      // 
      // textBox1
      // 
      this->textBox1->Location = System::Drawing::Point(295, 18);
      this->textBox1->Name = L"textBox1";
      this->textBox1->Size = System::Drawing::Size(50, 20);
      this->textBox1->TabIndex = 24;
      this->textBox1->Text = L"1e-008";
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Location = System::Drawing::Point(178, 21);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(97, 13);
      this->label2->TabIndex = 24;
      this->label2->Text = L"Точность метода:";
      // 
      // label18
      // 
      this->label18->AutoSize = true;
      this->label18->Location = System::Drawing::Point(6, 21);
      this->label18->Name = L"label18";
      this->label18->Size = System::Drawing::Size(31, 13);
      this->label18->TabIndex = 7;
      this->label18->Text = L"a = 1";
      // 
      // label19
      // 
      this->label19->AutoSize = true;
      this->label19->Location = System::Drawing::Point(49, 21);
      this->label19->Name = L"label19";
      this->label19->Size = System::Drawing::Size(31, 13);
      this->label19->TabIndex = 5;
      this->label19->Text = L"b = 2";
      // 
      // label21
      // 
      this->label21->AutoSize = true;
      this->label21->Location = System::Drawing::Point(95, 21);
      this->label21->Name = L"label21";
      this->label21->Size = System::Drawing::Size(31, 13);
      this->label21->TabIndex = 12;
      this->label21->Text = L"c = 1";
      // 
      // label22
      // 
      this->label22->AutoSize = true;
      this->label22->Location = System::Drawing::Point(141, 21);
      this->label22->Name = L"label22";
      this->label22->Size = System::Drawing::Size(31, 13);
      this->label22->TabIndex = 3;
      this->label22->Text = L"d = 2";
      // 
      // Button1
      // 
      this->Button1->Location = System::Drawing::Point(933, 15);
      this->Button1->Name = L"Button1";
      this->Button1->Size = System::Drawing::Size(136, 47);
      this->Button1->TabIndex = 19;
      this->Button1->Text = L"Вычислить";
      this->Button1->UseVisualStyleBackColor = true;
      this->Button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
      // 
      // groupBox7
      // 
      this->groupBox7->BackColor = System::Drawing::SystemColors::ButtonFace;
      this->groupBox7->Controls->Add(this->label12);
      this->groupBox7->Controls->Add(this->textBox19);
      this->groupBox7->Controls->Add(this->label13);
      this->groupBox7->Controls->Add(this->textBox20);
      this->groupBox7->Location = System::Drawing::Point(693, 15);
      this->groupBox7->Margin = System::Windows::Forms::Padding(2);
      this->groupBox7->Name = L"groupBox7";
      this->groupBox7->Padding = System::Windows::Forms::Padding(2);
      this->groupBox7->Size = System::Drawing::Size(225, 46);
      this->groupBox7->TabIndex = 18;
      this->groupBox7->TabStop = false;
      this->groupBox7->Text = L"Число разбиений";
      // 
      // label12
      // 
      this->label12->AutoSize = true;
      this->label12->Location = System::Drawing::Point(115, 23);
      this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label12->Name = L"label12";
      this->label12->Size = System::Drawing::Size(32, 13);
      this->label12->TabIndex = 18;
      this->label12->Text = L"По у:";
      // 
      // textBox19
      // 
      this->textBox19->Location = System::Drawing::Point(149, 20);
      this->textBox19->Margin = System::Windows::Forms::Padding(2);
      this->textBox19->Name = L"textBox19";
      this->textBox19->Size = System::Drawing::Size(42, 20);
      this->textBox19->TabIndex = 17;
      this->textBox19->Text = L"10";
      // 
      // label13
      // 
      this->label13->AutoSize = true;
      this->label13->Location = System::Drawing::Point(24, 24);
      this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
      this->label13->Name = L"label13";
      this->label13->Size = System::Drawing::Size(32, 13);
      this->label13->TabIndex = 16;
      this->label13->Text = L"По х:";
      // 
      // textBox20
      // 
      this->textBox20->Location = System::Drawing::Point(57, 21);
      this->textBox20->Margin = System::Windows::Forms::Padding(2);
      this->textBox20->Name = L"textBox20";
      this->textBox20->Size = System::Drawing::Size(42, 20);
      this->textBox20->TabIndex = 15;
      this->textBox20->Text = L"10";
      // 
      // dataGridView2
      // 
      this->dataGridView2->AllowUserToAddRows = false;
      this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView2->Location = System::Drawing::Point(151, 67);
      this->dataGridView2->Name = L"dataGridView2";
      this->dataGridView2->RowHeadersWidth = 51;
      this->dataGridView2->Size = System::Drawing::Size(918, 366);
      this->dataGridView2->TabIndex = 2;
      // 
      // tabControl1
      // 
      this->tabControl1->Controls->Add(this->tabPage2);
      this->tabControl1->Location = System::Drawing::Point(-1, 2);
      this->tabControl1->Margin = System::Windows::Forms::Padding(2);
      this->tabControl1->Name = L"tabControl1";
      this->tabControl1->SelectedIndex = 0;
      this->tabControl1->Size = System::Drawing::Size(1091, 468);
      this->tabControl1->TabIndex = 14;
      // 
      // MyForm
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(1087, 465);
      this->Controls->Add(this->tabControl1);
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
      this->ResumeLayout(false);

    }
#pragma endregion
  private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
  {
    textBox3->ReadOnly = true;
    textBox4->ReadOnly = true;
    textBox5->ReadOnly = true;
    textBox6->ReadOnly = true;
    dataGridView2->ReadOnly = true;
    dataGridView2->RowHeadersVisible = false;
    dataGridView2->ColumnHeadersVisible = false;
  }
  private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
    double a = 0;
    double b = 1;
    double c = 0;
    double d = 1;
    double n = Convert::ToDouble(textBox19->Text);
    double m = Convert::ToDouble(textBox20->Text);
    double eps = Convert::ToDouble(textBox1->Text);
    double countStep = Convert::ToDouble(textBox2->Text);
    double h = static_cast<double>(b - a) / static_cast<double>(n);
    double k = static_cast<double>(d - c) / static_cast<double>(m);
    std::vector<double> ans;
    auto v = solveDifferenceScheme(f, mu, a, b, c, d, n, m, eps, countStep, ans);

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
};
}
