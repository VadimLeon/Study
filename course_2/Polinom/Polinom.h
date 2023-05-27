#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>
#include "MyPolinom.h"

MyPolinom P, Q, Rez;
int max_stepen, count_n;

namespace Polinom {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Polinom
	/// </summary>
	public ref class Polinom : public System::Windows::Forms::Form
	{
	public:
		Polinom(void)
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
		~Polinom()
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
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(80, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(80, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &Polinom::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(598, 61);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"label6";
			this->label6->Click += gcnew System::EventHandler(this, &Polinom::label6_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(601, 127);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(85, 17);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(601, 176);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 17);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(237, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 25);
			this->button1->TabIndex = 10;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Polinom::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(273, 61);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 25);
			this->button2->TabIndex = 11;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Polinom::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(309, 61);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 25);
			this->button3->TabIndex = 12;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Polinom::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(433, 61);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 25);
			this->button4->TabIndex = 9;
			this->button4->Text = L"*";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Polinom::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(83, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Polinom::textBox1_KeyDown);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Polinom::textBox1_KeyPress);
			this->textBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Polinom::textBox1_MouseDoubleClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(83, 77);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Polinom::textBox2_KeyDown);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Polinom::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(83, 127);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(489, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Polinom::textBox3_KeyDown);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(83, 176);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(489, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Polinom::textBox4_KeyDown);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(83, 223);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(489, 20);
			this->textBox5->TabIndex = 20;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(601, 77);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(96, 20);
			this->textBox6->TabIndex = 5;
			this->textBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Polinom::textBox6_KeyDown);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(398, 29);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 8;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Polinom::textBox7_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(395, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(268, 36);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"label8";
			// 
			// Polinom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(714, 273);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Polinom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Polinom";
			this->Load += gcnew System::EventHandler(this, &Polinom::Polinom_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Polinom_Load(System::Object^  sender, System::EventArgs^  e)
	{
		this->Text = "Polimoms";
		this->CenterToScreen();
		label1->Text = "Max power";
		label2->Text = "Number of variables";
		label3->Text = "Pol1";
		label4->Text = "Pol2";
		label5->Text = "Result";
		label6->Text = "Add";
		label7->Text = "Multiply by the number";
		label8->Text = "Operations";
		radioButton1->Text = "Pol1";
		radioButton2->Text = "Pol2";
		radioButton1->Checked = true;

		//No show textBoxs
		label3->Visible = false;
		label4->Visible = false;
		label5->Visible = false;
		label6->Visible = false;
		label7->Visible = false;
		label8->Visible = false;

		//No active textBox2
		textBox2->Enabled = false;
		//No show textBoxs
		textBox3->Visible = false;
		textBox4->Visible = false;
		textBox5->Visible = false;
		textBox6->Visible = false;
		textBox7->Visible = false;

		//No show radioButtons and buttons
		radioButton1->Visible = false;
		radioButton2->Visible = false;
		button1->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		button4->Visible = false;




		//Start on textBox1
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
	private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		char number = (char)e->KeyChar;
		if (!Char::IsDigit(number) && number != 8) // Разрешение на ввод цифр, клавиши BackSpace
		{
			e->Handled = true;
		}
	}
	private: System::Void textBox7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		char number = (char)e->KeyChar;
		if (!Char::IsDigit(number) && number != 8 && number != 45) // Разрешение на ввод цифр, клавиши BackSpace
		{
			e->Handled = true;
		}
	}
	private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if ((e->KeyCode) == Keys::Enter)
		{
			if (("" == textBox1->Text) || ("0" == textBox1->Text))
			{// Проверка на пустату и "0" с выводом ошибки в MessageBox
				MessageBox::Show("Следует вводить НАТУРАЛЬНОЕ число!", "Ошибка",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox1->Text = "";
				textBox1->Focus();
				return;
			}
			int::TryParse(textBox1->Text, max_stepen);//Безопасная запись числа из textBox1->Text в переменную max_stepen(ей можно пользоваться без проверки)

			textBox2->Enabled = true;
			textBox1->ReadOnly = true;
			textBox2->Focus();
		}
	}
	private: System::Void textBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if ((e->KeyCode) == Keys::Enter)
		{
			if (("" == textBox2->Text) || ("0" == textBox2->Text))
			{// Проверка на пустату и "0" с выводом ошибки в MessageBox
				MessageBox::Show("Следует вводить НАТУРАЛЬНОЕ число < 6 !", "Ошибка",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox2->Text = "";
				textBox2->Focus();
				return;
			}
			int::TryParse(textBox2->Text, count_n);//Безопасная запись числа из textBox1->Text в переменную max_stepen(ей можно пользоваться без проверки)

			textBox2->Enabled = false;

			//show textBoxs
			label3->Visible = true;
			label4->Visible = true;
			label5->Visible = true;
			label6->Visible = true;
			label7->Visible = true;
			label8->Visible = true;

			//show textBoxs
			textBox3->Visible = true;
			textBox4->Visible = true;
			textBox5->Visible = true;
			textBox6->Visible = true;
			textBox7->Visible = true;

			//show radioButtons and buttons
			radioButton1->Visible = true;
			radioButton2->Visible = true;
			button1->Visible = true;
			button2->Visible = true;
			button3->Visible = true;
			button4->Visible = true;

			textBox3->Focus();
		}
	}
	private: System::Void textBox3_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if ((e->KeyCode) == Keys::Enter)
		{
			if (textBox3->Text != "")
			{
				std::string Polinom_P = msclr::interop::marshal_as<std::string>(textBox3->Text);

				P = MyPolinom(Polinom_P, max_stepen, count_n);
				textBox3->Text = msclr::interop::marshal_as<System::String^>(P.PolToString());

				textBox4->Focus();
			}
		}
	}
	private: System::Void textBox4_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if ((e->KeyCode) == Keys::Enter)
		{
			if (textBox4->Text != "")
			{
				std::string Polinom_Q = msclr::interop::marshal_as<std::string>(textBox4->Text);

				Q = MyPolinom(Polinom_Q, max_stepen, count_n);
				textBox4->Text = msclr::interop::marshal_as<System::String^>(Q.PolToString());
			}

			textBox6->Focus();
		}
	}
	private: System::Void textBox6_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if ((e->KeyCode) == Keys::Enter)
		{
			if (textBox3->Text != "" && textBox4->Text != "")
			{
				std::string Polinom_P = msclr::interop::marshal_as<std::string>(textBox3->Text);
				std::string Polinom_Q = msclr::interop::marshal_as<std::string>(textBox4->Text);
				std::string addMonom = msclr::interop::marshal_as<std::string>(textBox6->Text);

				if (radioButton1->Checked)
				{
					P = MyPolinom(Polinom_P, max_stepen, count_n);
					P.addMonom(addMonom, max_stepen, count_n);
					textBox3->Text = msclr::interop::marshal_as<System::String^>(P.PolToString());
				}
				else
				{
					Q = MyPolinom(Polinom_Q, max_stepen, count_n);
					Q.addMonom(addMonom, max_stepen, count_n);
					textBox4->Text = msclr::interop::marshal_as<System::String^>(Q.PolToString());
				}
			}

			textBox6->Text = "";
			textBox5->Focus();
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{///std::string <--> String^ 
		std::string Polinom_P = msclr::interop::marshal_as<std::string>(textBox3->Text);
		std::string Polinom_Q = msclr::interop::marshal_as<std::string>(textBox4->Text);

		P = MyPolinom(Polinom_P, max_stepen, count_n);
		Q = MyPolinom(Polinom_Q, max_stepen, count_n);
		Rez = P + Q;

		textBox5->Text = msclr::interop::marshal_as<System::String^>(Rez.PolToString());
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		std::string Polinom_P = msclr::interop::marshal_as<std::string>(textBox3->Text);
		std::string Polinom_Q = msclr::interop::marshal_as<std::string>(textBox4->Text);

		P = MyPolinom(Polinom_P, max_stepen, count_n);
		Q = MyPolinom(Polinom_Q, max_stepen, count_n);
		Rez = P - Q;

		textBox5->Text = msclr::interop::marshal_as<System::String^>(Rez.PolToString());
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		std::string Polinom_P = msclr::interop::marshal_as<std::string>(textBox3->Text);
		std::string Polinom_Q = msclr::interop::marshal_as<std::string>(textBox4->Text);

		P = MyPolinom(Polinom_P, max_stepen, count_n);
		Q = MyPolinom(Polinom_Q, max_stepen, count_n);
		Rez = P * Q;

		textBox5->Text = msclr::interop::marshal_as<System::String^>(Rez.PolToString());
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (textBox7->Text != "")
		{
			int k;
			std::string Polinom_P = msclr::interop::marshal_as<std::string>(textBox3->Text);
			std::string Polinom_Q = msclr::interop::marshal_as<std::string>(textBox4->Text);
			int::TryParse(textBox7->Text, k);

			P = MyPolinom(Polinom_P, max_stepen, count_n);
			Q = MyPolinom(Polinom_Q, max_stepen, count_n);

			if (radioButton1->Checked)
			{
				Rez = P * k;
			}
			else
			{
				Rez = Q * k;
			}

			textBox5->Text = msclr::interop::marshal_as<System::String^>(Rez.PolToString());
		}
	}
	private: System::Void textBox1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{

		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";

		//No show textBoxs
		label3->Visible = false;
		label4->Visible = false;
		label5->Visible = false;
		label6->Visible = false;
		label7->Visible = false;
		label8->Visible = false;

		//No active textBox2
		textBox1->ReadOnly = false;
		textBox2->Enabled = false;
		//No show textBoxs
		textBox3->Visible = false;
		textBox4->Visible = false;
		textBox5->Visible = false;
		textBox6->Visible = false;
		textBox7->Visible = false;

		//No show radioButtons and buttons
		radioButton1->Visible = false;
		radioButton2->Visible = false;
		button1->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		button4->Visible = false;

		//Start on textBox1
		textBox1->Focus();
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
