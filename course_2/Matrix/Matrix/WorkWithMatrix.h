#pragma once

#include "TMatrix.h"
#include <msclr\marshal_cppstd.h>
#include <string>
#include <iostream>


#define TIPE_MATR int

int N;
TMatrix<TIPE_MATR> A, B, C;
float a , b;

namespace Matrix {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для WorkWithMatrix
	/// </summary>
	public ref class WorkWithMatrix : public System::Windows::Forms::Form
	{

	public:
		WorkWithMatrix(void)
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
		~WorkWithMatrix()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 102);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(187, 179);
			this->dataGridView1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(247, 102);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(182, 179);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(476, 102);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(196, 179);
			this->dataGridView3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(436, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(34, 32);
			this->button1->TabIndex = 6;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &WorkWithMatrix::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(566, 47);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(106, 30);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &WorkWithMatrix::textBox1_KeyDown);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &WorkWithMatrix::textBox1_KeyPress);
			this->textBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &WorkWithMatrix::textBox1_MouseDoubleClick);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(476, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 23);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Размер матриц";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(205, 113);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(35, 20);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"+";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(205, 179);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(31, 20);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"-";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(205, 249);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(34, 20);
			this->radioButton3->TabIndex = 11;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"*";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// WorkWithMatrix
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(684, 362);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.6F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(1);
			this->Name = L"WorkWithMatrix";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WorkWithMatrix";
			this->Load += gcnew System::EventHandler(this, &WorkWithMatrix::WorkWithMatrix_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void WorkWithMatrix_Load(System::Object^  sender, System::EventArgs^  e)
			 {// Загрузка формы WorkWithMatrix
				 this->Text = "Работа с матрицами";
				 dataGridView1->Hide();
				 dataGridView2->Hide();
				 dataGridView3->Hide();
				 dataGridView3->ReadOnly;

				 radioButton1->Checked = true;
				 radioButton1->Hide();
				 radioButton2->Hide();
				 radioButton3->Hide();
				 button1->Hide();

				 textBox1->Focus();
			 }
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
			 {
				 char number = (char)e->KeyChar;
				 if (!Char::IsDigit(number) && number != 8) // Разрешение на ввод цифр, клавиши BackSpace
				 {
					 e->Handled = true;
				 }
			 }
	private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
			 {
				 if((e->KeyCode) == Keys::Enter)
				 {
					 dataGridView1->Columns->Clear();
					 dataGridView2->Columns->Clear();
					 dataGridView3->Columns->Clear();

					 if(("" == textBox1->Text) || ("0" == textBox1->Text))
					 {// Проверка на пустату и "0" с выводом ошибки в MessageBox
						 MessageBox::Show("Следует вводить НАТУРАЛЬНОЕ число!", "Ошибка",
							 MessageBoxButtons::OK, MessageBoxIcon::Error);
						 textBox1->Text = "";
						 textBox1->Focus();
						 return;
					 }
					 int::TryParse(textBox1->Text, N);//Безопасная запись числа из textBox1->Text в переменную N(ей можно пользоваться без проверки)

					 //добавим в dataGridView1 "N" столбцов
					 dataGridView1->ColumnCount = N;
					 dataGridView2->ColumnCount = N;
					 dataGridView3->ColumnCount = N;

					 //добавим в dataGridView1 "N" строки
					 dataGridView1->RowCount = N;
					 dataGridView2->RowCount = N;
					 dataGridView3->RowCount = N;

					 //Выравнивание столбцов по содержимому
					 dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
					 dataGridView2->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
					 dataGridView3->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;

					 //Выравнивание строк по содержимому
					 dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
					 dataGridView2->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
					 dataGridView3->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;

					 //Удаляет самый левый столбец
					 dataGridView1->RowHeadersVisible = false;
					 dataGridView2->RowHeadersVisible = false;
					 dataGridView3->RowHeadersVisible = false;

					 //Удаляет самую верхнюю строку
					 dataGridView1->ColumnHeadersVisible = false;
					 dataGridView2->ColumnHeadersVisible = false;
					 dataGridView3->ColumnHeadersVisible = false;

					 //Заполнение dataGridView нулями, и установка необходимых полей "Только для чтения"
					 for(int i = 0; i < N; i++)
					 {
						 for(int j = 0; j < N; j++)
						 {
							 dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToString(0);
							 dataGridView2->Rows[i]->Cells[j]->Value = Convert::ToString(0);
							 dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(0);
							 dataGridView3->Rows[i]->Cells[j]->ReadOnly = true;

							 if(i > j)
							 {
								 dataGridView1->Rows[i]->Cells[j]->ReadOnly = true;
								 dataGridView2->Rows[i]->Cells[j]->ReadOnly = true;
							 }
						 }
					 }

					 //Открытие объектов для пользователя
					 dataGridView1->Show();
					 dataGridView2->Show();
					 dataGridView3->Show();

					 button1->Show();
					 radioButton1->Show();
					 radioButton2->Show();
					 radioButton3->Show();
					 button1->Show();

					 textBox1->ReadOnly = true;
					 dataGridView1->Focus();
				 }
			 }
	private: System::Void textBox1_MouseDoubleClick(System::Object^  sender,
				 System::Windows::Forms::MouseEventArgs^  e)
			 {
				 dataGridView1->Hide();
				 dataGridView2->Hide();
				 dataGridView3->Hide();

				 button1->Hide();
				 radioButton1->Hide();
				 radioButton2->Hide();
				 radioButton3->Hide();
				 button1->Hide();

				 textBox1->Text = "";
				 textBox1->ReadOnly = false;
				 textBox1->Focus();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 //Создание объектов (матриц) с размером N
				 A = TMatrix<TIPE_MATR>(N);
				 B = TMatrix<TIPE_MATR>(N);
				 C = TMatrix<TIPE_MATR>(N);



				 for(int i = 0; i <  N; i++)
				 {
					 for(int j = 0; j < N; j++)
					 {
						 Single::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), a);
						 Single::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), b);

						 A[i][j] = (TIPE_MATR)a;
						 B[i][j] = (TIPE_MATR)b;

					 }
				 }

				 if(radioButton1->Checked != false)
				 {
					 C = A + B;
				 }
				 else
				 {
					 if(radioButton2->Checked != false)
					 {
						 C = (A - B);
					 }
					 else 
					 {
						 C = A * B;
					 }
				 }


				 for(int i = 0; i <  N; i++)
				 {
					 for(int j = i; j < N; j++)
					 {
						 dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(C[i][j]);
					 }
				 }
			 }
	};
}
