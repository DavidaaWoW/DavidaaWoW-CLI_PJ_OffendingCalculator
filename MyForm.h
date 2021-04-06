#include <sstream>
#include <string>
#include <fstream>

#pragma once

namespace Project1 {

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
	public: System::Windows::Forms::Button^ button1;
	protected:
	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button3;
	public: System::Windows::Forms::Button^ button4;
	public: System::Windows::Forms::Button^ button5;
	public: System::Windows::Forms::Button^ button6;
	public: System::Windows::Forms::Button^ button7;
	public: System::Windows::Forms::Button^ button8;
	public: System::Windows::Forms::Button^ button9;
	public: System::Windows::Forms::Button^ button10;
	public: System::Windows::Forms::Button^ button11;
	public: System::Windows::Forms::Button^ button12;
	public: System::Windows::Forms::Button^ button13;
	public: System::Windows::Forms::Button^ button14;
	public: System::Windows::Forms::Button^ button15;
	public: System::Windows::Forms::Button^ button16;
	public: System::Windows::Forms::Button^ button17;
	public: System::Windows::Forms::Button^ button18;
	public: System::Windows::Forms::Button^ button19;
	public: System::Windows::Forms::Button^ button20;
	public: System::Windows::Forms::Button^ button21;
	public: System::Windows::Forms::Button^ button22;
	public: System::Windows::Forms::Button^ button23;
	public: System::Windows::Forms::Button^ button24;
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::ListBox^ История;
	private: System::Windows::Forms::Button^ button25;
	public:
	private:

	public:

	protected:
































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->История = (gcnew System::Windows::Forms::ListBox());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(0, 651);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(190, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"+/-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(196, 651);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(190, 100);
			this->button2->TabIndex = 1;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(590, 651);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(190, 100);
			this->button3->TabIndex = 3;
			this->button3->Text = L"=";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(394, 651);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(190, 100);
			this->button4->TabIndex = 2;
			this->button4->Text = L",";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(590, 545);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(190, 100);
			this->button5->TabIndex = 7;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->AutoSize = true;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(394, 545);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(190, 100);
			this->button6->TabIndex = 6;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->AutoSize = true;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(196, 545);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(190, 100);
			this->button7->TabIndex = 5;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->AutoSize = true;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(0, 545);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(190, 100);
			this->button8->TabIndex = 4;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->AutoSize = true;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(590, 439);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(190, 100);
			this->button9->TabIndex = 11;
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->AutoSize = true;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(394, 439);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(190, 100);
			this->button10->TabIndex = 10;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->AutoSize = true;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(196, 439);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(190, 100);
			this->button11->TabIndex = 9;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->AutoSize = true;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(0, 439);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(190, 100);
			this->button12->TabIndex = 8;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->AutoSize = true;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(590, 333);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(190, 100);
			this->button13->TabIndex = 15;
			this->button13->Text = L"X";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->AutoSize = true;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(394, 333);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(190, 100);
			this->button14->TabIndex = 14;
			this->button14->Text = L"9";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->AutoSize = true;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(196, 333);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(190, 100);
			this->button15->TabIndex = 13;
			this->button15->Text = L"8";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->AutoSize = true;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(0, 333);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(190, 100);
			this->button16->TabIndex = 12;
			this->button16->Text = L"7";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->AutoSize = true;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(590, 227);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(190, 100);
			this->button17->TabIndex = 19;
			this->button17->Text = L"÷";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->AutoSize = true;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(394, 227);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(190, 100);
			this->button18->TabIndex = 18;
			this->button18->Text = L"√x";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->AutoSize = true;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(196, 227);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(190, 100);
			this->button19->TabIndex = 17;
			this->button19->Text = L"x²";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->AutoSize = true;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(0, 227);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(190, 100);
			this->button20->TabIndex = 16;
			this->button20->Text = L"1/x";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->AutoSize = true;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(590, 121);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(190, 100);
			this->button21->TabIndex = 23;
			this->button21->Text = L"⌫";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->AutoSize = true;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(394, 121);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(190, 100);
			this->button22->TabIndex = 22;
			this->button22->Text = L"C";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->AutoSize = true;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(196, 121);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(190, 100);
			this->button23->TabIndex = 21;
			this->button23->Text = L"CE";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->AutoSize = true;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->Location = System::Drawing::Point(0, 121);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(190, 100);
			this->button24->TabIndex = 20;
			this->button24->Text = L"%";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 67);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(780, 51);
			this->label1->TabIndex = 24;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label2->Location = System::Drawing::Point(9, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(771, 31);
			this->label2->TabIndex = 25;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// История
			// 
			this->История->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->История->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->История->FormattingEnabled = true;
			this->История->HorizontalScrollbar = true;
			this->История->ItemHeight = 18;
			this->История->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"\tИстория" });
			this->История->Location = System::Drawing::Point(786, 9);
			this->История->Name = L"История";
			this->История->Size = System::Drawing::Size(205, 742);
			this->История->TabIndex = 26;
			this->История->Visible = false;
			this->История->DoubleClick += gcnew System::EventHandler(this, &MyForm::lboxclicked);
			// 
			// button25
			// 
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(740, 12);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(32, 30);
			this->button25->TabIndex = 27;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 753);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->История);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Оскорбляющий калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool check = false;
		    bool check1 = false;
			bool check2 = false;
			char sym_gl;
			String^ last;
			String^ fin;
			String^ list1;
			String^ list2;
			String^ temp1;
			String^ temp2;
			String^ temp3;

			void list(String^);
			String^ ret(std::string str, char ch);
			std::string conv(String^ str);
			String^ perc(std::string str1, std::string str2);
			String^ equals(std::string str1, std::string str2);
			String^ pow(double answer);
			String^ oneon(double answer);
			String^ sqrtf(double answer);
			double ret1(std::string str);
			String^ ret2(String^ str);
			String^ rand1();

			System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button12_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button11_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button16_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button15_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button14_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button22_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button23_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button21_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button13_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button17_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button19_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button20_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button18_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button24_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void lboxclicked(System::Object^ sender, System::EventArgs^ e);
			System::Void button25_Click(System::Object^ sender, System::EventArgs^ e);
};
}
