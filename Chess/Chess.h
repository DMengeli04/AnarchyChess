#pragma once

namespace Chess {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Chess
	/// </summary>
	public ref class Chess : public System::Windows::Forms::Form
	{
	public:
		Chess(void)
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
		~Chess()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox19;

	private: System::Windows::Forms::PictureBox^ pictureBox21;


	private: System::Windows::Forms::PictureBox^ pictureBox25;




	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox33;

	private: System::Windows::Forms::PictureBox^ pictureBox31;

	private: System::Windows::Forms::PictureBox^ pictureBox35;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox28;
	private: System::Windows::Forms::PictureBox^ pictureBox34;
	private: System::Windows::Forms::PictureBox^ pictureBox36;
	private: System::Windows::Forms::PictureBox^ pictureBox37;
	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::PictureBox^ pictureBox38;
	private: System::Windows::Forms::PictureBox^ pictureBox39;
	private: System::Windows::Forms::PictureBox^ pictureBox40;
	private: System::Windows::Forms::PictureBox^ pictureBox42;
	private: System::Windows::Forms::PictureBox^ pictureBox45;
	private: System::Windows::Forms::PictureBox^ pictureBox41;
	private: System::Windows::Forms::PictureBox^ pictureBox43;
	private: System::Windows::Forms::PictureBox^ pictureBox44;
	private: System::Windows::Forms::PictureBox^ pictureBox46;
	private: System::Windows::Forms::PictureBox^ pictureBox47;
	private: System::Windows::Forms::PictureBox^ pictureBox48;
	private: System::Windows::Forms::PictureBox^ pictureBox49;
	private: System::Windows::Forms::PictureBox^ pictureBox50;
	private: System::Windows::Forms::PictureBox^ pictureBox51;
	private: System::Windows::Forms::PictureBox^ pictureBox52;
	private: System::Windows::Forms::PictureBox^ pictureBox53;
	private: System::Windows::Forms::PictureBox^ pictureBox54;
	private: System::Windows::Forms::PictureBox^ pictureBox55;
	private: System::Windows::Forms::PictureBox^ pictureBox56;
	private: System::Windows::Forms::PictureBox^ pictureBox57;
	private: System::Windows::Forms::PictureBox^ pictureBox58;
	private: System::Windows::Forms::PictureBox^ pictureBox59;
	private: System::Windows::Forms::PictureBox^ pictureBox60;
	private: System::Windows::Forms::PictureBox^ pictureBox61;
	private: System::Windows::Forms::PictureBox^ pictureBox62;
	private: System::Windows::Forms::PictureBox^ pictureBox63;
	private: System::Windows::Forms::PictureBox^ pictureBox64;
	private: System::Windows::Forms::PictureBox^ pictureBox65;
	private: System::Windows::Forms::PictureBox^ pictureBox66;
	private: System::Windows::Forms::PictureBox^ pictureBox67;
	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Chess::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(70, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(864, 864);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Chess::pictureBox1_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"Black_Bishop.png");
			this->imageList1->Images->SetKeyName(1, L"Black_King.png");
			this->imageList1->Images->SetKeyName(2, L"Black_Knight.png");
			this->imageList1->Images->SetKeyName(3, L"Black_Pawn.png");
			this->imageList1->Images->SetKeyName(4, L"Black_Queen.png");
			this->imageList1->Images->SetKeyName(5, L"Black_Rook.png");
			this->imageList1->Images->SetKeyName(6, L"White_Bishop.png");
			this->imageList1->Images->SetKeyName(7, L"White_King.png");
			this->imageList1->Images->SetKeyName(8, L"White_Knight.png");
			this->imageList1->Images->SetKeyName(9, L"White_Pawn.png");
			this->imageList1->Images->SetKeyName(10, L"White_Queen.png");
			this->imageList1->Images->SetKeyName(11, L"White_Rook.png");
			this->imageList1->Images->SetKeyName(12, L"Empty.png");
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(319, 643);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(80, 80);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Chess::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Black;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(511, 643);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(80, 80);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Chess::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Black;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(702, 643);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(80, 80);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Chess::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Black;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(125, 643);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(80, 80);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Chess::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Black;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(224, 741);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(80, 80);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Chess::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Black;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(414, 741);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(80, 80);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Chess::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Black;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(606, 741);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(80, 80);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Chess::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Black;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(798, 741);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(80, 80);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Chess::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::White;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(606, 643);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(80, 80);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 9;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Chess::pictureBox10_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::White;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(798, 643);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(80, 80);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 10;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &Chess::pictureBox11_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::White;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(702, 741);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(80, 80);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 11;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &Chess::pictureBox12_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::White;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(511, 741);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(80, 80);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 12;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &Chess::pictureBox13_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::White;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(414, 643);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(80, 80);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 13;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &Chess::pictureBox14_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::White;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(319, 741);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(80, 80);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 14;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &Chess::pictureBox15_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::White;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(224, 643);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(80, 80);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 15;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &Chess::pictureBox16_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::White;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(125, 741);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(80, 80);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 16;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &Chess::pictureBox17_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::White;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(125, 165);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(80, 80);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 33;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &Chess::pictureBox18_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::White;
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(224, 69);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(80, 80);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox19->TabIndex = 32;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &Chess::pictureBox19_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::White;
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(414, 69);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(80, 80);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox21->TabIndex = 30;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &Chess::pictureBox21_Click);
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::White;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(606, 69);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(80, 80);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox25->TabIndex = 26;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &Chess::pictureBox25_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::Black;
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(125, 69);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(80, 80);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox30->TabIndex = 21;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &Chess::pictureBox30_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::Black;
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(511, 69);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(80, 80);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox32->TabIndex = 19;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &Chess::pictureBox32_Click);
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::Black;
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(319, 69);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(80, 80);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox33->TabIndex = 18;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Click += gcnew System::EventHandler(this, &Chess::pictureBox33_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::Black;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(702, 69);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(80, 80);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox31->TabIndex = 35;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &Chess::pictureBox31_Click);
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackColor = System::Drawing::Color::White;
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(798, 69);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(80, 80);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox35->TabIndex = 37;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Click += gcnew System::EventHandler(this, &Chess::pictureBox35_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::White;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(319, 165);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(80, 80);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox20->TabIndex = 38;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &Chess::pictureBox20_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::White;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(511, 165);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(80, 80);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox22->TabIndex = 39;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &Chess::pictureBox22_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::White;
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(702, 165);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(80, 80);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox27->TabIndex = 41;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &Chess::pictureBox27_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::Black;
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(414, 165);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(80, 80);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox23->TabIndex = 42;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &Chess::pictureBox23_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::Black;
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(606, 165);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(80, 80);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox28->TabIndex = 43;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Click += gcnew System::EventHandler(this, &Chess::pictureBox28_Click);
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::Black;
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(798, 165);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(80, 80);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox34->TabIndex = 44;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Click += gcnew System::EventHandler(this, &Chess::pictureBox34_Click);
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackColor = System::Drawing::Color::White;
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(224, 260);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(80, 80);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox36->TabIndex = 45;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Click += gcnew System::EventHandler(this, &Chess::pictureBox36_Click);
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackColor = System::Drawing::Color::White;
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(319, 548);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(80, 80);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox37->TabIndex = 46;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Click += gcnew System::EventHandler(this, &Chess::pictureBox37_Click);
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::Black;
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(224, 165);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(80, 80);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox29->TabIndex = 22;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &Chess::pictureBox29_Click);
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackColor = System::Drawing::Color::White;
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(414, 452);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(80, 80);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox38->TabIndex = 47;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Click += gcnew System::EventHandler(this, &Chess::pictureBox38_Click);
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackColor = System::Drawing::Color::White;
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(511, 356);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(80, 80);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox39->TabIndex = 48;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Click += gcnew System::EventHandler(this, &Chess::pictureBox39_Click);
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackColor = System::Drawing::Color::White;
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(606, 452);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(80, 80);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox40->TabIndex = 49;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Click += gcnew System::EventHandler(this, &Chess::pictureBox40_Click);
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackColor = System::Drawing::Color::White;
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(511, 548);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(80, 80);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox42->TabIndex = 51;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Click += gcnew System::EventHandler(this, &Chess::pictureBox42_Click);
			// 
			// pictureBox45
			// 
			this->pictureBox45->BackColor = System::Drawing::Color::White;
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(702, 548);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(80, 80);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox45->TabIndex = 54;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Click += gcnew System::EventHandler(this, &Chess::pictureBox45_Click);
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackColor = System::Drawing::Color::White;
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(798, 452);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(80, 80);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox41->TabIndex = 55;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Click += gcnew System::EventHandler(this, &Chess::pictureBox41_Click);
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackColor = System::Drawing::Color::White;
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(702, 356);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(80, 80);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox43->TabIndex = 56;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Click += gcnew System::EventHandler(this, &Chess::pictureBox43_Click);
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackColor = System::Drawing::Color::White;
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(798, 260);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(80, 80);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox44->TabIndex = 57;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Click += gcnew System::EventHandler(this, &Chess::pictureBox44_Click);
			// 
			// pictureBox46
			// 
			this->pictureBox46->BackColor = System::Drawing::Color::White;
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(606, 260);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(80, 80);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox46->TabIndex = 58;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Click += gcnew System::EventHandler(this, &Chess::pictureBox46_Click);
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackColor = System::Drawing::Color::White;
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(414, 260);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(80, 80);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox47->TabIndex = 59;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Click += gcnew System::EventHandler(this, &Chess::pictureBox47_Click);
			// 
			// pictureBox48
			// 
			this->pictureBox48->BackColor = System::Drawing::Color::White;
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(319, 356);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(80, 80);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox48->TabIndex = 60;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Click += gcnew System::EventHandler(this, &Chess::pictureBox48_Click);
			// 
			// pictureBox49
			// 
			this->pictureBox49->BackColor = System::Drawing::Color::White;
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(125, 356);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(80, 80);
			this->pictureBox49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox49->TabIndex = 61;
			this->pictureBox49->TabStop = false;
			this->pictureBox49->Click += gcnew System::EventHandler(this, &Chess::pictureBox49_Click);
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackColor = System::Drawing::Color::White;
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(125, 548);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(80, 80);
			this->pictureBox50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox50->TabIndex = 62;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Click += gcnew System::EventHandler(this, &Chess::pictureBox50_Click);
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackColor = System::Drawing::Color::White;
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(224, 452);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(80, 80);
			this->pictureBox51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox51->TabIndex = 63;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Click += gcnew System::EventHandler(this, &Chess::pictureBox51_Click);
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackColor = System::Drawing::Color::Black;
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(319, 452);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(80, 80);
			this->pictureBox52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox52->TabIndex = 64;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->Click += gcnew System::EventHandler(this, &Chess::pictureBox52_Click);
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackColor = System::Drawing::Color::Black;
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(125, 260);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(80, 80);
			this->pictureBox53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox53->TabIndex = 65;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Click += gcnew System::EventHandler(this, &Chess::pictureBox53_Click);
			// 
			// pictureBox54
			// 
			this->pictureBox54->BackColor = System::Drawing::Color::Black;
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(319, 260);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(80, 80);
			this->pictureBox54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox54->TabIndex = 66;
			this->pictureBox54->TabStop = false;
			this->pictureBox54->Click += gcnew System::EventHandler(this, &Chess::pictureBox54_Click);
			// 
			// pictureBox55
			// 
			this->pictureBox55->BackColor = System::Drawing::Color::Black;
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(511, 260);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(80, 80);
			this->pictureBox55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox55->TabIndex = 67;
			this->pictureBox55->TabStop = false;
			this->pictureBox55->Click += gcnew System::EventHandler(this, &Chess::pictureBox55_Click);
			// 
			// pictureBox56
			// 
			this->pictureBox56->BackColor = System::Drawing::Color::Black;
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(702, 260);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(80, 80);
			this->pictureBox56->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox56->TabIndex = 68;
			this->pictureBox56->TabStop = false;
			this->pictureBox56->Click += gcnew System::EventHandler(this, &Chess::pictureBox56_Click);
			// 
			// pictureBox57
			// 
			this->pictureBox57->BackColor = System::Drawing::Color::Black;
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(224, 548);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(80, 80);
			this->pictureBox57->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox57->TabIndex = 69;
			this->pictureBox57->TabStop = false;
			this->pictureBox57->Click += gcnew System::EventHandler(this, &Chess::pictureBox57_Click);
			// 
			// pictureBox58
			// 
			this->pictureBox58->BackColor = System::Drawing::Color::Black;
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(414, 548);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(80, 80);
			this->pictureBox58->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox58->TabIndex = 70;
			this->pictureBox58->TabStop = false;
			this->pictureBox58->Click += gcnew System::EventHandler(this, &Chess::pictureBox58_Click);
			// 
			// pictureBox59
			// 
			this->pictureBox59->BackColor = System::Drawing::Color::Black;
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(606, 548);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(80, 80);
			this->pictureBox59->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox59->TabIndex = 71;
			this->pictureBox59->TabStop = false;
			this->pictureBox59->Click += gcnew System::EventHandler(this, &Chess::pictureBox59_Click);
			// 
			// pictureBox60
			// 
			this->pictureBox60->BackColor = System::Drawing::Color::Black;
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(798, 548);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(80, 80);
			this->pictureBox60->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox60->TabIndex = 72;
			this->pictureBox60->TabStop = false;
			this->pictureBox60->Click += gcnew System::EventHandler(this, &Chess::pictureBox60_Click);
			// 
			// pictureBox61
			// 
			this->pictureBox61->BackColor = System::Drawing::Color::Black;
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(511, 452);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(80, 80);
			this->pictureBox61->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox61->TabIndex = 73;
			this->pictureBox61->TabStop = false;
			this->pictureBox61->Click += gcnew System::EventHandler(this, &Chess::pictureBox61_Click);
			// 
			// pictureBox62
			// 
			this->pictureBox62->BackColor = System::Drawing::Color::Black;
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(702, 452);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(80, 80);
			this->pictureBox62->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox62->TabIndex = 74;
			this->pictureBox62->TabStop = false;
			this->pictureBox62->Click += gcnew System::EventHandler(this, &Chess::pictureBox62_Click);
			// 
			// pictureBox63
			// 
			this->pictureBox63->BackColor = System::Drawing::Color::Black;
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(125, 452);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(80, 80);
			this->pictureBox63->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox63->TabIndex = 75;
			this->pictureBox63->TabStop = false;
			this->pictureBox63->Click += gcnew System::EventHandler(this, &Chess::pictureBox63_Click);
			// 
			// pictureBox64
			// 
			this->pictureBox64->BackColor = System::Drawing::Color::Black;
			this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.Image")));
			this->pictureBox64->Location = System::Drawing::Point(224, 356);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(80, 80);
			this->pictureBox64->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox64->TabIndex = 76;
			this->pictureBox64->TabStop = false;
			this->pictureBox64->Click += gcnew System::EventHandler(this, &Chess::pictureBox64_Click);
			// 
			// pictureBox65
			// 
			this->pictureBox65->BackColor = System::Drawing::Color::Black;
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(414, 356);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(80, 80);
			this->pictureBox65->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox65->TabIndex = 77;
			this->pictureBox65->TabStop = false;
			this->pictureBox65->Click += gcnew System::EventHandler(this, &Chess::pictureBox65_Click);
			// 
			// pictureBox66
			// 
			this->pictureBox66->BackColor = System::Drawing::Color::Black;
			this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.Image")));
			this->pictureBox66->Location = System::Drawing::Point(606, 356);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(80, 80);
			this->pictureBox66->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox66->TabIndex = 78;
			this->pictureBox66->TabStop = false;
			this->pictureBox66->Click += gcnew System::EventHandler(this, &Chess::pictureBox66_Click);
			// 
			// pictureBox67
			// 
			this->pictureBox67->BackColor = System::Drawing::Color::Black;
			this->pictureBox67->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox67.Image")));
			this->pictureBox67->Location = System::Drawing::Point(798, 356);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(80, 80);
			this->pictureBox67->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox67->TabIndex = 79;
			this->pictureBox67->TabStop = false;
			this->pictureBox67->Click += gcnew System::EventHandler(this, &Chess::pictureBox67_Click);
			// 
			// Chess
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1924, 1001);
			this->Controls->Add(this->pictureBox67);
			this->Controls->Add(this->pictureBox66);
			this->Controls->Add(this->pictureBox65);
			this->Controls->Add(this->pictureBox64);
			this->Controls->Add(this->pictureBox63);
			this->Controls->Add(this->pictureBox62);
			this->Controls->Add(this->pictureBox61);
			this->Controls->Add(this->pictureBox60);
			this->Controls->Add(this->pictureBox59);
			this->Controls->Add(this->pictureBox58);
			this->Controls->Add(this->pictureBox57);
			this->Controls->Add(this->pictureBox56);
			this->Controls->Add(this->pictureBox55);
			this->Controls->Add(this->pictureBox54);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->pictureBox52);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Chess";
			this->Text = L"Chess";
			this->Load += gcnew System::EventHandler(this, &Chess::Chess_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void Chess_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	//C2
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	//A2
}
private: System::Void pictureBox30_Click(System::Object^ sender, System::EventArgs^ e) {
	//A8

	pictureBox30->Image = imageList1->Images[6];
}
private: System::Void pictureBox19_Click(System::Object^ sender, System::EventArgs^ e) {
	//B8
}
private: System::Void pictureBox33_Click(System::Object^ sender, System::EventArgs^ e) {
	//C8
}
private: System::Void pictureBox21_Click(System::Object^ sender, System::EventArgs^ e) {
	//D8
}
private: System::Void pictureBox32_Click(System::Object^ sender, System::EventArgs^ e) {
	//E8
}
private: System::Void pictureBox25_Click(System::Object^ sender, System::EventArgs^ e) {
	//F8
}
private: System::Void pictureBox18_Click(System::Object^ sender, System::EventArgs^ e) {
	//A7
}
private: System::Void pictureBox29_Click(System::Object^ sender, System::EventArgs^ e) {
	//B7
}
private: System::Void pictureBox31_Click(System::Object^ sender, System::EventArgs^ e) {
	//G8	
}
private: System::Void pictureBox35_Click(System::Object^ sender, System::EventArgs^ e) {
	//H8
}
private: System::Void pictureBox20_Click(System::Object^ sender, System::EventArgs^ e) {
	//C7
}
private: System::Void pictureBox23_Click(System::Object^ sender, System::EventArgs^ e) {
	//D7
}
private: System::Void pictureBox22_Click(System::Object^ sender, System::EventArgs^ e) {
	//E7
}
private: System::Void pictureBox28_Click(System::Object^ sender, System::EventArgs^ e) {
	//F7
}
private: System::Void pictureBox27_Click(System::Object^ sender, System::EventArgs^ e) {
	//G7
}
private: System::Void pictureBox34_Click(System::Object^ sender, System::EventArgs^ e) {
	//H7
}
private: System::Void pictureBox16_Click(System::Object^ sender, System::EventArgs^ e) {
	//B2
}
private: System::Void pictureBox14_Click(System::Object^ sender, System::EventArgs^ e) {
	//D2
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	//E2
}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
	//F2
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	//G2
}
private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
	//H2
}
private: System::Void pictureBox17_Click(System::Object^ sender, System::EventArgs^ e) {
	//A1
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	//B1
}
private: System::Void pictureBox15_Click(System::Object^ sender, System::EventArgs^ e) {
	//C1
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	//D1
}
private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e) {
	//E1
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	//F1
}
private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
	//G1
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	//H1
}

