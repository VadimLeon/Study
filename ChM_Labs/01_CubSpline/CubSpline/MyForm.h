#pragma once
#include "mathPart.h"

namespace CubSpline {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
	private: ZedGraph::ZedGraphControl^  zedGraphControl3;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  xi1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  xi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ai;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  bi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ci;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  di;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  j;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  xj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fxj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Sxj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  FxjSxj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fdxj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Sdxj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  FdxjSdxj;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::TabControl^  tabControl3;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::TabPage^  tabPage14;

	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::DataGridView^  dataGridView6;
	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TabControl^  tabControl4;
	private: System::Windows::Forms::TabPage^  tabPage10;
	private: System::Windows::Forms::TabPage^  tabPage11;
	private: System::Windows::Forms::TabPage^  tabPage15;

	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::DataGridView^  dataGridView8;
	private: System::Windows::Forms::DataGridView^  dataGridView7;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TabControl^  tabControl5;
	private: System::Windows::Forms::TabPage^  tabPage12;
	private: System::Windows::Forms::TabPage^  tabPage13;
	private: System::Windows::Forms::TabPage^  tabPage16;
	private: ZedGraph::ZedGraphControl^  zedGraphControl4;
	private: ZedGraph::ZedGraphControl^  zedGraphControl5;
	private: ZedGraph::ZedGraphControl^  zedGraphControl6;
	private: ZedGraph::ZedGraphControl^  zedGraphControl7;
	private: ZedGraph::ZedGraphControl^  zedGraphControl8;
	private: ZedGraph::ZedGraphControl^  zedGraphControl9;
	private: ZedGraph::ZedGraphControl^  zedGraphControl10;
	private: ZedGraph::ZedGraphControl^  zedGraphControl11;
	private: ZedGraph::ZedGraphControl^  zedGraphControl12;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  j22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  xj22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fxjj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Sxjj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fs;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ffxj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ssxj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ffss;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  j1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  xj12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  xj2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  a2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  b2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  c2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  d2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fjjxjc;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  jjf;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dkfkfkm;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  fffxj;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  sssjj;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fxxjdjvf;
private: System::Windows::Forms::RadioButton^  radioButton4;
private: System::Windows::Forms::RadioButton^  radioButton3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  iii;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  xkkxk;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  djjdjf;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  jfjj;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  bbjb;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  cijj;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  sdidi;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  jjj;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  xjjjjj;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ifjijd;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  djdj;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fvjdofjos;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  jnkfdnjk;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  djfdfjd;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fjdijfid;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  jDSjdsj;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  jifvjfdifjd;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  jfjffjjfjfjfd;
private: System::Windows::Forms::RadioButton^  radioButton6;
private: System::Windows::Forms::RadioButton^  radioButton5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  iiiiiiii;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  iiiiiiiii;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  xjcjdj;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  aiffifi;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  jdfjdfjdfj;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  jfjfjj;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  jdfjfj;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  jdjfsidfsji;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  vjmjfvjvd;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  djifijfij;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dfsijdsfidfsidfij;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fzcosdo;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  fjdsfj;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  fjfjjfjnfj;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  jidsfijfjnid;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Ffsjidjsi;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  fjnsjfjs;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  jvjnvdfjndfjn;

private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label3;

private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label13;

private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::TextBox^  textBox10;
private: System::Windows::Forms::TextBox^  textBox9;
private: System::Windows::Forms::TextBox^  textBox20;
private: System::Windows::Forms::TextBox^  textBox19;
private: System::Windows::Forms::TextBox^  textBox18;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  textBox17;
private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::TextBox^  textBox8;
private: System::Windows::Forms::Label^  label12;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xi1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ai = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ci = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->di = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->j = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fxj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sxj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FxjSxj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fdxj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sdxj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FdxjSdxj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fjjxjc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->jjf = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dkfkfkm = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->j22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xj22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fxjj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sxjj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fs = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ffxj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ssxj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ffss = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fffxj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sssjj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fxxjdjvf = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->j1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xj12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xj2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->a2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->b2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->d2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl4 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl5 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl6 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->iii = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xkkxk = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->djjdjf = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->jfjj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bbjb = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cijj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sdidi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->jjj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xjjjjj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ifjijd = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->djdj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fvjdofjos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->jnkfdnjk = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->djfdfjd = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fjdijfid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->jDSjdsj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->jifvjfdifjd = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->jfjffjjfjfjfd = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl7 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl8 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl9 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
			this->iiiiiiii = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->iiiiiiiii = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xjcjdj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->aiffifi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->jdfjdfjdfj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->jfjfjj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->jdfjfj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->jdjfsidfsji = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vjmjfvjvd = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->djifijfij = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dfsijdsfidfsidfij = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fzcosdo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fjdsfj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fjfjjfjnfj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->jidsfijfjnid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ffsjidjsi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fjnsjfjs = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->jvjnvdfjndfjn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl10 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl11 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl12 = (gcnew ZedGraph::ZedGraphControl());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabControl3->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabPage14->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->tabControl4->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->tabPage11->SuspendLayout();
			this->tabPage15->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			this->tabControl5->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->tabPage13->SuspendLayout();
			this->tabPage16->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(2, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(864, 532);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->textBox20);
			this->tabPage1->Controls->Add(this->textBox19);
			this->tabPage1->Controls->Add(this->textBox18);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dataGridView2);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(856, 506);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Test";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"coef";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(31, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(70, 20);
			this->textBox1->TabIndex = 16;
			this->textBox1->Text = L"2";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(172, 55);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(249, 20);
			this->textBox20->TabIndex = 15;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(172, 29);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(249, 20);
			this->textBox19->TabIndex = 14;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(157, 6);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(241, 20);
			this->textBox18->TabIndex = 13;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(107, 58);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(59, 13);
			this->label20->TabIndex = 12;
			this->label20->Text = L"max GP d2";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(107, 33);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(59, 13);
			this->label19->TabIndex = 11;
			this->label19->Text = L"max GP d1";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(107, 9);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(44, 13);
			this->label18->TabIndex = 10;
			this->label18->Text = L"max GP";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"n";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(31, 6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(70, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"6";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 104);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 61);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Запуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->i, this->xi1,
					this->xi, this->ai, this->bi, this->ci, this->di
			});
			this->dataGridView2->Location = System::Drawing::Point(3, 171);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(441, 150);
			this->dataGridView2->TabIndex = 2;
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			// 
			// xi1
			// 
			this->xi1->HeaderText = L"xi-1";
			this->xi1->Name = L"xi1";
			// 
			// xi
			// 
			this->xi->HeaderText = L"xi";
			this->xi->Name = L"xi";
			// 
			// ai
			// 
			this->ai->HeaderText = L"ai";
			this->ai->Name = L"ai";
			// 
			// bi
			// 
			this->bi->HeaderText = L"bi";
			this->bi->Name = L"bi";
			// 
			// ci
			// 
			this->ci->HeaderText = L"ci";
			this->ci->Name = L"ci";
			// 
			// di
			// 
			this->di->HeaderText = L"di";
			this->di->Name = L"di";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->j, this->xj,
					this->Fxj, this->Sxj, this->FxjSxj, this->Fdxj, this->Sdxj, this->FdxjSdxj, this->Fjjxjc, this->jjf, this->dkfkfkm
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 338);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(850, 165);
			this->dataGridView1->TabIndex = 1;
			// 
			// j
			// 
			this->j->HeaderText = L"j";
			this->j->Name = L"j";
			// 
			// xj
			// 
			this->xj->HeaderText = L"xj";
			this->xj->Name = L"xj";
			// 
			// Fxj
			// 
			this->Fxj->HeaderText = L"F(xj)";
			this->Fxj->Name = L"Fxj";
			// 
			// Sxj
			// 
			this->Sxj->HeaderText = L"S(xj)";
			this->Sxj->Name = L"Sxj";
			// 
			// FxjSxj
			// 
			this->FxjSxj->HeaderText = L"F(xj) - S(xj)";
			this->FxjSxj->Name = L"FxjSxj";
			// 
			// Fdxj
			// 
			this->Fdxj->HeaderText = L"F\'(xj)";
			this->Fdxj->Name = L"Fdxj";
			// 
			// Sdxj
			// 
			this->Sdxj->HeaderText = L"S\'(xj)";
			this->Sdxj->Name = L"Sdxj";
			// 
			// FdxjSdxj
			// 
			this->FdxjSdxj->HeaderText = L"F\'(xj)- S\'(xj)";
			this->FdxjSdxj->Name = L"FdxjSdxj";
			// 
			// Fjjxjc
			// 
			this->Fjjxjc->HeaderText = L"F\'\'(xj)";
			this->Fjjxjc->Name = L"Fjjxjc";
			// 
			// jjf
			// 
			this->jjf->HeaderText = L"S\'\'(xj)";
			this->jjf->Name = L"jjf";
			// 
			// dkfkfkm
			// 
			this->dkfkfkm->HeaderText = L"F\'\'(xj) - S\'\'(xj)";
			this->dkfkfkm->Name = L"dkfkfkm";
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Location = System::Drawing::Point(450, 3);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(406, 333);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->zedGraphControl1);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(398, 307);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Функция";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(6, 3);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(386, 298);
			this->zedGraphControl1->TabIndex = 1;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->zedGraphControl2);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(398, 307);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"1 произв.";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(6, 4);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(386, 298);
			this->zedGraphControl2->TabIndex = 2;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->zedGraphControl3);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(398, 307);
			this->tabPage7->TabIndex = 2;
			this->tabPage7->Text = L"2 произв.";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(6, 4);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(386, 298);
			this->zedGraphControl3->TabIndex = 2;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->textBox17);
			this->tabPage2->Controls->Add(this->textBox16);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->radioButton2);
			this->tabPage2->Controls->Add(this->radioButton1);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dataGridView4);
			this->tabPage2->Controls->Add(this->dataGridView3);
			this->tabPage2->Controls->Add(this->tabControl3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(856, 506);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Main 1";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(38, 42);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(97, 20);
			this->textBox4->TabIndex = 19;
			this->textBox4->Text = L"2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"coef";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(221, 51);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(207, 20);
			this->textBox17->TabIndex = 15;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(221, 25);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(207, 20);
			this->textBox16->TabIndex = 14;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(206, 3);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(195, 20);
			this->textBox15->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(156, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"max GP d2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(156, 6);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"max GP";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(156, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"max GP d1";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(318, 123);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(137, 17);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Совпадение 2 произв.";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(318, 100);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(46, 17);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"ЕГУ";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(35, 6);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"6";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 43);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Запуск";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->j22, this->xj22,
					this->Fxjj, this->Sxjj, this->fs, this->ffxj, this->ssxj, this->ffss, this->fffxj, this->sssjj, this->Fxxjdjvf
			});
			this->dataGridView4->Location = System::Drawing::Point(3, 332);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(850, 168);
			this->dataGridView4->TabIndex = 2;
			// 
			// j22
			// 
			this->j22->HeaderText = L"j";
			this->j22->Name = L"j22";
			// 
			// xj22
			// 
			this->xj22->HeaderText = L"xj";
			this->xj22->Name = L"xj22";
			// 
			// Fxjj
			// 
			this->Fxjj->HeaderText = L"F(xj)";
			this->Fxjj->Name = L"Fxjj";
			// 
			// Sxjj
			// 
			this->Sxjj->HeaderText = L"S(xj)";
			this->Sxjj->Name = L"Sxjj";
			// 
			// fs
			// 
			this->fs->HeaderText = L"F(xj) - S(xj)";
			this->fs->Name = L"fs";
			// 
			// ffxj
			// 
			this->ffxj->HeaderText = L"F\'(xj)";
			this->ffxj->Name = L"ffxj";
			// 
			// ssxj
			// 
			this->ssxj->HeaderText = L"S\'(xj)";
			this->ssxj->Name = L"ssxj";
			// 
			// ffss
			// 
			this->ffss->HeaderText = L"F\'(xj) - S\'(xj)";
			this->ffss->Name = L"ffss";
			// 
			// fffxj
			// 
			this->fffxj->HeaderText = L"F\'\'(xj)";
			this->fffxj->Name = L"fffxj";
			// 
			// sssjj
			// 
			this->sssjj->HeaderText = L"S\'\'(xj)";
			this->sssjj->Name = L"sssjj";
			// 
			// Fxxjdjvf
			// 
			this->Fxxjdjvf->HeaderText = L"F\'\'(xj) - S\'\'(xj)";
			this->Fxxjdjvf->Name = L"Fxxjdjvf";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->j1, this->xj12,
					this->xj2, this->a2, this->b2, this->c2, this->d2
			});
			this->dataGridView3->Location = System::Drawing::Point(0, 176);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(455, 150);
			this->dataGridView3->TabIndex = 1;
			// 
			// j1
			// 
			this->j1->HeaderText = L"i";
			this->j1->Name = L"j1";
			// 
			// xj12
			// 
			this->xj12->HeaderText = L"xi-1";
			this->xj12->Name = L"xj12";
			// 
			// xj2
			// 
			this->xj2->HeaderText = L"xi";
			this->xj2->Name = L"xj2";
			// 
			// a2
			// 
			this->a2->HeaderText = L"аi";
			this->a2->Name = L"a2";
			// 
			// b2
			// 
			this->b2->HeaderText = L"bi";
			this->b2->Name = L"b2";
			// 
			// c2
			// 
			this->c2->HeaderText = L"ci";
			this->c2->Name = L"c2";
			// 
			// d2
			// 
			this->d2->HeaderText = L"di";
			this->d2->Name = L"d2";
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage8);
			this->tabControl3->Controls->Add(this->tabPage9);
			this->tabControl3->Controls->Add(this->tabPage14);
			this->tabControl3->Location = System::Drawing::Point(464, 3);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(389, 334);
			this->tabControl3->TabIndex = 0;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->zedGraphControl4);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(381, 308);
			this->tabPage8->TabIndex = 0;
			this->tabPage8->Text = L"Функция";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl4
			// 
			this->zedGraphControl4->Location = System::Drawing::Point(-4, 3);
			this->zedGraphControl4->Name = L"zedGraphControl4";
			this->zedGraphControl4->ScrollGrace = 0;
			this->zedGraphControl4->ScrollMaxX = 0;
			this->zedGraphControl4->ScrollMaxY = 0;
			this->zedGraphControl4->ScrollMaxY2 = 0;
			this->zedGraphControl4->ScrollMinX = 0;
			this->zedGraphControl4->ScrollMinY = 0;
			this->zedGraphControl4->ScrollMinY2 = 0;
			this->zedGraphControl4->Size = System::Drawing::Size(396, 298);
			this->zedGraphControl4->TabIndex = 2;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->zedGraphControl5);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(381, 308);
			this->tabPage9->TabIndex = 1;
			this->tabPage9->Text = L"1 произв.";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl5
			// 
			this->zedGraphControl5->Location = System::Drawing::Point(6, 3);
			this->zedGraphControl5->Name = L"zedGraphControl5";
			this->zedGraphControl5->ScrollGrace = 0;
			this->zedGraphControl5->ScrollMaxX = 0;
			this->zedGraphControl5->ScrollMaxY = 0;
			this->zedGraphControl5->ScrollMaxY2 = 0;
			this->zedGraphControl5->ScrollMinX = 0;
			this->zedGraphControl5->ScrollMinY = 0;
			this->zedGraphControl5->ScrollMinY2 = 0;
			this->zedGraphControl5->Size = System::Drawing::Size(386, 298);
			this->zedGraphControl5->TabIndex = 2;
			// 
			// tabPage14
			// 
			this->tabPage14->Controls->Add(this->zedGraphControl6);
			this->tabPage14->Location = System::Drawing::Point(4, 22);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(3);
			this->tabPage14->Size = System::Drawing::Size(381, 308);
			this->tabPage14->TabIndex = 2;
			this->tabPage14->Text = L"2 произв.";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl6
			// 
			this->zedGraphControl6->Location = System::Drawing::Point(3, 3);
			this->zedGraphControl6->Name = L"zedGraphControl6";
			this->zedGraphControl6->ScrollGrace = 0;
			this->zedGraphControl6->ScrollMaxX = 0;
			this->zedGraphControl6->ScrollMaxY = 0;
			this->zedGraphControl6->ScrollMaxY2 = 0;
			this->zedGraphControl6->ScrollMinX = 0;
			this->zedGraphControl6->ScrollMinY = 0;
			this->zedGraphControl6->ScrollMinY2 = 0;
			this->zedGraphControl6->Size = System::Drawing::Size(386, 298);
			this->zedGraphControl6->TabIndex = 2;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->textBox14);
			this->tabPage3->Controls->Add(this->textBox13);
			this->tabPage3->Controls->Add(this->textBox12);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->radioButton4);
			this->tabPage3->Controls->Add(this->radioButton3);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Controls->Add(this->dataGridView6);
			this->tabPage3->Controls->Add(this->dataGridView5);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->tabControl4);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(856, 506);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Main 2";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(43, 45);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(97, 20);
			this->textBox6->TabIndex = 20;
			this->textBox6->Text = L"2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 48);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"coef";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(224, 56);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(236, 20);
			this->textBox14->TabIndex = 18;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(224, 29);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(236, 20);
			this->textBox13->TabIndex = 17;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(209, 6);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(236, 20);
			this->textBox12->TabIndex = 16;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(158, 59);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(59, 13);
			this->label17->TabIndex = 15;
			this->label17->Text = L"max GP d2";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(158, 34);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(59, 13);
			this->label14->TabIndex = 14;
			this->label14->Text = L"max GP d1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(21, 10);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"n";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(158, 10);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"max GP";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(357, 115);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(137, 17);
			this->radioButton4->TabIndex = 7;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Cовпадение 2 произв.";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(357, 92);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(46, 17);
			this->radioButton3->TabIndex = 6;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"EГУ";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(40, 7);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"6";
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->iii, this->xkkxk,
					this->djjdjf, this->jfjj, this->bbjb, this->cijj, this->sdidi
			});
			this->dataGridView6->Location = System::Drawing::Point(6, 165);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(481, 150);
			this->dataGridView6->TabIndex = 3;
			// 
			// iii
			// 
			this->iii->HeaderText = L"i";
			this->iii->Name = L"iii";
			// 
			// xkkxk
			// 
			this->xkkxk->HeaderText = L"xi-1";
			this->xkkxk->Name = L"xkkxk";
			// 
			// djjdjf
			// 
			this->djjdjf->HeaderText = L"xi";
			this->djjdjf->Name = L"djjdjf";
			// 
			// jfjj
			// 
			this->jfjj->HeaderText = L"ai";
			this->jfjj->Name = L"jfjj";
			// 
			// bbjb
			// 
			this->bbjb->HeaderText = L"bi";
			this->bbjb->Name = L"bbjb";
			// 
			// cijj
			// 
			this->cijj->HeaderText = L"ci";
			this->cijj->Name = L"cijj";
			// 
			// sdidi
			// 
			this->sdidi->HeaderText = L"di";
			this->sdidi->Name = L"sdidi";
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->jjj, this->xjjjjj,
					this->ifjijd, this->djdj, this->Fvjdofjos, this->jnkfdnjk, this->djfdfjd, this->Fjdijfid, this->jDSjdsj, this->jifvjfdifjd, this->jfjffjjfjfjfd
			});
			this->dataGridView5->Location = System::Drawing::Point(6, 321);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(847, 179);
			this->dataGridView5->TabIndex = 2;
			// 
			// jjj
			// 
			this->jjj->HeaderText = L"j";
			this->jjj->Name = L"jjj";
			// 
			// xjjjjj
			// 
			this->xjjjjj->HeaderText = L"xj";
			this->xjjjjj->Name = L"xjjjjj";
			// 
			// ifjijd
			// 
			this->ifjijd->HeaderText = L"F(xj)";
			this->ifjijd->Name = L"ifjijd";
			// 
			// djdj
			// 
			this->djdj->HeaderText = L"S(xj)";
			this->djdj->Name = L"djdj";
			// 
			// Fvjdofjos
			// 
			this->Fvjdofjos->HeaderText = L"F(xj) - S(xj)";
			this->Fvjdofjos->Name = L"Fvjdofjos";
			// 
			// jnkfdnjk
			// 
			this->jnkfdnjk->HeaderText = L"F\'(xj)";
			this->jnkfdnjk->Name = L"jnkfdnjk";
			// 
			// djfdfjd
			// 
			this->djfdfjd->HeaderText = L"S\'(xj)";
			this->djfdfjd->Name = L"djfdfjd";
			// 
			// Fjdijfid
			// 
			this->Fjdijfid->HeaderText = L"F\'(xj) - S\'(xj)";
			this->Fjdijfid->Name = L"Fjdijfid";
			// 
			// jDSjdsj
			// 
			this->jDSjdsj->HeaderText = L"F\'\'(xj)";
			this->jDSjdsj->Name = L"jDSjdsj";
			// 
			// jifvjfdifjd
			// 
			this->jifvjfdifjd->HeaderText = L"S\'\'(xj)";
			this->jifvjfdifjd->Name = L"jifvjfdifjd";
			// 
			// jfjffjjfjfjfd
			// 
			this->jfjffjjfjfjfd->HeaderText = L"F\'\'(xj) - S\'\'(xj)";
			this->jfjffjjfjfjfd->Name = L"jfjffjjfjfjfd";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(9, 115);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 44);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Запуск";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage10);
			this->tabControl4->Controls->Add(this->tabPage11);
			this->tabControl4->Controls->Add(this->tabPage15);
			this->tabControl4->Location = System::Drawing::Point(493, 0);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(363, 319);
			this->tabControl4->TabIndex = 0;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->zedGraphControl7);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(355, 293);
			this->tabPage10->TabIndex = 0;
			this->tabPage10->Text = L"Функция";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl7
			// 
			this->zedGraphControl7->Location = System::Drawing::Point(3, 3);
			this->zedGraphControl7->Name = L"zedGraphControl7";
			this->zedGraphControl7->ScrollGrace = 0;
			this->zedGraphControl7->ScrollMaxX = 0;
			this->zedGraphControl7->ScrollMaxY = 0;
			this->zedGraphControl7->ScrollMaxY2 = 0;
			this->zedGraphControl7->ScrollMinX = 0;
			this->zedGraphControl7->ScrollMinY = 0;
			this->zedGraphControl7->ScrollMinY2 = 0;
			this->zedGraphControl7->Size = System::Drawing::Size(386, 298);
			this->zedGraphControl7->TabIndex = 2;
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->zedGraphControl8);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(355, 293);
			this->tabPage11->TabIndex = 1;
			this->tabPage11->Text = L"1 произв.";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl8
			// 
			this->zedGraphControl8->Location = System::Drawing::Point(3, 3);
			this->zedGraphControl8->Name = L"zedGraphControl8";
			this->zedGraphControl8->ScrollGrace = 0;
			this->zedGraphControl8->ScrollMaxX = 0;
			this->zedGraphControl8->ScrollMaxY = 0;
			this->zedGraphControl8->ScrollMaxY2 = 0;
			this->zedGraphControl8->ScrollMinX = 0;
			this->zedGraphControl8->ScrollMinY = 0;
			this->zedGraphControl8->ScrollMinY2 = 0;
			this->zedGraphControl8->Size = System::Drawing::Size(386, 298);
			this->zedGraphControl8->TabIndex = 2;
			// 
			// tabPage15
			// 
			this->tabPage15->Controls->Add(this->zedGraphControl9);
			this->tabPage15->Location = System::Drawing::Point(4, 22);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(3);
			this->tabPage15->Size = System::Drawing::Size(355, 293);
			this->tabPage15->TabIndex = 2;
			this->tabPage15->Text = L"2 произв.";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl9
			// 
			this->zedGraphControl9->Location = System::Drawing::Point(3, 3);
			this->zedGraphControl9->Name = L"zedGraphControl9";
			this->zedGraphControl9->ScrollGrace = 0;
			this->zedGraphControl9->ScrollMaxX = 0;
			this->zedGraphControl9->ScrollMaxY = 0;
			this->zedGraphControl9->ScrollMaxY2 = 0;
			this->zedGraphControl9->ScrollMinX = 0;
			this->zedGraphControl9->ScrollMinY = 0;
			this->zedGraphControl9->ScrollMinY2 = 0;
			this->zedGraphControl9->Size = System::Drawing::Size(386, 298);
			this->zedGraphControl9->TabIndex = 2;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->textBox8);
			this->tabPage4->Controls->Add(this->label12);
			this->tabPage4->Controls->Add(this->textBox11);
			this->tabPage4->Controls->Add(this->textBox10);
			this->tabPage4->Controls->Add(this->textBox9);
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Controls->Add(this->label13);
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Controls->Add(this->radioButton6);
			this->tabPage4->Controls->Add(this->radioButton5);
			this->tabPage4->Controls->Add(this->textBox7);
			this->tabPage4->Controls->Add(this->dataGridView8);
			this->tabPage4->Controls->Add(this->dataGridView7);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->tabControl5);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(856, 506);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Main 3";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(28, 42);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 21;
			this->textBox8->Text = L"2";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(0, 45);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"coef";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(211, 55);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(221, 20);
			this->textBox11->TabIndex = 19;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(211, 29);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(221, 20);
			this->textBox10->TabIndex = 18;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(196, 6);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(218, 20);
			this->textBox9->TabIndex = 17;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(146, 58);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(59, 13);
			this->label16->TabIndex = 16;
			this->label16->Text = L"max GP d2";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(146, 32);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(59, 13);
			this->label15->TabIndex = 15;
			this->label15->Text = L"max GP d1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(9, 9);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"n";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(146, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"max GP";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(325, 123);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(136, 17);
			this->radioButton6->TabIndex = 7;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"совпадение 2 произв.";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(325, 100);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(46, 17);
			this->radioButton5->TabIndex = 6;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"EГУ";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(28, 6);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 4;
			this->textBox7->Text = L"6";
			// 
			// dataGridView8
			// 
			this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView8->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->iiiiiiii,
					this->iiiiiiiii, this->xjcjdj, this->aiffifi, this->jdfjdfjdfj, this->jfjfjj, this->jdfjfj
			});
			this->dataGridView8->Location = System::Drawing::Point(3, 176);
			this->dataGridView8->Name = L"dataGridView8";
			this->dataGridView8->Size = System::Drawing::Size(460, 150);
			this->dataGridView8->TabIndex = 3;
			// 
			// iiiiiiii
			// 
			this->iiiiiiii->HeaderText = L"i";
			this->iiiiiiii->Name = L"iiiiiiii";
			// 
			// iiiiiiiii
			// 
			this->iiiiiiiii->HeaderText = L"xi-1";
			this->iiiiiiiii->Name = L"iiiiiiiii";
			// 
			// xjcjdj
			// 
			this->xjcjdj->HeaderText = L"xi";
			this->xjcjdj->Name = L"xjcjdj";
			// 
			// aiffifi
			// 
			this->aiffifi->HeaderText = L"ai";
			this->aiffifi->Name = L"aiffifi";
			// 
			// jdfjdfjdfj
			// 
			this->jdfjdfjdfj->HeaderText = L"bi";
			this->jdfjdfjdfj->Name = L"jdfjdfjdfj";
			// 
			// jfjfjj
			// 
			this->jfjfjj->HeaderText = L"ci";
			this->jfjfjj->Name = L"jfjfjj";
			// 
			// jdfjfj
			// 
			this->jdfjfj->HeaderText = L"di";
			this->jdfjfj->Name = L"jdfjfj";
			// 
			// dataGridView7
			// 
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->jdjfsidfsji,
					this->vjmjfvjvd, this->djifijfij, this->dfsijdsfidfsidfij, this->Fzcosdo, this->fjdsfj, this->fjfjjfjnfj, this->jidsfijfjnid,
					this->Ffsjidjsi, this->fjnsjfjs, this->jvjnvdfjndfjn
			});
			this->dataGridView7->Location = System::Drawing::Point(3, 332);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->Size = System::Drawing::Size(847, 168);
			this->dataGridView7->TabIndex = 2;
			// 
			// jdjfsidfsji
			// 
			this->jdjfsidfsji->HeaderText = L"j";
			this->jdjfsidfsji->Name = L"jdjfsidfsji";
			// 
			// vjmjfvjvd
			// 
			this->vjmjfvjvd->HeaderText = L"xj";
			this->vjmjfvjvd->Name = L"vjmjfvjvd";
			// 
			// djifijfij
			// 
			this->djifijfij->HeaderText = L"F(xj)";
			this->djifijfij->Name = L"djifijfij";
			// 
			// dfsijdsfidfsidfij
			// 
			this->dfsijdsfidfsidfij->HeaderText = L"S(xj)";
			this->dfsijdsfidfsidfij->Name = L"dfsijdsfidfsidfij";
			// 
			// Fzcosdo
			// 
			this->Fzcosdo->HeaderText = L"F(xj) - S(xj)";
			this->Fzcosdo->Name = L"Fzcosdo";
			// 
			// fjdsfj
			// 
			this->fjdsfj->HeaderText = L"F\'(xj)";
			this->fjdsfj->Name = L"fjdsfj";
			// 
			// fjfjjfjnfj
			// 
			this->fjfjjfjnfj->HeaderText = L"S\'(xj)";
			this->fjfjjfjnfj->Name = L"fjfjjfjnfj";
			// 
			// jidsfijfjnid
			// 
			this->jidsfijfjnid->HeaderText = L"F\'(xj) - S\'(xj)";
			this->jidsfijfjnid->Name = L"jidsfijfjnid";
			// 
			// Ffsjidjsi
			// 
			this->Ffsjidjsi->HeaderText = L"F\'\'(xj)";
			this->Ffsjidjsi->Name = L"Ffsjidjsi";
			// 
			// fjnsjfjs
			// 
			this->fjnsjfjs->HeaderText = L"S\'\'(xj)";
			this->fjnsjfjs->Name = L"fjnsjfjs";
			// 
			// jvjnvdfjndfjn
			// 
			this->jvjnvdfjndfjn->HeaderText = L"F\'\'(xj) - S\'\'(xj)";
			this->jvjnvdfjndfjn->Name = L"jvjnvdfjndfjn";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(10, 123);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(138, 44);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Запуск";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabPage12);
			this->tabControl5->Controls->Add(this->tabPage13);
			this->tabControl5->Controls->Add(this->tabPage16);
			this->tabControl5->Location = System::Drawing::Point(469, 3);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(384, 323);
			this->tabControl5->TabIndex = 0;
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->zedGraphControl10);
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(376, 297);
			this->tabPage12->TabIndex = 0;
			this->tabPage12->Text = L"Функция";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl10
			// 
			this->zedGraphControl10->Location = System::Drawing::Point(3, 3);
			this->zedGraphControl10->Name = L"zedGraphControl10";
			this->zedGraphControl10->ScrollGrace = 0;
			this->zedGraphControl10->ScrollMaxX = 0;
			this->zedGraphControl10->ScrollMaxY = 0;
			this->zedGraphControl10->ScrollMaxY2 = 0;
			this->zedGraphControl10->ScrollMinX = 0;
			this->zedGraphControl10->ScrollMinY = 0;
			this->zedGraphControl10->ScrollMinY2 = 0;
			this->zedGraphControl10->Size = System::Drawing::Size(386, 298);
			this->zedGraphControl10->TabIndex = 2;
			// 
			// tabPage13
			// 
			this->tabPage13->Controls->Add(this->zedGraphControl11);
			this->tabPage13->Location = System::Drawing::Point(4, 22);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(376, 297);
			this->tabPage13->TabIndex = 1;
			this->tabPage13->Text = L"1 произв.";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl11
			// 
			this->zedGraphControl11->Location = System::Drawing::Point(3, 3);
			this->zedGraphControl11->Name = L"zedGraphControl11";
			this->zedGraphControl11->ScrollGrace = 0;
			this->zedGraphControl11->ScrollMaxX = 0;
			this->zedGraphControl11->ScrollMaxY = 0;
			this->zedGraphControl11->ScrollMaxY2 = 0;
			this->zedGraphControl11->ScrollMinX = 0;
			this->zedGraphControl11->ScrollMinY = 0;
			this->zedGraphControl11->ScrollMinY2 = 0;
			this->zedGraphControl11->Size = System::Drawing::Size(386, 298);
			this->zedGraphControl11->TabIndex = 2;
			// 
			// tabPage16
			// 
			this->tabPage16->Controls->Add(this->zedGraphControl12);
			this->tabPage16->Location = System::Drawing::Point(4, 22);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Padding = System::Windows::Forms::Padding(3);
			this->tabPage16->Size = System::Drawing::Size(376, 297);
			this->tabPage16->TabIndex = 2;
			this->tabPage16->Text = L"2 произв.";
			this->tabPage16->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl12
			// 
			this->zedGraphControl12->Location = System::Drawing::Point(3, 3);
			this->zedGraphControl12->Name = L"zedGraphControl12";
			this->zedGraphControl12->ScrollGrace = 0;
			this->zedGraphControl12->ScrollMaxX = 0;
			this->zedGraphControl12->ScrollMaxY = 0;
			this->zedGraphControl12->ScrollMaxY2 = 0;
			this->zedGraphControl12->ScrollMinX = 0;
			this->zedGraphControl12->ScrollMinY = 0;
			this->zedGraphControl12->ScrollMinY2 = 0;
			this->zedGraphControl12->Size = System::Drawing::Size(386, 279);
			this->zedGraphControl12->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(865, 533);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabControl3->ResumeLayout(false);
			this->tabPage8->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			this->tabPage14->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->tabControl4->ResumeLayout(false);
			this->tabPage10->ResumeLayout(false);
			this->tabPage11->ResumeLayout(false);
			this->tabPage15->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			this->tabControl5->ResumeLayout(false);
			this->tabPage12->ResumeLayout(false);
			this->tabPage13->ResumeLayout(false);
			this->tabPage16->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	dataGridView1->Rows->Clear();
	dataGridView2->Rows->Clear();
	
	GraphPane^ panel1 = zedGraphControl1->GraphPane;
	GraphPane^ panel2 = zedGraphControl2->GraphPane;
	GraphPane^ panel3 = zedGraphControl3->GraphPane;
	panel1->CurveList->Clear();
	panel2->CurveList->Clear();
	panel3->CurveList->Clear();

	PointPairList^ point_list_numeric1 = gcnew ZedGraph::PointPairList();
	PointPairList^ point_list_accurate = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_num_1 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_num_2 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_acc_1 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_acc_2 = gcnew ZedGraph::PointPairList();

	PointPairList^ p_list_GP = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_GPder1 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_GPder2 = gcnew ZedGraph::PointPairList();
	
	int n = Convert::ToInt32(textBox2->Text);
	int coef = Convert::ToInt32(textBox1->Text);
	int N = coef * n;
	double a = -1;
	double b = 1;

	testTask task(n);
	task.initCoefs();

	double h = 2.0 / N;

	double xCurr = 0;
	double temp;
	int sXiCurr = 0;
	double accurate = 0;
	double numeric1 = 0;
	double derNum1 = 0;
	double derNum2 = 0;
	double derAcc1 = 0;
	double derAcc2 = 0;

	double GP = 0,
	maxGP = 0,
	GPder1 = 0,
	maxGPder1 = 0,
	GPder2 = 0,
	maxGPder2 = 0;


	if (n < N)
		for (int i = 0; i < N + 1; i++)
		{
			xCurr = a + h * i;
			accurate = task.function(xCurr);
			derAcc1 = task.functionDerivative1(xCurr);
			derAcc2 = task.functionDerivative2(xCurr);
			point_list_accurate->Add(xCurr, accurate);
			p_list_deriv_acc_1->Add(xCurr, derAcc1);
			p_list_deriv_acc_2->Add(xCurr, derAcc2);
			if (i % (N / n) == 0 && sXiCurr < n) sXiCurr++;

			numeric1 = task.sXi(sXiCurr, xCurr);
			derNum1 = task.sXiDerivative1(sXiCurr, xCurr);
			derNum2 = task.sXiDerivative2(sXiCurr, xCurr);
			point_list_numeric1->Add(xCurr, numeric1);
			p_list_deriv_num_1->Add(xCurr, derNum1);
			p_list_deriv_num_2->Add(xCurr, derNum2);

			GP = abs(accurate - numeric1);
			GPder1 = abs(derAcc1 - derNum1);
			GPder2 = abs(derAcc2 - derNum2);
			
			p_list_GP->Add(xCurr, GP);
			p_list_GPder1->Add(xCurr, GPder1);
			p_list_GPder2->Add(xCurr, GPder2);

			if (GP > maxGP) { maxGP = GP; temp = xCurr; }
			if (GPder1 > maxGPder1) { maxGPder1 = GPder1; }
			if (GPder2 > maxGPder2) { maxGPder2 = GPder2; }

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = xCurr;
			dataGridView1->Rows[i]->Cells[2]->Value = accurate;
			dataGridView1->Rows[i]->Cells[3]->Value = numeric1;
			dataGridView1->Rows[i]->Cells[4]->Value = abs(accurate - numeric1);
			dataGridView1->Rows[i]->Cells[5]->Value = derAcc1;
			dataGridView1->Rows[i]->Cells[6]->Value = derNum1;
			dataGridView1->Rows[i]->Cells[7]->Value = abs(derAcc1 - derNum1);
			dataGridView1->Rows[i]->Cells[8]->Value = derAcc2;
			dataGridView1->Rows[i]->Cells[9]->Value = derNum2;
			dataGridView1->Rows[i]->Cells[10]->Value = abs(derAcc2 - derNum2);
		}
	
	
	textBox18->Text = Convert::ToString(maxGP);
	textBox19->Text = Convert::ToString(maxGPder1);
	textBox20->Text = Convert::ToString(maxGPder2);

	for (int i = 1; i < task.aCoef.size(); i++)
	{
		dataGridView2->Rows->Add();
		dataGridView2->Rows[i - 1]->Cells[0]->Value = i;
		dataGridView2->Rows[i - 1]->Cells[1]->Value = task.xGrid[i - 1];
		dataGridView2->Rows[i - 1]->Cells[2]->Value = task.xGrid[i];
		dataGridView2->Rows[i - 1]->Cells[3]->Value = task.aCoef[i];
		dataGridView2->Rows[i - 1]->Cells[4]->Value = task.bCoef[i];
		dataGridView2->Rows[i - 1]->Cells[5]->Value = task.cCoef[i];
		dataGridView2->Rows[i - 1]->Cells[6]->Value = task.dCoef[i];
	}
	
	LineItem^ Curve1 = panel1->AddCurve("точная траектория", point_list_accurate, Color::Blue, SymbolType::None);
	LineItem^ Curve2 = panel1->AddCurve("численная траектория", point_list_numeric1, Color::Red, SymbolType::None);
	LineItem^ Curve3 = panel2->AddCurve("численная траектория", p_list_deriv_acc_1, Color::Blue, SymbolType::None);
	LineItem^ Curve4 = panel2->AddCurve("численная траектория", p_list_deriv_num_1, Color::Red, SymbolType::None);
	LineItem^ Curve5 = panel3->AddCurve("точная траектория", p_list_deriv_acc_2, Color::Blue, SymbolType::None);
	LineItem^ Curve6 = panel3->AddCurve("численная траектория", p_list_deriv_num_2, Color::Red, SymbolType::None);

	LineItem^ Curve7 = panel1->AddCurve("погрешность", p_list_GP, Color::GreenYellow, SymbolType::None);
	LineItem^ Curve8 = panel2->AddCurve("погрешность", p_list_GPder1, Color::GreenYellow, SymbolType::None);
	LineItem^ Curve9 = panel3->AddCurve("погрешность", p_list_GPder2, Color::GreenYellow, SymbolType::None);

	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();
	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();
	zedGraphControl3->AxisChange();
	zedGraphControl3->Invalidate();
}

