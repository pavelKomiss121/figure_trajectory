#pragma once
#include <windows.h>
#include <cmath>
#include <array>
#include <string>
#include <iostream>

namespace траектория {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	/// 
	
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;


	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;






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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(447, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(521, 369);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(15, 43);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(175, 104);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Траектория:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(259, 440);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 49);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Запустить анимацию\r\n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(267, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(38, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(358, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(38, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(241, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"a:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(337, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"b:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(358, 87);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(38, 20);
			this->textBox3->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(241, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Кол-во полуокр.";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"1. Красная", L"2. Синяя", L"3. Фиолетовая", L"4. Зеленая",
					L"5. Черная"
			});
			this->comboBox1->Location = System::Drawing::Point(15, 205);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 185);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Цвет линии ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 240);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Ширина линии";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(124, 240);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(38, 20);
			this->textBox4->TabIndex = 12;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(15, 277);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(79, 17);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"_________";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(15, 300);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(76, 17);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"_ _ _ _ _ _";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::White;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(15, 323);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(81, 20);
			this->radioButton3->TabIndex = 17;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L". . . . . . . ";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(11, 160);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(188, 199);
			this->pictureBox3->TabIndex = 25;
			this->pictureBox3->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(12, 161);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(161, 17);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Настройка траектории";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(246, 135);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 17);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Настройка паралл.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(246, 214);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 17);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Ширина линии";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(358, 214);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(38, 20);
			this->textBox5->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(246, 159);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(86, 17);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Цвет линии";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"1. Красная", L"2. Синяя", L"3. Фиолетовая", L"4. Зеленая",
					L"5. Черная"
			});
			this->comboBox2->Location = System::Drawing::Point(249, 179);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 27;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged_1);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Location = System::Drawing::Point(234, 132);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(186, 280);
			this->pictureBox4->TabIndex = 35;
			this->pictureBox4->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1. ________", L"2. _ _ _ _ _ _", L"3. . . . . . . . ." });
			this->listBox1->Location = System::Drawing::Point(249, 259);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(103, 54);
			this->listBox1->TabIndex = 36;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(246, 322);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(108, 17);
			this->label11->TabIndex = 38;
			this->label11->Text = L"Угол (градусы)";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(358, 322);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(38, 20);
			this->textBox6->TabIndex = 37;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(246, 352);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 17);
			this->label12->TabIndex = 40;
			this->label12->Text = L"Длина";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(358, 349);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(38, 20);
			this->textBox7->TabIndex = 39;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(246, 381);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(60, 17);
			this->label13->TabIndex = 42;
			this->label13->Text = L"Высота";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(358, 381);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(38, 20);
			this->textBox8->TabIndex = 41;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(450, 424);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(143, 17);
			this->label14->TabIndex = 44;
			this->label14->Text = L"Скорость движения";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox3->Location = System::Drawing::Point(453, 444);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(136, 21);
			this->comboBox3->TabIndex = 45;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox4->Location = System::Drawing::Point(620, 444);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(136, 21);
			this->comboBox4->TabIndex = 47;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(617, 424);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(140, 17);
			this->label15->TabIndex = 46;
			this->label15->Text = L"Скорость поворота";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::White;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(796, 468);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(118, 24);
			this->checkBox1->TabIndex = 48;
			this->checkBox1->Text = L"Пульсирование";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox5->Location = System::Drawing::Point(796, 444);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(136, 21);
			this->comboBox5->TabIndex = 49;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox5_SelectedIndexChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(772, 424);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(180, 17);
			this->label16->TabIndex = 50;
			this->label16->Text = L"Скорость пульсирования";
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1. Влево", L"2. Вправо" });
			this->comboBox6->Location = System::Drawing::Point(22, 396);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(158, 21);
			this->comboBox6->TabIndex = 52;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox6_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(19, 376);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(136, 17);
			this->label17->TabIndex = 51;
			this->label17->Text = L"Сторона движения";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::White;
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Location = System::Drawing::Point(234, 43);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(186, 72);
			this->pictureBox5->TabIndex = 53;
			this->pictureBox5->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(19, 429);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(121, 17);
			this->label18->TabIndex = 55;
			this->label18->Text = L"Кол-во повторов";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(146, 429);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(38, 20);
			this->textBox9->TabIndex = 54;
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox7->Location = System::Drawing::Point(22, 476);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(158, 21);
			this->comboBox7->TabIndex = 57;
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox7_SelectedIndexChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::White;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(19, 456);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(131, 17);
			this->label19->TabIndex = 56;
			this->label19->Text = L"Детализация пути";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::White;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(617, 471);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(122, 17);
			this->label20->TabIndex = 59;
			this->label20->Text = L"Кол-во оборотов";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::White;
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Location = System::Drawing::Point(447, 417);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(521, 88);
			this->pictureBox6->TabIndex = 60;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::White;
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox7->Location = System::Drawing::Point(11, 374);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(190, 131);
			this->pictureBox7->TabIndex = 61;
			this->pictureBox7->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1038, 519);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ color_line = "Black";
		String^ color_obj = "Black";
		DashStyle dashStyle_line=DashStyle::Dash;
		DashStyle dashStyle_obj = DashStyle::Dash;
		float lineWidth2 = 1;
		double angleWidth_obj = 90;
		bool puls = false;

		float height_obj = 20;
		float baseWidth_obj = 30;

		int speed = 15;
		float speed_rotate = 1;
		float mini_h = 0;
		float mini_w = 0;
		int coeff_puls=100;
		bool revers_go = false;
		int detalization = 1;
		
	

		void LoadAndResizeImage(String^ imagePath, int newWidth, int newHeight) {
			// Загрузка изображения
			System::Drawing::Bitmap^ originalBitmap = gcnew System::Drawing::Bitmap(imagePath);
			// Создание уменьшенной копии изображения
			System::Drawing::Image^ resizedImage = originalBitmap->GetThumbnailImage(newWidth, newHeight, nullptr, IntPtr::Zero);

			// Создание нового Bitmap из уменьшенного изображения
			System::Drawing::Bitmap^ resizedBitmap = gcnew System::Drawing::Bitmap(resizedImage);

			// Установка уменьшенного изображения в PictureBox
			pictureBox2->Image = resizedBitmap;

		}

		Pen^ StringToPen(String^ colorName, float width, DashStyle dashStyle) {
			// Попытка получить цвет по имени
			Color color = Color::FromName(colorName);
			// Проверка, был ли найден цвет
			if (color.IsKnownColor) {
				Pen^ pen = gcnew Pen(color, width);
				pen->DashStyle = dashStyle;
				return pen;
			}
			else {
				// Возвращаем стандартный Pen, если цвет не найден
				Pen^ pen = gcnew Pen(Color::Black, width);
				pen->DashStyle = dashStyle;
				return pen;
			}
		}

		void Paint_Graphic(int cX, int cY, array<Point>^ p, String^ colorName, float lineWidth) {
			// Создаем объект Graphics для рисования на pictureBox1
			Graphics^ graphics = pictureBox1->CreateGraphics();
			// Очищаем область рисования
			graphics->Clear(pictureBox1->BackColor);
			// Проверяем, что в массиве точек достаточно точек для рисования
			if (p->Length > 2) {
				// Создаем новый массив точек, исключающий первую и последнюю точки
				array<Point>^ newP = gcnew array<Point>(p->Length - 2);
				Array::Copy(p, 1, newP, 0, p->Length - 2);
				// Рисуем линии по точкам нового массива
				Pen^ pen = StringToPen(colorName, lineWidth, dashStyle_line);

				graphics->DrawLines(pen, newP);

				float rotation=0;
				
				if (!revers_go) {
					for each (Point point in newP) {
						rotation += 360 / newP->Length * speed_rotate;
						graphics->Clear(pictureBox1->BackColor);
						graphics->DrawLines(pen, newP);
						Pen^ pen2 = StringToPen(color_obj, lineWidth2, dashStyle_obj);
						DrawParallelogramAtPoint(graphics, pen2, point, rotation);

						::Sleep(70 - speed);
					}
				}
				else {
					for (int i = newP->Length - 1; i >= 0; i--) {
						Point point = newP[i];
						rotation += 360 / newP->Length * speed_rotate;
						graphics->Clear(pictureBox1->BackColor);
						graphics->DrawLines(pen, newP);
						Pen^ pen2 = StringToPen(color_obj, lineWidth2, dashStyle_obj);
						DrawParallelogramAtPoint(graphics, pen2, point, rotation);

						::Sleep(40 - speed);
					}
				}
			}
			
		}
		
		void paintTrochoid(int repetitions, double a, double b, int count_cyrcle, String^ colorName, float lineWidth, DashStyle dashStyle) {
			double InitT = 0, LastT = 6.4* count_cyrcle; // Начальный и конечный углы в радианах (360 градусов)
			double Step = 0.3* detalization; // Шаг изменения угла
			int cX = 50, cY = 200; // Центр области рисования
			  // Радиус окружности
			
			int pointsPerRepetition = static_cast<int>(LastT / Step) + 1; // Количество точек на одно повторение
			int totalPoints = pointsPerRepetition; // Общее количество точек для всех повторений
			array<Point>^ p = gcnew array<Point>(totalPoints); // Массив для всех точек

			int i = 0; // Индекс для массива точек
			
				double angle = InitT;

				while (angle <= LastT) {
					// Вычисляем координаты x и y для текущего угла
					double x = a * angle - b * sin(angle);
					double y = a - b * cos(angle);
					// Инвертируем координату Y и добавляем точку в массив
					p[i] = Point(cX + int(x), cY - int(y));
					
					
					// Увеличиваем угол
					angle += Step;
					
					i++;
				}
			
			// Рисуем траекторию
			Paint_Graphic(cX, cY, p, colorName, lineWidth);
		}
		bool min = false;
		void DrawParallelogramAtPoint(Graphics^ graphics, Pen^ pen, Point point, double angleDegrees) {
			// Преобразуем угол в радианы
			double angleRad = angleWidth_obj * Math::PI / 180.0;
			double angleRad_2 = angleDegrees * Math::PI / 180.0;
			// Вычисляем смещение по оси X для вершин
			double dx = height_obj * (1 - Math::Sin(angleRad));
			
			if (puls) {
				if (!min) {
					mini_h += height_obj / coeff_puls;
					mini_w += baseWidth_obj / coeff_puls;
				}
				else {
					
					mini_h -= height_obj / coeff_puls;
					mini_w -= baseWidth_obj / coeff_puls;
					if ((height_obj - mini_h > height_obj+5) || (baseWidth_obj - mini_w > baseWidth_obj+5)) {
						min = false;
					}
				}
				
				
			}
			else {
				mini_h = 0;
				mini_w = 0;
			}
			if ((height_obj - mini_h < 0.6) || (baseWidth_obj - mini_w < 0.6)) {
				min = true;
				
			}
			// Создаем массив точек для параллелограмма
			array<Point>^ points = gcnew array<Point>(4);
			points[0] = point;
			points[1] = Point((point.X + baseWidth_obj)- mini_w, point.Y );
			points[2] = Point((point.X + baseWidth_obj + (int)Math::Round(dx))- mini_w, (point.Y - height_obj+ mini_h) );
			points[3] = Point((point.X + (int)Math::Round(dx)) , (point.Y - height_obj)+ mini_h);

			for (int i = 0; i < points->Length; i++) {
				points[i] = RotatePoint(points[i], point, angleRad_2);
			}
			// Рисуем параллелограмм
			graphics->DrawPolygon(pen, points);
		}

		// Function to rotate a point around another center point by a given angle (in radians)
		Point RotatePoint(Point point, Point center, double angleRad) {
			double cosAngle = Math::Cos(angleRad);
			double sinAngle = Math::Sin(angleRad);

			int dx = point.X - center.X;
			int dy = point.Y - center.Y;

			int newX = (int)(center.X + (dx * cosAngle - dy * sinAngle));
			int newY = (int)(center.Y + (dx * sinAngle + dy * cosAngle));

			return Point(newX, newY);
		}

	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadAndResizeImage("C:\\labs\\aisd\\4 семестр\\практика\\траектория\\траектория\\траектория_.png", 200, 150);
		textBox1->Text = "15";
		textBox2->Text = "20";
		textBox3->Text = "4";
		textBox4->Text = "2";
		textBox5->Text = "2";
		textBox6->Text = "90";
		textBox7->Text = "20";
		textBox8->Text = "30";
		textBox9->Text = "1";

		label20->Text = "Кол-во оборотов: "+ speed_rotate;
		

		comboBox1->Text = "Выберите цвет...";
		comboBox2->Text = "Выберите цвет...";
		comboBox3->Text = "Выберите скорость...";
		comboBox4->Text = "Выберите скорость...";
		comboBox5->Text = "Выберите скорость...";
		comboBox6->Text = "Выберите направление...";
		comboBox7->Text = "Выберите детализацию...";
		this->pictureBox3->SendToBack();
		this->pictureBox4->SendToBack();
		this->pictureBox5->SendToBack();
		this->pictureBox6->SendToBack();
		this->pictureBox7->SendToBack();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
		double a;
		double b;
		int repeat = 1;
		float lineWidth;
		int count_circles;
		Double::TryParse(textBox1->Text, a);
		Double::TryParse(textBox2->Text, b);

		Double::TryParse(textBox6->Text, angleWidth_obj);
		
		lineWidth= Single::Parse(textBox4->Text);
		repeat = Single::Parse(textBox9->Text);
		lineWidth2= Single::Parse(textBox5->Text);
		count_circles=Int32::Parse(textBox3->Text);
		height_obj = Int32::Parse(textBox7->Text);
		baseWidth_obj = Int32::Parse(textBox8->Text);
	
		
		for(int i=0; i<repeat;i++)
			paintTrochoid(1, a, b, count_circles, color_line, lineWidth, dashStyle_line);

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (comboBox1->SelectedIndex)
	{
	case 0: color_line = "Red"; break;
	case 1: color_line = "Blue"; break;
	case 2: color_line = "Purple"; break;
	case 3: color_line = "Green"; break;
	case 4: color_line = "Black"; break;
	}
}
	
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	dashStyle_line = DashStyle::Solid;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	dashStyle_line = DashStyle::Dash;
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	dashStyle_line = DashStyle::Dot;
}

