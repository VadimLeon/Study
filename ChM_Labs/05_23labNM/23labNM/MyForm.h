#pragma once
#include "DirTask.h"
#include <math.h>

namespace My23labNM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TabControl^  tabControl3;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::TabPage^  tabPage10;
	private: System::Windows::Forms::DataGridView^  dataGridView6;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TabControl^  tabControl4;
	private: System::Windows::Forms::TabPage^  tabPage11;
	private: System::Windows::Forms::DataGridView^  dataGridView7;
	private: System::Windows::Forms::TabPage^  tabPage12;
	private: System::Windows::Forms::DataGridView^  dataGridView8;
	private: System::Windows::Forms::TabPage^  tabPage13;
	private: System::Windows::Forms::DataGridView^  dataGridView9;
	private: System::Windows::Forms::GroupBox^  groupBox6;

	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TabControl^  tabControl5;
	private: System::Windows::Forms::TabPage^  tabPage14;
	private: System::Windows::Forms::DataGridView^  dataGridView10;
	private: System::Windows::Forms::TabPage^  tabPage15;
	private: System::Windows::Forms::DataGridView^  dataGridView11;
	private: System::Windows::Forms::TabPage^  tabPage16;
	private: System::Windows::Forms::DataGridView^  dataGridView12;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label36;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView9 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView10 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView11 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView12 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->tabPage10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabPage11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			this->tabPage12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
			this->tabPage13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->BeginInit();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabPage14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->BeginInit();
			this->tabPage15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView11))->BeginInit();
			this->tabPage16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView12))->BeginInit();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(871, 429);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(863, 403);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Зейдель тест";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Location = System::Drawing::Point(267, 6);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(596, 397);
			this->tabControl2->TabIndex = 4;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->dataGridView1);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(588, 371);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"u(x,y)";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(576, 359);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->dataGridView2);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(588, 371);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"v(x,y)";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(3, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(579, 362);
			this->dataGridView2->TabIndex = 0;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->dataGridView3);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(588, 371);
			this->tabPage7->TabIndex = 2;
			this->tabPage7->Text = L"разность";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(3, 3);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(582, 365);
			this->dataGridView3->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(70, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Запуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(6, 182);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(255, 215);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Результат:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1, 103);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"MAX погр = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(0, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(129, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"достигнутая точность = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(0, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"кол-во затраченных итераций = ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(255, 141);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(148, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Условие выхода:";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(151, 105);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(70, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"точность";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(151, 82);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(104, 17);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"число итераций";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(41, 102);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(86, 20);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"1e-06";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(30, 60);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(97, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"50";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Eps";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"N";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(103, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"m";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"n";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(122, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(58, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"4";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(58, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"4";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl3);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(863, 403);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Зейдель Основная";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage8);
			this->tabControl3->Controls->Add(this->tabPage9);
			this->tabControl3->Controls->Add(this->tabPage10);
			this->tabControl3->Location = System::Drawing::Point(284, 6);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(572, 391);
			this->tabControl3->TabIndex = 3;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->dataGridView4);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(564, 365);
			this->tabPage8->TabIndex = 0;
			this->tabPage8->Text = L"V(x,y)";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(3, 3);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(558, 356);
			this->dataGridView4->TabIndex = 0;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->dataGridView5);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(564, 365);
			this->tabPage9->TabIndex = 1;
			this->tabPage9->Text = L"V удв сетка ";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(3, 3);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(558, 359);
			this->dataGridView5->TabIndex = 0;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->dataGridView6);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Size = System::Drawing::Size(564, 365);
			this->tabPage10->TabIndex = 2;
			this->tabPage10->Text = L"разность";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(0, 3);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(561, 359);
			this->dataGridView6->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Location = System::Drawing::Point(5, 185);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(273, 211);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Справка:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(1, 103);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(65, 13);
			this->label16->TabIndex = 4;
			this->label16->Text = L"MAX погр =";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(1, 78);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(138, 13);
			this->label17->TabIndex = 3;
			this->label17->Text = L"достигнутая точность 2 = ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(1, 53);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(126, 13);
			this->label15->TabIndex = 1;
			this->label15->Text = L"достигнутая точность =";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(1, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(167, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"кол-во затраченных итераций =";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->radioButton3);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Location = System::Drawing::Point(5, 6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(273, 135);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Параметры:";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(145, 97);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(70, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"точность";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(142, 58);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(94, 13);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Условие выхода:";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(145, 74);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(104, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"число итераций";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 101);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(25, 13);
			this->label12->TabIndex = 7;
			this->label12->Text = L"Eps";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(10, 61);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(18, 13);
			this->label11->TabIndex = 6;
			this->label11->Text = L"N ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(124, 25);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(15, 13);
			this->label10->TabIndex = 5;
			this->label10->Text = L"m";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(34, 98);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(77, 20);
			this->textBox8->TabIndex = 4;
			this->textBox8->Text = L"1e-06";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(29, 58);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(82, 20);
			this->textBox7->TabIndex = 3;
			this->textBox7->Text = L"50";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(145, 22);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(87, 20);
			this->textBox6->TabIndex = 2;
			this->textBox6->Text = L"4";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(29, 22);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(77, 20);
			this->textBox5->TabIndex = 1;
			this->textBox5->Text = L"4";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(10, 25);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"n";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(72, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Запуск";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tabControl4);
			this->tabPage3->Controls->Add(this->groupBox6);
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(863, 403);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"МПИ опт тест";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage11);
			this->tabControl4->Controls->Add(this->tabPage12);
			this->tabControl4->Controls->Add(this->tabPage13);
			this->tabControl4->Location = System::Drawing::Point(275, 3);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(585, 404);
			this->tabControl4->TabIndex = 3;
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->dataGridView7);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(577, 378);
			this->tabPage11->TabIndex = 0;
			this->tabPage11->Text = L"V(x,y)";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// dataGridView7
			// 
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Location = System::Drawing::Point(3, 3);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->Size = System::Drawing::Size(574, 372);
			this->dataGridView7->TabIndex = 0;
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->dataGridView8);
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(577, 378);
			this->tabPage12->TabIndex = 1;
			this->tabPage12->Text = L"V удв сетка";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// dataGridView8
			// 
			this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView8->Location = System::Drawing::Point(0, 3);
			this->dataGridView8->Name = L"dataGridView8";
			this->dataGridView8->Size = System::Drawing::Size(574, 372);
			this->dataGridView8->TabIndex = 0;
			// 
			// tabPage13
			// 
			this->tabPage13->Controls->Add(this->dataGridView9);
			this->tabPage13->Location = System::Drawing::Point(4, 22);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Size = System::Drawing::Size(577, 378);
			this->tabPage13->TabIndex = 2;
			this->tabPage13->Text = L"разность";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// dataGridView9
			// 
			this->dataGridView9->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView9->Location = System::Drawing::Point(3, 3);
			this->dataGridView9->Name = L"dataGridView9";
			this->dataGridView9->Size = System::Drawing::Size(571, 372);
			this->dataGridView9->TabIndex = 0;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label26);
			this->groupBox6->Controls->Add(this->label25);
			this->groupBox6->Controls->Add(this->label24);
			this->groupBox6->Controls->Add(this->label23);
			this->groupBox6->Location = System::Drawing::Point(3, 178);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(266, 222);
			this->groupBox6->TabIndex = 2;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Справка:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(2, 84);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(71, 13);
			this->label25->TabIndex = 2;
			this->label25->Text = L"MAX погр. = ";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(0, 53);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(129, 13);
			this->label24->TabIndex = 1;
			this->label24->Text = L"достигнутая точность = ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(0, 27);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(170, 13);
			this->label23->TabIndex = 0;
			this->label23->Text = L"кол-во затраченных итераций = ";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton6);
			this->groupBox5->Controls->Add(this->radioButton5);
			this->groupBox5->Controls->Add(this->label22);
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->label20);
			this->groupBox5->Controls->Add(this->label19);
			this->groupBox5->Controls->Add(this->label18);
			this->groupBox5->Controls->Add(this->textBox12);
			this->groupBox5->Controls->Add(this->textBox11);
			this->groupBox5->Controls->Add(this->textBox10);
			this->groupBox5->Controls->Add(this->textBox9);
			this->groupBox5->Location = System::Drawing::Point(3, 3);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(266, 140);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Параметры:";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(134, 105);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(70, 17);
			this->radioButton6->TabIndex = 10;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"точность";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(134, 84);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(104, 17);
			this->radioButton5->TabIndex = 9;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"число итераций";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(131, 67);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(94, 13);
			this->label22->TabIndex = 8;
			this->label22->Text = L"Условия выхода:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(7, 107);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(25, 13);
			this->label21->TabIndex = 7;
			this->label21->Text = L"Eps";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(7, 70);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(15, 13);
			this->label20->TabIndex = 6;
			this->label20->Text = L"N";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(114, 25);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(15, 13);
			this->label19->TabIndex = 5;
			this->label19->Text = L"m";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(7, 25);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 4;
			this->label18->Text = L"n";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(38, 104);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(72, 20);
			this->textBox12->TabIndex = 3;
			this->textBox12->Text = L"1e-06";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(26, 67);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(72, 20);
			this->textBox11->TabIndex = 2;
			this->textBox11->Text = L"50";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(134, 22);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(72, 20);
			this->textBox10->TabIndex = 1;
			this->textBox10->Text = L"4";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(26, 22);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(72, 20);
			this->textBox9->TabIndex = 0;
			this->textBox9->Text = L"4";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(70, 149);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 23);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Запуск";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl5);
			this->tabPage4->Controls->Add(this->groupBox8);
			this->tabPage4->Controls->Add(this->groupBox7);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(863, 403);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"МПИ опт основная";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabPage14);
			this->tabControl5->Controls->Add(this->tabPage15);
			this->tabControl5->Controls->Add(this->tabPage16);
			this->tabControl5->Location = System::Drawing::Point(255, 3);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(605, 404);
			this->tabControl5->TabIndex = 3;
			// 
			// tabPage14
			// 
			this->tabPage14->Controls->Add(this->dataGridView10);
			this->tabPage14->Location = System::Drawing::Point(4, 22);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(3);
			this->tabPage14->Size = System::Drawing::Size(597, 378);
			this->tabPage14->TabIndex = 0;
			this->tabPage14->Text = L"V(x,y)";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// dataGridView10
			// 
			this->dataGridView10->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView10->Location = System::Drawing::Point(3, 3);
			this->dataGridView10->Name = L"dataGridView10";
			this->dataGridView10->Size = System::Drawing::Size(591, 372);
			this->dataGridView10->TabIndex = 0;
			// 
			// tabPage15
			// 
			this->tabPage15->Controls->Add(this->dataGridView11);
			this->tabPage15->Location = System::Drawing::Point(4, 22);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(3);
			this->tabPage15->Size = System::Drawing::Size(597, 378);
			this->tabPage15->TabIndex = 1;
			this->tabPage15->Text = L"V удв сетка";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// dataGridView11
			// 
			this->dataGridView11->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView11->Location = System::Drawing::Point(3, 3);
			this->dataGridView11->Name = L"dataGridView11";
			this->dataGridView11->Size = System::Drawing::Size(591, 372);
			this->dataGridView11->TabIndex = 0;
			// 
			// tabPage16
			// 
			this->tabPage16->Controls->Add(this->dataGridView12);
			this->tabPage16->Location = System::Drawing::Point(4, 22);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Size = System::Drawing::Size(597, 378);
			this->tabPage16->TabIndex = 2;
			this->tabPage16->Text = L"разность";
			this->tabPage16->UseVisualStyleBackColor = true;
			// 
			// dataGridView12
			// 
			this->dataGridView12->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView12->Location = System::Drawing::Point(3, 3);
			this->dataGridView12->Name = L"dataGridView12";
			this->dataGridView12->Size = System::Drawing::Size(591, 372);
			this->dataGridView12->TabIndex = 0;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label36);
			this->groupBox8->Controls->Add(this->label35);
			this->groupBox8->Controls->Add(this->label34);
			this->groupBox8->Controls->Add(this->label33);
			this->groupBox8->Controls->Add(this->label32);
			this->groupBox8->Location = System::Drawing::Point(3, 173);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(246, 224);
			this->groupBox8->TabIndex = 2;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Справка:";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(9, 133);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(71, 13);
			this->label35->TabIndex = 3;
			this->label35->Text = L"MAX погр. = ";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(7, 101);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(138, 13);
			this->label34->TabIndex = 2;
			this->label34->Text = L"достигнутая точность 2 = ";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(6, 71);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(129, 13);
			this->label33->TabIndex = 1;
			this->label33->Text = L"достигнутая точность = ";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(7, 36);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(170, 13);
			this->label32->TabIndex = 0;
			this->label32->Text = L"кол-во затраченных итераций = ";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->radioButton8);
			this->groupBox7->Controls->Add(this->radioButton7);
			this->groupBox7->Controls->Add(this->label31);
			this->groupBox7->Controls->Add(this->label30);
			this->groupBox7->Controls->Add(this->label29);
			this->groupBox7->Controls->Add(this->label28);
			this->groupBox7->Controls->Add(this->label27);
			this->groupBox7->Controls->Add(this->textBox16);
			this->groupBox7->Controls->Add(this->textBox15);
			this->groupBox7->Controls->Add(this->textBox14);
			this->groupBox7->Controls->Add(this->textBox13);
			this->groupBox7->Location = System::Drawing::Point(3, 3);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(246, 135);
			this->groupBox7->TabIndex = 1;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Параметры";
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(126, 95);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(70, 17);
			this->radioButton8->TabIndex = 10;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"точность";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(126, 77);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(104, 17);
			this->radioButton7->TabIndex = 9;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"число итераций";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(6, 97);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(25, 13);
			this->label31->TabIndex = 8;
			this->label31->Text = L"Eps";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(123, 60);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(94, 13);
			this->label30->TabIndex = 7;
			this->label30->Text = L"Условия выхода:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(7, 63);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(15, 13);
			this->label29->TabIndex = 6;
			this->label29->Text = L"N";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(105, 24);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(15, 13);
			this->label28->TabIndex = 5;
			this->label28->Text = L"m";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(7, 25);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(13, 13);
			this->label27->TabIndex = 4;
			this->label27->Text = L"n";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(37, 94);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(72, 20);
			this->textBox16->TabIndex = 3;
			this->textBox16->Text = L"1e-06";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(28, 60);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(72, 20);
			this->textBox15->TabIndex = 2;
			this->textBox15->Text = L"50";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(126, 22);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(72, 20);
			this->textBox14->TabIndex = 1;
			this->textBox14->Text = L"4";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(26, 22);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(72, 20);
			this->textBox13->TabIndex = 0;
			this->textBox13->Text = L"4";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(57, 144);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(104, 23);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Запуск";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(2, 108);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(35, 13);
			this->label26->TabIndex = 3;
			this->label26->Text = L"Tau =";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(10, 166);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(35, 13);
			this->label36->TabIndex = 4;
			this->label36->Text = L"Tau =";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(875, 433);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabPage9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->tabPage10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabControl4->ResumeLayout(false);
			this->tabPage11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			this->tabPage12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
			this->tabPage13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabControl5->ResumeLayout(false);
			this->tabPage14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->EndInit();
			this->tabPage15->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView11))->EndInit();
			this->tabPage16->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView12))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();
		dataGridView3->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView2->Columns->Clear();
		dataGridView3->Columns->Clear();
	
		int n = Convert::ToInt32(textBox1->Text);
		int m = Convert::ToInt32(textBox2->Text);
		double eps = Convert::ToDouble(textBox4->Text);
		int count_of_iter = Convert::ToInt32(textBox3->Text);
		double x_for_max = 0;
		double y_for_max = 0;

		double accuracy = 0;
		int spent_iter = count_of_iter;

		fill_table(n, m, dataGridView1, dataGridView2, dataGridView3);
		
		DirTest Test(n, m);
		
		if (radioButton1->Checked)
			accuracy = Test.zeidelIter(count_of_iter);
		else
			accuracy = Test.zeidelEps(eps, spent_iter);

		label6->Text = "кол-во затраченных итераций = " + Convert::ToString(spent_iter);
		label7->Text = "достигн точность =  " + Convert::ToString(accuracy);

		double maxGP = 0;
		double GP = 0;

		for (int j = m; j >= 0; j--)
			for (int i = 0; i < n + 1; i++)
			{
				dataGridView1[i + 2, m - j + 2]->Value = Test.uAcc(Test.getX(i), Test.getY(j));
			}

		for (int i = 0; i < n + 1; i++)
		{
			dataGridView2[i + 2, m + 2]->Value = Test.Mu3(Test.getX(i));
			dataGridView2[i + 2, 2]->Value = Test.Mu4(Test.getX(i));

			dataGridView3[i + 2, m + 2]->Value = 0;
			dataGridView3[i + 2, 2]->Value = 0;
		}
		
		for (int j = 1; j < m; j++)
		{
			dataGridView2[2, m - j + 2]->Value = Test.Mu1(Test.getY(j));
			dataGridView2[n + 2, m - j + 2]->Value = Test.Mu2(Test.getY(j));

			dataGridView3[2, m - j + 2]->Value = 0;
			dataGridView3[n + 2, m - j + 2]->Value = 0;
		}

		for (int j = 1; j < m; j++)
			for (int i = 1; i < n; i++)
			{
				dataGridView2[i + 2, m - j + 2]->Value = Test.V[Test.indV(i, j)];
				GP = fabs(Test.V[Test.indV(i, j)] - Test.uAcc(Test.getX(i), Test.getY(j)));
				dataGridView3[i + 2, m - j + 2]->Value = GP;
				if (GP > maxGP)
				{
					maxGP = GP;
					//x_for_max = i;
					//y_for_max = j;
				}
			}

	label8->Text = "MAX погр = " + Convert::ToString(maxGP);
	//label10->Text = "i = " + Convert::ToString(x_for_max);
	//label11->Text = "j = " + Convert::ToString(y_for_max);
	
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		dataGridView4->Rows->Clear();
		dataGridView5->Rows->Clear();
		dataGridView6->Rows->Clear();
		dataGridView4->Columns->Clear();
		dataGridView5->Columns->Clear();
		dataGridView6->Columns->Clear();

		int n = Convert::ToInt32(textBox5->Text);
		int m = Convert::ToInt32(textBox6->Text);
		double eps = Convert::ToDouble(textBox8->Text);
		int count_of_iter = Convert::ToInt32(textBox7->Text);
		//int output = Convert::ToInt32(textBox2_out->Text);

		double accuracy = 0;
		double accuracy2 = 0;
		int spent_iter = count_of_iter;
		int spent_iter2 = count_of_iter;

		double x_for_max = 0;
		double y_for_max = 0;

		//if (n < output && m < output) {
		fill_table(n, m, dataGridView4, dataGridView5, dataGridView6);
		//}
		
		DirMain Task(n, m);
		DirMain Task2(2 * n, 2 * m);
		if (radioButton3->Checked)
		{
			accuracy = Task.zeidelIter(count_of_iter);
			accuracy2 = Task2.zeidelIter(count_of_iter);
		}
		else
		{
			accuracy = Task.zeidelEps(eps, spent_iter);
			accuracy2 = Task2.zeidelEps(eps, spent_iter2);
		}

		

		label14->Text = "кол-во затраченных итераций = " + Convert::ToString(spent_iter);
		label15->Text = "достигн точность =  " + Convert::ToString(accuracy);
		label17->Text = "достигн точность 2 =  " + Convert::ToString(accuracy2);

		double max_LP = 0;
		double LP = 0;
		//if (n < output && m < output) {
			for (int i = 0; i < n + 1; i++)
			{
				dataGridView4[i + 2, m + 2]->Value = Task.Mu3(Task.getX(i));
				dataGridView4[i + 2, 2]->Value = Task.Mu4(Task.getX(i));

				dataGridView5[i + 2, m + 2]->Value = Task.Mu3(Task.getX(i));
				dataGridView5[i + 2, 2]->Value = Task.Mu4(Task.getX(i));

				dataGridView6[i + 2, m + 2]->Value = 0;
				dataGridView6[i + 2, 2]->Value = 0;
			}
			for (int j = 1; j < m; j++)
			{
				dataGridView4[2, m - j + 2]->Value = Task.Mu1(Task.getY(j));
				dataGridView4[n + 2, m - j + 2]->Value = Task.Mu2(Task.getY(j));

				dataGridView5[2, m - j + 2]->Value = Task.Mu1(Task.getY(j));
				dataGridView5[n + 2, m - j + 2]->Value = Task.Mu2(Task.getY(j));

				dataGridView6[2, m - j + 2]->Value = 0;
				dataGridView6[n + 2, m - j + 2]->Value = 0;
			}
		//}

		for (int j = 1; j < m; j++)
			for (int i = 1; i < n; i++)
			{
				//if (n < output && m < output) {
					dataGridView4[i + 2, m - j + 2]->Value = Task2.V[Task2.indV(2 * i, 2 * j)];
					dataGridView5[i + 2, m - j + 2]->Value = Task.V[Task.indV(i, j)];
				//}
				LP = fabs(Task.V[Task.indV(i, j)] - Task2.V[Task2.indV(2 * i, 2 * j)]);
				//if (n < output && m < output)
					dataGridView6[i + 2, m - j + 2]->Value = LP;
				if (LP > max_LP)
				{
					max_LP = LP;
					x_for_max = i;
					y_for_max = j;
				}
			}

		label16->Text = "MAX погр = " + Convert::ToString(max_LP);
		//label8->Text = "i = " + Convert::ToString(x_for_max);
		//label9->Text = "j = " + Convert::ToString(y_for_max);
	}
	
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		
	dataGridView7->Rows->Clear();
	dataGridView8->Rows->Clear();
	dataGridView9->Rows->Clear();
	dataGridView7->Columns->Clear();
	dataGridView8->Columns->Clear();
	dataGridView9->Columns->Clear();

	int n = Convert::ToInt32(textBox9->Text);
	int m = Convert::ToInt32(textBox10->Text);
	double eps = Convert::ToDouble(textBox12->Text);
	int count_of_iter = Convert::ToInt32(textBox11->Text);
	//int output = Convert::ToInt32(textBox4_out->Text);

	double accuracy = 0;
	double accuracy2 = 0;
	int spent_iter = count_of_iter;
	int spent_iter2 = count_of_iter;

	double x_for_max = 0;
	double y_for_max = 0;

	//if (n < output && m < output) {
		fill_table(n, m, dataGridView7, dataGridView8, dataGridView9);
	//}
	DirTest Task(n, m);
	if (radioButton5->Checked)
	{
		accuracy = Task.simpleIterationIter(count_of_iter);
	}
	else
	{
		accuracy = Task.simpleIterationEps(eps, spent_iter);
	}

	label23->Text = "кол-во затраченных итераций = " + Convert::ToString(spent_iter);
	label24->Text = "достигн точность =  " + Convert::ToString(accuracy);
	

	double max_LP = 0;
	double LP = 0;
	//if (n < output && m < output) {
		for (int i = 0; i < n + 1; i++)
		{
			dataGridView7[i + 2, m + 2]->Value = Task.Mu3(Task.getX(i));
			dataGridView7[i + 2, 2]->Value = Task.Mu4(Task.getX(i));

			dataGridView8[i + 2, m + 2]->Value = Task.Mu3(Task.getX(i));
			dataGridView8[i + 2, 2]->Value = Task.Mu4(Task.getX(i));

			dataGridView9[i + 2, m + 2]->Value = 0;
			dataGridView9[i + 2, 2]->Value = 0;
		}
		for (int j = 1; j < m; j++)
		{
			dataGridView7[2, m - j + 2]->Value = Task.Mu1(Task.getY(j));
			dataGridView7[n + 2, m - j + 2]->Value = Task.Mu2(Task.getY(j));

			dataGridView8[2, m - j + 2]->Value = Task.Mu1(Task.getY(j));
			dataGridView8[n + 2, m - j + 2]->Value = Task.Mu2(Task.getY(j));

			dataGridView9[2, m - j + 2]->Value = 0;
			dataGridView9[n + 2, m - j + 2]->Value = 0;
		}
	//}

	for (int j = 1; j < m; j++)
		for (int i = 1; i < n; i++)
		{
			//if (n < output && m < output) {
				dataGridView7[i + 2, m - j + 2]->Value = Task.uAcc(Task.getX(i), Task.getY(j));
				dataGridView8[i + 2, m - j + 2]->Value = Task.V[Task.indV(i, j)];
			//}
			LP = fabs(Task.V[Task.indV(i, j)] - Task.uAcc(Task.getX(i), Task.getY(j)));
			//if (n < output && m < output)
				dataGridView9[i + 2, m - j + 2]->Value = LP;
			if (LP > max_LP)
			{
				max_LP = LP;
				x_for_max = i;
				y_for_max = j;
			}
		}

	label25->Text = "MAX погр. = " + Convert::ToString(max_LP);
	label26->Text = "Tau = " + Convert::ToString(Task.getTau());
	//label46->Text = "i = " + Convert::ToString(x_for_max);
	//label45->Text = "j = " + Convert::ToString(y_for_max);

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		dataGridView10->Rows->Clear();
		dataGridView11->Rows->Clear();
		dataGridView12->Rows->Clear();
		dataGridView10->Columns->Clear();
		dataGridView11->Columns->Clear();
		dataGridView12->Columns->Clear();

		int n = Convert::ToInt32(textBox13->Text);
		int m = Convert::ToInt32(textBox14->Text);
		double eps = Convert::ToDouble(textBox16->Text);
		int count_of_iter = Convert::ToInt32(textBox15->Text);
		//int output = Convert::ToInt32(textBox3_out->Text);

		double accuracy = 0;
		double accuracy2 = 0;
		int spent_iter = count_of_iter;
		int spent_iter2 = count_of_iter;

		double x_for_max = 0;
		double y_for_max = 0;

		//if (n < output && m < output) {
			fill_table(n, m, dataGridView10, dataGridView11, dataGridView12);
		//}
		DirMain Task(n, m);
		DirMain Task2(2 * n, 2 * m);
		if (radioButton7->Checked)
		{
			accuracy = Task.simpleIterationIter(count_of_iter);
			accuracy2 = Task2.simpleIterationIter(count_of_iter);
		}
		else
		{
			accuracy = Task.simpleIterationEps(eps, spent_iter);
			accuracy2 = Task2.simpleIterationEps(eps, spent_iter2);
		}

		label32->Text = "кол-во затраченных итераций = " + Convert::ToString(spent_iter);
		label33->Text = "достигн точность =  " + Convert::ToString(accuracy);
		label34->Text = "достигн точность 2 =  " + Convert::ToString(accuracy2);

		double max_LP = 0;
		double LP = 0;
		//if (n < output && m < output) {
			for (int i = 0; i < n + 1; i++)
			{
				dataGridView10[i + 2, m + 2]->Value = Task.Mu3(Task.getX(i));
				dataGridView10[i + 2, 2]->Value = Task.Mu4(Task.getX(i));

				dataGridView11[i + 2, m + 2]->Value = Task.Mu3(Task.getX(i));
				dataGridView11[i + 2, 2]->Value = Task.Mu4(Task.getX(i));

				dataGridView12[i + 2, m + 2]->Value = 0;
				dataGridView12[i + 2, 2]->Value = 0;
			}
			for (int j = 1; j < m; j++)
			{
				dataGridView10[2, m - j + 2]->Value = Task.Mu1(Task.getY(j));
				dataGridView10[n + 2, m - j + 2]->Value = Task.Mu2(Task.getY(j));

				dataGridView11[2, m - j + 2]->Value = Task.Mu1(Task.getY(j));
				dataGridView11[n + 2, m - j + 2]->Value = Task.Mu2(Task.getY(j));

				dataGridView12[2, m - j + 2]->Value = 0;
				dataGridView12[n + 2, m - j + 2]->Value = 0;
			}
		//}

		for (int j = 1; j < m; j++)
			for (int i = 1; i < n; i++)
			{
				//if (n < output && m < output) {
					dataGridView10[i + 2, m - j + 2]->Value = Task2.V[Task2.indV(2 * i, 2 * j)];
					dataGridView11[i + 2, m - j + 2]->Value = Task.V[Task.indV(i, j)];
				//}
				LP = fabs(Task.V[Task.indV(i, j)] - Task2.V[Task2.indV(2 * i, 2 * j)]);
				//if (n < output && m < output)
					dataGridView12[i + 2, m - j + 2]->Value = LP;
				if (LP > max_LP)
				{
					max_LP = LP;
					x_for_max = i;
					y_for_max = j;
				}
			}

		label35->Text = "Max LP = " + Convert::ToString(max_LP);
		label36->Text = "Tau = " + Convert::ToString(Task2.getTau());

		//label22->Text = "i = " + Convert::ToString(x_for_max);
		//label21->Text = "j = " + Convert::ToString(y_for_max);
	}

	void fill_table(int n, int m, DataGridView ^DGV1, DataGridView ^DGV2, DataGridView ^DGV3)
	{
		DGV1->Columns->Add("Column-1", "y");
		DGV1->Columns[0]->Width = 30;
		//DGV1->Columns[0]->DefaultCellStyle->BackColor = System::Drawing::Color::CadetBlue;
		DGV1->Columns->Add("Column-2", "j");
		DGV1->Columns[1]->Width = 30;
			 //DGV1->Columns[1]->DefaultCellStyle->BackColor = System::Drawing::Color::Red;
			 DGV1->Rows->Add();
			 DGV1->Rows[0]->HeaderCell->Value = "x";
			 //DGV1->Rows[0]->DefaultCellStyle->BackColor = System::Drawing::Color::CadetBlue;
			 DGV1->Rows->Add();
			 DGV1->Rows[1]->HeaderCell->Value = "i";
			 //DGV1->Rows[1]->DefaultCellStyle->BackColor = System::Drawing::Color::Red;

			 DGV2->Columns->Add("Column-1", "y");
			 DGV2->Columns[0]->Width = 30;
			 //DGV2->Columns[0]->DefaultCellStyle->BackColor = System::Drawing::Color::CadetBlue;
			 DGV2->Columns->Add("Column-2", "j");
			 DGV2->Columns[1]->Width = 30;
			 //DGV2->Columns[1]->DefaultCellStyle->BackColor = System::Drawing::Color::Red;
			 DGV2->Rows->Add();
			 DGV2->Rows[0]->HeaderCell->Value = "x";
			 //DGV2->Rows[0]->DefaultCellStyle->BackColor = System::Drawing::Color::CadetBlue;
			 DGV2->Rows->Add();
			 DGV2->Rows[1]->HeaderCell->Value = "i";
			 //DGV2->Rows[1]->DefaultCellStyle->BackColor = System::Drawing::Color::Red;

			 DGV3->Columns->Add("Column-1", "y");
			 DGV3->Columns[0]->Width = 30;
			 //DGV3->Columns[0]->DefaultCellStyle->BackColor = System::Drawing::Color::CadetBlue;
			 DGV3->Columns->Add("Column-2", "j");
			 DGV3->Columns[1]->Width = 30;
			 //DGV3->Columns[1]->DefaultCellStyle->BackColor = System::Drawing::Color::Red;
			 DGV3->Rows->Add();
			 DGV3->Rows[0]->HeaderCell->Value = "x";
			 //DGV3->Rows[0]->DefaultCellStyle->BackColor = System::Drawing::Color::CadetBlue;
			 DGV3->Rows->Add();
			 DGV3->Rows[1]->HeaderCell->Value = "i";
			 //DGV3->Rows[1]->DefaultCellStyle->BackColor = System::Drawing::Color::Red;


			 for (int i = 0; i < n + 1; i++)
			 {
				 DGV1->Columns->Add("Column1" + Convert::ToString(i), "");
				 DGV1->Columns[i + 2]->Width = 90;
				 DGV1[i + 2, 0]->Value = Convert::ToString(i);
				 DGV1[i + 2, 1]->Value = Convert::ToString(i);

				 DGV2->Columns->Add("Column1" + Convert::ToString(i), "");
				 DGV2->Columns[i + 2]->Width = 90;
				 DGV2[i + 2, 0]->Value = Convert::ToString(i);
				 DGV2[i + 2, 1]->Value = Convert::ToString(i);

				 DGV3->Columns->Add("Column1" + Convert::ToString(i), "");
				 DGV3->Columns[i + 2]->Width = 90;
				 DGV3[i + 2, 0]->Value = Convert::ToString(i);
				 DGV3[i + 2, 1]->Value = Convert::ToString(i);
			 }
			 for (int i = 0; i < m + 1; i++)
			 {
				 DGV1->Rows->Add();
				 DGV1[0, i + 2]->Value = Convert::ToString(m - i);
				 DGV1[1, i + 2]->Value = Convert::ToString(m - i);

				 DGV2->Rows->Add();
				 DGV2[0, i + 2]->Value = Convert::ToString(m - i);
				 DGV2[1, i + 2]->Value = Convert::ToString(m - i);

				 DGV3->Rows->Add();
				 DGV3[0, i + 2]->Value = Convert::ToString(m - i);
				 DGV3[1, i + 2]->Value = Convert::ToString(m - i);
			 }
		 }
};
}
