#pragma once
#include "stdafx.h"

namespace PG208_Library {

	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for FormNewArticle
	/// </summary>
	public ref class FormNewArticle : public System::Windows::Forms::Form
	{
	public:
		FormNewArticle(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			newArticle = gcnew Article;

			editMode = 0;
			this->radioButtonBook->Checked = true;

		}

		FormNewArticle(int fileID, bool editView)//Edit or view mode
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			newArticle = gcnew Article;

			editMode = 1;
			formatEdit(fileID);

			if(isBookOrMagazine)
			{
				Book ^ newBook = gcnew Book;
				newBook->load(fileID);
				writeGeneralData(newBook);

				this->textBoxString1->Text = newBook->getAuthor();//text becomes author
				this->textBoxString2->Text = newBook->getPublisher();
				this->textBoxString3->Text = newBook->getSummary();
				this->textBoxInt1->Text = intToManagedString(newBook->getPages());
			}
			else if(isCD)
			{
				CD ^ newCD = gcnew CD;
				newCD->load(fileID);
				writeGeneralData(newCD);

				this->textBoxString1->Text = newCD->getArtist();
				this->textBoxString2->Text = newCD->getRecordCompany();
				this->textBoxString3->Text = newCD->getMusicStyle();
				this->textBoxInt1->Text = intToManagedString(newCD->getDuration());
				this->textBoxInt2->Text = intToManagedString(newCD->getTracks());
			}
			else if(isDVDOrVHS)
			{
				Video ^ newVideo = gcnew Video;
				newVideo->load(fileID);
				writeGeneralData(newVideo);

				this->textBoxString1->Text = newVideo->getDirector();
				this->textBoxString2->Text = newVideo->getProducer();
				this->textBoxString3->Text = newVideo->getMainActor();
				this->textBoxInt1->Text = intToManagedString(newVideo->getLength());
				this->textBoxInt2->Text = intToManagedString(newVideo->getAgeLimit());

				this->textBoxInt3->Text = intToManagedString(newVideo->getChapters());
			}
			else if(isDigital)
			{
				DigitalRes ^ newCD = gcnew DigitalRes;
				newCD->load(fileID);
				writeGeneralData(newCD);

				this->textBoxString1->Text = newCD->getAuthor();
				this->textBoxString2->Text = newCD->getFileType();
				this->textBoxString3->Text = newCD->getURL();
				this->textBoxInt1->Text = intToManagedString(newCD->getByteSize());
			}

			if(editView == false)//view mode => hide some buttons, disable everything
			{
				this->textBoxID->Enabled = false;
				this->textBoxTitle->Enabled = false;
				this->dateTimePicker->Enabled = false;
				this->textBoxQty->Enabled = false;
				this->buttonPlus1->Visible = false;
				this->buttonMinus1->Visible = false;

				this->textBoxString1->Enabled = false;
				this->textBoxString2->Enabled = false;
				this->textBoxString3->Enabled = false;
				this->textBoxInt1->Enabled = false;
				this->textBoxInt2->Enabled = false;
				this->textBoxInt3->Enabled = false;

				this->buttonCreate->Visible = false;
			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormNewArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButtonBook;

			 System::Windows::Forms::RadioButton^  radioButtonCD;
			 System::Windows::Forms::Button^  buttonCreate;
			 System::Windows::Forms::Label^  labelID;
			 System::Windows::Forms::TextBox^  textBoxID;
			 System::Windows::Forms::TextBox^  textBoxTitle;

			 System::Windows::Forms::Label^  labelTitle;
	private: System::Windows::Forms::TextBox^  textBoxQty;
	private: System::Windows::Forms::Label^  labelQty;


	private: System::Windows::Forms::TextBox^  textBoxString1;

	private: System::Windows::Forms::Label^  labelString1;
	private: System::Windows::Forms::TextBox^  textBoxString2;


	private: System::Windows::Forms::Label^  labelString2;


			 /// <summary>
			 /// Required designer variable.
			 Article ^ newArticle;
			 bool editMode;

			 bool isBookOrMagazine;
			 bool isCD;
			 bool isDVDOrVHS;
			 bool isDigital;

			 System::Windows::Forms::Label^  labelReleaseDate;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	private: System::Windows::Forms::Button^  buttonPlus1;
	private: System::Windows::Forms::Button^  buttonMinus1;
	private: System::Windows::Forms::RadioButton^  radioButtonMagazine;
	private: System::Windows::Forms::TextBox^  textBoxString3;


	private: System::Windows::Forms::Label^  labelString3;
	private: System::Windows::Forms::Label^  labelInt1;
	private: System::Windows::Forms::TextBox^  textBoxInt1;
	private: System::Windows::Forms::TextBox^  textBoxInt2;
	private: System::Windows::Forms::Label^  labelInt2;


	private: System::Windows::Forms::TextBox^  textBoxInt3;
	private: System::Windows::Forms::Label^  labelInt3;


	private: System::Windows::Forms::RadioButton^  radioButtonDVD;
	private: System::Windows::Forms::RadioButton^  radioButtonVHS;
	private: System::Windows::Forms::RadioButton^  radioButtonDigital;


			 /// </summary>
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->radioButtonBook = (gcnew System::Windows::Forms::RadioButton());
				 this->radioButtonCD = (gcnew System::Windows::Forms::RadioButton());
				 this->buttonCreate = (gcnew System::Windows::Forms::Button());
				 this->labelID = (gcnew System::Windows::Forms::Label());
				 this->textBoxID = (gcnew System::Windows::Forms::TextBox());
				 this->textBoxTitle = (gcnew System::Windows::Forms::TextBox());
				 this->labelTitle = (gcnew System::Windows::Forms::Label());
				 this->textBoxQty = (gcnew System::Windows::Forms::TextBox());
				 this->labelQty = (gcnew System::Windows::Forms::Label());
				 this->textBoxString1 = (gcnew System::Windows::Forms::TextBox());
				 this->labelString1 = (gcnew System::Windows::Forms::Label());
				 this->textBoxString2 = (gcnew System::Windows::Forms::TextBox());
				 this->labelString2 = (gcnew System::Windows::Forms::Label());
				 this->labelReleaseDate = (gcnew System::Windows::Forms::Label());
				 this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
				 this->buttonPlus1 = (gcnew System::Windows::Forms::Button());
				 this->buttonMinus1 = (gcnew System::Windows::Forms::Button());
				 this->radioButtonMagazine = (gcnew System::Windows::Forms::RadioButton());
				 this->textBoxString3 = (gcnew System::Windows::Forms::TextBox());
				 this->labelString3 = (gcnew System::Windows::Forms::Label());
				 this->labelInt1 = (gcnew System::Windows::Forms::Label());
				 this->textBoxInt1 = (gcnew System::Windows::Forms::TextBox());
				 this->textBoxInt2 = (gcnew System::Windows::Forms::TextBox());
				 this->labelInt2 = (gcnew System::Windows::Forms::Label());
				 this->textBoxInt3 = (gcnew System::Windows::Forms::TextBox());
				 this->labelInt3 = (gcnew System::Windows::Forms::Label());
				 this->radioButtonDVD = (gcnew System::Windows::Forms::RadioButton());
				 this->radioButtonVHS = (gcnew System::Windows::Forms::RadioButton());
				 this->radioButtonDigital = (gcnew System::Windows::Forms::RadioButton());
				 this->SuspendLayout();
				 // 
				 // radioButtonBook
				 // 
				 this->radioButtonBook->AutoSize = true;
				 this->radioButtonBook->Location = System::Drawing::Point(24, 22);
				 this->radioButtonBook->Name = L"radioButtonBook";
				 this->radioButtonBook->Size = System::Drawing::Size(61, 21);
				 this->radioButtonBook->TabIndex = 0;
				 this->radioButtonBook->TabStop = true;
				 this->radioButtonBook->Text = L"Book";
				 this->radioButtonBook->UseVisualStyleBackColor = true;
				 this->radioButtonBook->CheckedChanged += gcnew System::EventHandler(this, &FormNewArticle::radioButtonBook_CheckedChanged);
				 // 
				 // radioButtonCD
				 // 
				 this->radioButtonCD->AutoSize = true;
				 this->radioButtonCD->Location = System::Drawing::Point(187, 22);
				 this->radioButtonCD->Name = L"radioButtonCD";
				 this->radioButtonCD->Size = System::Drawing::Size(48, 21);
				 this->radioButtonCD->TabIndex = 1;
				 this->radioButtonCD->Text = L"CD";
				 this->radioButtonCD->UseVisualStyleBackColor = true;
				 this->radioButtonCD->CheckedChanged += gcnew System::EventHandler(this, &FormNewArticle::radioButtonCD_CheckedChanged);
				 // 
				 // buttonCreate
				 // 
				 this->buttonCreate->Location = System::Drawing::Point(230, 430);
				 this->buttonCreate->Name = L"buttonCreate";
				 this->buttonCreate->Size = System::Drawing::Size(80, 30);
				 this->buttonCreate->TabIndex = 2;
				 this->buttonCreate->Text = L"Create";
				 this->buttonCreate->UseVisualStyleBackColor = true;
				 this->buttonCreate->Click += gcnew System::EventHandler(this, &FormNewArticle::buttonCreate_Click);
				 // 
				 // labelID
				 // 
				 this->labelID->AutoSize = true;
				 this->labelID->Location = System::Drawing::Point(24, 65);
				 this->labelID->Name = L"labelID";
				 this->labelID->Size = System::Drawing::Size(25, 17);
				 this->labelID->TabIndex = 3;
				 this->labelID->Text = L"ID:";
				 // 
				 // textBoxID
				 // 
				 this->textBoxID->Enabled = false;
				 this->textBoxID->Location = System::Drawing::Point(152, 62);
				 this->textBoxID->Name = L"textBoxID";
				 this->textBoxID->Size = System::Drawing::Size(349, 22);
				 this->textBoxID->TabIndex = 4;
				 this->textBoxID->Text = L"0000";
				 this->textBoxID->TextChanged += gcnew System::EventHandler(this, &FormNewArticle::textBoxID_TextChanged);
				 // 
				 // textBoxTitle
				 // 
				 this->textBoxTitle->Location = System::Drawing::Point(152, 102);
				 this->textBoxTitle->Name = L"textBoxTitle";
				 this->textBoxTitle->Size = System::Drawing::Size(349, 22);
				 this->textBoxTitle->TabIndex = 6;
				 this->textBoxTitle->TextChanged += gcnew System::EventHandler(this, &FormNewArticle::textBoxTitle_TextChanged);
				 // 
				 // labelTitle
				 // 
				 this->labelTitle->AutoSize = true;
				 this->labelTitle->Location = System::Drawing::Point(24, 105);
				 this->labelTitle->Name = L"labelTitle";
				 this->labelTitle->Size = System::Drawing::Size(39, 17);
				 this->labelTitle->TabIndex = 5;
				 this->labelTitle->Text = L"Title:";
				 // 
				 // textBoxQty
				 // 
				 this->textBoxQty->Location = System::Drawing::Point(152, 182);
				 this->textBoxQty->Name = L"textBoxQty";
				 this->textBoxQty->Size = System::Drawing::Size(136, 22);
				 this->textBoxQty->TabIndex = 8;
				 this->textBoxQty->Text = L"0";
				 this->textBoxQty->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBoxQty->TextChanged += gcnew System::EventHandler(this, &FormNewArticle::textBoxQty_TextChanged);
				 // 
				 // labelQty
				 // 
				 this->labelQty->AutoSize = true;
				 this->labelQty->Location = System::Drawing::Point(24, 182);
				 this->labelQty->Name = L"labelQty";
				 this->labelQty->Size = System::Drawing::Size(113, 17);
				 this->labelQty->TabIndex = 7;
				 this->labelQty->Text = L"Quantity Owned:";
				 // 
				 // textBoxString1
				 // 
				 this->textBoxString1->Location = System::Drawing::Point(152, 222);
				 this->textBoxString1->Name = L"textBoxString1";
				 this->textBoxString1->Size = System::Drawing::Size(349, 22);
				 this->textBoxString1->TabIndex = 10;
				 // 
				 // labelString1
				 // 
				 this->labelString1->AutoSize = true;
				 this->labelString1->Location = System::Drawing::Point(24, 224);
				 this->labelString1->Name = L"labelString1";
				 this->labelString1->Size = System::Drawing::Size(83, 17);
				 this->labelString1->TabIndex = 9;
				 this->labelString1->Text = L"labelString1";
				 // 
				 // textBoxString2
				 // 
				 this->textBoxString2->Location = System::Drawing::Point(152, 262);
				 this->textBoxString2->Name = L"textBoxString2";
				 this->textBoxString2->Size = System::Drawing::Size(349, 22);
				 this->textBoxString2->TabIndex = 12;
				 // 
				 // labelString2
				 // 
				 this->labelString2->AutoSize = true;
				 this->labelString2->Location = System::Drawing::Point(24, 262);
				 this->labelString2->Name = L"labelString2";
				 this->labelString2->Size = System::Drawing::Size(83, 17);
				 this->labelString2->TabIndex = 11;
				 this->labelString2->Text = L"labelString2";
				 // 
				 // labelReleaseDate
				 // 
				 this->labelReleaseDate->AutoSize = true;
				 this->labelReleaseDate->Location = System::Drawing::Point(24, 147);
				 this->labelReleaseDate->Name = L"labelReleaseDate";
				 this->labelReleaseDate->Size = System::Drawing::Size(90, 17);
				 this->labelReleaseDate->TabIndex = 14;
				 this->labelReleaseDate->Text = L"Relese Date:";
				 // 
				 // dateTimePicker
				 // 
				 this->dateTimePicker->CustomFormat = L"yyyyMMdd";
				 this->dateTimePicker->Location = System::Drawing::Point(152, 142);
				 this->dateTimePicker->Name = L"dateTimePicker";
				 this->dateTimePicker->Size = System::Drawing::Size(349, 22);
				 this->dateTimePicker->TabIndex = 15;
				 // 
				 // buttonPlus1
				 // 
				 this->buttonPlus1->Location = System::Drawing::Point(294, 182);
				 this->buttonPlus1->Name = L"buttonPlus1";
				 this->buttonPlus1->Size = System::Drawing::Size(68, 23);
				 this->buttonPlus1->TabIndex = 16;
				 this->buttonPlus1->Text = L"+1";
				 this->buttonPlus1->UseVisualStyleBackColor = true;
				 this->buttonPlus1->Click += gcnew System::EventHandler(this, &FormNewArticle::buttonPlus1_Click);
				 // 
				 // buttonMinus1
				 // 
				 this->buttonMinus1->Location = System::Drawing::Point(368, 182);
				 this->buttonMinus1->Name = L"buttonMinus1";
				 this->buttonMinus1->Size = System::Drawing::Size(68, 23);
				 this->buttonMinus1->TabIndex = 17;
				 this->buttonMinus1->Text = L"-1";
				 this->buttonMinus1->UseVisualStyleBackColor = true;
				 this->buttonMinus1->Click += gcnew System::EventHandler(this, &FormNewArticle::buttonMinus1_Click);
				 // 
				 // radioButtonMagazine
				 // 
				 this->radioButtonMagazine->AutoSize = true;
				 this->radioButtonMagazine->Location = System::Drawing::Point(91, 22);
				 this->radioButtonMagazine->Name = L"radioButtonMagazine";
				 this->radioButtonMagazine->Size = System::Drawing::Size(90, 21);
				 this->radioButtonMagazine->TabIndex = 18;
				 this->radioButtonMagazine->Text = L"Magazine";
				 this->radioButtonMagazine->UseVisualStyleBackColor = true;
				 this->radioButtonMagazine->CheckedChanged += gcnew System::EventHandler(this, &FormNewArticle::radioButtonMagazine_CheckedChanged);
				 // 
				 // textBoxString3
				 // 
				 this->textBoxString3->Location = System::Drawing::Point(152, 302);
				 this->textBoxString3->Multiline = true;
				 this->textBoxString3->Name = L"textBoxString3";
				 this->textBoxString3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				 this->textBoxString3->Size = System::Drawing::Size(349, 55);
				 this->textBoxString3->TabIndex = 20;
				 // 
				 // labelString3
				 // 
				 this->labelString3->AutoSize = true;
				 this->labelString3->Location = System::Drawing::Point(24, 302);
				 this->labelString3->Name = L"labelString3";
				 this->labelString3->Size = System::Drawing::Size(83, 17);
				 this->labelString3->TabIndex = 19;
				 this->labelString3->Text = L"labelString3";
				 // 
				 // labelInt1
				 // 
				 this->labelInt1->AutoSize = true;
				 this->labelInt1->Location = System::Drawing::Point(24, 372);
				 this->labelInt1->Name = L"labelInt1";
				 this->labelInt1->Size = System::Drawing::Size(61, 17);
				 this->labelInt1->TabIndex = 23;
				 this->labelInt1->Text = L"labelInt1";
				 // 
				 // textBoxInt1
				 // 
				 this->textBoxInt1->Location = System::Drawing::Point(27, 392);
				 this->textBoxInt1->Name = L"textBoxInt1";
				 this->textBoxInt1->Size = System::Drawing::Size(154, 22);
				 this->textBoxInt1->TabIndex = 24;
				 this->textBoxInt1->TextChanged += gcnew System::EventHandler(this, &FormNewArticle::textBoxInt1_TextChanged);
				 // 
				 // textBoxInt2
				 // 
				 this->textBoxInt2->Location = System::Drawing::Point(187, 392);
				 this->textBoxInt2->Name = L"textBoxInt2";
				 this->textBoxInt2->Size = System::Drawing::Size(154, 22);
				 this->textBoxInt2->TabIndex = 26;
				 this->textBoxInt2->TextChanged += gcnew System::EventHandler(this, &FormNewArticle::textBoxInt2_TextChanged);
				 // 
				 // labelInt2
				 // 
				 this->labelInt2->AutoSize = true;
				 this->labelInt2->Location = System::Drawing::Point(184, 372);
				 this->labelInt2->Name = L"labelInt2";
				 this->labelInt2->Size = System::Drawing::Size(61, 17);
				 this->labelInt2->TabIndex = 25;
				 this->labelInt2->Text = L"labelInt2";
				 // 
				 // textBoxInt3
				 // 
				 this->textBoxInt3->Location = System::Drawing::Point(347, 392);
				 this->textBoxInt3->Name = L"textBoxInt3";
				 this->textBoxInt3->Size = System::Drawing::Size(154, 22);
				 this->textBoxInt3->TabIndex = 28;
				 this->textBoxInt3->TextChanged += gcnew System::EventHandler(this, &FormNewArticle::textBoxInt3_TextChanged);
				 // 
				 // labelInt3
				 // 
				 this->labelInt3->AutoSize = true;
				 this->labelInt3->Location = System::Drawing::Point(344, 372);
				 this->labelInt3->Name = L"labelInt3";
				 this->labelInt3->Size = System::Drawing::Size(61, 17);
				 this->labelInt3->TabIndex = 27;
				 this->labelInt3->Text = L"labelInt3";
				 // 
				 // radioButtonDVD
				 // 
				 this->radioButtonDVD->AutoSize = true;
				 this->radioButtonDVD->Location = System::Drawing::Point(241, 22);
				 this->radioButtonDVD->Name = L"radioButtonDVD";
				 this->radioButtonDVD->Size = System::Drawing::Size(58, 21);
				 this->radioButtonDVD->TabIndex = 29;
				 this->radioButtonDVD->Text = L"DVD";
				 this->radioButtonDVD->UseVisualStyleBackColor = true;
				 this->radioButtonDVD->CheckedChanged += gcnew System::EventHandler(this, &FormNewArticle::radioButtonDVD_CheckedChanged);
				 // 
				 // radioButtonVHS
				 // 
				 this->radioButtonVHS->AutoSize = true;
				 this->radioButtonVHS->Location = System::Drawing::Point(305, 22);
				 this->radioButtonVHS->Name = L"radioButtonVHS";
				 this->radioButtonVHS->Size = System::Drawing::Size(57, 21);
				 this->radioButtonVHS->TabIndex = 30;
				 this->radioButtonVHS->Text = L"VHS";
				 this->radioButtonVHS->UseVisualStyleBackColor = true;
				 this->radioButtonVHS->CheckedChanged += gcnew System::EventHandler(this, &FormNewArticle::radioButtonVHS_CheckedChanged);
				 // 
				 // radioButtonDigital
				 // 
				 this->radioButtonDigital->AutoSize = true;
				 this->radioButtonDigital->Location = System::Drawing::Point(368, 22);
				 this->radioButtonDigital->Name = L"radioButtonDigital";
				 this->radioButtonDigital->Size = System::Drawing::Size(133, 21);
				 this->radioButtonDigital->TabIndex = 31;
				 this->radioButtonDigital->Text = L"Digital Resource";
				 this->radioButtonDigital->UseVisualStyleBackColor = true;
				 this->radioButtonDigital->CheckedChanged += gcnew System::EventHandler(this, &FormNewArticle::radioButtonDigital_CheckedChanged);
				 // 
				 // FormNewArticle
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(527, 478);
				 this->Controls->Add(this->radioButtonDigital);
				 this->Controls->Add(this->radioButtonVHS);
				 this->Controls->Add(this->radioButtonDVD);
				 this->Controls->Add(this->textBoxInt3);
				 this->Controls->Add(this->labelInt3);
				 this->Controls->Add(this->textBoxInt2);
				 this->Controls->Add(this->labelInt2);
				 this->Controls->Add(this->textBoxInt1);
				 this->Controls->Add(this->labelInt1);
				 this->Controls->Add(this->textBoxString3);
				 this->Controls->Add(this->labelString3);
				 this->Controls->Add(this->radioButtonMagazine);
				 this->Controls->Add(this->buttonMinus1);
				 this->Controls->Add(this->buttonPlus1);
				 this->Controls->Add(this->dateTimePicker);
				 this->Controls->Add(this->labelReleaseDate);
				 this->Controls->Add(this->textBoxString2);
				 this->Controls->Add(this->labelString2);
				 this->Controls->Add(this->textBoxString1);
				 this->Controls->Add(this->labelString1);
				 this->Controls->Add(this->textBoxQty);
				 this->Controls->Add(this->labelQty);
				 this->Controls->Add(this->textBoxTitle);
				 this->Controls->Add(this->labelTitle);
				 this->Controls->Add(this->textBoxID);
				 this->Controls->Add(this->labelID);
				 this->Controls->Add(this->buttonCreate);
				 this->Controls->Add(this->radioButtonCD);
				 this->Controls->Add(this->radioButtonBook);
				 this->MaximumSize = System::Drawing::Size(545, 525);
				 this->MinimumSize = System::Drawing::Size(545, 525);
				 this->Name = L"FormNewArticle";
				 this->Text = L"FormNewArticle";
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void buttonCreate_Click(System::Object^  sender, System::EventArgs^  e)//create the new article
			 {
				 bool dataIsOK = (this->textBoxTitle->Text->Length != 0);//minimum info required to create an Article

				 if(dataIsOK)//create article and close form
				 {
					 Library myLibrary;

					 if(isBookOrMagazine || ((this->radioButtonBook->Checked || this->radioButtonMagazine->Checked) == true))//new article is a book or Magazine
					 {
						 Book ^ newBook = gcnew Book;
						 copyGeneralData(newBook);
						 newBook->setAuthor(this->textBoxString1->Text);
						 newBook->setPublisher(this->textBoxString2->Text);
						 newBook->setSummary(this->textBoxString3->Text);
						 newBook->setPages(managedStringToInt(this->textBoxInt1->Text));

						 if((BASE_BOOK_ID <= newBook->getID()) && (newBook->getID() < BASE_MAGAZINE_ID))	//Book IDs
							 newBook->setIsMagazine(false);
						 else
							 newBook->setIsMagazine(true);

						 newBook->save();
					 }
					 else if(isCD || (this->radioButtonCD->Checked == true))//new article is a CD
					 {
						 CD ^ newCD = gcnew CD;
						 copyGeneralData(newCD);
						 newCD->setArtist(this->textBoxString1->Text);
						 newCD->setRecordCompany(this->textBoxString2->Text);
						 newCD->setMusicStyle(this->textBoxString3->Text);
						 newCD->setDuration(managedStringToInt(this->textBoxInt1->Text));
						 newCD->setTracks(managedStringToInt(this->textBoxInt2->Text));

						 newCD->save();
					 }
					 else if(isDVDOrVHS || ((this->radioButtonDVD->Checked || this->radioButtonVHS->Checked) == true))//new article is a DVD or VHS
					 {
						 Video ^ newVideo = gcnew Video;
						 copyGeneralData(newVideo);
						 newVideo->setDirector(this->textBoxString1->Text);
						 newVideo->setProducer(this->textBoxString2->Text);
						 newVideo->setMainActor(this->textBoxString3->Text);
						 newVideo->setLength(managedStringToInt(this->textBoxInt1->Text));
						 newVideo->setAgeLimit(managedStringToInt(this->textBoxInt2->Text));

						 if((BASE_DVD_ID <= newVideo->getID()) && (newVideo->getID() < BASE_VHS_ID))
						 {
							 newVideo->setChapters(managedStringToInt(this->textBoxInt3->Text));
							 newVideo->setIsDVD(true);
						 }
						 else
							 newVideo->setIsDVD(false);

						 newVideo->save();
					 }
					 else if(isDigital || (this->radioButtonDigital->Checked == true))//new article is a Digital Resource
					 {
						 DigitalRes ^ newDigitalRes = gcnew DigitalRes;
						 copyGeneralData(newDigitalRes);
						 newDigitalRes->setAuthor(this->textBoxString1->Text);
						 newDigitalRes->setFileType(this->textBoxString2->Text);
						 newDigitalRes->setURL(this->textBoxString3->Text);
						 newDigitalRes->setByteSize(managedStringToInt(this->textBoxInt1->Text));

						 newDigitalRes->save();
					 }
					 this->Close();
				 }
			 }

	private: System::Void radioButtonBook_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//automatically sets smallest available ID
			 {
				 if(this->radioButtonBook->Checked == true)//Radio Button Checked
				 {
					 //#form formatting
					 formatBook();

					 //#update the ID field to next available ID
					 unsigned int fileID;
					 bool loopFlag = 1;
					 for(int i = 0; loopFlag; i++)
					 {
						 fileID = BASE_BOOK_ID + i;//update file ID
						 String ^ strIDFilePath = FILEPATH_BOOK + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt
						 char *filePath = managedStringToChar(strIDFilePath);//convert string

						 struct stat buffer;
						 if(stat(filePath, &buffer))//if file doesn't exist
							 loopFlag = 0;//exit loop
						 if(fileID == BASE_MAGAZINE_ID)//all available Book IDs have been used
						 {
							 popup("Error","All available IDs are in use. Please burn books to free IDs.");
							 this->Close();//close form
						 }
					 }
					 this->textBoxID->Text = ""+fileID;//convert int to managed string and write to File ID text box
				 }
			 }

	private: System::Void radioButtonMagazine_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->radioButtonMagazine->Checked == true)//Radio Button Checked
				 {
					 //#form formatting
					 formatBook();//Magazine is same as book

					 //#update the ID field to next available ID
					 unsigned int fileID;
					 bool loopFlag = 1;
					 for(int i = 0; loopFlag; i++)
					 {
						 fileID = BASE_MAGAZINE_ID + i;//update file ID
						 String ^ strIDFilePath = FILEPATH_MAGAZINE + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt
						 char *filePath = managedStringToChar(strIDFilePath);//convert string

						 struct stat buffer;
						 if(stat(filePath, &buffer))//if file doesn't exist
							 loopFlag = 0;//exit loop
						 if(fileID == BASE_CD_ID)//all available Book IDs have been used
						 {
							 popup("Error","All available IDs are in use. Please burn books to free IDs.");
							 this->Close();//close form
						 }
					 }
					 this->textBoxID->Text = ""+fileID;//convert int to managed string and write to File ID text box
				 }
			 }