private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (listBox1->SelectedIndex)
	{
	case 0: dashStyle_obj = DashStyle::Solid; break;
	case 1: dashStyle_obj = DashStyle::Dash; break;
	case 2: dashStyle_obj = DashStyle::Dot; break;
	}
}
private: System::Void comboBox2_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	switch (comboBox2->SelectedIndex)
	{
	case 0: color_obj = "Red"; break;
	case 1: color_obj = "Blue"; break;
	case 2: color_obj = "Purple"; break;
	case 3: color_obj = "Green"; break;
	case 4: color_obj = "Black"; break;
	}
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (comboBox3->SelectedIndex)
	{
	case 0: speed = 5; break;
	case 1: speed = 13; break;
	case 2: speed = 19; break;
	case 3: speed = 22; break;
	case 4: speed = 25; break;
	}
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (comboBox4->SelectedIndex)
	{
	case 0: speed_rotate = 1; break;
	case 1: speed_rotate = 2; break;
	case 2: speed_rotate = 3; break;
	case 3: speed_rotate = 4; break;
	case 4: speed_rotate = 5; break;
	}
	label20->Text = "Кол-во оборотов: " + speed_rotate;
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (puls)
		puls = false;
	else puls = true;
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (comboBox5->SelectedIndex)
	{
	case 0: coeff_puls = 200; break;
	case 1: coeff_puls = 130; break;
	case 2: coeff_puls = 70; break;
	case 3: coeff_puls = 30; break;
	case 4: coeff_puls = 10; break;
	}
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (comboBox6->SelectedIndex)
	{
	case 0: revers_go = true; break;
	case 1: revers_go = false; break;
	
	}
}
private: System::Void comboBox7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (comboBox7->SelectedIndex)
	{
	case 4: detalization = 1; break;
	case 3: detalization = 1.3; break;
	case 2: detalization = 1.7; break;
	case 1: detalization = 2.1; break;
	case 0: detalization = 2.4; break;
	}
}

};
}
