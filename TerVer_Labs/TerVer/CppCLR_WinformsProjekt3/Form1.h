#pragma once
#include "Header.h"
namespace CppCLR_WinformsProjekt 
{

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;


	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;








	private: System::Windows::Forms::DataGridView^  dataGridView2;








	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;








	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;



	private: System::Windows::Forms::CheckBox^  table_check;
	private: System::Windows::Forms::CheckBox^  th_dest_func_check;
	private: System::Windows::Forms::CheckBox^  sel_dest_func_check;
	private: System::Windows::Forms::CheckBox^  bar_chart_check;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::TextBox^  split1;
	private: System::Windows::Forms::TextBox^  split2;
	private: System::Windows::Forms::TextBox^  split3;
	private: System::Windows::Forms::TextBox^  split4;
	private: System::Windows::Forms::TextBox^  split5;
	private: System::Windows::Forms::TextBox^  split6;
	private: System::Windows::Forms::TextBox^  split7;
	private: System::Windows::Forms::TextBox^  split8;
private: System::Windows::Forms::TextBox^  split10;
private: System::Windows::Forms::TextBox^  split11;









private: System::Windows::Forms::TextBox^  split9;
private: System::Windows::Forms::TextBox^  split12;
private: System::Windows::Forms::TextBox^  split13;
private: System::Windows::Forms::TextBox^  split14;
private: System::Windows::Forms::TextBox^  split16;
private: System::Windows::Forms::TextBox^  split17;






private: System::Windows::Forms::TextBox^  split15;
private: System::Windows::Forms::TextBox^  split18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Number;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Random_Value;
private: System::Windows::Forms::CheckBox^  model_check;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
private: System::Windows::Forms::TabControl^  tabControl1;
private: System::Windows::Forms::TabPage^  tabPage1;
private: System::Windows::Forms::TabPage^  tabPage2;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;







	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
          System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
          System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
          System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
          System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
          System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
          System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
          System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
          System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
          this->textBox1 = (gcnew System::Windows::Forms::TextBox());
          this->textBox2 = (gcnew System::Windows::Forms::TextBox());
          this->textBox3 = (gcnew System::Windows::Forms::TextBox());
          this->label1 = (gcnew System::Windows::Forms::Label());
          this->label2 = (gcnew System::Windows::Forms::Label());
          this->label3 = (gcnew System::Windows::Forms::Label());
          this->textBox4 = (gcnew System::Windows::Forms::TextBox());
          this->label4 = (gcnew System::Windows::Forms::Label());
          this->button1 = (gcnew System::Windows::Forms::Button());
          this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
          this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->Random_Value = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->textBox5 = (gcnew System::Windows::Forms::TextBox());
          this->label5 = (gcnew System::Windows::Forms::Label());
          this->textBox6 = (gcnew System::Windows::Forms::TextBox());
          this->label6 = (gcnew System::Windows::Forms::Label());
          this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
          this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->button2 = (gcnew System::Windows::Forms::Button());
          this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
          this->textBox7 = (gcnew System::Windows::Forms::TextBox());
          this->textBox8 = (gcnew System::Windows::Forms::TextBox());
          this->textBox9 = (gcnew System::Windows::Forms::TextBox());
          this->label14 = (gcnew System::Windows::Forms::Label());
          this->label15 = (gcnew System::Windows::Forms::Label());
          this->label7 = (gcnew System::Windows::Forms::Label());
          this->textBox10 = (gcnew System::Windows::Forms::TextBox());
          this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
          this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
          this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
          this->table_check = (gcnew System::Windows::Forms::CheckBox());
          this->th_dest_func_check = (gcnew System::Windows::Forms::CheckBox());
          this->sel_dest_func_check = (gcnew System::Windows::Forms::CheckBox());
          this->bar_chart_check = (gcnew System::Windows::Forms::CheckBox());
          this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
          this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
          this->split1 = (gcnew System::Windows::Forms::TextBox());
          this->split2 = (gcnew System::Windows::Forms::TextBox());
          this->split3 = (gcnew System::Windows::Forms::TextBox());
          this->split4 = (gcnew System::Windows::Forms::TextBox());
          this->split5 = (gcnew System::Windows::Forms::TextBox());
          this->split6 = (gcnew System::Windows::Forms::TextBox());
          this->split7 = (gcnew System::Windows::Forms::TextBox());
          this->split8 = (gcnew System::Windows::Forms::TextBox());
          this->split10 = (gcnew System::Windows::Forms::TextBox());
          this->split11 = (gcnew System::Windows::Forms::TextBox());
          this->split9 = (gcnew System::Windows::Forms::TextBox());
          this->split12 = (gcnew System::Windows::Forms::TextBox());
          this->split13 = (gcnew System::Windows::Forms::TextBox());
          this->split14 = (gcnew System::Windows::Forms::TextBox());
          this->split16 = (gcnew System::Windows::Forms::TextBox());
          this->split17 = (gcnew System::Windows::Forms::TextBox());
          this->split15 = (gcnew System::Windows::Forms::TextBox());
          this->split18 = (gcnew System::Windows::Forms::TextBox());
          this->model_check = (gcnew System::Windows::Forms::CheckBox());
          this->label8 = (gcnew System::Windows::Forms::Label());
          this->label9 = (gcnew System::Windows::Forms::Label());
          this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
          this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
          this->label11 = (gcnew System::Windows::Forms::Label());
          this->label10 = (gcnew System::Windows::Forms::Label());
          this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
          (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
          (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
          (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
          (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
          (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
          this->tabControl1->SuspendLayout();
          this->tabPage1->SuspendLayout();
          this->SuspendLayout();
          // 
          // textBox1
          // 
          this->textBox1->Location = System::Drawing::Point(8, 34);
          this->textBox1->Multiline = true;
          this->textBox1->Name = L"textBox1";
          this->textBox1->Size = System::Drawing::Size(44, 21);
          this->textBox1->TabIndex = 0;
          this->textBox1->Text = L"1";
          this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
          // 
          // textBox2
          // 
          this->textBox2->Location = System::Drawing::Point(77, 34);
          this->textBox2->Multiline = true;
          this->textBox2->Name = L"textBox2";
          this->textBox2->Size = System::Drawing::Size(44, 21);
          this->textBox2->TabIndex = 1;
          this->textBox2->Text = L"5";
          // 
          // textBox3
          // 
          this->textBox3->Location = System::Drawing::Point(147, 34);
          this->textBox3->Multiline = true;
          this->textBox3->Name = L"textBox3";
          this->textBox3->Size = System::Drawing::Size(44, 21);
          this->textBox3->TabIndex = 2;
          this->textBox3->Text = L"1";
          // 
          // label1
          // 
          this->label1->AutoSize = true;
          this->label1->Location = System::Drawing::Point(23, 9);
          this->label1->Name = L"label1";
          this->label1->Size = System::Drawing::Size(15, 13);
          this->label1->TabIndex = 3;
          this->label1->Text = L"N";
          // 
          // label2
          // 
          this->label2->AutoSize = true;
          this->label2->Location = System::Drawing::Point(92, 9);
          this->label2->Name = L"label2";
          this->label2->Size = System::Drawing::Size(15, 13);
          this->label2->TabIndex = 4;
          this->label2->Text = L"m";
          // 
          // label3
          // 
          this->label3->AutoSize = true;
          this->label3->Location = System::Drawing::Point(160, 9);
          this->label3->Name = L"label3";
          this->label3->Size = System::Drawing::Size(13, 13);
          this->label3->TabIndex = 5;
          this->label3->Text = L"d";
          // 
          // textBox4
          // 
          this->textBox4->Location = System::Drawing::Point(304, 34);
          this->textBox4->Multiline = true;
          this->textBox4->Name = L"textBox4";
          this->textBox4->Size = System::Drawing::Size(43, 21);
          this->textBox4->TabIndex = 6;
          this->textBox4->Text = L"10";
          // 
          // label4
          // 
          this->label4->AutoSize = true;
          this->label4->Location = System::Drawing::Point(304, 9);
          this->label4->Name = L"label4";
          this->label4->Size = System::Drawing::Size(62, 13);
          this->label4->TabIndex = 7;
          this->label4->Text = L"exp number";
          // 
          // button1
          // 
          this->button1->Location = System::Drawing::Point(198, 34);
          this->button1->Name = L"button1";
          this->button1->Size = System::Drawing::Size(58, 20);
          this->button1->TabIndex = 8;
          this->button1->Text = L"start";
          this->button1->UseVisualStyleBackColor = true;
          this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
          // 
          // dataGridView1
          // 
          this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
          this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
            this->Column12,
              this->Number, this->Random_Value
          });
          this->dataGridView1->Location = System::Drawing::Point(8, 84);
          this->dataGridView1->Name = L"dataGridView1";
          this->dataGridView1->Size = System::Drawing::Size(296, 327);
          this->dataGridView1->TabIndex = 9;
          // 
          // Column12
          // 
          this->Column12->HeaderText = L"id";
          this->Column12->Name = L"Column12";
          this->Column12->Width = 50;
          // 
          // Number
          // 
          this->Number->HeaderText = L"Number";
          this->Number->Name = L"Number";
          // 
          // Random_Value
          // 
          this->Random_Value->HeaderText = L"Random_Value";
          this->Random_Value->Name = L"Random_Value";
          this->Random_Value->Width = 250;
          // 
          // textBox5
          // 
          this->textBox5->Location = System::Drawing::Point(198, 496);
          this->textBox5->Multiline = true;
          this->textBox5->Name = L"textBox5";
          this->textBox5->Size = System::Drawing::Size(87, 21);
          this->textBox5->TabIndex = 10;
          // 
          // label5
          // 
          this->label5->AutoSize = true;
          this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(204)));
          this->label5->Location = System::Drawing::Point(134, 496);
          this->label5->Name = L"label5";
          this->label5->Size = System::Drawing::Size(63, 16);
          this->label5->TabIndex = 11;
          this->label5->Text = L"Average:";
          // 
          // textBox6
          // 
          this->textBox6->Location = System::Drawing::Point(198, 522);
          this->textBox6->Multiline = true;
          this->textBox6->Name = L"textBox6";
          this->textBox6->Size = System::Drawing::Size(87, 21);
          this->textBox6->TabIndex = 12;
          // 
          // label6
          // 
          this->label6->AutoSize = true;
          this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(204)));
          this->label6->Location = System::Drawing::Point(122, 522);
          this->label6->Name = L"label6";
          this->label6->Size = System::Drawing::Size(75, 16);
          this->label6->TabIndex = 13;
          this->label6->Text = L"Asymptote:";
          // 
          // dataGridView2
          // 
          this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
          this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
            this->Column1,
              this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
          });
          this->dataGridView2->Location = System::Drawing::Point(8, 430);
          this->dataGridView2->Name = L"dataGridView2";
          this->dataGridView2->Size = System::Drawing::Size(570, 59);
          this->dataGridView2->TabIndex = 22;
          // 
          // Column1
          // 
          this->Column1->HeaderText = L"E";
          this->Column1->Name = L"Column1";
          this->Column1->Width = 75;
          // 
          // Column2
          // 
          this->Column2->HeaderText = L"X";
          this->Column2->Name = L"Column2";
          this->Column2->Width = 75;
          // 
          // Column3
          // 
          this->Column3->HeaderText = L"|E-X|";
          this->Column3->Name = L"Column3";
          this->Column3->Width = 75;
          // 
          // Column4
          // 
          this->Column4->HeaderText = L"D";
          this->Column4->Name = L"Column4";
          this->Column4->Width = 75;
          // 
          // Column5
          // 
          this->Column5->HeaderText = L"S";
          this->Column5->Name = L"Column5";
          this->Column5->Width = 75;
          // 
          // Column6
          // 
          this->Column6->HeaderText = L"|D-S|";
          this->Column6->Name = L"Column6";
          this->Column6->Width = 75;
          // 
          // Column7
          // 
          this->Column7->HeaderText = L"Me";
          this->Column7->Name = L"Column7";
          this->Column7->Width = 75;
          // 
          // Column8
          // 
          this->Column8->HeaderText = L"R";
          this->Column8->Name = L"Column8";
          // 
          // button2
          // 
          this->button2->Location = System::Drawing::Point(456, 496);
          this->button2->Name = L"button2";
          this->button2->Size = System::Drawing::Size(122, 23);
          this->button2->TabIndex = 23;
          this->button2->Text = L"clear table";
          this->button2->UseVisualStyleBackColor = true;
          this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
          // 
          // chart1
          // 
          chartArea1->AxisX->ScrollBar->ButtonStyle = System::Windows::Forms::DataVisualization::Charting::ScrollBarButtonStyles::None;
          chartArea1->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
          chartArea1->AxisY->Maximum = 1;
          chartArea1->InnerPlotPosition->Auto = false;
          chartArea1->InnerPlotPosition->Height = 75;
          chartArea1->InnerPlotPosition->Width = 90;
          chartArea1->InnerPlotPosition->X = 10;
          chartArea1->InnerPlotPosition->Y = 20;
          chartArea1->Name = L"ChartArea1";
          chartArea1->Position->Auto = false;
          chartArea1->Position->Height = 85;
          chartArea1->Position->Width = 90;
          this->chart1->ChartAreas->Add(chartArea1);
          legend1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(204)));
          legend1->InterlacedRowsColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)));
          legend1->IsTextAutoFit = false;
          legend1->Name = L"Legend1";
          legend1->Position->Auto = false;
          legend1->Position->Height = 16.38298F;
          legend1->Position->Width = 27.63496F;
          legend1->Position->X = 10;
          this->chart1->Legends->Add(legend1);
          this->chart1->Location = System::Drawing::Point(682, 438);
          this->chart1->Name = L"chart1";
          series1->BorderWidth = 3;
          series1->ChartArea = L"ChartArea1";
          series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
          series1->Color = System::Drawing::Color::DeepSkyBlue;
          series1->Legend = L"Legend1";
          series1->Name = L"distribution function";
          series2->ChartArea = L"ChartArea1";
          series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
          series2->Color = System::Drawing::Color::Red;
          series2->Legend = L"Legend1";
          series2->Name = L"shift";
          series3->BorderWidth = 3;
          series3->ChartArea = L"ChartArea1";
          series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StepLine;
          series3->Color = System::Drawing::Color::Fuchsia;
          series3->Legend = L"Legend1";
          series3->Name = L"Chosing";
          this->chart1->Series->Add(series1);
          this->chart1->Series->Add(series2);
          this->chart1->Series->Add(series3);
          this->chart1->Size = System::Drawing::Size(584, 383);
          this->chart1->TabIndex = 24;
          this->chart1->Text = L"chart1";
          this->chart1->Click += gcnew System::EventHandler(this, &Form1::chart1_Click);
          // 
          // textBox7
          // 
          this->textBox7->Location = System::Drawing::Point(8, 525);
          this->textBox7->Multiline = true;
          this->textBox7->Name = L"textBox7";
          this->textBox7->Size = System::Drawing::Size(41, 19);
          this->textBox7->TabIndex = 25;
          // 
          // textBox8
          // 
          this->textBox8->Location = System::Drawing::Point(68, 525);
          this->textBox8->Multiline = true;
          this->textBox8->Name = L"textBox8";
          this->textBox8->Size = System::Drawing::Size(41, 19);
          this->textBox8->TabIndex = 26;
          // 
          // textBox9
          // 
          this->textBox9->Location = System::Drawing::Point(425, 4);
          this->textBox9->Multiline = true;
          this->textBox9->Name = L"textBox9";
          this->textBox9->Size = System::Drawing::Size(112, 26);
          this->textBox9->TabIndex = 27;
          // 
          // label14
          // 
          this->label14->AutoSize = true;
          this->label14->Location = System::Drawing::Point(22, 508);
          this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
          this->label14->Name = L"label14";
          this->label14->Size = System::Drawing::Size(14, 13);
          this->label14->TabIndex = 28;
          this->label14->Text = L"A";
          // 
          // label15
          // 
          this->label15->AutoSize = true;
          this->label15->Location = System::Drawing::Point(83, 508);
          this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
          this->label15->Name = L"label15";
          this->label15->Size = System::Drawing::Size(9, 13);
          this->label15->TabIndex = 29;
          this->label15->Text = L"l";
          // 
          // label7
          // 
          this->label7->AutoSize = true;
          this->label7->Location = System::Drawing::Point(570, 205);
          this->label7->Name = L"label7";
          this->label7->Size = System::Drawing::Size(80, 13);
          this->label7->TabIndex = 30;
          this->label7->Text = L"number of splits";
          this->label7->Visible = false;
          // 
          // textBox10
          // 
          this->textBox10->Location = System::Drawing::Point(606, 226);
          this->textBox10->Multiline = true;
          this->textBox10->Name = L"textBox10";
          this->textBox10->Size = System::Drawing::Size(30, 21);
          this->textBox10->TabIndex = 31;
          this->textBox10->Text = L"2";
          this->textBox10->Visible = false;
          this->textBox10->TextChanged += gcnew System::EventHandler(this, &Form1::textBox10_TextChanged);
          // 
          // chart2
          // 
          chartArea2->Name = L"ChartArea1";
          this->chart2->ChartAreas->Add(chartArea2);
          legend2->Name = L"Legend1";
          this->chart2->Legends->Add(legend2);
          this->chart2->Location = System::Drawing::Point(677, 131);
          this->chart2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
          this->chart2->Name = L"chart2";
          series4->BorderWidth = 3;
          series4->ChartArea = L"ChartArea1";
          series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
          series4->Legend = L"Legend1";
          series4->Name = L"Gisto";
          series4->YValuesPerPoint = 2;
          this->chart2->Series->Add(series4);
          this->chart2->Size = System::Drawing::Size(585, 310);
          this->chart2->TabIndex = 32;
          this->chart2->Text = L"chart2";
          // 
          // dataGridView3
          // 
          this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
          this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
            this->Column9,
              this->Column10, this->Column11, this->Column13
          });
          this->dataGridView3->Location = System::Drawing::Point(692, 4);
          this->dataGridView3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
          this->dataGridView3->Name = L"dataGridView3";
          this->dataGridView3->RowTemplate->Height = 24;
          this->dataGridView3->Size = System::Drawing::Size(412, 122);
          this->dataGridView3->TabIndex = 33;
          // 
          // Column9
          // 
          this->Column9->HeaderText = L"left";
          this->Column9->Name = L"Column9";
          // 
          // Column10
          // 
          this->Column10->HeaderText = L"right";
          this->Column10->Name = L"Column10";
          // 
          // Column11
          // 
          this->Column11->HeaderText = L"Stat_plotn";
          this->Column11->Name = L"Column11";
          // 
          // Column13
          // 
          this->Column13->HeaderText = L"Theor_plotn";
          this->Column13->Name = L"Column13";
          // 
          // table_check
          // 
          this->table_check->AutoSize = true;
          this->table_check->Checked = true;
          this->table_check->CheckState = System::Windows::Forms::CheckState::Checked;
          this->table_check->Location = System::Drawing::Point(350, 117);
          this->table_check->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
          this->table_check->Name = L"table_check";
          this->table_check->Size = System::Drawing::Size(53, 17);
          this->table_check->TabIndex = 34;
          this->table_check->Text = L"Table";
          this->table_check->UseVisualStyleBackColor = true;
          // 
          // th_dest_func_check
          // 
          this->th_dest_func_check->AutoSize = true;
          this->th_dest_func_check->Checked = true;
          this->th_dest_func_check->CheckState = System::Windows::Forms::CheckState::Checked;
          this->th_dest_func_check->Location = System::Drawing::Point(350, 159);
          this->th_dest_func_check->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
          this->th_dest_func_check->Name = L"th_dest_func_check";
          this->th_dest_func_check->Size = System::Drawing::Size(86, 17);
          this->th_dest_func_check->TabIndex = 35;
          this->th_dest_func_check->Text = L"Th dest func";
          this->th_dest_func_check->UseVisualStyleBackColor = true;
          // 
          // sel_dest_func_check
          // 
          this->sel_dest_func_check->AutoSize = true;
          this->sel_dest_func_check->Checked = true;
          this->sel_dest_func_check->CheckState = System::Windows::Forms::CheckState::Checked;
          this->sel_dest_func_check->Location = System::Drawing::Point(350, 202);
          this->sel_dest_func_check->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
          this->sel_dest_func_check->Name = L"sel_dest_func_check";
          this->sel_dest_func_check->Size = System::Drawing::Size(88, 17);
          this->sel_dest_func_check->TabIndex = 36;
          this->sel_dest_func_check->Text = L"Sel dest func";
          this->sel_dest_func_check->UseVisualStyleBackColor = true;
          // 
          // bar_chart_check
          // 
          this->bar_chart_check->AutoSize = true;
          this->bar_chart_check->Checked = true;
          this->bar_chart_check->CheckState = System::Windows::Forms::CheckState::Checked;
          this->bar_chart_check->Location = System::Drawing::Point(350, 244);
          this->bar_chart_check->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
          this->bar_chart_check->Name = L"bar_chart_check";
          this->bar_chart_check->Size = System::Drawing::Size(69, 17);
          this->bar_chart_check->TabIndex = 37;
          this->bar_chart_check->Text = L"Bar chart";
          this->bar_chart_check->UseVisualStyleBackColor = true;
          this->bar_chart_check->CheckedChanged += gcnew System::EventHandler(this, &Form1::bar_chart_check_CheckedChanged);
          // 
          // checkBox1
          // 
          this->checkBox1->AutoSize = true;
          this->checkBox1->Location = System::Drawing::Point(446, 228);
          this->checkBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
          this->checkBox1->Name = L"checkBox1";
          this->checkBox1->Size = System::Drawing::Size(82, 17);
          this->checkBox1->TabIndex = 38;
          this->checkBox1->Text = L"Auto evenly";
          this->checkBox1->UseVisualStyleBackColor = true;
          this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
          // 
          // checkBox2
          // 
          this->checkBox2->AutoSize = true;
          this->checkBox2->Location = System::Drawing::Point(446, 257);
          this->checkBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
          this->checkBox2->Name = L"checkBox2";
          this->checkBox2->Size = System::Drawing::Size(68, 17);
          this->checkBox2->TabIndex = 39;
          this->checkBox2->Text = L"Manually";
          this->checkBox2->UseVisualStyleBackColor = true;
          this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
          // 
          // split1
          // 
          this->split1->Location = System::Drawing::Point(562, 79);
          this->split1->Multiline = true;
          this->split1->Name = L"split1";
          this->split1->Size = System::Drawing::Size(35, 21);
          this->split1->TabIndex = 40;
          this->split1->TextChanged += gcnew System::EventHandler(this, &Form1::split1_TextChanged);
          // 
          // split2
          // 
          this->split2->Location = System::Drawing::Point(602, 79);
          this->split2->Multiline = true;
          this->split2->Name = L"split2";
          this->split2->Size = System::Drawing::Size(35, 21);
          this->split2->TabIndex = 40;
          this->split2->TextChanged += gcnew System::EventHandler(this, &Form1::split2_TextChanged);
          // 
          // split3
          // 
          this->split3->Location = System::Drawing::Point(641, 79);
          this->split3->Multiline = true;
          this->split3->Name = L"split3";
          this->split3->Size = System::Drawing::Size(35, 21);
          this->split3->TabIndex = 40;
          this->split3->TextChanged += gcnew System::EventHandler(this, &Form1::split3_TextChanged);
          // 
          // split4
          // 
          this->split4->Location = System::Drawing::Point(562, 113);
          this->split4->Multiline = true;
          this->split4->Name = L"split4";
          this->split4->Size = System::Drawing::Size(35, 21);
          this->split4->TabIndex = 40;
          this->split4->TextChanged += gcnew System::EventHandler(this, &Form1::split4_TextChanged);
          // 
          // split5
          // 
          this->split5->Location = System::Drawing::Point(602, 113);
          this->split5->Multiline = true;
          this->split5->Name = L"split5";
          this->split5->Size = System::Drawing::Size(35, 21);
          this->split5->TabIndex = 40;
          this->split5->TextChanged += gcnew System::EventHandler(this, &Form1::split5_TextChanged);
          // 
          // split6
          // 
          this->split6->Location = System::Drawing::Point(641, 113);
          this->split6->Multiline = true;
          this->split6->Name = L"split6";
          this->split6->Size = System::Drawing::Size(35, 21);
          this->split6->TabIndex = 40;
          this->split6->TextChanged += gcnew System::EventHandler(this, &Form1::split6_TextChanged);
          // 
          // split7
          // 
          this->split7->Location = System::Drawing::Point(562, 147);
          this->split7->Multiline = true;
          this->split7->Name = L"split7";
          this->split7->Size = System::Drawing::Size(35, 21);
          this->split7->TabIndex = 40;
          this->split7->TextChanged += gcnew System::EventHandler(this, &Form1::split7_TextChanged);
          // 
          // split8
          // 
          this->split8->Location = System::Drawing::Point(602, 147);
          this->split8->Multiline = true;
          this->split8->Name = L"split8";
          this->split8->Size = System::Drawing::Size(35, 21);
          this->split8->TabIndex = 40;
          this->split8->TextChanged += gcnew System::EventHandler(this, &Form1::split8_TextChanged);
          // 
          // split10
          // 
          this->split10->Location = System::Drawing::Point(562, 181);
          this->split10->Multiline = true;
          this->split10->Name = L"split10";
          this->split10->Size = System::Drawing::Size(35, 21);
          this->split10->TabIndex = 40;
          this->split10->TextChanged += gcnew System::EventHandler(this, &Form1::split10_TextChanged);
          // 
          // split11
          // 
          this->split11->Location = System::Drawing::Point(602, 181);
          this->split11->Multiline = true;
          this->split11->Name = L"split11";
          this->split11->Size = System::Drawing::Size(35, 21);
          this->split11->TabIndex = 40;
          this->split11->TextChanged += gcnew System::EventHandler(this, &Form1::split11_TextChanged);
          // 
          // split9
          // 
          this->split9->Location = System::Drawing::Point(641, 147);
          this->split9->Multiline = true;
          this->split9->Name = L"split9";
          this->split9->Size = System::Drawing::Size(35, 21);
          this->split9->TabIndex = 40;
          this->split9->TextChanged += gcnew System::EventHandler(this, &Form1::split9_TextChanged);
          // 
          // split12
          // 
          this->split12->Location = System::Drawing::Point(641, 181);
          this->split12->Multiline = true;
          this->split12->Name = L"split12";
          this->split12->Size = System::Drawing::Size(35, 21);
          this->split12->TabIndex = 40;
          this->split12->TextChanged += gcnew System::EventHandler(this, &Form1::split12_TextChanged);
          // 
          // split13
          // 
          this->split13->Location = System::Drawing::Point(562, 218);
          this->split13->Multiline = true;
          this->split13->Name = L"split13";
          this->split13->Size = System::Drawing::Size(35, 21);
          this->split13->TabIndex = 40;
          this->split13->TextChanged += gcnew System::EventHandler(this, &Form1::split13_TextChanged);
          // 
          // split14
          // 
          this->split14->Location = System::Drawing::Point(602, 218);
          this->split14->Multiline = true;
          this->split14->Name = L"split14";
          this->split14->Size = System::Drawing::Size(35, 21);
          this->split14->TabIndex = 40;
          this->split14->TextChanged += gcnew System::EventHandler(this, &Form1::split14_TextChanged);
          // 
          // split16
          // 
          this->split16->Location = System::Drawing::Point(562, 252);
          this->split16->Multiline = true;
          this->split16->Name = L"split16";
          this->split16->Size = System::Drawing::Size(35, 21);
          this->split16->TabIndex = 40;
          this->split16->TextChanged += gcnew System::EventHandler(this, &Form1::split16_TextChanged);
          // 
          // split17
          // 
          this->split17->Location = System::Drawing::Point(602, 252);
          this->split17->Multiline = true;
          this->split17->Name = L"split17";
          this->split17->Size = System::Drawing::Size(35, 21);
          this->split17->TabIndex = 40;
          this->split17->TextChanged += gcnew System::EventHandler(this, &Form1::split17_TextChanged);
          // 
          // split15
          // 
          this->split15->Location = System::Drawing::Point(641, 218);
          this->split15->Multiline = true;
          this->split15->Name = L"split15";
          this->split15->Size = System::Drawing::Size(35, 21);
          this->split15->TabIndex = 40;
          this->split15->TextChanged += gcnew System::EventHandler(this, &Form1::split15_TextChanged);
          // 
          // split18
          // 
          this->split18->Location = System::Drawing::Point(641, 252);
          this->split18->Multiline = true;
          this->split18->Name = L"split18";
          this->split18->Size = System::Drawing::Size(35, 21);
          this->split18->TabIndex = 40;
          this->split18->TextChanged += gcnew System::EventHandler(this, &Form1::split18_TextChanged);
          // 
          // model_check
          // 
          this->model_check->AutoSize = true;
          this->model_check->Checked = true;
          this->model_check->CheckState = System::Windows::Forms::CheckState::Checked;
          this->model_check->Location = System::Drawing::Point(350, 82);
          this->model_check->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
          this->model_check->Name = L"model_check";
          this->model_check->Size = System::Drawing::Size(54, 17);
          this->model_check->TabIndex = 41;
          this->model_check->Text = L"model";
          this->model_check->UseVisualStyleBackColor = true;
          // 
          // label8
          // 
          this->label8->AutoSize = true;
          this->label8->Location = System::Drawing::Point(560, 15);
          this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
          this->label8->Name = L"label8";
          this->label8->Size = System::Drawing::Size(0, 13);
          this->label8->TabIndex = 42;
          // 
          // label9
          // 
          this->label9->AutoSize = true;
          this->label9->Location = System::Drawing::Point(419, -214);
          this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
          this->label9->Name = L"label9";
          this->label9->Size = System::Drawing::Size(0, 13);
          this->label9->TabIndex = 43;
          // 
          // tabControl1
          // 
          this->tabControl1->Controls->Add(this->tabPage1);
          this->tabControl1->Controls->Add(this->tabPage2);
          this->tabControl1->Location = System::Drawing::Point(9, 2);
          this->tabControl1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
          this->tabControl1->Name = L"tabControl1";
          this->tabControl1->SelectedIndex = 0;
          this->tabControl1->Size = System::Drawing::Size(1294, 854);
          this->tabControl1->TabIndex = 44;
          // 
          // tabPage1
          // 
          this->tabPage1->Controls->Add(this->label11);
          this->tabPage1->Controls->Add(this->label10);
          this->tabPage1->Controls->Add(this->label1);
          this->tabPage1->Controls->Add(this->label9);
          this->tabPage1->Controls->Add(this->textBox1);
          this->tabPage1->Controls->Add(this->label8);
          this->tabPage1->Controls->Add(this->textBox2);
          this->tabPage1->Controls->Add(this->chart1);
          this->tabPage1->Controls->Add(this->label15);
          this->tabPage1->Controls->Add(this->chart2);
          this->tabPage1->Controls->Add(this->label14);
          this->tabPage1->Controls->Add(this->split18);
          this->tabPage1->Controls->Add(this->textBox8);
          this->tabPage1->Controls->Add(this->textBox10);
          this->tabPage1->Controls->Add(this->textBox7);
          this->tabPage1->Controls->Add(this->model_check);
          this->tabPage1->Controls->Add(this->split12);
          this->tabPage1->Controls->Add(this->button2);
          this->tabPage1->Controls->Add(this->textBox3);
          this->tabPage1->Controls->Add(this->dataGridView2);
          this->tabPage1->Controls->Add(this->label6);
          this->tabPage1->Controls->Add(this->split6);
          this->tabPage1->Controls->Add(this->textBox6);
          this->tabPage1->Controls->Add(this->label2);
          this->tabPage1->Controls->Add(this->label5);
          this->tabPage1->Controls->Add(this->split15);
          this->tabPage1->Controls->Add(this->textBox5);
          this->tabPage1->Controls->Add(this->label3);
          this->tabPage1->Controls->Add(this->split9);
          this->tabPage1->Controls->Add(this->textBox4);
          this->tabPage1->Controls->Add(this->split3);
          this->tabPage1->Controls->Add(this->label4);
          this->tabPage1->Controls->Add(this->split17);
          this->tabPage1->Controls->Add(this->button1);
          this->tabPage1->Controls->Add(this->split16);
          this->tabPage1->Controls->Add(this->textBox9);
          this->tabPage1->Controls->Add(this->split11);
          this->tabPage1->Controls->Add(this->dataGridView3);
          this->tabPage1->Controls->Add(this->split10);
          this->tabPage1->Controls->Add(this->dataGridView1);
          this->tabPage1->Controls->Add(this->split14);
          this->tabPage1->Controls->Add(this->sel_dest_func_check);
          this->tabPage1->Controls->Add(this->split5);
          this->tabPage1->Controls->Add(this->table_check);
          this->tabPage1->Controls->Add(this->split8);
          this->tabPage1->Controls->Add(this->th_dest_func_check);
          this->tabPage1->Controls->Add(this->split13);
          this->tabPage1->Controls->Add(this->bar_chart_check);
          this->tabPage1->Controls->Add(this->split4);
          this->tabPage1->Controls->Add(this->checkBox1);
          this->tabPage1->Controls->Add(this->split7);
          this->tabPage1->Controls->Add(this->checkBox2);
          this->tabPage1->Controls->Add(this->split2);
          this->tabPage1->Controls->Add(this->split1);
          this->tabPage1->Controls->Add(this->label7);
          this->tabPage1->Location = System::Drawing::Point(4, 22);
          this->tabPage1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
          this->tabPage1->Name = L"tabPage1";
          this->tabPage1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
          this->tabPage1->Size = System::Drawing::Size(1286, 828);
          this->tabPage1->TabIndex = 0;
          this->tabPage1->Text = L"tabPage1";
          this->tabPage1->UseVisualStyleBackColor = true;
          // 
          // label11
          // 
          this->label11->AutoSize = true;
          this->label11->Location = System::Drawing::Point(324, 669);
          this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
          this->label11->Name = L"label11";
          this->label11->Size = System::Drawing::Size(27, 13);
          this->label11->TabIndex = 45;
          this->label11->Text = L"Out:";
          // 
          // label10
          // 
          this->label10->AutoSize = true;
          this->label10->Location = System::Drawing::Point(324, 332);
          this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
          this->label10->Name = L"label10";
          this->label10->Size = System::Drawing::Size(27, 13);
          this->label10->TabIndex = 44;
          this->label10->Text = L"Out:";
          // 
          // tabPage2
          // 
          this->tabPage2->Location = System::Drawing::Point(4, 22);
          this->tabPage2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
          this->tabPage2->Name = L"tabPage2";
          this->tabPage2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
          this->tabPage2->Size = System::Drawing::Size(1286, 828);
          this->tabPage2->TabIndex = 1;
          this->tabPage2->Text = L"tabPage2";
          this->tabPage2->UseVisualStyleBackColor = true;
          // 
          // Form1
          // 
          this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
          this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
          this->ClientSize = System::Drawing::Size(1244, 861);
          this->Controls->Add(this->tabControl1);
          this->Name = L"Form1";
          this->Text = L"Form1";
          this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
          (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
          (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
          (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
          (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
          (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
          this->tabControl1->ResumeLayout(false);
          this->tabPage1->ResumeLayout(false);
          this->tabPage1->PerformLayout();
          this->ResumeLayout(false);

        }
#pragma endregion

		int num;						 //количество очередей
		int N;							 //количество людей в очереди	
		double m, d;					 //мат ожидание и дисперсия
		double l;						 //Лямбда
		double a;						 // сдвиг
		double average = 0;				//Среднее
		int count_man_splits = 0;		//счетчик разбиений вручную
		//vector <double> *splits_out;		//для разбиений
		



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		double X = 0;						//Выборочное среднее
		double S = 0;						//Выборочная дисперсия
		double R = 0;						//размах выборки
		double Me = 0;						//медиана
		vector < std::pair<int, double> > etha;//Вектор случайных величин самый важный! идет pair<Номер эксперимента,Случайная величина>
		if (average != 0)
		{
			if (model_check->Checked == true)
				dataGridView1->Rows->Clear();
			dataGridView2->Rows->Clear();
			dataGridView3->Rows->Clear();
		}

		N = Convert::ToDouble(textBox1->Text);
		m = Convert::ToDouble(textBox2->Text);
		d = Convert::ToDouble(textBox3->Text);
		num = Convert::ToDouble(textBox4->Text);
		l = calculate_lambda(d);
		a = calculate_a(l, m);
		textBox7->Text = Convert::ToString(a);
		textBox8->Text = Convert::ToString(l);
		if (model_check->Checked == false)
		{
			for (int i = 0; i < num; i++)
			{
				etha.push_back(make_pair(Convert::ToInt32(dataGridView1->Rows[i]->Cells[1]->Value), Convert::ToDouble(dataGridView1->Rows[i]->Cells[2]->Value)));
			}
		}
		if (( l < 0 )||( a < 0))
		{
			textBox9->Text = Convert::ToString("l < 0 || a < 0");
			dataGridView2->Rows->Clear();
			chart1->Series->FindByName("distribution function")->Points->Clear();
			chart1->Series->FindByName("shift")->Points->Clear();
		}
		else
		{
			//моделирование------------------------------------------------------
			


			//заполнение вектора случайных величин
			//num очередей по N человек
			if (model_check->Checked == true)
			{
				for (int i = 0; i < num; i++)
				{
					vector <double> random_values;
					random_values = rando_gen(N);
					etha.push_back(std::make_pair(i, get_random_value(random_values, l, N, a)));
				}
				//сортировка 
				bubble_sort(etha);
				//среднее значение
				average = 0;
				for (int i = 0; i < num; i++)
				{
					average += etha[i].second;
				}
				average = average / num;
				textBox5->Text = Convert::ToString(average);
				textBox6->Text = Convert::ToString(a);

				//заполнение таблицы---------------------------------------------------

				//for (int i = 0; i < num; i++)
				//{
				//	dataGridView1->Rows->Add(i, etha[i].first, etha[i].second);
				//}
			}
			//заполнение другой таблицы(со штучками)

			if (table_check->Checked == true)
			{
				calculate_things(X, S, R, Me, etha,N,num);
				dataGridView2->Rows->Add(N*m, X, abs(N*m - X), N*d, S, abs(N*d - S), Me, R);
			}

			//график---------------------------------------------------------------
			//etha[0].second - 1;
			//etha[num-1].second + 1;
			//очистим точки для повторной отрисовки
			chart1->Series->FindByName("Chosing")->Points->Clear();
			chart1->Series->FindByName("distribution function")->Points->Clear();
			chart1->Series->FindByName("shift")->Points->Clear();
			if (th_dest_func_check->Checked == true)
			{
				//Chart Area
				chart1->ChartAreas->FindByName("ChartArea1")->AxisX->Minimum = a - 2;
				chart1->ChartAreas->FindByName("ChartArea1")->AxisX->Maximum = etha[num - 1].second + 2;

				//рисуем сдвиг а
				for (int i = 0; i < 2; i++)
					chart1->Series->FindByName("shift")->Points->AddXY(a, i);
				//в точке а функция = 0
				chart1->Series->FindByName("distribution function")->Points->AddXY(a, 0);
				//рисуем функцию при x>a
				if (N == 1)//для одного чубрика (експонента)
				{
					for (double x = a; x < etha[num-1].second; x += 0.5)
					{
						chart1->Series->FindByName("distribution function")->Points->AddXY(x, func_rasp(x, l, a));
					}
				}
				else if (N > 1)//для многих (нормальное)
				{
					for (double x = a; x < etha[num-1].second; x += 0.5)
					{
						double y = func_rasp_norm(x, N*m, N*d);
						chart1->Series->FindByName("distribution function")->Points->AddXY(x, y);
					}
				}
			}
			//chosing
			if (sel_dest_func_check->Checked == true)
			{
				chart1->Series->FindByName("Chosing")->Points->AddXY(a, 0);
				double MaxGP = 0;
				for (int i = 0; i < num; i++)
				{
					double x1 = etha[i].second;//смоделированные случайные значения
					double y1 = ((double)(i + 1) / num);
					chart1->Series->FindByName("Chosing")->Points->AddXY(x1, y1);
					double y2;
					if (N == 1)
						y2 = func_rasp(x1, l, a);
					else
						y2 = func_rasp_norm(x1, N*m, N*d);
					if (abs(y2 - y1) > MaxGP)
						MaxGP = abs(y2 - y1);
				}
				label11->Text = "Error: " + Convert::ToString(MaxGP);
			}
			//--------------------------------------------------------------------------

			//гистограма
			chart2->Series->FindByName("Gisto")->Points->Clear();
			if (bar_chart_check->Checked == true)
			{
				int split_num = 0;
				vector <double> splits;
				if (checkBox1->Checked == true)//автоматически равномерно
				{
					//
					int split_num_in = Convert::ToInt32(textBox10->Text);
					double one_split_length = R / split_num_in;
					//раскидаем случайные величины по разбиениям
					split_num_in++;
					split_num = split_num_in;
					
					splits.resize(split_num_in);
					splits[0] = etha[0].second-0.01;
					for (int i = 1; i < split_num_in; i++)
					{
						splits[i] = splits[i - 1] + one_split_length;
					}
					splits[split_num_in - 1] = etha[num - 1].second;
				}
				if (checkBox2->Checked == true)//вручную
				{
					if (split1->Visible == true & Convert::ToString(split1->Text) != "")
						splits.push_back(Convert::ToDouble(split1->Text));
					if (split2->Visible == true & Convert::ToString(split2->Text) != "")
						splits.push_back(Convert::ToDouble(split2->Text));
					if (split3->Visible == true & Convert::ToString(split3->Text) != "")
						splits.push_back(Convert::ToDouble(split3->Text));
					if (split4->Visible == true & Convert::ToString(split4->Text) != "")
						splits.push_back(Convert::ToDouble(split4->Text));
					if (split5->Visible == true & Convert::ToString(split5->Text) != "")
						splits.push_back(Convert::ToDouble(split5->Text));
					if (split6->Visible == true & Convert::ToString(split6->Text) != "")
						splits.push_back(Convert::ToDouble(split6->Text));
					if (split7->Visible == true & Convert::ToString(split7->Text) != "")
						splits.push_back(Convert::ToDouble(split7->Text));
					if (split8->Visible == true & Convert::ToString(split8->Text) != "")
						splits.push_back(Convert::ToDouble(split8->Text));
					if (split9->Visible == true & Convert::ToString(split9->Text) != "")
						splits.push_back(Convert::ToDouble(split9->Text));
					if (split10->Visible == true & Convert::ToString(split10->Text) != "")
						splits.push_back(Convert::ToDouble(split10->Text));
					if (split11->Visible == true & Convert::ToString(split11->Text) != "")
						splits.push_back(Convert::ToDouble(split11->Text));
					if (split12->Visible == true & Convert::ToString(split12->Text) != "")
						splits.push_back(Convert::ToDouble(split12->Text));
					if (split13->Visible == true & Convert::ToString(split13->Text) != "")
						splits.push_back(Convert::ToDouble(split13->Text));
					if (split14->Visible == true & Convert::ToString(split14->Text) != "")
						splits.push_back(Convert::ToDouble(split14->Text));
					if (split15->Visible == true & Convert::ToString(split15->Text) != "")
						splits.push_back(Convert::ToDouble(split15->Text));
					if (split16->Visible == true & Convert::ToString(split16->Text) != "")
						splits.push_back(Convert::ToDouble(split16->Text));
					if (split17->Visible == true & Convert::ToString(split17->Text) != "")
						splits.push_back(Convert::ToDouble(split17->Text));
					if (split18->Visible == true & Convert::ToString(split18->Text) != "")
						splits.push_back(Convert::ToDouble(split18->Text));
					split_num = splits.size();

				}
				vector <int> gisto;
				gisto.resize(split_num);
				int temp_i = 0;
				for (int j = 0; j < split_num - 1; j++)
					for (int i = temp_i; i < num; i++)
					{
						double x = etha[i].second;
						if (x > splits[j] & x <= splits[j + 1])
							gisto[j]++;
						else
						{
							temp_i = i;
							break;
						}
					}

				//рисуем
				chart2->ChartAreas->FindByName("ChartArea1")->AxisX->Minimum = a - 2;
				chart2->ChartAreas->FindByName("ChartArea1")->AxisX->Maximum = etha[num - 1].second + 2;
				//заполним окончательно гистограмму
				vector < std::pair <std::pair<double, double>, double > > full_gisto;
				full_gisto.resize(split_num);
				for (int i = 0; i < split_num - 1; i++)
				{
					full_gisto[i].first.first = splits[i];
					full_gisto[i].first.second = splits[i + 1];
				}
				for (int i = 0; i < split_num - 1; i++)
				{
					full_gisto[i].second = (1.0*gisto[i]) / num;
				}
				//табличка и подсчет разности гистограммы с теоретической плотностью
				double one_split_length = R/Convert::ToInt32(textBox10->Text);
				double MaxErr = 0;
				std::pair<double, double> borders = std::make_pair(0, 0);
				for (int i = 0; i < split_num - 1; i++)
				{
					one_split_length = full_gisto[i].first.second - full_gisto[i].first.first;
					double stat_value = full_gisto[i].second / one_split_length;
					double theor_value;
					double x = (full_gisto[i].first.first + full_gisto[i].first.second) / 2;
					if (N == 1)
						theor_value = func_plotnost_exp(x, l, a);
					else
						theor_value = func_plotnost_norm(x, m, d, N);
					dataGridView3->Rows->Add(full_gisto[i].first.first, full_gisto[i].first.second, stat_value,theor_value);
					if (abs(stat_value - theor_value) > MaxErr)
					{
						MaxErr = abs(stat_value - theor_value);
						borders = full_gisto[i].first;
					}


				}
				label10->Text = "Error: " + Convert::ToString(MaxErr) + "When x [ " + Convert::ToString(borders.first) +" "+ Convert::ToString(borders.second) + " ]";
				//рисуем гистограмму
				
				for (int i = 0; i < full_gisto.size(); i++)
				{
					chart2->Series->FindByName("Gisto")->Points->AddXY(full_gisto[i].first.first, 0);
					chart2->Series->FindByName("Gisto")->Points->AddXY(full_gisto[i].first.first, full_gisto[i].second);
					chart2->Series->FindByName("Gisto")->Points->AddXY(full_gisto[i].first.second, full_gisto[i].second);
					chart2->Series->FindByName("Gisto")->Points->AddXY(full_gisto[i].first.second, 0);


				}
			}

			vector<pair<int,double>>().swap(etha);
		}//КОГДА МНОГО ТОГДА НОРМАЛЬНО
		
		
		

	};
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView2->Rows->Clear();

}
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	split1->Visible = false;
	split2->Visible = false;
	split3->Visible = false;
	split4->Visible = false;
	split5->Visible = false;
	split6->Visible = false;
	split7->Visible = false;
	split8->Visible = false;
	split9->Visible = false;
	split10->Visible = false;
	split11->Visible = false;
	split12->Visible = false;
	split13->Visible = false;
	split14->Visible = false;
	split15->Visible = false;
	split16->Visible = false;
	split17->Visible = false;
	split18->Visible = false;
	
}
private: System::Void split1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split2->Visible = true;
	if (count_man_splits > 1)
		;
	else
		count_man_splits++;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[0] = a;
}
private: System::Void split2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split3->Visible = true;
	//count_man_splits = 2;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[1] = Convert::ToDouble(split2->Text);
}
private: System::Void split3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split4->Visible = true;
	//count_man_splits = 3;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[2] = Convert::ToDouble(split3->Text);
}
private: System::Void split4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split5->Visible = true;
	//count_man_splits = 4;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[3] = Convert::ToDouble(split4->Text);
}
private: System::Void split5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split6->Visible = true;
	//count_man_splits = 5;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[4] = Convert::ToDouble(split5->Text);
}
private: System::Void split6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split7->Visible = true;
	//count_man_splits = 6;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[5] = Convert::ToDouble(split6->Text);
}
private: System::Void split7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split8->Visible = true;
	//count_man_splits = 7;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[6] = Convert::ToDouble(split7->Text);
}
private: System::Void split8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split9->Visible = true;
	//count_man_splits = 8;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[7] = Convert::ToDouble(split8->Text);
}
private: System::Void split9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split10->Visible = true;
	//count_man_splits = 9;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[8] = Convert::ToDouble(split9->Text);
}
private: System::Void split10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split11->Visible = true;
	//count_man_splits = 10;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[9] = Convert::ToDouble(split10->Text);
}
private: System::Void split11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split12->Visible = true;
	//count_man_splits = 11;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[10] = Convert::ToDouble(split11->Text);
}
private: System::Void split12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split13->Visible = true;
	//count_man_splits = 12;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[11] = Convert::ToDouble(split12->Text);
}
private: System::Void split13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split14->Visible = true;
	//count_man_splits = 13;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[12] = Convert::ToDouble(split13->Text);
}
private: System::Void split14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split15->Visible = true;
	//count_man_splits = 14;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[13] = Convert::ToDouble(split14->Text);
}
private: System::Void split15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split16->Visible = true;
	//count_man_splits = 15;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[14] = Convert::ToDouble(split15->Text);
}
private: System::Void split16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split17->Visible = true;
	//count_man_splits = 16;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[15] = Convert::ToDouble(split16->Text);
}
private: System::Void split17_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	split18->Visible = true;
	//count_man_splits = 17;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[16] = Convert::ToDouble(split17->Text);
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	checkBox1->Checked = false;
	if (checkBox2->Checked == true)
	{
		split1->Visible = true;
		//split1->Text = Convert::ToString(a);
		//count_man_splits = 1;
		//if ((*splits_out).size() < count_man_splits)
		//	(*splits_out).resize(count_man_splits);
		//(*splits_out)[0] = a;
		
	}

	else
	{
		count_man_splits = 0;
		split1->Visible = false;
		split2->Visible = false;
		split3->Visible = false;
		split4->Visible = false;
		split5->Visible = false;
		split6->Visible = false;
		split7->Visible = false;
		split8->Visible = false;
		split9->Visible = false;
		split10->Visible = false;
		split11->Visible = false;
		split12->Visible = false;
		split13->Visible = false;
		split14->Visible = false;
		split15->Visible = false;
		split16->Visible = false;
		split17->Visible = false;
		split18->Visible = false;
	}
}
private: System::Void bar_chart_check_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (bar_chart_check->Checked == true)
	{
		checkBox1->Visible = true;
		checkBox2->Visible = true;
	}
	else
	{
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox1->Visible = false;
		checkBox2->Visible = false;
	}
}

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	checkBox2->Checked = false;
	if (checkBox1->Checked == true)
	{
		textBox10->Visible = true;
		label7->Visible = true;
	}
	else
	{
		textBox10->Visible = false;
		label7->Visible = false;
	}
}
private: System::Void split18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//count_man_splits = 18;
	//if ((*splits_out).size() < count_man_splits)
	//	(*splits_out).resize(count_man_splits);
	//(*splits_out)[17] = Convert::ToDouble(split18->Text);
}
};
}

