#pragma once

#include <msclr\marshal_cppstd.h>
#include <string>
#include "MyClasses.h"

#define _NColumn 2 //Количество столбцов в dataGridView1
#define NameCells 0 //Номер столбца с именем в dataGridView1
#define ValueCells 1 //Номер столбца со значением переменной в dataGridView1

ArithmExp RES;

namespace ArithmeticExprwssions {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormToSteak
	/// </summary>
	public ref class FormToSteak : public System::Windows::Forms::Form
	{
	public:
		FormToSteak(void)
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
		~FormToSteak()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(9, 216);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 62);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormToSteak::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(10, 268);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormToSteak::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(677, 14);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(133, 294);
			this->dataGridView1->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(16, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(647, 23);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(10, 117);
			this->textBox2->Name = L"textBox2";
			this->textBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox2->Size = System::Drawing::Size(650, 26);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(8, 236);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(647, 26);
			this->textBox3->TabIndex = 8;
			// 
			// FormToSteak
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(822, 320);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"FormToSteak";
			this->Text = L"FormToSteak";
			this->Load += gcnew System::EventHandler(this, &FormToSteak::FormToSteak_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormToSteak_Load(System::Object^  sender, System::EventArgs^  e)
			 {
				 dataGridView1->BackgroundColor = Color::White;

				 this->CenterToScreen();
				 this->Text = "Arithmetic expressions";
				 label1->Text = "Арифметическое выражение";
				 label2->Text = "Обратная польская запись";
				 label3->Text = "Результат";
				 button1->Text = "OK";
				 button2->Text = "Подсчитать";

				 textBox2->ReadOnly = true;
				 textBox3->ReadOnly = true;

				 //Выравнивание столбцов по содержимому
				 dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
				 //Выравнивание строк по содержимому
				 dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
				 //Задаёт количество столбцов
				 dataGridView1->ColumnCount = _NColumn;
				 //Удаляет самый левый столбец(Заголовки)
				 dataGridView1->RowHeadersVisible = false;
				 //Цвет фона dataGridView1
				 dataGridView1->BackgroundColor = BackColor.White;
				 //Задаёт стиль границы dataGridView1
				 dataGridView1->BorderStyle = BorderStyle::None;
				 //Скрывает верхнюю строку
				 dataGridView1->ColumnHeadersVisible = false;

				 textBox1->Focus();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 dataGridView1->Columns->Clear();//Отчистка dataGridView1

				 //Задаёт верхнюю строку
				 dataGridView1->ColumnHeadersVisible = true;
				 //Задаёт количество столбцов в dataGridView1
				 dataGridView1->ColumnCount = _NColumn;
				 //Устанавливаю названия столюцов (Name, Value)
				 dataGridView1->Columns[0]->HeaderText = "Name  ";
				 dataGridView1->Columns[1]->HeaderText = "  Value";
				 dataGridView1->Columns[0]->ReadOnly = true;//

				 // Обработка textBox1
				 std::string Arithm = (msclr::interop::marshal_as<std::string>(textBox1->Text));//String^ to string
				 RES = ArithmExp(Arithm);

				 textBox2->Text = msclr::interop::marshal_as<System::String^>(RES.getPoliz());//string to String^

				 //добавим в dataGridView1 строки ( = количеству переменных в арифметическом выражении )
				 dataGridView1->RowCount = RES.getVarNumber();
				 for(int i = 0; i < RES.getVarNumber(); i++)
				 {
					 //Запись имени переменной в dataGridView1
					 dataGridView1->Rows[i]->Cells[NameCells]->Value = 
						 msclr::interop::marshal_as<System::String^>(RES[i].GetName());
					 //Запись значения в dataGridView1
					 dataGridView1->Rows[i]->Cells[ValueCells]->Value = 
						 msclr::interop::marshal_as<System::String^>(std::to_string(RES[i].GetValue()));

					 System::String ^strc = Convert::ToString(dataGridView1->Rows[i]->Cells[NameCells]->Value);
					 if(Char::IsDigit(strc[0]))
					 {
						 dataGridView1->Rows[i]->Cells[ValueCells]->ReadOnly = true;
					 }
				 }

				 textBox1->Text = msclr::interop::marshal_as<System::String^>(Arithm);//string to String^
				 //textBox1->Select(textBox1->Text->Length, textBox1->Text->Length); //Курсор в конец строки "ArrFirst->Text" C#
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 int L = RES.getVarNumber();

				 for(int i = 0; i < L; i++)
				 {
					 System::String ^ NameD = dataGridView1->Rows[i]->Cells[NameCells]->Value->ToString();
					 System::String ^ ValueD = dataGridView1->Rows[i]->Cells[ValueCells]->Value->ToString();

					 std::string stNam = msclr::interop::marshal_as<std::string>(NameD);
					 double kp = stod(msclr::interop::marshal_as<std::string>(ValueD));
					 //Изменение значения переменной Name-Value
					 RES.setValue(stNam, kp);
				 }

				 textBox3->Text = msclr::interop::marshal_as<System::String^>(std::to_string(RES.calculate()));
			 }
	};
}