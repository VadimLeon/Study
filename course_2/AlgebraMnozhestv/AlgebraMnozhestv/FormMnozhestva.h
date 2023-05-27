#pragma once
#include "TSet.h"
#include <msclr\marshal_cppstd.h>
#include <string>
#include "MProcedure.h"


bool kUn = false;//Переменная для проверки на наличия значения унивёрса
unsigned int siUn = 0;
TSet A, B, temp;

namespace AlgebraMnozhestv {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormMnozhestva
	/// </summary>
	public ref class FormMnozhestva : public System::Windows::Forms::Form
	{
	public:
		FormMnozhestva(void)
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
		~FormMnozhestva()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  Univers;
	private: System::Windows::Forms::Button^  OK_Univers;
	private: System::Windows::Forms::Label^  labelFirst;

	private: System::Windows::Forms::TextBox^  ArrFirst;
	private: System::Windows::Forms::Label^  labelSecond;


	private: System::Windows::Forms::TextBox^  ArrSecond;
	private: System::Windows::Forms::Label^  labelErrors;

	private: System::Windows::Forms::Label^  labelAdd;
	private: System::Windows::Forms::TextBox^  ArrAdd;
	private: System::Windows::Forms::Label^  labelDelete;
	private: System::Windows::Forms::TextBox^  ArrDelete;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Button^  OK_AddDel;
	private: System::Windows::Forms::TextBox^  ArrResult;
	private: System::Windows::Forms::Label^  labelResult;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;



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
			System::Windows::Forms::Label^  SizeU;
			this->OK_Univers = (gcnew System::Windows::Forms::Button());
			this->Univers = (gcnew System::Windows::Forms::TextBox());
			this->labelFirst = (gcnew System::Windows::Forms::Label());
			this->ArrFirst = (gcnew System::Windows::Forms::TextBox());
			this->labelSecond = (gcnew System::Windows::Forms::Label());
			this->ArrSecond = (gcnew System::Windows::Forms::TextBox());
			this->labelErrors = (gcnew System::Windows::Forms::Label());
			this->labelAdd = (gcnew System::Windows::Forms::Label());
			this->ArrAdd = (gcnew System::Windows::Forms::TextBox());
			this->labelDelete = (gcnew System::Windows::Forms::Label());
			this->ArrDelete = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->OK_AddDel = (gcnew System::Windows::Forms::Button());
			this->ArrResult = (gcnew System::Windows::Forms::TextBox());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			SizeU = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// SizeU
			// 
			SizeU->AutoSize = true;
			SizeU->Cursor = System::Windows::Forms::Cursors::Default;
			SizeU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			SizeU->Location = System::Drawing::Point(479, 11);
			SizeU->Name = L"SizeU";
			SizeU->RightToLeft = System::Windows::Forms::RightToLeft::No;
			SizeU->Size = System::Drawing::Size(98, 24);
			SizeU->TabIndex = 10;
			SizeU->Text = L"Size Univers";
			SizeU->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			SizeU->UseCompatibleTextRendering = true;
			SizeU->UseMnemonic = false;
			// 
			// OK_Univers
			// 
			this->OK_Univers->BackColor = System::Drawing::SystemColors::Control;
			this->OK_Univers->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->OK_Univers->Cursor = System::Windows::Forms::Cursors::Default;
			this->OK_Univers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->OK_Univers->ForeColor = System::Drawing::SystemColors::ControlText;
			this->OK_Univers->Location = System::Drawing::Point(570, 37);
			this->OK_Univers->Name = L"OK_Univers";
			this->OK_Univers->Size = System::Drawing::Size(92, 32);
			this->OK_Univers->TabIndex = 1;
			this->OK_Univers->Text = L"OK";
			this->OK_Univers->UseVisualStyleBackColor = true;
			this->OK_Univers->Click += gcnew System::EventHandler(this, &FormMnozhestva::OK_Univers_Click);
			// 
			// Univers
			// 
			this->Univers->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->Univers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Univers->Location = System::Drawing::Point(479, 38);
			this->Univers->Multiline = true;
			this->Univers->Name = L"Univers";
			this->Univers->Size = System::Drawing::Size(85, 31);
			this->Univers->TabIndex = 0;
			this->Univers->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Univers->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMnozhestva::Univers_KeyDown);
			this->Univers->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMnozhestva::Univers_KeyPress);
			// 
			// labelFirst
			// 
			this->labelFirst->AutoSize = true;
			this->labelFirst->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelFirst->Location = System::Drawing::Point(8, 72);
			this->labelFirst->Name = L"labelFirst";
			this->labelFirst->Size = System::Drawing::Size(40, 20);
			this->labelFirst->TabIndex = 11;
			this->labelFirst->Text = L"First";
			// 
			// ArrFirst
			// 
			this->ArrFirst->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->ArrFirst->Location = System::Drawing::Point(12, 95);
			this->ArrFirst->Name = L"ArrFirst";
			this->ArrFirst->Size = System::Drawing::Size(430, 26);
			this->ArrFirst->TabIndex = 2;
			this->ArrFirst->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMnozhestva::ArrFirst_KeyDown);
			this->ArrFirst->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMnozhestva::ArrFirst_KeyPress);
			// 
			// labelSecond
			// 
			this->labelSecond->AutoSize = true;
			this->labelSecond->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelSecond->Location = System::Drawing::Point(8, 124);
			this->labelSecond->Name = L"labelSecond";
			this->labelSecond->Size = System::Drawing::Size(64, 20);
			this->labelSecond->TabIndex = 12;
			this->labelSecond->Text = L"Second";
			// 
			// ArrSecond
			// 
			this->ArrSecond->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->ArrSecond->Location = System::Drawing::Point(13, 147);
			this->ArrSecond->Name = L"ArrSecond";
			this->ArrSecond->Size = System::Drawing::Size(429, 26);
			this->ArrSecond->TabIndex = 3;
			this->ArrSecond->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMnozhestva::ArrSecond_KeyDown);
			this->ArrSecond->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMnozhestva::ArrSecond_KeyPress);
			// 
			// labelErrors
			// 
			this->labelErrors->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelErrors->ForeColor = System::Drawing::Color::Red;
			this->labelErrors->Location = System::Drawing::Point(9, 37);
			this->labelErrors->Name = L"labelErrors";
			this->labelErrors->Size = System::Drawing::Size(464, 27);
			this->labelErrors->TabIndex = 7;
			this->labelErrors->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelAdd
			// 
			this->labelAdd->AutoSize = true;
			this->labelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelAdd->Location = System::Drawing::Point(475, 72);
			this->labelAdd->Name = L"labelAdd";
			this->labelAdd->Size = System::Drawing::Size(38, 20);
			this->labelAdd->TabIndex = 13;
			this->labelAdd->Text = L"Add";
			// 
			// ArrAdd
			// 
			this->ArrAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->ArrAdd->Location = System::Drawing::Point(479, 95);
			this->ArrAdd->Name = L"ArrAdd";
			this->ArrAdd->Size = System::Drawing::Size(183, 26);
			this->ArrAdd->TabIndex = 4;
			this->ArrAdd->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMnozhestva::ArrAdd_KeyPress);
			// 
			// labelDelete
			// 
			this->labelDelete->AutoSize = true;
			this->labelDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelDelete->Location = System::Drawing::Point(475, 124);
			this->labelDelete->Name = L"labelDelete";
			this->labelDelete->Size = System::Drawing::Size(56, 20);
			this->labelDelete->TabIndex = 14;
			this->labelDelete->Text = L"Delete";
			// 
			// ArrDelete
			// 
			this->ArrDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->ArrDelete->Location = System::Drawing::Point(479, 147);
			this->ArrDelete->Name = L"ArrDelete";
			this->ArrDelete->Size = System::Drawing::Size(183, 26);
			this->ArrDelete->TabIndex = 5;
			this->ArrDelete->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMnozhestva::ArrDelete_KeyPress);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(479, 179);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(58, 24);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"First";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(580, 179);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(82, 24);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Second";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// OK_AddDel
			// 
			this->OK_AddDel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->OK_AddDel->Location = System::Drawing::Point(479, 209);
			this->OK_AddDel->Name = L"OK_AddDel";
			this->OK_AddDel->Size = System::Drawing::Size(183, 30);
			this->OK_AddDel->TabIndex = 8;
			this->OK_AddDel->Text = L"OK";
			this->OK_AddDel->UseVisualStyleBackColor = true;
			this->OK_AddDel->Click += gcnew System::EventHandler(this, &FormMnozhestva::OK_AddDel_Click);
			// 
			// ArrResult
			// 
			this->ArrResult->BackColor = System::Drawing::SystemColors::HighlightText;
			this->ArrResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->ArrResult->Location = System::Drawing::Point(13, 264);
			this->ArrResult->Name = L"ArrResult";
			this->ArrResult->Size = System::Drawing::Size(649, 26);
			this->ArrResult->TabIndex = 9;
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelResult->Location = System::Drawing::Point(12, 241);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(55, 20);
			this->labelResult->TabIndex = 15;
			this->labelResult->Text = L"Result";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(78, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(33, 29);
			this->button1->TabIndex = 16;
			this->button1->Text = L"⋂";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormMnozhestva::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(183, 190);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(34, 29);
			this->button2->TabIndex = 17;
			this->button2->Text = L"⋃";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormMnozhestva::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(292, 190);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(31, 29);
			this->button3->TabIndex = 18;
			this->button3->Text = L"¬";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormMnozhestva::button3_Click);
			// 
			// FormMnozhestva
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(674, 307);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->ArrResult);
			this->Controls->Add(this->OK_AddDel);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->ArrDelete);
			this->Controls->Add(this->labelDelete);
			this->Controls->Add(this->ArrAdd);
			this->Controls->Add(this->labelAdd);
			this->Controls->Add(this->labelErrors);
			this->Controls->Add(this->ArrSecond);
			this->Controls->Add(this->labelSecond);
			this->Controls->Add(this->ArrFirst);
			this->Controls->Add(this->labelFirst);
			this->Controls->Add(this->Univers);
			this->Controls->Add(SizeU);
			this->Controls->Add(this->OK_Univers);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"FormMnozhestva";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormMnozhestva";
			this->Load += gcnew System::EventHandler(this, &FormMnozhestva::FormMnozhestva_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormMnozhestva_Load(System::Object^  sender, System::EventArgs^  e)
			 { //Обработка события загрузки формы
				 this->Text = "Множества";
				 this->StartPosition = FormStartPosition::CenterScreen;
				 //Присвойте свойству ReadOnly элемента управления TextBox значение true.
				 //Если это свойство имеет значение true, то пользователи могут прокручивать и выделять
				 //текст, но не изменять его. Команда Копировать в текстовом поле действует, а команды
				 //Вырезать и Вставить — нет.
				 radioButton1->Checked = true;//Активность кнопки First (при загрузке формы)
				 //radioButton1->Visible = true; //Задаёт видимость элемента radioButton1
				 ArrFirst->Hide();//Hide() Скрывает TextBox от пользователя;
				 ArrSecond->Hide();
				 ArrAdd->Hide();
				 ArrDelete->Hide();
				 ArrResult->Hide();

				 OK_AddDel->Hide();
				 radioButton1->Hide(); 
				 radioButton2->Hide();
				 button1->Hide();
				 button2->Hide();
				 button3->Hide();

				 labelFirst->Hide();
				 labelSecond->Hide();
				 labelAdd->Hide();
				 labelDelete->Hide();
				 labelResult->Hide();

				 Univers->TabIndex = 0; //TabIndex = 0 обеспечивает передачу фокуса при старте программы именно в текстовое поле
				 ArrResult->ReadOnly = true;//Запрет на ввод данных в ArrFirst
			 }
	private: System::Void OK_Univers_Click(System::Object^  sender, System::EventArgs^  e)
			 { //Обработка события при нажатии на кнопку "OK_Univers"
				 //int x;
				 //labelErrors->Text = "";
				 //bool Число_ли = int::TryParse(Univers->Text, System::Globalization::NumberStyles::Number,
				 // System::Globalization::NumberFormatInfo::CurrentInfo, x);
				 //if ((Число_ли == false) || (x < 1))// Когда значение Унивёрса не введено
				 //{ // Если пользователь ввел не число:
				 // labelErrors->Text = "Следует вводить НАТУРАЛЬНОЕ число";
				 //labelErrors->ForeColor = Color::Red; // - цвет текста на метке
				 //Univers->Text = "";
				 //Univers->Focus(); 
				 //return; // - выход из процедуры
				 //}

				 //siUn = (int)x;
				 if(("" == Univers->Text) || ("0" == Univers->Text))
				 {// Проверка на пустату и "0" с выводом ошибки в labelErrors
					 Univers->Text = "";
					 Univers->Focus();
					 labelErrors->Text = "Следует вводить НАТУРАЛЬНОЕ число";
					 labelErrors->ForeColor = Color::Red;
					 return;
				 }

				 siUn = System::Convert::ToInt32(Univers->Text);

				 if(false == kUn)// Когда введено верное значение Унивёрса
				 {// Обработка события применения значения унивёрса
					 kUn = true;

					 Univers->Enabled = false;//Неактивное поле "Univers"
					 labelErrors->Text = "";
					 /// Показывает (скрытое при загрузке формы) поля "ArrFirst", ..... 
					 ArrFirst->Show();
					 ArrSecond->Show();
					 ArrAdd->Show();
					 ArrDelete->Show();
					 ArrResult->Show();

					 OK_AddDel->Show();
					 radioButton1->Show();
					 radioButton2->Show();
					 button1->Show();
					 button2->Show();
					 button3->Show();

					 labelFirst->Show();
					 labelSecond->Show();
					 labelAdd->Show();
					 labelDelete->Show();
					 labelResult->Show();
					 OK_Univers->Text = "Swap";
					 ArrFirst->Focus();
				 }
				 else
				 {// Обработка события изменения значения унивёрса
					 kUn = false;

					 labelErrors->Text = "";
					 ArrFirst->Hide();//Hide() Скрывает TextBox от пользователя;
					 ArrSecond->Hide();
					 ArrAdd->Hide();
					 ArrDelete->Hide();
					 ArrResult->Hide();
					 button1->Hide();
					 button2->Hide();
					 button3->Hide();

					 OK_AddDel->Hide();
					 radioButton1->Hide(); 
					 radioButton2->Hide();

					 labelFirst->Hide();
					 labelSecond->Hide();
					 labelAdd->Hide();
					 labelDelete->Hide();
					 labelResult->Hide();

					 ArrFirst->Text = "";
					 ArrSecond->Text = "";
					 ArrAdd->Text = "";
					 ArrDelete->Text = "";
					 ArrResult->Text = "";
					 Univers->Text = "";

					 Univers->Enabled = true;//Aктивное поле "Univers"

					 OK_Univers->Text = "OK";
					 Univers->Focus();
				 }

			 }
	private: System::Void OK_AddDel_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 /// Обработка первого множества
				 std::string MnozhestvaZnach = (msclr::interop::marshal_as<std::string>(ArrFirst->Text));// System::String^ to std::string
				 A = TSet(MnozhestvaZnach, siUn);
				 //System::String^ str_sys = gcnew String((A.getString()).c_str())// std::string to System::String^
				 //String ^ c = gcnew String(scheduleBox->SelectedItem->ToString());// std::string to System::String^
				 //или = (std::string(A.getString())).ToStrind();

				 /// Обработка второго множества
				 MnozhestvaZnach = msclr::interop::marshal_as<std::string>(ArrSecond->Text);
				 B = TSet(MnozhestvaZnach, siUn);

				 ///Обработка поля "Добавить"
				 MnozhestvaZnach = msclr::interop::marshal_as<std::string>(ArrAdd->Text);
				 temp = TSet(MnozhestvaZnach, siUn);

				 if((radioButton1->Checked) == true)
				 {
					 A = A + temp;
				 }
				 else if((radioButton2->Checked) == true)
				 {
					 B = B + temp;
				 }
				 ArrAdd->Text = "";

				 ///Обработка поля "Удалить"
				 MnozhestvaZnach = msclr::interop::marshal_as<std::string>(ArrDelete->Text);
				 temp = -(TSet(MnozhestvaZnach, siUn));

				 if((radioButton1->Checked) == true)
				 {
					 A = A * temp;
				 }
				 else if((radioButton2->Checked) == true)
				 {
					 B = B * temp;
				 }
				 ArrDelete->Text = "";


				 ///Возврат допустимых значений в текстбоксы 
				 ArrFirst->Text = msclr::interop::marshal_as<System::String^>(A.getString());// std::string to System::String^
				 ArrSecond->Text = msclr::interop::marshal_as<System::String^>(B.getString());// std::string to System::String^
			 }
	private: System::Void Univers_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
			 {
				 if((e->KeyCode) == Keys::Enter)
				 {
					 if(("" == Univers->Text) || ("0" == Univers->Text))
					 {// Проверка на пустату и "0" с выводом ошибки в labelErrors
						 Univers->Text = "";
						 Univers->Focus();
						 labelErrors->Text = "Следует вводить НАТУРАЛЬНОЕ число";
						 labelErrors->ForeColor = Color::Red;
						 return;
					 }

					 siUn = System::Convert::ToInt32(Univers->Text);

					 if(false == kUn)// Когда введено верное значение Унивёрса
					 {// Обработка события применения значения унивёрса
						 kUn = true;

						 Univers->Enabled = false;//Неактивное поле "Univers"
						 labelErrors->Text = "";
						 /// Показывает (скрытое при загрузке формы) поля "ArrFirst", ..... 
						 ArrFirst->Show();
						 ArrSecond->Show();
						 ArrAdd->Show();
						 ArrDelete->Show();
						 ArrResult->Show();

						 OK_AddDel->Show();
						 radioButton1->Show();
						 radioButton2->Show();
						 button1->Show();
						 button2->Show();
						 button3->Show();

						 labelFirst->Show();
						 labelSecond->Show();
						 labelAdd->Show();
						 labelDelete->Show();
						 labelResult->Show();
						 OK_Univers->Text = "Swap";
						 ArrFirst->Focus();
					 }

				 }
			 }
	private: System::Void ArrFirst_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
			 {
				 if((e->KeyCode) == Keys::Space)
				 {
					 std::string Str = msclr::interop::marshal_as<std::string>(ArrFirst->Text);
					 DelErrorString(Str, siUn);
					 ArrFirst->Text = msclr::interop::marshal_as<System::String^>(Str);
					 ArrFirst->Select(ArrFirst->Text->Length, ArrFirst->Text->Length); //Курсор в конец строки "ArrFirst->Text" C#
					 //textBox1.SelectionStart = textBox1.Text.Length; //Курсор в конец строки C#
				 }
			 }
	private: System::Void ArrSecond_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
			 {
				 if((e->KeyCode) == Keys::Space)
				 {
					 std::string Str = msclr::interop::marshal_as<std::string>(ArrSecond->Text);
					 DelErrorString(Str, siUn);
					 ArrSecond->Text = msclr::interop::marshal_as<System::String^>(Str);
					 ArrSecond->Select(ArrSecond->Text->Length, ArrSecond->Text->Length); //Курсор в конец строки "ArrSecond->Text" C#
					 //textBox1->SelectionStart = textBox1->Text->Length; //Курсор в конец строки C++
				 }
			 }
	private: System::Void ArrFirst_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
			 {
				 char number = (char)e->KeyChar;
				 if (!Char::IsDigit(number) && number != 8 && number != 32) // цифры, клавиша BackSpace и пробел
				 {
					 e->Handled = true;
				 }


				 //If(Double.TryParse(val, d), IIf(d >= min AndAlso d <= max, d, "Неверный диапазон"), "Неверное значение")
				 //textBox1.Text = textBox1.Text.Remove(textBox1.Text.Length - 1);
				 //textBox1.Text = textBox1.Text.Insert(textBox1.Text.Length, "0");
				 //			 private void textBox1_KeyUp(object sender, KeyEventArgs e)
				 //{
				 //TextBox temp = sender as TextBox;
				 //if (temp.Text.Length > 0)
				 //if (System.Convert.ToInt32(temp.Text) > 99)
				 //temp.Text = "99";
				 //}
				 //Делаем хитро и хулиганисто! Для начала вводим константу для максимально возможного значения.
				 //Далее на KeyPress конвертим строку в число и проверяем, что оно меньше максимально возможного.
				 // Если больше - отсекаем ввод. Или более сложный путь по проверке максимального десятичного
				 // числа от ввода конкретной цифры. Грубо - максимальное целое число 65535. Значит, при вводе
				 // первой цифры '6' длина строки не должна превышать 5. Ну и так далее.
			 }
	private: System::Void ArrSecond_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
			 {
				 char number = (char)e->KeyChar;
				 if (!Char::IsDigit(number) && number != 8 && number != 32) // цифры, клавиша BackSpace и пробел
				 {
					 e->Handled = true;
				 }
			 }
	private: System::Void ArrAdd_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
			 {
				 char number = (char)e->KeyChar;
				 if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 32) //цифры, клавиша BackSpace и пробел
				 {
					 e->Handled = true;
				 }
			 }
	private: System::Void ArrDelete_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
			 {
				 char number = (char)e->KeyChar;
				 if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 32) //цифры, клавиша BackSpace и пробел
				 {
					 e->Handled = true;
				 }
			 }
	private: System::Void Univers_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
			 {
				 char number = (char)e->KeyChar;
				 if ((!Char::IsDigit(number)) && (number != 8)) // цифры, клавиша BackSpace
				 {
					 e->Handled = true;
				 }
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 ArrResult->Text = msclr::interop::marshal_as<System::String^>((A * B).getString());
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 ArrResult->Text = msclr::interop::marshal_as<System::String^>((A + B).getString());
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 if((radioButton1->Checked) == true)
				 {
					 ArrResult->Text = msclr::interop::marshal_as<System::String^>((-A).getString());
				 }
				 else if((radioButton2->Checked) == true)
				 {
					 ArrResult->Text = msclr::interop::marshal_as<System::String^>((-B).getString());
				 }

			 }
	};
}
