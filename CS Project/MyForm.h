#pragma once

namespace CSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int total = 0;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;

	private: System::Windows::Forms::Button^ button17;
	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
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
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Yes;
			this->button1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(30, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 120);
			this->button1->TabIndex = 0;
			this->button1->Text = L"\r\nJFC\r\n(Junjie\'s Fried Chicken)\r\n\r\n$8";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(30, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(120, 19);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Yeah, Mains!";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(30, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 120);
			this->button2->TabIndex = 3;
			this->button2->Text = L"\r\nJunjie\'s Special Pizza\r\n\r\n$10";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(30, 352);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 120);
			this->button3->TabIndex = 4;
			this->button3->Text = L"\r\nJunjie\'s Favorite Cheeseburger\r\n\r\n$6";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(30, 478);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 120);
			this->button4->TabIndex = 5;
			this->button4->Text = L"\r\nJunjie\'s Unique Rolls\r\n\r\n$7";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(30, 604);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 120);
			this->button5->TabIndex = 6;
			this->button5->Text = L"\r\nJunjie\'s Top Tier Hot Dog\r\n\r\n$3";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(180, 75);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(120, 19);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"Sides\? Yeah!";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(180, 100);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 120);
			this->button6->TabIndex = 8;
			this->button6->Text = L"\r\nJunjie\'s Bangala French Fries\r\n\r\n$2";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(180, 226);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(120, 120);
			this->button7->TabIndex = 9;
			this->button7->Text = L"\r\nJunjie\'s One and Only Tater Tots\r\n\r\n$2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(330, 75);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(120, 19);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"Sweets\? Pog!";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(480, 75);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(120, 19);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"Drinks!";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(630, 75);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(120, 19);
			this->textBox6->TabIndex = 12;
			this->textBox6->Text = L"SPECIAL!!!";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(330, 100);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(120, 120);
			this->button8->TabIndex = 13;
			this->button8->Text = L"\r\nJunjie\'s Tasty Ice Cream Cone\r\n\r\n$1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(330, 226);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(120, 120);
			this->button9->TabIndex = 14;
			this->button9->Text = L"\r\nJunjie\'s Incredible Cheesecake\r\n\r\n$4";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(480, 100);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(120, 120);
			this->button10->TabIndex = 15;
			this->button10->Text = L"\r\nJunjie\'s Cool Cold Freezing Cola\r\n\r\n$1";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(480, 226);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(120, 120);
			this->button11->TabIndex = 16;
			this->button11->Text = L"\r\nJunjie\'s Refreshing Lemonade\r\n\r\n$1";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(630, 100);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(120, 120);
			this->button12->TabIndex = 17;
			this->button12->Text = L"\r\nTsegaab\'s Delicious Tacos\r\n\r\n$5";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(630, 226);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(120, 120);
			this->button13->TabIndex = 18;
			this->button13->Text = L"\r\nRoyce\'s Wonderful Tamales\r\n\r\n$4";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(630, 352);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(120, 120);
			this->button14->TabIndex = 19;
			this->button14->Text = L"\r\nMiguel\'s Bangers Burrito\r\n\r\n$5";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(630, 478);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(120, 120);
			this->button15->TabIndex = 20;
			this->button15->Text = L"\r\nKliuvert\'s Fantastic Pozole!\r\n\r\n$15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(630, 604);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(120, 120);
			this->button16->TabIndex = 21;
			this->button16->Text = L"\r\nCalvin\'s Amazing Steak\r\n\r\n$18";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(250, 684);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(180, 40);
			this->button17->TabIndex = 22;
			this->button17->Text = L"Print Total";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(504, 604);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(120, 120);
			this->button18->TabIndex = 23;
			this->button18->Text = L"\r\nRuben\'s Remarkable Curry\r\n\r\n$7";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(200, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(374, 32);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Welcome to Junjie\'s Quick Eats!";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->Location = System::Drawing::Point(180, 352);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 246);
			this->textBox1->TabIndex = 25;
			this->textBox1->WordWrap = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 761);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->AppendText("Fried Chicken!");
		textBox1->Text += "\r\n";
		total += 5;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Cheeseburger!");
	textBox1->Text += "\r\n";
	total += 6;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Ruben's Remarkable Curry!");
	textBox1->Text += "\r\n";
	total += 7;
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Pizza!");
	textBox1->Text += "\r\n";
	total += 10;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Cheesecake!");
	textBox1->Text += "\r\n";
	total += 4;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Lemonade!");
	textBox1->Text += "\r\n";
	total += 1;
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	textBox1->SelectionStart = textBox1->TextLength;
	textBox1->ScrollToCaret();
}
private: System::Void button1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Rolls!");
	textBox1->Text += "\r\n";
	total += 7;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Hot Dog!");
	textBox1->Text += "\r\n";
	total += 3;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("French Fries!");
	textBox1->Text += "\r\n";
	total += 2;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Tater Tots!");
	textBox1->Text += "\r\n";
	total += 2;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Ice Cream Cone!");
	textBox1->Text += "\r\n";
	total += 1;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Cola!");
	textBox1->Text += "\r\n";
	total += 1;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Tsegaab's Delicious Tacos!");
	textBox1->Text += "\r\n";
	total += 5;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Royce's Wonderful Tamales!");
	textBox1->Text += "\r\n";
	total += 4;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Miguel's Bangers Burrito!");
	textBox1->Text += "\r\n";
	total += 5;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Calvin's Amazing Steak!");
	textBox1->Text += "\r\n";
	total += 18;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("$" + System::Convert::ToString(total));
	textBox1->Text += "\r\n";

}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("Kliuvert's Fantastic Pozole!");
	textBox1->Text += "\r\n";
	total += 15;
}
};
}