private: System::Void pictureBox36_Click(System::Object^ sender, System::EventArgs^ e) {
	//B6
}
private: System::Void pictureBox50_Click(System::Object^ sender, System::EventArgs^ e) {
	//A3
}
private: System::Void pictureBox57_Click(System::Object^ sender, System::EventArgs^ e) {
	//B3
}
private: System::Void pictureBox37_Click(System::Object^ sender, System::EventArgs^ e) {
	//C3
}
private: System::Void pictureBox58_Click(System::Object^ sender, System::EventArgs^ e) {
	//D3
}
private: System::Void pictureBox42_Click(System::Object^ sender, System::EventArgs^ e) {
	//E3
}
private: System::Void pictureBox59_Click(System::Object^ sender, System::EventArgs^ e) {
	//F3
}
private: System::Void pictureBox45_Click(System::Object^ sender, System::EventArgs^ e) {
	//G3
}
private: System::Void pictureBox60_Click(System::Object^ sender, System::EventArgs^ e) {
	//H3
}
private: System::Void pictureBox63_Click(System::Object^ sender, System::EventArgs^ e) {
	//A4
}
private: System::Void pictureBox51_Click(System::Object^ sender, System::EventArgs^ e) {
	//B4
}
private: System::Void pictureBox52_Click(System::Object^ sender, System::EventArgs^ e) {
	//C4
}
private: System::Void pictureBox38_Click(System::Object^ sender, System::EventArgs^ e) {
	//D4
}
private: System::Void pictureBox61_Click(System::Object^ sender, System::EventArgs^ e) {
	//E4
}
private: System::Void pictureBox40_Click(System::Object^ sender, System::EventArgs^ e) {
	//F4
}
private: System::Void pictureBox62_Click(System::Object^ sender, System::EventArgs^ e) {
	//G4
}
private: System::Void pictureBox41_Click(System::Object^ sender, System::EventArgs^ e) {
	//H4
}
private: System::Void pictureBox49_Click(System::Object^ sender, System::EventArgs^ e) {
	//A5
}
private: System::Void pictureBox64_Click(System::Object^ sender, System::EventArgs^ e) {
	//B5
}
private: System::Void pictureBox48_Click(System::Object^ sender, System::EventArgs^ e) {
	//C5
}
private: System::Void pictureBox65_Click(System::Object^ sender, System::EventArgs^ e) {
	//D5
}
private: System::Void pictureBox39_Click(System::Object^ sender, System::EventArgs^ e) {
	//E5
}
private: System::Void pictureBox66_Click(System::Object^ sender, System::EventArgs^ e) {
	//F5
}
private: System::Void pictureBox43_Click(System::Object^ sender, System::EventArgs^ e) {
	//G5
}
private: System::Void pictureBox67_Click(System::Object^ sender, System::EventArgs^ e) {
	//H5
}
private: System::Void pictureBox53_Click(System::Object^ sender, System::EventArgs^ e) {
	//A6
}
private: System::Void pictureBox54_Click(System::Object^ sender, System::EventArgs^ e) {
	//C6
}
private: System::Void pictureBox47_Click(System::Object^ sender, System::EventArgs^ e) {
	//D6
}
private: System::Void pictureBox55_Click(System::Object^ sender, System::EventArgs^ e) {
	//E6
}
private: System::Void pictureBox46_Click(System::Object^ sender, System::EventArgs^ e) {
	//F6
}
private: System::Void pictureBox56_Click(System::Object^ sender, System::EventArgs^ e) {
	//G6
}
private: System::Void pictureBox44_Click(System::Object^ sender, System::EventArgs^ e) {
	//H6
}
};
}