	private: System::Void radioButtonCD_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//automatically sets smallest available ID
			 {
				 if(this->radioButtonCD->Checked == true)//Radio Button Checked
				 {
					 //#form formatting
					 formatCD();

					 //#update the ID field to next available ID
					 unsigned int fileID;
					 bool loopFlag = 1;
					 for(int i = 0; loopFlag; i++)
					 {
						 fileID = BASE_CD_ID + i;//update file ID
						 String ^ strIDFilePath = FILEPATH_CD + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt
						 char *filePath = managedStringToChar(strIDFilePath);//convert string

						 struct stat buffer;
						 if(stat(filePath, &buffer))//if file doesn't exist
							 loopFlag = 0;//exit loop
						 if(fileID == (BASE_DVD_ID))//all available CD IDs have been used
						 {
							 popup("Error","All available IDs are in use. Please burn books to free IDs.");
							 this->Close();//close form
						 }
					 }
					 this->textBoxID->Text = ""+fileID;//convert int to managed string and write to File ID text box
				 }
			 }

	private: System::Void radioButtonDVD_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->radioButtonDVD->Checked == true)//Radio Button Checked
				 {
					 //#form formatting
					 formatDVD();

					 //#update the ID field to next available ID
					 unsigned int fileID;
					 bool loopFlag = 1;
					 for(int i = 0; loopFlag; i++)
					 {
						 fileID = BASE_DVD_ID + i;//update file ID
						 String ^ strIDFilePath = FILEPATH_DVD + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt
						 char *filePath = managedStringToChar(strIDFilePath);//convert string

						 struct stat buffer;
						 if(stat(filePath, &buffer))//if file doesn't exist
							 loopFlag = 0;//exit loop
						 if(fileID == (BASE_VHS_ID))//all available CD IDs have been used
						 {
							 popup("Error","All available IDs are in use. Please burn books to free IDs.");
							 this->Close();//close form
						 }
					 }
					 this->textBoxID->Text = ""+fileID;//convert int to managed string and write to File ID text box
				 }
			 }

	private: System::Void radioButtonVHS_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->radioButtonVHS->Checked == true)//Radio Button Checked
				 {
					 //#form formatting
					 formatVHS();

					 //#update the ID field to next available ID
					 unsigned int fileID;
					 bool loopFlag = 1;
					 for(int i = 0; loopFlag; i++)
					 {
						 fileID = BASE_VHS_ID + i;//update file ID
						 String ^ strIDFilePath = FILEPATH_VHS + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt
						 char *filePath = managedStringToChar(strIDFilePath);//convert string

						 struct stat buffer;
						 if(stat(filePath, &buffer))//if file doesn't exist
							 loopFlag = 0;//exit loop
						 if(fileID == (BASE_DIGITAL_ID))//all available CD IDs have been used
						 {
							 popup("Error","All available IDs are in use. Please burn books to free IDs.");
							 this->Close();//close form
						 }
					 }
					 this->textBoxID->Text = ""+fileID;//convert int to managed string and write to File ID text box
				 }
			 }

	private: System::Void radioButtonDigital_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->radioButtonDigital->Checked == true)//Radio Button Checked
				 {
					 //#form formatting
					 formatDigital();

					 //#update the ID field to next available ID
					 unsigned int fileID;
					 bool loopFlag = 1;
					 for(int i = 0; loopFlag; i++)
					 {
						 fileID = BASE_DIGITAL_ID + i;//update file ID
						 String ^ strIDFilePath = FILEPATH_DIGITAL + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt
						 char *filePath = managedStringToChar(strIDFilePath);//convert string

						 struct stat buffer;
						 if(stat(filePath, &buffer))//if file doesn't exist
							 loopFlag = 0;//exit loop
						 if(fileID == (BASE_MAX_ID))//all available CD IDs have been used
						 {
							 popup("Error","All available IDs are in use. Please burn books to free IDs.");
							 this->Close();//close form
						 }
					 }
					 this->textBoxID->Text = ""+fileID;//convert int to managed string and write to File ID text box
				 }
				 else//Radio button unchecked
				 {
					 this->textBoxQty->Visible = true;
					 this->labelQty->Visible = true;
					 this->buttonPlus1->Visible = true;
					 this->buttonMinus1->Visible = true;
				 }
			 }


	private: System::Void buttonPlus1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(managedStringToInt(this->textBoxQty->Text) < 100)//only go up to 100
					 this->textBoxQty->Text = intToManagedString(managedStringToInt(this->textBoxQty->Text) + 1);
				 else
					 popup("LOL Fail","You're a library, not a wholeseller");
			 }
	private: System::Void buttonMinus1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(managedStringToInt(this->textBoxQty->Text) > 0)//only go down to 0
					 this->textBoxQty->Text = intToManagedString(managedStringToInt(this->textBoxQty->Text) - 1);
			 }
	private: System::Void textBoxQty_TextChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 this->textBoxQty->Text = intToManagedString(managedStringToInt(this->textBoxQty->Text));//reject non-numbers
			 }
	private: System::Void textBoxInt1_TextChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 this->textBoxInt1->Text = intToManagedString(managedStringToInt(this->textBoxInt1->Text));//reject non-numbers
			 }
	private: System::Void textBoxInt2_TextChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 this->textBoxInt2->Text = intToManagedString(managedStringToInt(this->textBoxInt2->Text));//reject non-numbers
			 }
	private: System::Void textBoxInt3_TextChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 this->textBoxInt3->Text = intToManagedString(managedStringToInt(this->textBoxInt3->Text));//reject non-numbers
			 }

			 void copyGeneralData(Article ^ newArticle)
			 {
				 newArticle->setID(managedStringToInt(this->textBoxID->Text));//set ID
				 newArticle->setTitle(this->textBoxTitle->Text);//set Title
				 newArticle->setReleaseDate(dateTimePicker->Value.Year * 10000 + dateTimePicker->Value.Month * 100 + dateTimePicker->Value.Day);
				 if(this->radioButtonDigital->Checked == false)//skip this step for Digital Resources
					 newArticle->setQtyOwned(managedStringToInt(this->textBoxQty->Text));
			 }

			 void clearSpecialFields()
			 {
				 this->textBoxString1->Text = "";
				 this->textBoxString2->Text = "";
				 this->textBoxString3->Text = "";
				 this->textBoxInt1->Text = "0";
				 this->textBoxInt2->Text = "0";
				 this->textBoxInt3->Text = "0";
			 }

			 void formatBook()//format Book or Magazine
			 {
				 clearSpecialFields();
				 this->labelString1->Text = "Author:";
				 this->labelString2->Text = "Publisher:";
				 this->labelString3->Text = "Summary:";

				 this->labelInt2->Visible = false;
				 this->labelInt3->Visible = false;
				 this->labelInt1->Text = "N° of Pages:";

				 this->textBoxInt2->Visible = false;
				 this->textBoxInt3->Visible = false;
			 }

			 void formatCD()
			 {
				 clearSpecialFields();
				 this->labelString1->Text = "Artist:";
				 this->labelString2->Text = "Record Company:";
				 this->labelString3->Text = "Music Style:";

				 this->labelInt2->Visible = true;
				 this->labelInt3->Visible = false;
				 this->labelInt1->Text = "Duration (min):";
				 this->labelInt2->Text = "N° of Tracks:";

				 this->textBoxInt2->Visible = true;
				 this->textBoxInt3->Visible = false;
			 }

			 void formatDVD()
			 {
				 clearSpecialFields();
				 this->labelString1->Text = "Director:";
				 this->labelString2->Text = "Producer:";
				 this->labelString3->Text = "Lead Actor:";

				 this->labelInt2->Visible = true;
				 this->labelInt3->Visible = true;
				 this->labelInt1->Text = "Duration (min):";
				 this->labelInt2->Text = "Age Limit:";
				 this->labelInt3->Text = "N° of Chapters:";

				 this->textBoxInt2->Visible = true;
				 this->textBoxInt3->Visible = true;
			 }

			 void formatVHS()
			 {
				 clearSpecialFields();
				 this->labelString1->Text = "Director:";
				 this->labelString2->Text = "Producer:";
				 this->labelString3->Text = "Lead Actor:";

				 this->labelInt2->Visible = true;
				 this->labelInt3->Visible = false;
				 this->labelInt1->Text = "Duration (min):";
				 this->labelInt2->Text = "Age Limit:";

				 this->textBoxInt2->Visible = true;
				 this->textBoxInt3->Visible = false;
			 }

			 void formatDigital()
			 {
				 clearSpecialFields();
				 this->textBoxQty->Visible = false;
				 this->labelQty->Visible = false;
				 this->buttonPlus1->Visible = false;
				 this->buttonMinus1->Visible = false;

				 this->labelString1->Text = "Author:";
				 this->labelString2->Text = "File Type:";
				 this->labelString3->Text = "URL:";

				 this->labelInt2->Visible = false;
				 this->labelInt3->Visible = false;
				 this->labelInt1->Text = "Size (Bytes):";

				 this->textBoxInt2->Visible = false;
				 this->textBoxInt3->Visible = false;
			 }

			 void formatEdit(int existingFileID)
			 {
				 this->radioButtonBook->Visible		= false;
				 this->radioButtonMagazine->Visible = false;
				 this->radioButtonCD->Visible		= false;
				 this->radioButtonDVD->Visible		= false;
				 this->radioButtonVHS->Visible		= false;
				 this->radioButtonDigital->Visible	= false;

				 if((BASE_BOOK_ID <= existingFileID) && (existingFileID < BASE_MAGAZINE_ID))	//Book IDs
				 {
					 formatBook();
					 isBookOrMagazine = true;
				 }
				 else if((BASE_MAGAZINE_ID <= existingFileID) && (existingFileID < BASE_CD_ID))
				 {
					 formatBook();
					 isBookOrMagazine = true;
				 }
				 else if((BASE_CD_ID <= existingFileID) && (existingFileID < BASE_DVD_ID))
				 {
					 formatCD();
					 isCD = true;
				 }
				 else if((BASE_DVD_ID <= existingFileID) && (existingFileID < BASE_VHS_ID))
				 {
					 formatDVD();
					 isDVDOrVHS = true;
				 }
				 else if((BASE_VHS_ID <= existingFileID) && (existingFileID < BASE_DIGITAL_ID))
				 {
					 formatVHS();
					 isDVDOrVHS = true;
				 }
				 else if((BASE_DIGITAL_ID <= existingFileID) && (existingFileID < BASE_MAX_ID))
				 {
					 formatDigital();
					 isDigital = true;
				 }

				 this->buttonCreate->Text = L"Save Changes";
			 }

			 void writeGeneralData(Article ^% newArticle)
			 {
				 this->textBoxID->Text = intToManagedString(newArticle->getID());
				 this->textBoxTitle->Text = newArticle->getTitle();

				 int releaseDate = newArticle->getReleaseDate();
				 int year = (int) releaseDate/10000;
				 int month = releaseDate/ 100 - year * 100;
				 int day = releaseDate - month * 100 - year * 10000;
				 this->dateTimePicker->Value = DateTime(year, month, day);

				 if(isDigital == false)
					 this->textBoxQty->Text = intToManagedString(newArticle->getQtyOwned());
			 }

	private: System::Void textBoxTitle_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBoxID_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