private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) 
{


	dataGridView3->Rows->Clear();
	dataGridView4->Rows->Clear();
	GraphPane^ panel1 = zedGraphControl4->GraphPane;
	GraphPane^ panel2 = zedGraphControl5->GraphPane;
	GraphPane^ panel3 = zedGraphControl6->GraphPane;
	panel1->CurveList->Clear();
	panel2->CurveList->Clear();
	panel3->CurveList->Clear();
	PointPairList^ point_list_numeric1 = gcnew ZedGraph::PointPairList();
	PointPairList^ point_list_accurate = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_num_1 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_num_2 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_acc_1 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_acc_2 = gcnew ZedGraph::PointPairList();

	PointPairList^ p_list_GP = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_GPder1 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_GPder2 = gcnew ZedGraph::PointPairList();

	int n = Convert::ToInt32(textBox3->Text);
	int cc = Convert::ToInt32(textBox4->Text);
	int N = cc * n;
	double a = 1;
	double b = M_PI;

	main1Task task(n);
	if (radioButton1->Checked)
		task.initCoefs();
	else
		task.initCoefs(1);

	double h = ((double)(b - a)) / N;

	double xCurr = 0,
		temp = 0;
	int sXiCurr = 0;
	double accurate = 0;
	double numeric1 = 0;
	double derNum1 = 0;
	double derNum2 = 0;
	double derAcc1 = 0;
	double derAcc2 = 0;
	double GP = 0,
		maxGP = 0,
		GPder1 = 0,
		maxGPder1 = 0,
		GPder2 = 0,
		maxGPder2 = 0;


	if (n < N)
		for (int i = 0; i < N + 1; i++)
		{
			xCurr = a + h * i;
			accurate = task.function(xCurr);
			derAcc1 = task.functionDerivative1(xCurr);
			derAcc2 = task.functionDerivative2(xCurr);
			point_list_accurate->Add(xCurr, accurate);
			p_list_deriv_acc_1->Add(xCurr, derAcc1);
			p_list_deriv_acc_2->Add(xCurr, derAcc2);
			if (i % (N / n) == 0 && sXiCurr < n) sXiCurr++;

			numeric1 = task.sXi(sXiCurr, xCurr);
			derNum1 = task.sXiDerivative1(sXiCurr, xCurr);
			derNum2 = task.sXiDerivative2(sXiCurr, xCurr);

			point_list_numeric1->Add(xCurr, numeric1);
			p_list_deriv_num_1->Add(xCurr, derNum1);
			p_list_deriv_num_2->Add(xCurr, derNum2);

			GP = abs(accurate - numeric1);
			GPder1 = abs(derAcc1 - derNum1);
			GPder2 = abs(derAcc2 - derNum2);

			p_list_GP->Add(xCurr, GP);
			p_list_GPder1->Add(xCurr, GPder1);
			p_list_GPder2->Add(xCurr, GPder2);

			if (GP > maxGP) { maxGP = GP; temp = xCurr; }
			if (GPder1 > maxGPder1) { maxGPder1 = GPder1; }
			if (GPder2 > maxGPder2) { maxGPder2 = GPder2; }

			dataGridView4->Rows->Add();
			dataGridView4->Rows[i]->Cells[0]->Value = i;
			dataGridView4->Rows[i]->Cells[1]->Value = xCurr;
			dataGridView4->Rows[i]->Cells[2]->Value = accurate;
			dataGridView4->Rows[i]->Cells[3]->Value = numeric1;
			dataGridView4->Rows[i]->Cells[4]->Value = abs(accurate - numeric1);
			dataGridView4->Rows[i]->Cells[5]->Value = derAcc1;
			dataGridView4->Rows[i]->Cells[6]->Value = derNum1;
			dataGridView4->Rows[i]->Cells[7]->Value = abs(derAcc1 - derNum1);
			dataGridView4->Rows[i]->Cells[8]->Value = derAcc2;
			dataGridView4->Rows[i]->Cells[9]->Value = derNum2;
			dataGridView4->Rows[i]->Cells[10]->Value = abs(derAcc2 - derNum2);

		}
	textBox15->Text = Convert::ToString(maxGP);
	textBox16->Text = Convert::ToString(maxGPder1);
	textBox17->Text = Convert::ToString(maxGPder2);

	for (int i = 1; i < task.cCoef.size(); i++)
	{
		dataGridView3->Rows->Add();
		dataGridView3->Rows[i - 1]->Cells[0]->Value = i;
		dataGridView3->Rows[i - 1]->Cells[1]->Value = task.xGrid[i - 1];
		dataGridView3->Rows[i - 1]->Cells[2]->Value = task.xGrid[i];
		dataGridView3->Rows[i - 1]->Cells[3]->Value = task.aCoef[i];
		dataGridView3->Rows[i - 1]->Cells[4]->Value = task.bCoef[i];
		dataGridView3->Rows[i - 1]->Cells[5]->Value = task.cCoef[i];
		dataGridView3->Rows[i - 1]->Cells[6]->Value = task.dCoef[i];
	}

	LineItem^ Curve1 = panel1->AddCurve("точная траектория", point_list_accurate, Color::Blue, SymbolType::None);
	LineItem^ Curve2 = panel1->AddCurve("численная траектория", point_list_numeric1, Color::Red, SymbolType::None);
	LineItem^ Curve3 = panel2->AddCurve("численная траектория", p_list_deriv_acc_1, Color::Blue, SymbolType::None);
	LineItem^ Curve4 = panel2->AddCurve("численная траектория", p_list_deriv_num_1, Color::Red, SymbolType::None);
	LineItem^ Curve5 = panel3->AddCurve("точная траектория", p_list_deriv_acc_2, Color::Blue, SymbolType::None);
	LineItem^ Curve6 = panel3->AddCurve("численная траектория", p_list_deriv_num_2, Color::Red, SymbolType::None);

	LineItem^ Curve7 = panel1->AddCurve("погрешность", p_list_GP, Color::GreenYellow, SymbolType::None);
	LineItem^ Curve8 = panel2->AddCurve("погрешность", p_list_GPder1, Color::GreenYellow, SymbolType::None);
	LineItem^ Curve9 = panel3->AddCurve("погрешность", p_list_GPder2, Color::GreenYellow, SymbolType::None);

	zedGraphControl4->AxisChange();
	zedGraphControl4->Invalidate();
	zedGraphControl5->AxisChange();
	zedGraphControl5->Invalidate();
	zedGraphControl6->AxisChange();
	zedGraphControl6->Invalidate();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	

	dataGridView5->Rows->Clear();
	dataGridView6->Rows->Clear();
	GraphPane^ panel1 = zedGraphControl7->GraphPane;
	GraphPane^ panel2 = zedGraphControl8->GraphPane;
	GraphPane^ panel3 = zedGraphControl9->GraphPane;
	panel1->CurveList->Clear();
	panel2->CurveList->Clear();
	panel3->CurveList->Clear();
	PointPairList^ point_list_numeric1 = gcnew ZedGraph::PointPairList();
	PointPairList^ point_list_accurate = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_num_1 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_num_2 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_acc_1 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_acc_2 = gcnew ZedGraph::PointPairList();

	PointPairList^ p_list_GP = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_GPder1 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_GPder2 = gcnew ZedGraph::PointPairList();

	int n = Convert::ToInt32(textBox5->Text);
	int cc = Convert::ToInt32(textBox6->Text);
	int N = cc * n;
	double a = 1;
	double b = M_PI;

	main2Task task(n);
	if (radioButton3->Checked)
		task.initCoefs();
	else
		task.initCoefs(2);

	double h = ((double)(b - a)) / N;

	double xCurr = 0,
		temp = 0;
	int sXiCurr = 0;
	double accurate = 0;
	double numeric1 = 0;
	double derNum1 = 0;
	double derNum2 = 0;
	double derAcc1 = 0;
	double derAcc2 = 0;
	double GP = 0,
		maxGP = 0,
		GPder1 = 0,
		maxGPder1 = 0,
		GPder2 = 0,
		maxGPder2 = 0;


	if (n < N)
		for (int i = 0; i < N + 1; i++)
		{
			xCurr = a + h * i;
			accurate = task.function(xCurr);
			derAcc1 = task.functionDerivative1(xCurr);
			derAcc2 = task.functionDerivative2(xCurr);
			point_list_accurate->Add(xCurr, accurate);
			p_list_deriv_acc_1->Add(xCurr, derAcc1);
			p_list_deriv_acc_2->Add(xCurr, derAcc2);
			if (i % (N / n) == 0 && sXiCurr < n) sXiCurr++;

			numeric1 = task.sXi(sXiCurr, xCurr);
			derNum1 = task.sXiDerivative1(sXiCurr, xCurr);
			derNum2 = task.sXiDerivative2(sXiCurr, xCurr);

			point_list_numeric1->Add(xCurr, numeric1);
			p_list_deriv_num_1->Add(xCurr, derNum1);
			p_list_deriv_num_2->Add(xCurr, derNum2);

			GP = abs(accurate - numeric1);
			GPder1 = abs(derAcc1 - derNum1);
			GPder2 = abs(derAcc2 - derNum2);
			
			p_list_GP->Add(xCurr, GP);
			p_list_GPder1->Add(xCurr, GPder1);
			p_list_GPder2->Add(xCurr, GPder2);

			if (GP > maxGP) { maxGP = GP; temp = xCurr; }
			if (GPder1 > maxGPder1) { maxGPder1 = GPder1; }
			if (GPder2 > maxGPder2) { maxGPder2 = GPder2; }

			dataGridView5->Rows->Add();
			dataGridView5->Rows[i]->Cells[0]->Value = i;
			dataGridView5->Rows[i]->Cells[1]->Value = xCurr;
			dataGridView5->Rows[i]->Cells[2]->Value = accurate;
			dataGridView5->Rows[i]->Cells[3]->Value = numeric1;
			dataGridView5->Rows[i]->Cells[4]->Value = abs(accurate - numeric1);
			dataGridView5->Rows[i]->Cells[5]->Value = derAcc1;
			dataGridView5->Rows[i]->Cells[6]->Value = derNum1;
			dataGridView5->Rows[i]->Cells[7]->Value = abs(derAcc1 - derNum1);
			dataGridView5->Rows[i]->Cells[8]->Value = derAcc2;
			dataGridView5->Rows[i]->Cells[9]->Value = derNum2;
			dataGridView5->Rows[i]->Cells[10]->Value = abs(derAcc2 - derNum2);

		}
	
	textBox12->Text = Convert::ToString(maxGP);
	textBox13->Text = Convert::ToString(maxGPder1);
	textBox14->Text = Convert::ToString(maxGPder2);

	for (int i = 1; i < task.cCoef.size(); i++)
	{
		dataGridView6->Rows->Add();
		dataGridView6->Rows[i - 1]->Cells[0]->Value = i;
		dataGridView6->Rows[i - 1]->Cells[1]->Value = task.xGrid[i - 1];
		dataGridView6->Rows[i - 1]->Cells[2]->Value = task.xGrid[i];
		dataGridView6->Rows[i - 1]->Cells[3]->Value = task.aCoef[i];
		dataGridView6->Rows[i - 1]->Cells[4]->Value = task.bCoef[i];
		dataGridView6->Rows[i - 1]->Cells[5]->Value = task.cCoef[i];
		dataGridView6->Rows[i - 1]->Cells[6]->Value = task.dCoef[i];
	}

	LineItem^ Curve1 = panel1->AddCurve("точная траектория", point_list_accurate, Color::Blue, SymbolType::None);
	LineItem^ Curve2 = panel1->AddCurve("численная траектория", point_list_numeric1, Color::Red, SymbolType::None);
	LineItem^ Curve3 = panel2->AddCurve("численная траектория", p_list_deriv_acc_1, Color::Blue, SymbolType::None);
	LineItem^ Curve4 = panel2->AddCurve("численная траектория", p_list_deriv_num_1, Color::Red, SymbolType::None);
	LineItem^ Curve5 = panel3->AddCurve("точная траектория", p_list_deriv_acc_2, Color::Blue, SymbolType::None);
	LineItem^ Curve6 = panel3->AddCurve("численная траектория", p_list_deriv_num_2, Color::Red, SymbolType::None);

	LineItem^ Curve7 = panel1->AddCurve("погрешность", p_list_GP, Color::GreenYellow, SymbolType::None);
	LineItem^ Curve8 = panel2->AddCurve("погрешность", p_list_GPder1, Color::GreenYellow, SymbolType::None);
	LineItem^ Curve9 = panel3->AddCurve("погрешность", p_list_GPder2, Color::GreenYellow, SymbolType::None);

	zedGraphControl7->AxisChange();
	zedGraphControl7->Invalidate();
	zedGraphControl8->AxisChange();
	zedGraphControl8->Invalidate();
	zedGraphControl9->AxisChange();
	zedGraphControl9->Invalidate();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	dataGridView7->Rows->Clear();
	dataGridView8->Rows->Clear();
	GraphPane^ panel1 = zedGraphControl10->GraphPane;
	GraphPane^ panel2 = zedGraphControl11->GraphPane;
	GraphPane^ panel3 = zedGraphControl12->GraphPane;
	panel1->CurveList->Clear();
	panel2->CurveList->Clear();
	panel3->CurveList->Clear();
	PointPairList^ point_list_numeric1 = gcnew ZedGraph::PointPairList();
	PointPairList^ point_list_accurate = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_num_1 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_num_2 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_acc_1 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_deriv_acc_2 = gcnew ZedGraph::PointPairList();

	PointPairList^ p_list_GP = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_GPder1 = gcnew ZedGraph::PointPairList();
	PointPairList^ p_list_GPder2 = gcnew ZedGraph::PointPairList();

	int n = Convert::ToInt32(textBox7->Text);
	int cc = Convert::ToInt32(textBox8->Text);
	int N = cc * n;
	double a = 1;
	double b = M_PI;

	main3Task task(n);
	if (radioButton5->Checked)
		task.initCoefs();
	else
		task.initCoefs(3);

	double h = ((double)(b - a)) / N;

	double xCurr = 0,
		temp = 0;
	int sXiCurr = 0;
	double accurate = 0;
	double numeric1 = 0;
	double derNum1 = 0;
	double derNum2 = 0;
	double derAcc1 = 0;
	double derAcc2 = 0;
	double GP = 0,
		maxGP = 0,
		GPder1 = 0,
		maxGPder1 = 0,
		GPder2 = 0,
		maxGPder2 = 0;


	if (n < N)
		for (int i = 0; i < N + 1; i++)
		{
			xCurr = a + h * i;
			accurate = task.function(xCurr);
			derAcc1 = task.functionDerivative1(xCurr);
			derAcc2 = task.functionDerivative2(xCurr);
			point_list_accurate->Add(xCurr, accurate);
			p_list_deriv_acc_1->Add(xCurr, derAcc1);
			p_list_deriv_acc_2->Add(xCurr, derAcc2);
			if (i % (N / n) == 0 && sXiCurr < n) sXiCurr++;

			numeric1 = task.sXi(sXiCurr, xCurr);
			derNum1 = task.sXiDerivative1(sXiCurr, xCurr);
			derNum2 = task.sXiDerivative2(sXiCurr, xCurr);

			point_list_numeric1->Add(xCurr, numeric1);
			p_list_deriv_num_1->Add(xCurr, derNum1);
			p_list_deriv_num_2->Add(xCurr, derNum2);

			GP = abs(accurate - numeric1);
			GPder1 = abs(derAcc1 - derNum1);
			GPder2 = abs(derAcc2 - derNum2);

			p_list_GP->Add(xCurr, GP);
			p_list_GPder1->Add(xCurr, GPder1);
			p_list_GPder2->Add(xCurr, GPder2);

			if (GP > maxGP) { maxGP = GP; temp = xCurr; }
			if (GPder1 > maxGPder1) { maxGPder1 = GPder1; }
			if (GPder2 > maxGPder2) { maxGPder2 = GPder2; }

			dataGridView7->Rows->Add();
			dataGridView7->Rows[i]->Cells[0]->Value = i;
			dataGridView7->Rows[i]->Cells[1]->Value = xCurr;
			dataGridView7->Rows[i]->Cells[2]->Value = accurate;
			dataGridView7->Rows[i]->Cells[3]->Value = numeric1;
			dataGridView7->Rows[i]->Cells[4]->Value = abs(accurate - numeric1);
			dataGridView7->Rows[i]->Cells[5]->Value = derAcc1;
			dataGridView7->Rows[i]->Cells[6]->Value = derNum1;
			dataGridView7->Rows[i]->Cells[7]->Value = abs(derAcc1 - derNum1);
			dataGridView7->Rows[i]->Cells[8]->Value = derAcc2;
			dataGridView7->Rows[i]->Cells[9]->Value = derNum2;
			dataGridView7->Rows[i]->Cells[10]->Value = abs(derAcc2 - derNum2);

		}
	
	textBox9->Text = Convert::ToString(maxGP);
	textBox10->Text = Convert::ToString(maxGPder1);
	textBox11->Text = Convert::ToString(maxGPder2);

	for (int i = 1; i < task.cCoef.size(); i++)
	{
		dataGridView8->Rows->Add();
		dataGridView8->Rows[i - 1]->Cells[0]->Value = i;
		dataGridView8->Rows[i - 1]->Cells[1]->Value = task.xGrid[i - 1];
		dataGridView8->Rows[i - 1]->Cells[2]->Value = task.xGrid[i];
		dataGridView8->Rows[i - 1]->Cells[3]->Value = task.aCoef[i];
		dataGridView8->Rows[i - 1]->Cells[4]->Value = task.bCoef[i];
		dataGridView8->Rows[i - 1]->Cells[5]->Value = task.cCoef[i];
		dataGridView8->Rows[i - 1]->Cells[6]->Value = task.dCoef[i];
	}

	LineItem^ Curve1 = panel1->AddCurve("точная траектория", point_list_accurate, Color::Blue, SymbolType::None);
	LineItem^ Curve2 = panel1->AddCurve("численная траектория", point_list_numeric1, Color::Red, SymbolType::None);
	LineItem^ Curve3 = panel2->AddCurve("численная траектория", p_list_deriv_acc_1, Color::Blue, SymbolType::None);
	LineItem^ Curve4 = panel2->AddCurve("численная траектория", p_list_deriv_num_1, Color::Red, SymbolType::None);
	LineItem^ Curve5 = panel3->AddCurve("точная траектория", p_list_deriv_acc_2, Color::Blue, SymbolType::None);
	LineItem^ Curve6 = panel3->AddCurve("численная траектория", p_list_deriv_num_2, Color::Red, SymbolType::None);

	LineItem^ Curve7 = panel1->AddCurve("погрешность", p_list_GP, Color::GreenYellow, SymbolType::None);
	LineItem^ Curve8 = panel2->AddCurve("погрешность", p_list_GPder1, Color::GreenYellow, SymbolType::None);
	LineItem^ Curve9 = panel3->AddCurve("погрешность", p_list_GPder2, Color::GreenYellow, SymbolType::None);

	zedGraphControl10->AxisChange();
	zedGraphControl10->Invalidate();
	zedGraphControl11->AxisChange();
	zedGraphControl11->Invalidate();
	zedGraphControl12->AxisChange();
	zedGraphControl12->Invalidate();
}

};
}
