#pragma once

namespace BillingSystem 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

		double Pen = 10.00;
		double Pencil = 5.00;
		double Notebook = 30.00;
		double Schoolbag = 500.00;

		   double Exampad = 100.00;
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnExit;

	private: System::Windows::Forms::Button^ btnReset;

	private: System::Windows::Forms::Button^ btnPrint;

	private: System::Windows::Forms::Button^ btnReceipt;


	private: System::Windows::Forms::Button^ btnTotal;
	private: System::Windows::Forms::RichTextBox^ rtReceipt;
	private: System::Windows::Forms::Label^ lblCost;
	private: System::Windows::Forms::Label^ numitem;



	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ lblEP;

	private: System::Windows::Forms::Label^ lblSB;

	private: System::Windows::Forms::Label^ lblNb;

	private: System::Windows::Forms::Label^ lblPencil;

	private: System::Windows::Forms::Label^ lblPen;
	private: System::Windows::Forms::NumericUpDown^ numEP;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::NumericUpDown^ numSB;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ numNb;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numPencil;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numPen;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->btnReceipt = (gcnew System::Windows::Forms::Button());
			this->btnTotal = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->rtReceipt = (gcnew System::Windows::Forms::RichTextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->lblCost = (gcnew System::Windows::Forms::Label());
			this->numitem = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lblEP = (gcnew System::Windows::Forms::Label());
			this->lblSB = (gcnew System::Windows::Forms::Label());
			this->lblNb = (gcnew System::Windows::Forms::Label());
			this->lblPencil = (gcnew System::Windows::Forms::Label());
			this->lblPen = (gcnew System::Windows::Forms::Label());
			this->numEP = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numSB = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numNb = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numPencil = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numPen = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numEP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNb))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPencil))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPen))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::CadetBlue;
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1346, 640);
			this->panel1->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Control;
			this->panel5->Controls->Add(this->btnExit);
			this->panel5->Controls->Add(this->btnReset);
			this->panel5->Controls->Add(this->btnPrint);
			this->panel5->Controls->Add(this->btnReceipt);
			this->panel5->Controls->Add(this->btnTotal);
			this->panel5->Location = System::Drawing::Point(12, 548);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1318, 76);
			this->panel5->TabIndex = 1;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::CadetBlue;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::SystemColors::Control;
			this->btnExit->Location = System::Drawing::Point(1065, 3);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(250, 70);
			this->btnExit->TabIndex = 4;
			this->btnExit->Text = L"EXIT";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::CadetBlue;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->ForeColor = System::Drawing::SystemColors::Control;
			this->btnReset->Location = System::Drawing::Point(800, 3);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(250, 70);
			this->btnReset->TabIndex = 3;
			this->btnReset->Text = L"RESET";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// btnPrint
			// 
			this->btnPrint->BackColor = System::Drawing::Color::CadetBlue;
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->ForeColor = System::Drawing::SystemColors::Control;
			this->btnPrint->Location = System::Drawing::Point(532, 3);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(250, 70);
			this->btnPrint->TabIndex = 2;
			this->btnPrint->Text = L"PRINT";
			this->btnPrint->UseVisualStyleBackColor = false;
			this->btnPrint->Click += gcnew System::EventHandler(this, &MyForm::btnPrint_Click);
			// 
			// btnReceipt
			// 
			this->btnReceipt->BackColor = System::Drawing::Color::CadetBlue;
			this->btnReceipt->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReceipt->ForeColor = System::Drawing::SystemColors::Control;
			this->btnReceipt->Location = System::Drawing::Point(269, 3);
			this->btnReceipt->Name = L"btnReceipt";
			this->btnReceipt->Size = System::Drawing::Size(250, 70);
			this->btnReceipt->TabIndex = 1;
			this->btnReceipt->Text = L"RECEIPT";
			this->btnReceipt->UseVisualStyleBackColor = false;
			this->btnReceipt->Click += gcnew System::EventHandler(this, &MyForm::btnReceipt_Click);
			// 
			// btnTotal
			// 
			this->btnTotal->BackColor = System::Drawing::Color::CadetBlue;
			this->btnTotal->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTotal->ForeColor = System::Drawing::SystemColors::Control;
			this->btnTotal->Location = System::Drawing::Point(3, 3);
			this->btnTotal->Name = L"btnTotal";
			this->btnTotal->Size = System::Drawing::Size(250, 70);
			this->btnTotal->TabIndex = 0;
			this->btnTotal->Text = L"TOTAL";
			this->btnTotal->UseVisualStyleBackColor = false;
			this->btnTotal->Click += gcnew System::EventHandler(this, &MyForm::btnTotal_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->rtReceipt);
			this->panel4->Location = System::Drawing::Point(858, 111);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(472, 423);
			this->panel4->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::CadetBlue;
			this->label3->Location = System::Drawing::Point(199, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 36);
			this->label3->TabIndex = 10;
			this->label3->Text = L"RECEIPT";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// rtReceipt
			// 
			this->rtReceipt->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtReceipt->Location = System::Drawing::Point(3, 46);
			this->rtReceipt->Name = L"rtReceipt";
			this->rtReceipt->Size = System::Drawing::Size(466, 374);
			this->rtReceipt->TabIndex = 0;
			this->rtReceipt->Text = L"";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->lblCost);
			this->panel3->Controls->Add(this->numitem);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->lblEP);
			this->panel3->Controls->Add(this->lblSB);
			this->panel3->Controls->Add(this->lblNb);
			this->panel3->Controls->Add(this->lblPencil);
			this->panel3->Controls->Add(this->lblPen);
			this->panel3->Controls->Add(this->numEP);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->numSB);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->numNb);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->numPencil);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->numPen);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(12, 111);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(831, 423);
			this->panel3->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::CadetBlue;
			this->label17->Location = System::Drawing::Point(611, 35);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(82, 36);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Price";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::CadetBlue;
			this->label16->Location = System::Drawing::Point(323, 35);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(135, 36);
			this->label16->TabIndex = 8;
			this->label16->Text = L"Quantity";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::CadetBlue;
			this->label15->Location = System::Drawing::Point(128, 35);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(91, 36);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Items";
			// 
			// lblCost
			// 
			this->lblCost->BackColor = System::Drawing::Color::White;
			this->lblCost->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblCost->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCost->Location = System::Drawing::Point(532, 358);
			this->lblCost->Name = L"lblCost";
			this->lblCost->Size = System::Drawing::Size(238, 31);
			this->lblCost->TabIndex = 6;
			this->lblCost->Text = L"₹ 00.00";
			this->lblCost->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numitem
			// 
			this->numitem->BackColor = System::Drawing::Color::White;
			this->numitem->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->numitem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numitem->Location = System::Drawing::Point(266, 359);
			this->numitem->Name = L"numitem";
			this->numitem->Size = System::Drawing::Size(238, 31);
			this->numitem->TabIndex = 5;
			this->numitem->Text = L"0";
			this->numitem->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(93, 354);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(93, 36);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Total ";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// lblEP
			// 
			this->lblEP->BackColor = System::Drawing::Color::White;
			this->lblEP->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblEP->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEP->Location = System::Drawing::Point(532, 267);
			this->lblEP->Name = L"lblEP";
			this->lblEP->Size = System::Drawing::Size(238, 31);
			this->lblEP->TabIndex = 3;
			this->lblEP->Text = L"₹ 00.00";
			this->lblEP->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblSB
			// 
			this->lblSB->BackColor = System::Drawing::Color::White;
			this->lblSB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblSB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSB->Location = System::Drawing::Point(532, 222);
			this->lblSB->Name = L"lblSB";
			this->lblSB->Size = System::Drawing::Size(238, 31);
			this->lblSB->TabIndex = 3;
			this->lblSB->Text = L"₹ 00.00";
			this->lblSB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblNb
			// 
			this->lblNb->BackColor = System::Drawing::Color::White;
			this->lblNb->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblNb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNb->Location = System::Drawing::Point(532, 178);
			this->lblNb->Name = L"lblNb";
			this->lblNb->Size = System::Drawing::Size(238, 31);
			this->lblNb->TabIndex = 3;
			this->lblNb->Text = L"₹ 00.00";
			this->lblNb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblPencil
			// 
			this->lblPencil->BackColor = System::Drawing::Color::White;
			this->lblPencil->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPencil->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPencil->Location = System::Drawing::Point(532, 133);
			this->lblPencil->Name = L"lblPencil";
			this->lblPencil->Size = System::Drawing::Size(238, 31);
			this->lblPencil->TabIndex = 3;
			this->lblPencil->Text = L"₹ 00.00";
			this->lblPencil->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblPencil->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// lblPen
			// 
			this->lblPen->BackColor = System::Drawing::Color::White;
			this->lblPen->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPen->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPen->Location = System::Drawing::Point(532, 88);
			this->lblPen->Name = L"lblPen";
			this->lblPen->Size = System::Drawing::Size(238, 31);
			this->lblPen->TabIndex = 3;
			this->lblPen->Text = L"₹ 00.00";
			this->lblPen->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numEP
			// 
			this->numEP->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numEP->Location = System::Drawing::Point(266, 267);
			this->numEP->Name = L"numEP";
			this->numEP->Size = System::Drawing::Size(239, 39);
			this->numEP->TabIndex = 2;
			this->numEP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numEP->ValueChanged += gcnew System::EventHandler(this, &MyForm::numEP_ValueChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::CadetBlue;
			this->label10->Location = System::Drawing::Point(93, 269);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(126, 31);
			this->label10->TabIndex = 1;
			this->label10->Text = L"ExamPad";
			// 
			// numSB
			// 
			this->numSB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numSB->Location = System::Drawing::Point(266, 222);
			this->numSB->Name = L"numSB";
			this->numSB->Size = System::Drawing::Size(239, 39);
			this->numSB->TabIndex = 2;
			this->numSB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numSB->ValueChanged += gcnew System::EventHandler(this, &MyForm::numSB_ValueChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::CadetBlue;
			this->label8->Location = System::Drawing::Point(93, 224);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 31);
			this->label8->TabIndex = 1;
			this->label8->Text = L"School Bag";
			// 
			// numNb
			// 
			this->numNb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numNb->Location = System::Drawing::Point(266, 177);
			this->numNb->Name = L"numNb";
			this->numNb->Size = System::Drawing::Size(239, 39);
			this->numNb->TabIndex = 2;
			this->numNb->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numNb->ValueChanged += gcnew System::EventHandler(this, &MyForm::numNb_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::CadetBlue;
			this->label6->Location = System::Drawing::Point(93, 179);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(136, 31);
			this->label6->TabIndex = 1;
			this->label6->Text = L"NoteBook";
			// 
			// numPencil
			// 
			this->numPencil->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numPencil->Location = System::Drawing::Point(266, 132);
			this->numPencil->Name = L"numPencil";
			this->numPencil->Size = System::Drawing::Size(239, 39);
			this->numPencil->TabIndex = 2;
			this->numPencil->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numPencil->ValueChanged += gcnew System::EventHandler(this, &MyForm::numPencil_ValueChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::CadetBlue;
			this->label4->Location = System::Drawing::Point(93, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 31);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Pencil";
			// 
			// numPen
			// 
			this->numPen->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numPen->Location = System::Drawing::Point(266, 87);
			this->numPen->Name = L"numPen";
			this->numPen->Size = System::Drawing::Size(239, 39);
			this->numPen->TabIndex = 2;
			this->numPen->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numPen->ValueChanged += gcnew System::EventHandler(this, &MyForm::numPen_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::CadetBlue;
			this->label2->Location = System::Drawing::Point(93, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Pen";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(12, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1318, 84);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::CadetBlue;
			this->label1->Location = System::Drawing::Point(410, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(386, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"HSM Billing System";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numEP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNb))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPencil))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPen))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		numPen->Value = 0;
		numPencil->Value = 0;
		numNb->Value = 0;
		numSB->Value = 0;
		numEP->Value = 0;

		rtReceipt->Clear();
		lblPen->Text = "00.00";
		lblPencil->Text = "00.00";
		lblNb->Text = "00.00";
		lblEP->Text = "00.00";
		lblSB->Text = "00.00";
		lblCost->Text = "00.00";
		numitem->Text = "00";
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		System::Windows::Forms::DialogResult iExit;

		iExit = MessageBox::Show("Confirm You Want to exit !", "Harshal Billing System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (iExit == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void numPen_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	double i = Convert::ToDouble(numPen->Value);
	lblPen->Text = String::Format("{0:0}",i * Pen);
}
private: System::Void numPencil_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
{
	double i = Convert::ToDouble(numPencil->Value);
	lblPencil->Text = String::Format("{0:0}", i * Pencil);
}
private: System::Void numNb_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	double i = Convert::ToDouble(numNb->Value);
	lblNb->Text = String::Format("{0:0}", i * Notebook);
}
private: System::Void numSB_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
{
	double i = Convert::ToDouble(numSB->Value);
	lblSB->Text = String::Format("{0:0}", i * Schoolbag);
}
private: System::Void numEP_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
{
	double i = Convert::ToDouble(numEP->Value);
	lblEP->Text = String::Format("{0:0}", i * Exampad);
}
private: System::Void btnTotal_Click(System::Object^ sender, System::EventArgs^ e) 
{

	double q[7], p[7];
	q[0] = Convert::ToDouble(numPen->Value);
	q[1] = Convert::ToDouble(numPencil->Value);
	q[2] = Convert::ToDouble(numNb->Value);
	q[3] = Convert::ToDouble(numSB->Value);
	q[4] = Convert::ToDouble(numEP->Value);

	q[5] = q[0] + q[1] + q[2] + q[3] + q[4];

	numitem->Text = Convert::ToString(q[5]);

	p[0] = Convert::ToDouble(lblPen->Text);
	p[1] = Convert::ToDouble(lblPencil->Text);
	p[2] = Convert::ToDouble(lblNb->Text);
	p[3] = Convert::ToDouble(lblSB->Text);
	p[4] = Convert::ToDouble(lblEP->Text);

	p[5] = p[0] + p[1] + p[2] + p[3] + p[4];

	lblCost->Text = Convert::ToString(p[5]);

}
private: System::Void btnReceipt_Click(System::Object^ sender, System::EventArgs^ e) 
{
	rtReceipt->Clear();
	rtReceipt->AppendText("\t\t\t"+label1->Text+"\t\t\t");
	rtReceipt->AppendText("----------------------------------\n");
	rtReceipt->AppendText("\t" + label15->Text + "\t\t\t" + label16->Text + "\t\t" + label17->Text + "\n");
	rtReceipt->AppendText("\t"+label2->Text + "\t\t\t" + numPen->Value + "\t\t\t" + lblPen->Text+"\n");
	rtReceipt->AppendText("\t" + label4->Text + "\t\t\t" + numPencil->Value + "\t\t\t" + lblPencil->Text + "\n");
	rtReceipt->AppendText("\t" + label6->Text + "\t\t" + numNb->Value + "\t\t\t" + lblNb->Text + "\n");
	rtReceipt->AppendText("\t" + label8->Text + "\t\t" + numSB->Value + "\t\t\t" + lblSB->Text + "\n");
	rtReceipt->AppendText("\t" + label10->Text + "\t\t" + numEP->Value + "\t\t\t" + lblEP->Text + "\n");
	rtReceipt->AppendText("\t-------------------------------------------------\n");
	rtReceipt->AppendText("\t" + label12->Text + "\t\t\t"+numitem->Text+"\t\t\tRs."+lblCost->Text+"\n");
	rtReceipt->AppendText("\t-------------------------------------------------\n");
	rtReceipt->AppendText("\t-------------Thank You Visit Again!-------------\n");
}
private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) 
{
	printPreviewDialog1->ShowDialog();
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) 
{
	System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Time New Rome", 16, FontStyle::Regular);

	e->Graphics->DrawString(rtReceipt->Text,fntString,Brushes::BlueViolet,100,100);
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
