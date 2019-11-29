#pragma once
#include "DirichletTask.h"

namespace Nummet6s201 {

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TextBox^  textBox1_m;
	private: System::Windows::Forms::TextBox^  textBox1_n;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;





	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1_eps;
	private: System::Windows::Forms::TextBox^  textBox1_count;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;



	private: System::Windows::Forms::TextBox^  textBox2_eps;

	private: System::Windows::Forms::TextBox^  textBox2_count;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;




	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::DataGridView^  dataGridView6;


	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::TextBox^  textBox2_m;

	private: System::Windows::Forms::TextBox^  textBox2_n;

	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::DataGridView^  dataGridView4;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox2_out;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox3_out;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;



	private: System::Windows::Forms::TextBox^  textBox3_eps;
	private: System::Windows::Forms::TextBox^  textBox3_count;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::DataGridView^  dataGridView9;
	private: System::Windows::Forms::DataGridView^  dataGridView8;
	private: System::Windows::Forms::TextBox^  textBox3_m;
	private: System::Windows::Forms::TextBox^  textBox3_n;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::DataGridView^  dataGridView7;
	private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label42;



private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::RadioButton^  radioButton11;
private: System::Windows::Forms::RadioButton^  radioButton12;

private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::TextBox^  textBox4_out;

private: System::Windows::Forms::TextBox^  textBox4_eps;

private: System::Windows::Forms::TextBox^  textBox4_count;

private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label51;

private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::DataGridView^  dataGridView12;


private: System::Windows::Forms::DataGridView^  dataGridView11;
private: System::Windows::Forms::TextBox^  textBox4_m;

private: System::Windows::Forms::TextBox^  textBox4_n;

private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::DataGridView^  dataGridView10;

private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::RadioButton^  radioButton7;
private: System::Windows::Forms::RadioButton^  radioButton8;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::TextBox^  textBox5_out;

private: System::Windows::Forms::TextBox^  textBox5_eps;

private: System::Windows::Forms::TextBox^  textBox5_count;

private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::DataGridView^  dataGridView15;


private: System::Windows::Forms::DataGridView^  dataGridView14;
private: System::Windows::Forms::TextBox^  textBox5_m;

private: System::Windows::Forms::TextBox^  textBox5_n;

private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::DataGridView^  dataGridView13;

private: System::Windows::Forms::Button^  button5;

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1_eps = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_count = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1_m = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_n = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2_out = (gcnew System::Windows::Forms::TextBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2_eps = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_count = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox2_m = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_n = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox3_out = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_eps = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_count = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->dataGridView9 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox3_m = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_n = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->textBox4_out = (gcnew System::Windows::Forms::TextBox());
			this->textBox4_eps = (gcnew System::Windows::Forms::TextBox());
			this->textBox4_count = (gcnew System::Windows::Forms::TextBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->dataGridView12 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView11 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox4_m = (gcnew System::Windows::Forms::TextBox());
			this->textBox4_n = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->dataGridView10 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->textBox5_out = (gcnew System::Windows::Forms::TextBox());
			this->textBox5_eps = (gcnew System::Windows::Forms::TextBox());
			this->textBox5_count = (gcnew System::Windows::Forms::TextBox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->dataGridView15 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView14 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox5_m = (gcnew System::Windows::Forms::TextBox());
			this->textBox5_n = (gcnew System::Windows::Forms::TextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->dataGridView13 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView13))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1099, 462);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 62);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Пуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(447, 383);
			this->dataGridView1->TabIndex = 1;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(2, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1432, 632);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->radioButton2);
			this->tabPage1->Controls->Add(this->radioButton1);
			this->tabPage1->Controls->Add(this->textBox1_eps);
			this->tabPage1->Controls->Add(this->textBox1_count);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->dataGridView3);
			this->tabPage1->Controls->Add(this->dataGridView2);
			this->tabPage1->Controls->Add(this->textBox1_m);
			this->tabPage1->Controls->Add(this->textBox1_n);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1424, 606);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестовая";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(76, 578);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(21, 13);
			this->label11->TabIndex = 26;
			this->label11->Text = L"j = ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(76, 552);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(21, 13);
			this->label10->TabIndex = 25;
			this->label10->Text = L"i = ";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(746, 501);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(70, 17);
			this->radioButton2->TabIndex = 24;
			this->radioButton2->Text = L"точность";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(746, 478);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(72, 17);
			this->radioButton1->TabIndex = 23;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"итерации";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox1_eps
			// 
			this->textBox1_eps->Location = System::Drawing::Point(926, 500);
			this->textBox1_eps->Name = L"textBox1_eps";
			this->textBox1_eps->Size = System::Drawing::Size(100, 20);
			this->textBox1_eps->TabIndex = 22;
			this->textBox1_eps->Text = L"1e-6";
			// 
			// textBox1_count
			// 
			this->textBox1_count->Location = System::Drawing::Point(926, 474);
			this->textBox1_count->Name = L"textBox1_count";
			this->textBox1_count->Size = System::Drawing::Size(100, 20);
			this->textBox1_count->TabIndex = 21;
			this->textBox1_count->Text = L"30";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(878, 504);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(24, 13);
			this->label15->TabIndex = 20;
			this->label15->Text = L"eps";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(857, 478);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(63, 13);
			this->label14->TabIndex = 19;
			this->label14->Text = L"count of iter";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(74, 474);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(157, 13);
			this->label13->TabIndex = 18;
			this->label13->Text = L"достигнутая точность метода";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(74, 445);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(188, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L"затраченное колличество итераций";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1124, 392);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"разность";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(646, 392);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"численное решение";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(170, 399);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"точная функция";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(74, 523);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"макс. глобальная погрешность";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(912, 6);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(447, 383);
			this->dataGridView3->TabIndex = 7;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(459, 6);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(447, 383);
			this->dataGridView2->TabIndex = 6;
			// 
			// textBox1_m
			// 
			this->textBox1_m->Location = System::Drawing::Point(926, 549);
			this->textBox1_m->Name = L"textBox1_m";
			this->textBox1_m->Size = System::Drawing::Size(100, 20);
			this->textBox1_m->TabIndex = 5;
			this->textBox1_m->Text = L"5";
			// 
			// textBox1_n
			// 
			this->textBox1_n->Location = System::Drawing::Point(926, 523);
			this->textBox1_n->Name = L"textBox1_n";
			this->textBox1_n->Size = System::Drawing::Size(100, 20);
			this->textBox1_n->TabIndex = 4;
			this->textBox1_n->Text = L"4";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(887, 552);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"m";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(887, 523);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"n";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->textBox2_out);
			this->tabPage2->Controls->Add(this->radioButton4);
			this->tabPage2->Controls->Add(this->radioButton3);
			this->tabPage2->Controls->Add(this->textBox2_eps);
			this->tabPage2->Controls->Add(this->textBox2_count);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->label26);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->dataGridView6);
			this->tabPage2->Controls->Add(this->dataGridView5);
			this->tabPage2->Controls->Add(this->textBox2_m);
			this->tabPage2->Controls->Add(this->textBox2_n);
			this->tabPage2->Controls->Add(this->label29);
			this->tabPage2->Controls->Add(this->label30);
			this->tabPage2->Controls->Add(this->dataGridView4);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1424, 606);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Основная";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(113, 579);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 13);
			this->label9->TabIndex = 53;
			this->label9->Text = L"j = ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(113, 555);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 13);
			this->label8->TabIndex = 52;
			this->label8->Text = L"i = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(846, 546);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 13);
			this->label7->TabIndex = 51;
			this->label7->Text = L"out";
			// 
			// textBox2_out
			// 
			this->textBox2_out->Location = System::Drawing::Point(885, 544);
			this->textBox2_out->Name = L"textBox2_out";
			this->textBox2_out->Size = System::Drawing::Size(100, 20);
			this->textBox2_out->TabIndex = 50;
			this->textBox2_out->Text = L"21";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(705, 456);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(70, 17);
			this->radioButton4->TabIndex = 49;
			this->radioButton4->Text = L"точность";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Checked = true;
			this->radioButton3->Location = System::Drawing::Point(705, 432);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(72, 17);
			this->radioButton3->TabIndex = 48;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"итерации";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// textBox2_eps
			// 
			this->textBox2_eps->Location = System::Drawing::Point(885, 455);
			this->textBox2_eps->Name = L"textBox2_eps";
			this->textBox2_eps->Size = System::Drawing::Size(100, 20);
			this->textBox2_eps->TabIndex = 47;
			this->textBox2_eps->Text = L"1e-6";
			// 
			// textBox2_count
			// 
			this->textBox2_count->Location = System::Drawing::Point(885, 429);
			this->textBox2_count->Name = L"textBox2_count";
			this->textBox2_count->Size = System::Drawing::Size(100, 20);
			this->textBox2_count->TabIndex = 46;
			this->textBox2_count->Text = L"30";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(837, 458);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(24, 13);
			this->label16->TabIndex = 45;
			this->label16->Text = L"eps";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(816, 432);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(63, 13);
			this->label17->TabIndex = 44;
			this->label17->Text = L"count of iter";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(113, 474);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(157, 13);
			this->label18->TabIndex = 43;
			this->label18->Text = L"достигнутая точность метода";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(113, 445);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(188, 13);
			this->label19->TabIndex = 42;
			this->label19->Text = L"затраченное колличество итераций";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(113, 505);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(101, 13);
			this->label20->TabIndex = 41;
			this->label20->Text = L"точность метода 2";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(1135, 392);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(54, 13);
			this->label25->TabIndex = 36;
			this->label25->Text = L"разность";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(652, 392);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(107, 13);
			this->label26->TabIndex = 35;
			this->label26->Text = L"численное решение";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(185, 392);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(195, 13);
			this->label27->TabIndex = 34;
			this->label27->Text = L"численное решение на мелкой сетке";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(113, 530);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(162, 13);
			this->label28->TabIndex = 33;
			this->label28->Text = L"макс. локальная погрешность";
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(912, 6);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(447, 383);
			this->dataGridView6->TabIndex = 32;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(459, 6);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(447, 383);
			this->dataGridView5->TabIndex = 31;
			// 
			// textBox2_m
			// 
			this->textBox2_m->Location = System::Drawing::Point(885, 504);
			this->textBox2_m->Name = L"textBox2_m";
			this->textBox2_m->Size = System::Drawing::Size(100, 20);
			this->textBox2_m->TabIndex = 30;
			this->textBox2_m->Text = L"5";
			// 
			// textBox2_n
			// 
			this->textBox2_n->Location = System::Drawing::Point(885, 478);
			this->textBox2_n->Name = L"textBox2_n";
			this->textBox2_n->Size = System::Drawing::Size(100, 20);
			this->textBox2_n->TabIndex = 29;
			this->textBox2_n->Text = L"4";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(846, 507);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(15, 13);
			this->label29->TabIndex = 28;
			this->label29->Text = L"m";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(846, 478);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(13, 13);
			this->label30->TabIndex = 27;
			this->label30->Text = L"n";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(6, 6);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(447, 383);
			this->dataGridView4->TabIndex = 26;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1099, 462);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 62);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Пуск";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label42);
			this->tabPage3->Controls->Add(this->groupBox1);
			this->tabPage3->Controls->Add(this->label41);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->textBox3_out);
			this->tabPage3->Controls->Add(this->textBox3_eps);
			this->tabPage3->Controls->Add(this->textBox3_count);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->label31);
			this->tabPage3->Controls->Add(this->label32);
			this->tabPage3->Controls->Add(this->label33);
			this->tabPage3->Controls->Add(this->label34);
			this->tabPage3->Controls->Add(this->label35);
			this->tabPage3->Controls->Add(this->label36);
			this->tabPage3->Controls->Add(this->label37);
			this->tabPage3->Controls->Add(this->label38);
			this->tabPage3->Controls->Add(this->dataGridView9);
			this->tabPage3->Controls->Add(this->dataGridView8);
			this->tabPage3->Controls->Add(this->textBox3_m);
			this->tabPage3->Controls->Add(this->textBox3_n);
			this->tabPage3->Controls->Add(this->label39);
			this->tabPage3->Controls->Add(this->label40);
			this->tabPage3->Controls->Add(this->dataGridView7);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1424, 606);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"метод простой итерации ОСН";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(1091, 527);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(182, 13);
			this->label42->TabIndex = 82;
			this->label42->Text = L"Метод простой итерации с Tau opt";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Location = System::Drawing::Point(666, 432);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(140, 73);
			this->groupBox1->TabIndex = 80;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Критерий остановки";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(19, 22);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(72, 17);
			this->radioButton5->TabIndex = 73;
			this->radioButton5->Text = L"итерации";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Checked = true;
			this->radioButton6->Location = System::Drawing::Point(19, 46);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(70, 17);
			this->radioButton6->TabIndex = 74;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"точность";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(124, 511);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(197, 13);
			this->label41->TabIndex = 79;
			this->label41->Text = L"затраченное колличество итераций 2";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(124, 589);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(21, 13);
			this->label21->TabIndex = 78;
			this->label21->Text = L"j = ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(124, 565);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(21, 13);
			this->label22->TabIndex = 77;
			this->label22->Text = L"i = ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(857, 546);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(22, 13);
			this->label23->TabIndex = 76;
			this->label23->Text = L"out";
			// 
			// textBox3_out
			// 
			this->textBox3_out->Location = System::Drawing::Point(896, 544);
			this->textBox3_out->Name = L"textBox3_out";
			this->textBox3_out->Size = System::Drawing::Size(100, 20);
			this->textBox3_out->TabIndex = 75;
			this->textBox3_out->Text = L"21";
			// 
			// textBox3_eps
			// 
			this->textBox3_eps->Location = System::Drawing::Point(896, 455);
			this->textBox3_eps->Name = L"textBox3_eps";
			this->textBox3_eps->Size = System::Drawing::Size(100, 20);
			this->textBox3_eps->TabIndex = 72;
			this->textBox3_eps->Text = L"1e-6";
			// 
			// textBox3_count
			// 
			this->textBox3_count->Location = System::Drawing::Point(896, 429);
			this->textBox3_count->Name = L"textBox3_count";
			this->textBox3_count->Size = System::Drawing::Size(100, 20);
			this->textBox3_count->TabIndex = 71;
			this->textBox3_count->Text = L"30";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(848, 458);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(24, 13);
			this->label24->TabIndex = 70;
			this->label24->Text = L"eps";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(827, 432);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(63, 13);
			this->label31->TabIndex = 69;
			this->label31->Text = L"count of iter";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(124, 460);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(157, 13);
			this->label32->TabIndex = 68;
			this->label32->Text = L"достигнутая точность метода";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(124, 436);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(188, 13);
			this->label33->TabIndex = 67;
			this->label33->Text = L"затраченное колличество итераций";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(124, 487);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(101, 13);
			this->label34->TabIndex = 66;
			this->label34->Text = L"точность метода 2";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(1146, 392);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(54, 13);
			this->label35->TabIndex = 65;
			this->label35->Text = L"разность";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(663, 392);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(107, 13);
			this->label36->TabIndex = 64;
			this->label36->Text = L"численное решение";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(196, 392);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(195, 13);
			this->label37->TabIndex = 63;
			this->label37->Text = L"численное решение на мелкой сетке";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(124, 540);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(162, 13);
			this->label38->TabIndex = 62;
			this->label38->Text = L"макс. локальная погрешность";
			// 
			// dataGridView9
			// 
			this->dataGridView9->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView9->Location = System::Drawing::Point(923, 6);
			this->dataGridView9->Name = L"dataGridView9";
			this->dataGridView9->Size = System::Drawing::Size(447, 383);
			this->dataGridView9->TabIndex = 61;
			// 
			// dataGridView8
			// 
			this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView8->Location = System::Drawing::Point(470, 6);
			this->dataGridView8->Name = L"dataGridView8";
			this->dataGridView8->Size = System::Drawing::Size(447, 383);
			this->dataGridView8->TabIndex = 60;
			// 
			// textBox3_m
			// 
			this->textBox3_m->Location = System::Drawing::Point(896, 504);
			this->textBox3_m->Name = L"textBox3_m";
			this->textBox3_m->Size = System::Drawing::Size(100, 20);
			this->textBox3_m->TabIndex = 59;
			this->textBox3_m->Text = L"5";
			// 
			// textBox3_n
			// 
			this->textBox3_n->Location = System::Drawing::Point(896, 478);
			this->textBox3_n->Name = L"textBox3_n";
			this->textBox3_n->Size = System::Drawing::Size(100, 20);
			this->textBox3_n->TabIndex = 58;
			this->textBox3_n->Text = L"4";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(857, 507);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(15, 13);
			this->label39->TabIndex = 57;
			this->label39->Text = L"m";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(857, 478);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(13, 13);
			this->label40->TabIndex = 56;
			this->label40->Text = L"n";
			// 
			// dataGridView7
			// 
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Location = System::Drawing::Point(17, 6);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->Size = System::Drawing::Size(447, 383);
			this->dataGridView7->TabIndex = 55;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1110, 462);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 62);
			this->button3->TabIndex = 54;
			this->button3->Text = L"Пуск";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label43);
			this->tabPage4->Controls->Add(this->groupBox4);
			this->tabPage4->Controls->Add(this->label45);
			this->tabPage4->Controls->Add(this->label46);
			this->tabPage4->Controls->Add(this->label47);
			this->tabPage4->Controls->Add(this->textBox4_out);
			this->tabPage4->Controls->Add(this->textBox4_eps);
			this->tabPage4->Controls->Add(this->textBox4_count);
			this->tabPage4->Controls->Add(this->label48);
			this->tabPage4->Controls->Add(this->label49);
			this->tabPage4->Controls->Add(this->label50);
			this->tabPage4->Controls->Add(this->label51);
			this->tabPage4->Controls->Add(this->label53);
			this->tabPage4->Controls->Add(this->label54);
			this->tabPage4->Controls->Add(this->label55);
			this->tabPage4->Controls->Add(this->label56);
			this->tabPage4->Controls->Add(this->dataGridView12);
			this->tabPage4->Controls->Add(this->dataGridView11);
			this->tabPage4->Controls->Add(this->textBox4_m);
			this->tabPage4->Controls->Add(this->textBox4_n);
			this->tabPage4->Controls->Add(this->label57);
			this->tabPage4->Controls->Add(this->label58);
			this->tabPage4->Controls->Add(this->dataGridView10);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1424, 606);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"метод простой итерации ТЕСТ";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(1080, 527);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(182, 13);
			this->label43->TabIndex = 109;
			this->label43->Text = L"Метод простой итерации с Tau opt";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton11);
			this->groupBox4->Controls->Add(this->radioButton12);
			this->groupBox4->Location = System::Drawing::Point(655, 432);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(140, 73);
			this->groupBox4->TabIndex = 107;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Критерий остановки";
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(19, 22);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(72, 17);
			this->radioButton11->TabIndex = 73;
			this->radioButton11->Text = L"итерации";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Checked = true;
			this->radioButton12->Location = System::Drawing::Point(19, 46);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(70, 17);
			this->radioButton12->TabIndex = 74;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"точность";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(113, 576);
			this->label45->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(21, 13);
			this->label45->TabIndex = 105;
			this->label45->Text = L"j = ";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(113, 552);
			this->label46->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(21, 13);
			this->label46->TabIndex = 104;
			this->label46->Text = L"i = ";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(846, 546);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(22, 13);
			this->label47->TabIndex = 103;
			this->label47->Text = L"out";
			// 
			// textBox4_out
			// 
			this->textBox4_out->Location = System::Drawing::Point(885, 544);
			this->textBox4_out->Name = L"textBox4_out";
			this->textBox4_out->Size = System::Drawing::Size(100, 20);
			this->textBox4_out->TabIndex = 102;
			this->textBox4_out->Text = L"21";
			// 
			// textBox4_eps
			// 
			this->textBox4_eps->Location = System::Drawing::Point(885, 455);
			this->textBox4_eps->Name = L"textBox4_eps";
			this->textBox4_eps->Size = System::Drawing::Size(100, 20);
			this->textBox4_eps->TabIndex = 101;
			this->textBox4_eps->Text = L"1e-6";
			// 
			// textBox4_count
			// 
			this->textBox4_count->Location = System::Drawing::Point(885, 429);
			this->textBox4_count->Name = L"textBox4_count";
			this->textBox4_count->Size = System::Drawing::Size(100, 20);
			this->textBox4_count->TabIndex = 100;
			this->textBox4_count->Text = L"30";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(837, 458);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(24, 13);
			this->label48->TabIndex = 99;
			this->label48->Text = L"eps";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(816, 432);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(63, 13);
			this->label49->TabIndex = 98;
			this->label49->Text = L"count of iter";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(113, 460);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(157, 13);
			this->label50->TabIndex = 97;
			this->label50->Text = L"достигнутая точность метода";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(113, 436);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(188, 13);
			this->label51->TabIndex = 96;
			this->label51->Text = L"затраченное колличество итераций";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(1135, 392);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(54, 13);
			this->label53->TabIndex = 94;
			this->label53->Text = L"разность";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(652, 392);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(107, 13);
			this->label54->TabIndex = 93;
			this->label54->Text = L"численное решение";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(185, 392);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(88, 13);
			this->label55->TabIndex = 92;
			this->label55->Text = L"точное решение";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(113, 527);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(162, 13);
			this->label56->TabIndex = 91;
			this->label56->Text = L"макс. локальная погрешность";
			// 
			// dataGridView12
			// 
			this->dataGridView12->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView12->Location = System::Drawing::Point(912, 6);
			this->dataGridView12->Name = L"dataGridView12";
			this->dataGridView12->Size = System::Drawing::Size(447, 383);
			this->dataGridView12->TabIndex = 90;
			// 
			// dataGridView11
			// 
			this->dataGridView11->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView11->Location = System::Drawing::Point(459, 6);
			this->dataGridView11->Name = L"dataGridView11";
			this->dataGridView11->Size = System::Drawing::Size(447, 383);
			this->dataGridView11->TabIndex = 89;
			// 
			// textBox4_m
			// 
			this->textBox4_m->Location = System::Drawing::Point(885, 504);
			this->textBox4_m->Name = L"textBox4_m";
			this->textBox4_m->Size = System::Drawing::Size(100, 20);
			this->textBox4_m->TabIndex = 88;
			this->textBox4_m->Text = L"5";
			// 
			// textBox4_n
			// 
			this->textBox4_n->Location = System::Drawing::Point(885, 478);
			this->textBox4_n->Name = L"textBox4_n";
			this->textBox4_n->Size = System::Drawing::Size(100, 20);
			this->textBox4_n->TabIndex = 87;
			this->textBox4_n->Text = L"4";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(846, 507);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(15, 13);
			this->label57->TabIndex = 86;
			this->label57->Text = L"m";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(846, 478);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(13, 13);
			this->label58->TabIndex = 85;
			this->label58->Text = L"n";
			// 
			// dataGridView10
			// 
			this->dataGridView10->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView10->Location = System::Drawing::Point(6, 6);
			this->dataGridView10->Name = L"dataGridView10";
			this->dataGridView10->Size = System::Drawing::Size(447, 383);
			this->dataGridView10->TabIndex = 84;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1099, 462);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 62);
			this->button4->TabIndex = 83;
			this->button4->Text = L"Пуск";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label44);
			this->tabPage5->Controls->Add(this->groupBox2);
			this->tabPage5->Controls->Add(this->label52);
			this->tabPage5->Controls->Add(this->label59);
			this->tabPage5->Controls->Add(this->label60);
			this->tabPage5->Controls->Add(this->textBox5_out);
			this->tabPage5->Controls->Add(this->textBox5_eps);
			this->tabPage5->Controls->Add(this->textBox5_count);
			this->tabPage5->Controls->Add(this->label61);
			this->tabPage5->Controls->Add(this->label62);
			this->tabPage5->Controls->Add(this->label63);
			this->tabPage5->Controls->Add(this->label64);
			this->tabPage5->Controls->Add(this->label65);
			this->tabPage5->Controls->Add(this->label66);
			this->tabPage5->Controls->Add(this->label67);
			this->tabPage5->Controls->Add(this->label68);
			this->tabPage5->Controls->Add(this->dataGridView15);
			this->tabPage5->Controls->Add(this->dataGridView14);
			this->tabPage5->Controls->Add(this->textBox5_m);
			this->tabPage5->Controls->Add(this->textBox5_n);
			this->tabPage5->Controls->Add(this->label69);
			this->tabPage5->Controls->Add(this->label70);
			this->tabPage5->Controls->Add(this->dataGridView13);
			this->tabPage5->Controls->Add(this->button5);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1424, 606);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Область с вырезом";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(1080, 527);
			this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(182, 13);
			this->label44->TabIndex = 133;
			this->label44->Text = L"Метод простой итерации с Tau opt";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Location = System::Drawing::Point(655, 432);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(140, 73);
			this->groupBox2->TabIndex = 132;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Критерий остановки";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Checked = true;
			this->radioButton7->Location = System::Drawing::Point(19, 22);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(72, 17);
			this->radioButton7->TabIndex = 73;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"итерации";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(19, 46);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(70, 17);
			this->radioButton8->TabIndex = 74;
			this->radioButton8->Text = L"точность";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(113, 576);
			this->label52->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(21, 13);
			this->label52->TabIndex = 131;
			this->label52->Text = L"j = ";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(113, 552);
			this->label59->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(21, 13);
			this->label59->TabIndex = 130;
			this->label59->Text = L"i = ";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(846, 546);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(22, 13);
			this->label60->TabIndex = 129;
			this->label60->Text = L"out";
			// 
			// textBox5_out
			// 
			this->textBox5_out->Location = System::Drawing::Point(885, 544);
			this->textBox5_out->Name = L"textBox5_out";
			this->textBox5_out->Size = System::Drawing::Size(100, 20);
			this->textBox5_out->TabIndex = 128;
			this->textBox5_out->Text = L"21";
			// 
			// textBox5_eps
			// 
			this->textBox5_eps->Location = System::Drawing::Point(885, 455);
			this->textBox5_eps->Name = L"textBox5_eps";
			this->textBox5_eps->Size = System::Drawing::Size(100, 20);
			this->textBox5_eps->TabIndex = 127;
			this->textBox5_eps->Text = L"1e-6";
			// 
			// textBox5_count
			// 
			this->textBox5_count->Location = System::Drawing::Point(885, 429);
			this->textBox5_count->Name = L"textBox5_count";
			this->textBox5_count->Size = System::Drawing::Size(100, 20);
			this->textBox5_count->TabIndex = 126;
			this->textBox5_count->Text = L"30";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(837, 458);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(24, 13);
			this->label61->TabIndex = 125;
			this->label61->Text = L"eps";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(816, 432);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(63, 13);
			this->label62->TabIndex = 124;
			this->label62->Text = L"count of iter";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(113, 460);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(157, 13);
			this->label63->TabIndex = 123;
			this->label63->Text = L"достигнутая точность метода";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(113, 436);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(188, 13);
			this->label64->TabIndex = 122;
			this->label64->Text = L"затраченное колличество итераций";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(1135, 392);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(54, 13);
			this->label65->TabIndex = 121;
			this->label65->Text = L"разность";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(652, 392);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(107, 13);
			this->label66->TabIndex = 120;
			this->label66->Text = L"численное решение";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(185, 392);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(88, 13);
			this->label67->TabIndex = 119;
			this->label67->Text = L"точное решение";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(113, 527);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(168, 13);
			this->label68->TabIndex = 118;
			this->label68->Text = L"макс. Глобальная погрешность";
			// 
			// dataGridView15
			// 
			this->dataGridView15->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView15->Location = System::Drawing::Point(912, 6);
			this->dataGridView15->Name = L"dataGridView15";
			this->dataGridView15->Size = System::Drawing::Size(447, 383);
			this->dataGridView15->TabIndex = 117;
			// 
			// dataGridView14
			// 
			this->dataGridView14->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView14->Location = System::Drawing::Point(459, 6);
			this->dataGridView14->Name = L"dataGridView14";
			this->dataGridView14->Size = System::Drawing::Size(447, 383);
			this->dataGridView14->TabIndex = 116;
			// 
			// textBox5_m
			// 
			this->textBox5_m->Location = System::Drawing::Point(885, 504);
			this->textBox5_m->Name = L"textBox5_m";
			this->textBox5_m->Size = System::Drawing::Size(100, 20);
			this->textBox5_m->TabIndex = 115;
			this->textBox5_m->Text = L"10";
			// 
			// textBox5_n
			// 
			this->textBox5_n->Location = System::Drawing::Point(885, 478);
			this->textBox5_n->Name = L"textBox5_n";
			this->textBox5_n->Size = System::Drawing::Size(100, 20);
			this->textBox5_n->TabIndex = 114;
			this->textBox5_n->Text = L"10";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(846, 507);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(15, 13);
			this->label69->TabIndex = 113;
			this->label69->Text = L"m";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(846, 478);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(13, 13);
			this->label70->TabIndex = 112;
			this->label70->Text = L"n";
			// 
			// dataGridView13
			// 
			this->dataGridView13->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView13->Location = System::Drawing::Point(6, 6);
			this->dataGridView13->Name = L"dataGridView13";
			this->dataGridView13->Size = System::Drawing::Size(447, 383);
			this->dataGridView13->TabIndex = 111;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1099, 462);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(134, 62);
			this->button5->TabIndex = 110;
			this->button5->Text = L"Пуск";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1440, 636);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView13))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { // TEST TASK

			dataGridView1->Rows->Clear();
			dataGridView2->Rows->Clear();
			dataGridView3->Rows->Clear();
			dataGridView1->Columns->Clear();
			dataGridView2->Columns->Clear();
			dataGridView3->Columns->Clear();

			int n = Convert::ToInt32(textBox1_n->Text);
			int m = Convert::ToInt32(textBox1_m->Text);
			double eps = Convert::ToDouble(textBox1_eps->Text);
			int count_of_iter = Convert::ToInt32(textBox1_count->Text);
			double x_for_max = 0;
			double y_for_max = 0;

			double accuracy = 0;
			int spent_iter = count_of_iter;

			fill_table(n, m, dataGridView1,dataGridView2,dataGridView3);

			Dirichlet_Test Test(n,m);
			if (radioButton1->Checked)
				accuracy = Test.Zeidel_iter(count_of_iter);
			else
				accuracy = Test.Zeidel_eps(eps, spent_iter);

			label12->Text = "задача решена за " + Convert::ToString(spent_iter) + "итераций";
			label13->Text = "точность метода =  "+Convert::ToString(accuracy);

			double max_GP = 0;
			double GP = 0;

			for (int j = m; j >= 0 ; j--)
				for (int i = 0; i < n + 1; i++)
				{
					dataGridView1[i + 2, m - j + 2]->Value = Test.U_acc(Test.Getx(i), Test.Gety(j));
				}

			for (int i = 0; i < n + 1; i++)
			{
				dataGridView2[i + 2, m + 2]->Value = Test.Mu3(Test.Getx(i));
				dataGridView2[i + 2, 2]->Value = Test.Mu4(Test.Getx(i));

				dataGridView3[i + 2, m + 2]->Value = 0;
				dataGridView3[i + 2, 2]->Value = 0;
			}
			for (int j = 1; j < m; j++)
			{
				dataGridView2[2, m - j + 2]->Value = Test.Mu1(Test.Gety(j));
				dataGridView2[n + 2, m - j + 2]->Value = Test.Mu2(Test.Gety(j));

				dataGridView3[2, m - j + 2]->Value = 0;
				dataGridView3[n + 2, m - j + 2]->Value = 0;
			}

			for (int j = 1; j < m; j++)
				for (int i = 1; i < n; i++)
				{
					dataGridView2[i + 2, m - j + 2]->Value = Test.V[Test.Ind_v(i, j)];
					GP = fabs(Test.V[Test.Ind_v(i, j)] - Test.U_acc(Test.Getx(i), Test.Gety(j)));
					dataGridView3[i + 2, m - j + 2]->Value = GP;
					if (GP > max_GP)
					{
						max_GP = GP;
						x_for_max = i;
						y_for_max = j;
					}
				}

			label3->Text = "Max GP = " + Convert::ToString(max_GP);
			label10->Text = "i = " + Convert::ToString(x_for_max);
			label11->Text = "j = "+Convert::ToString(y_for_max);


		} // end button click TEST






		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { // MAIN TASK

			dataGridView4->Rows->Clear();
			dataGridView5->Rows->Clear();
			dataGridView6->Rows->Clear();
			dataGridView4->Columns->Clear();
			dataGridView5->Columns->Clear();
			dataGridView6->Columns->Clear();

			int n = Convert::ToInt32(textBox2_n->Text);
			int m = Convert::ToInt32(textBox2_m->Text);
			double eps = Convert::ToDouble(textBox2_eps->Text);
			int count_of_iter = Convert::ToInt32(textBox2_count->Text);
			int output = Convert::ToInt32(textBox2_out->Text);

			double accuracy = 0;
			double accuracy2 = 0;
			int spent_iter = count_of_iter;
			int spent_iter2 = count_of_iter;

			double x_for_max = 0;
			double y_for_max = 0;

			if (n < output && m < output) {
				fill_table(n, m, dataGridView4, dataGridView5, dataGridView6);
			}
			Dirichlet_Main Task(n, m);
			Dirichlet_Main Task2(2*n, 2*m);
			if (radioButton3->Checked)
			{
				accuracy = Task.Zeidel_iter(count_of_iter);
				accuracy2 = Task2.Zeidel_iter(count_of_iter);
			}
			else
			{
				accuracy = Task.Zeidel_eps(eps, spent_iter);
				accuracy2 = Task2.Zeidel_eps(eps, spent_iter2);
			}

			label19->Text = "задача решена за " + Convert::ToString(spent_iter) + "итераций";
			label18->Text = "точность метода =  " + Convert::ToString(accuracy);
			label20->Text = "точность метода с 2-м шагом =  " + Convert::ToString(accuracy2);

			double max_LP = 0;
			double LP = 0;
			if (n < output && m < output) {
				for (int i = 0; i < n + 1; i++)
				{
					dataGridView4[i + 2, m + 2]->Value = Task.Mu3(Task.Getx(i));
					dataGridView4[i + 2, 2]->Value = Task.Mu4(Task.Getx(i));

					dataGridView5[i + 2, m + 2]->Value = Task.Mu3(Task.Getx(i));
					dataGridView5[i + 2, 2]->Value = Task.Mu4(Task.Getx(i));

					dataGridView6[i + 2, m + 2]->Value = 0;
					dataGridView6[i + 2, 2]->Value = 0;
				}
				for (int j = 1; j < m; j++)
				{
					dataGridView4[2, m - j + 2]->Value = Task.Mu1(Task.Gety(j));
					dataGridView4[n + 2, m - j + 2]->Value = Task.Mu2(Task.Gety(j));

					dataGridView5[2, m - j + 2]->Value = Task.Mu1(Task.Gety(j));
					dataGridView5[n + 2, m - j + 2]->Value = Task.Mu2(Task.Gety(j));

					dataGridView6[2, m - j + 2]->Value = 0;
					dataGridView6[n + 2, m - j + 2]->Value = 0;
				}
			}

			for (int j = 1; j < m; j++)
				for (int i = 1; i < n; i++)
				{
					if (n < output && m < output) {
						dataGridView4[i + 2, m - j + 2]->Value = Task2.V[Task2.Ind_v(2 * i, 2 * j)];
						dataGridView5[i + 2, m - j + 2]->Value = Task.V[Task.Ind_v(i, j)];
					}
					LP = fabs(Task.V[Task.Ind_v(i, j)] - Task2.V[Task2.Ind_v(2*i,2*j)]);
					if (n < output && m < output)
						dataGridView6[i + 2, m - j + 2]->Value = LP;
					if (LP > max_LP)
					{
						max_LP = LP;
						x_for_max = i;
						y_for_max = j;
					}
				}

			label28->Text = "Max LP = " + Convert::ToString(max_LP);
			label8->Text = "i = "+ Convert::ToString(x_for_max);
			label9->Text = "j = "+ Convert::ToString(y_for_max);

		} // end button click MAIN

		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { // LAB WORK 3

			dataGridView7->Rows->Clear();
			dataGridView8->Rows->Clear();
			dataGridView9->Rows->Clear();
			dataGridView7->Columns->Clear();
			dataGridView8->Columns->Clear();
			dataGridView9->Columns->Clear();

			int n = Convert::ToInt32(textBox3_n->Text);
			int m = Convert::ToInt32(textBox3_m->Text);
			double eps = Convert::ToDouble(textBox3_eps->Text);
			int count_of_iter = Convert::ToInt32(textBox3_count->Text);
			int output = Convert::ToInt32(textBox3_out->Text);

			double accuracy = 0;
			double accuracy2 = 0;
			int spent_iter = count_of_iter;
			int spent_iter2 = count_of_iter;

			double x_for_max = 0;
			double y_for_max = 0;

			if (n < output && m < output) {
				fill_table(n, m, dataGridView7, dataGridView8, dataGridView9);
			}
			Dirichlet_Main Task(n, m);
			Dirichlet_Main Task2(2 * n, 2 * m);
			if (radioButton5->Checked)
			{
				accuracy = Task.Simple_iteration_iter(count_of_iter);
				accuracy2 = Task2.Simple_iteration_iter(count_of_iter);
			}
			else
			{
				accuracy = Task.Simple_iteration_eps(eps, spent_iter);
				accuracy2 = Task2.Simple_iteration_eps(eps, spent_iter2);
			}

			label33->Text = "задача решена за " + Convert::ToString(spent_iter) + " итераций";
			label32->Text = "точность метода =  " + Convert::ToString(accuracy);
			label34->Text = "точность метода с 2-м шагом =  " + Convert::ToString(accuracy2);
			label41->Text = "задача c 2-м шагом решена за " + Convert::ToString(spent_iter2) + " итераций";

			double max_LP = 0;
			double LP = 0;
			if (n < output && m < output) {
				for (int i = 0; i < n + 1; i++)
				{
					dataGridView7[i + 2, m + 2]->Value = Task.Mu3(Task.Getx(i));
					dataGridView7[i + 2, 2]->Value = Task.Mu4(Task.Getx(i));

					dataGridView8[i + 2, m + 2]->Value = Task.Mu3(Task.Getx(i));
					dataGridView8[i + 2, 2]->Value = Task.Mu4(Task.Getx(i));

					dataGridView9[i + 2, m + 2]->Value = 0;
					dataGridView9[i + 2, 2]->Value = 0;
				}
				for (int j = 1; j < m; j++)
				{
					dataGridView7[2, m - j + 2]->Value = Task.Mu1(Task.Gety(j));
					dataGridView7[n + 2, m - j + 2]->Value = Task.Mu2(Task.Gety(j));

					dataGridView8[2, m - j + 2]->Value = Task.Mu1(Task.Gety(j));
					dataGridView8[n + 2, m - j + 2]->Value = Task.Mu2(Task.Gety(j));

					dataGridView9[2, m - j + 2]->Value = 0;
					dataGridView9[n + 2, m - j + 2]->Value = 0;
				}
			}

			for (int j = 1; j < m; j++)
				for (int i = 1; i < n; i++)
				{
					if (n < output && m < output) {
						dataGridView7[i + 2, m - j + 2]->Value = Task2.V[Task2.Ind_v(2 * i, 2 * j)];
						dataGridView8[i + 2, m - j + 2]->Value = Task.V[Task.Ind_v(i, j)];
					}
					LP = fabs(Task.V[Task.Ind_v(i, j)] - Task2.V[Task2.Ind_v(2 * i, 2 * j)]);
					if (n < output && m < output)
						dataGridView9[i + 2, m - j + 2]->Value = LP;
					if (LP > max_LP)
					{
						max_LP = LP;
						x_for_max = i;
						y_for_max = j;
					}
				}

			label38->Text = "Max LP = " + Convert::ToString(max_LP);
			label22->Text = "i = " + Convert::ToString(x_for_max);
			label21->Text = "j = " + Convert::ToString(y_for_max);


		} // end LAB WORK 3 main

		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) { //  LAB WORK 3 test

			dataGridView10->Rows->Clear();
			dataGridView11->Rows->Clear();
			dataGridView12->Rows->Clear();
			dataGridView10->Columns->Clear();
			dataGridView11->Columns->Clear();
			dataGridView12->Columns->Clear();

			int n = Convert::ToInt32(textBox4_n->Text);
			int m = Convert::ToInt32(textBox4_m->Text);
			double eps = Convert::ToDouble(textBox4_eps->Text);
			int count_of_iter = Convert::ToInt32(textBox4_count->Text);
			int output = Convert::ToInt32(textBox4_out->Text);

			double accuracy = 0;
			double accuracy2 = 0;
			int spent_iter = count_of_iter;
			int spent_iter2 = count_of_iter;

			double x_for_max = 0;
			double y_for_max = 0;

			if (n < output && m < output) {
				fill_table(n, m, dataGridView10, dataGridView11, dataGridView12);
			}
			Dirichlet_Test Task(n, m);
			if (radioButton11->Checked)
			{
				accuracy = Task.Simple_iteration_iter(count_of_iter);
			}
			else
			{
				accuracy = Task.Simple_iteration_eps(eps, spent_iter);
			}

			label51->Text = "задача решена за " + Convert::ToString(spent_iter) + " итераций";
			label50->Text = "точность метода =  " + Convert::ToString(accuracy);

			double max_LP = 0;
			double LP = 0;
			if (n < output && m < output) {
				for (int i = 0; i < n + 1; i++)
				{
					dataGridView10[i + 2, m + 2]->Value = Task.Mu3(Task.Getx(i));
					dataGridView10[i + 2, 2]->Value = Task.Mu4(Task.Getx(i));

					dataGridView11[i + 2, m + 2]->Value = Task.Mu3(Task.Getx(i));
					dataGridView11[i + 2, 2]->Value = Task.Mu4(Task.Getx(i));

					dataGridView12[i + 2, m + 2]->Value = 0;
					dataGridView12[i + 2, 2]->Value = 0;
				}
				for (int j = 1; j < m; j++)
				{
					dataGridView10[2, m - j + 2]->Value = Task.Mu1(Task.Gety(j));
					dataGridView10[n + 2, m - j + 2]->Value = Task.Mu2(Task.Gety(j));

					dataGridView11[2, m - j + 2]->Value = Task.Mu1(Task.Gety(j));
					dataGridView11[n + 2, m - j + 2]->Value = Task.Mu2(Task.Gety(j));

					dataGridView12[2, m - j + 2]->Value = 0;
					dataGridView12[n + 2, m - j + 2]->Value = 0;
				}
			}

			for (int j = 1; j < m; j++)
				for (int i = 1; i < n; i++)
				{
					if (n < output && m < output) {
						dataGridView10[i + 2, m - j + 2]->Value = Task.U_acc(Task.Getx(i), Task.Gety(j));
						dataGridView11[i + 2, m - j + 2]->Value = Task.V[Task.Ind_v(i, j)];
					}
					LP = fabs(Task.V[Task.Ind_v(i, j)] - Task.U_acc(Task.Getx(i), Task.Gety(j)));
					if (n < output && m < output)
						dataGridView12[i + 2, m - j + 2]->Value = LP;
					if (LP > max_LP)
					{
						max_LP = LP;
						x_for_max = i;
						y_for_max = j;
					}
				}

			label56->Text = "Max GP = " + Convert::ToString(max_LP);
			label46->Text = "i = " + Convert::ToString(x_for_max);
			label45->Text = "j = " + Convert::ToString(y_for_max);

		} // end LAB WORK 3 test

		private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) { // cut-out area

			dataGridView13->Rows->Clear();
			dataGridView14->Rows->Clear();
			dataGridView15->Rows->Clear();
			dataGridView13->Columns->Clear();
			dataGridView14->Columns->Clear();
			dataGridView15->Columns->Clear();

			int n = Convert::ToInt32(textBox5_n->Text);
			int m = Convert::ToInt32(textBox5_m->Text);
			double eps = Convert::ToDouble(textBox5_eps->Text);
			int count_of_iter = Convert::ToInt32(textBox5_count->Text);
			int output = Convert::ToInt32(textBox5_out->Text);

			double accuracy = 0;
			double accuracy2 = 0;
			int spent_iter = count_of_iter;
			int spent_iter2 = count_of_iter;

			double x_for_max = 0;
			double y_for_max = 0;

			if (n < output && m < output) {
				fill_table(n, m, dataGridView13, dataGridView14, dataGridView15);
			}
			Dirichlet_Main_2 Task(n, m);
			if (radioButton7->Checked)
			{
				accuracy = Task.Simple_iteration_iter(count_of_iter);
			}
			else
			{
				accuracy = Task.Simple_iteration_eps(eps, spent_iter);
			}

			label64->Text = "задача решена за " + Convert::ToString(spent_iter) + " итераций";
			label63->Text = "точность метода =  " + Convert::ToString(accuracy);

			double max_LP = 0;
			double LP = 0;
			if (n < output && m < output) {
				for (int i = 0; i < n + 1; i++)
				{
					dataGridView13[i + 2, m + 2]->Value = Task.Mu3(Task.Getx(i));
					if (i <= n/2) dataGridView13[i + 2, 2]->Value = Task.Mu4(Task.Getx(i));
					if (i >= n/2) dataGridView13[i + 2, m/2 + 2]->Value = Task.Mu6(Task.Getx(i));

					dataGridView14[i + 2, m + 2]->Value = Task.Mu3(Task.Getx(i));
					if (i <= n / 2) dataGridView14[i + 2, 2]->Value = Task.Mu4(Task.Getx(i));
					if (i >= n / 2) dataGridView14[i + 2, m/2 + 2]->Value = Task.Mu6(Task.Getx(i));

					dataGridView15[i + 2, m + 2]->Value = 0;
					//dataGridView15[i + 2, 2]->Value = 0;
					if (i <= n / 2) dataGridView15[i + 2, 2]->Value = 0;
					if (i >= n / 2) dataGridView15[i + 2, m / 2 + 2]->Value = 0;
				}
				for (int j = 1; j < m; j++)
				{
					dataGridView13[2, m - j + 2]->Value = Task.Mu1(Task.Gety(j));
					if (j < m/2) dataGridView13[n + 2, m - j + 2]->Value = Task.Mu2(Task.Gety(j));
					if (j > m/2) dataGridView13[n/2 + 2, m - j + 2]->Value = Task.Mu5(Task.Gety(j));

					dataGridView14[2, m - j + 2]->Value = Task.Mu1(Task.Gety(j));
					if (j < m / 2) dataGridView14[n + 2, m - j + 2]->Value = Task.Mu2(Task.Gety(j));
					if (j > m / 2) dataGridView14[n / 2 + 2, m - j + 2]->Value = Task.Mu5(Task.Gety(j));

					dataGridView15[2, m - j + 2]->Value = 0;
					if (j < m / 2) dataGridView15[n + 2, m - j + 2]->Value = 0;
					if (j > m / 2) dataGridView15[n / 2 + 2, m - j + 2]->Value = 0;
				}
			}

			for (int j = 1; j < m; j++)
				for (int i = 1; i < n; i++)
				{
					if (i < n / 2 || j < m / 2) 
					{
						if (n < output && m < output) {
							dataGridView13[i + 2, m - j + 2]->Value = Task.U_acc(Task.Getx(i), Task.Gety(j));
							dataGridView14[i + 2, m - j + 2]->Value = Task.V[Task.Ind_v(i, j)];
						}
						LP = fabs(Task.V[Task.Ind_v(i, j)] - Task.U_acc(Task.Getx(i), Task.Gety(j)));
						if (n < output && m < output)
							dataGridView15[i + 2, m - j + 2]->Value = LP;
						if (LP > max_LP)
						{
							max_LP = LP;
							x_for_max = i;
							y_for_max = j;
						}
					}
					//else if (i > n / 2 && j > m / 2)
					//{
					//	//dataGridView13[i + 2, m - j + 2]->DefaultCellStyle->BackColor = System::Drawing::Color::Red;
					//	dataGridView13->Rows[m - j + 2]->Cells[i + 2]->Style->BackColor = System::Drawing::Color::Red;
					//}
				}

			label68->Text = "Max GP = " + Convert::ToString(max_LP);
			label59->Text = "i = " + Convert::ToString(x_for_max);
			label52->Text = "j = " + Convert::ToString(y_for_max);


		} // end cut-out area

        void fill_table(int n, int m, DataGridView ^DGV1, DataGridView ^DGV2, DataGridView ^DGV3)
		{
			DGV1->Columns->Add("Column-1", "y");
			DGV1->Columns[0]->Width = 30;
			DGV1->Columns[0]->DefaultCellStyle->BackColor = System::Drawing::Color::CadetBlue;
			DGV1->Columns->Add("Column-2", "j");
			DGV1->Columns[1]->Width = 30;
			DGV1->Columns[1]->DefaultCellStyle->BackColor = System::Drawing::Color::Red;
			DGV1->Rows->Add();
			DGV1->Rows[0]->HeaderCell->Value = "x";
			DGV1->Rows[0]->DefaultCellStyle->BackColor = System::Drawing::Color::CadetBlue;
			DGV1->Rows->Add();
			DGV1->Rows[1]->HeaderCell->Value = "i";
			DGV1->Rows[1]->DefaultCellStyle->BackColor = System::Drawing::Color::Red;

			DGV2->Columns->Add("Column-1", "y");
			DGV2->Columns[0]->Width = 30;
			DGV2->Columns[0]->DefaultCellStyle->BackColor = System::Drawing::Color::CadetBlue;
			DGV2->Columns->Add("Column-2", "j");
			DGV2->Columns[1]->Width = 30;
			DGV2->Columns[1]->DefaultCellStyle->BackColor = System::Drawing::Color::Red;
			DGV2->Rows->Add();
			DGV2->Rows[0]->HeaderCell->Value = "x";
			DGV2->Rows[0]->DefaultCellStyle->BackColor = System::Drawing::Color::CadetBlue;
			DGV2->Rows->Add();
			DGV2->Rows[1]->HeaderCell->Value = "i";
			DGV2->Rows[1]->DefaultCellStyle->BackColor = System::Drawing::Color::Red;

			DGV3->Columns->Add("Column-1", "y");
			DGV3->Columns[0]->Width = 30;
			DGV3->Columns[0]->DefaultCellStyle->BackColor = System::Drawing::Color::CadetBlue;
			DGV3->Columns->Add("Column-2", "j");
			DGV3->Columns[1]->Width = 30;
			DGV3->Columns[1]->DefaultCellStyle->BackColor = System::Drawing::Color::Red;
			DGV3->Rows->Add();
			DGV3->Rows[0]->HeaderCell->Value = "x";
			DGV3->Rows[0]->DefaultCellStyle->BackColor = System::Drawing::Color::CadetBlue;
			DGV3->Rows->Add();
			DGV3->Rows[1]->HeaderCell->Value = "i";
			DGV3->Rows[1]->DefaultCellStyle->BackColor = System::Drawing::Color::Red;


			for (int i = 0; i < n + 1; i++)
			{
				DGV1->Columns->Add("Column1" + Convert::ToString(i), "");
				DGV1->Columns[i + 2]->Width = 90;
				DGV1[i + 2, 0]->Value = "x" + Convert::ToString(i);
				DGV1[i + 2, 1]->Value = Convert::ToString(i);

				DGV2->Columns->Add("Column1" + Convert::ToString(i), "");
				DGV2->Columns[i + 2]->Width = 90;
				DGV2[i + 2, 0]->Value = "x" + Convert::ToString(i);
				DGV2[i + 2, 1]->Value = Convert::ToString(i);

				DGV3->Columns->Add("Column1" + Convert::ToString(i), "");
				DGV3->Columns[i + 2]->Width = 90;
				DGV3[i + 2, 0]->Value = "x" + Convert::ToString(i);
				DGV3[i + 2, 1]->Value = Convert::ToString(i);
			}
			for (int i = 0; i < m + 1; i++)
			{
				DGV1->Rows->Add();
				DGV1[0, i + 2]->Value = "y" + Convert::ToString(m - i);
				DGV1[1, i + 2]->Value = Convert::ToString(m - i);

				DGV2->Rows->Add();
				DGV2[0, i + 2]->Value = "y" + Convert::ToString(m - i);
				DGV2[1, i + 2]->Value = Convert::ToString(m - i);

				DGV3->Rows->Add();
				DGV3[0, i + 2]->Value = "y" + Convert::ToString(m - i);
				DGV3[1, i + 2]->Value = Convert::ToString(m - i);
			}
		}



};
}
