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


	private: System::Windows::Forms::Label^  label;
	private: System::Windows::Forms::TextBox^  textBox1;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;


	private: System::Windows::Forms::Label^  label2;



			 /// <summary>
			 /// Required designer variable.
			 Article * newArticle;

			 System::Windows::Forms::Label^  labelReleaseDate;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	private: System::Windows::Forms::Button^  buttonPlus1;
	private: System::Windows::Forms::Button^  buttonMinus1;
	private: System::Windows::Forms::RadioButton^  radioButtonMagazine;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;

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
				 this->label = (gcnew System::Windows::Forms::Label());
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->labelReleaseDate = (gcnew System::Windows::Forms::Label());
				 this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
				 this->buttonPlus1 = (gcnew System::Windows::Forms::Button());
				 this->buttonMinus1 = (gcnew System::Windows::Forms::Button());
				 this->radioButtonMagazine = (gcnew System::Windows::Forms::RadioButton());
				 this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->textBox4 = (gcnew System::Windows::Forms::TextBox());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->SuspendLayout();
				 // 
				 // radioButtonBook
				 // 
				 this->radioButtonBook->AutoSize = true;
				 this->radioButtonBook->Location = System::Drawing::Point(100, 38);
				 this->radioButtonBook->Name = L"radioButtonBook";
				 this->radioButtonBook->Size = System::Drawing::Size(61, 21);
				 this->radioButtonBook->TabIndex = 0;
				 this->radioButtonBook->Text = L"Book";
				 this->radioButtonBook->UseVisualStyleBackColor = true;
				 this->radioButtonBook->CheckedChanged += gcnew System::EventHandler(this, &FormNewArticle::radioButtonBook_CheckedChanged);
				 // 
				 // radioButtonCD
				 // 
				 this->radioButtonCD->AutoSize = true;
				 this->radioButtonCD->Location = System::Drawing::Point(167, 38);
				 this->radioButtonCD->Name = L"radioButtonCD";
				 this->radioButtonCD->Size = System::Drawing::Size(48, 21);
				 this->radioButtonCD->TabIndex = 1;
				 this->radioButtonCD->Text = L"CD";
				 this->radioButtonCD->UseVisualStyleBackColor = true;
				 this->radioButtonCD->CheckedChanged += gcnew System::EventHandler(this, &FormNewArticle::radioButtonCD_CheckedChanged);
				 // 
				 // buttonCreate
				 // 
				 this->buttonCreate->Location = System::Drawing::Point(200, 458);
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
				 this->labelID->Location = System::Drawing::Point(47, 90);
				 this->labelID->Name = L"labelID";
				 this->labelID->Size = System::Drawing::Size(25, 17);
				 this->labelID->TabIndex = 3;
				 this->labelID->Text = L"ID:";
				 // 
				 // textBoxID
				 // 
				 this->textBoxID->Enabled = false;
				 this->textBoxID->Location = System::Drawing::Point(100, 90);
				 this->textBoxID->Name = L"textBoxID";
				 this->textBoxID->Size = System::Drawing::Size(291, 22);
				 this->textBoxID->TabIndex = 4;
				 this->textBoxID->Text = L"0000";
				 // 
				 // textBoxTitle
				 // 
				 this->textBoxTitle->Location = System::Drawing::Point(100, 129);
				 this->textBoxTitle->Name = L"textBoxTitle";
				 this->textBoxTitle->Size = System::Drawing::Size(291, 22);
				 this->textBoxTitle->TabIndex = 6;
				 this->textBoxTitle->TextChanged += gcnew System::EventHandler(this, &FormNewArticle::textBoxTitle_TextChanged);
				 // 
				 // labelTitle
				 // 
				 this->labelTitle->AutoSize = true;
				 this->labelTitle->Location = System::Drawing::Point(47, 129);
				 this->labelTitle->Name = L"labelTitle";
				 this->labelTitle->Size = System::Drawing::Size(39, 17);
				 this->labelTitle->TabIndex = 5;
				 this->labelTitle->Text = L"Title:";
				 // 
				 // textBoxQty
				 // 
				 this->textBoxQty->Location = System::Drawing::Point(175, 211);
				 this->textBoxQty->Name = L"textBoxQty";
				 this->textBoxQty->Size = System::Drawing::Size(68, 22);
				 this->textBoxQty->TabIndex = 8;
				 this->textBoxQty->Text = L"0";
				 this->textBoxQty->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBoxQty->TextChanged += gcnew System::EventHandler(this, &FormNewArticle::textBoxQty_TextChanged);
				 // 
				 // label
				 // 
				 this->label->AutoSize = true;
				 this->label->Location = System::Drawing::Point(47, 211);
				 this->label->Name = L"label";
				 this->label->Size = System::Drawing::Size(113, 17);
				 this->label->TabIndex = 7;
				 this->label->Text = L"Quantity Owned:";
				 // 
				 // textBox1
				 // 
				 this->textBox1->Location = System::Drawing::Point(100, 249);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(291, 22);
				 this->textBox1->TabIndex = 10;
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(47, 249);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(46, 17);
				 this->label1->TabIndex = 9;
				 this->label1->Text = L"label1";
				 // 
				 // textBox2
				 // 
				 this->textBox2->Location = System::Drawing::Point(100, 287);
				 this->textBox2->Name = L"textBox2";
				 this->textBox2->Size = System::Drawing::Size(291, 22);
				 this->textBox2->TabIndex = 12;
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(47, 287);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(46, 17);
				 this->label2->TabIndex = 11;
				 this->label2->Text = L"label2";
				 // 
				 // labelReleaseDate
				 // 
				 this->labelReleaseDate->AutoSize = true;
				 this->labelReleaseDate->Location = System::Drawing::Point(47, 170);
				 this->labelReleaseDate->Name = L"labelReleaseDate";
				 this->labelReleaseDate->Size = System::Drawing::Size(90, 17);
				 this->labelReleaseDate->TabIndex = 14;
				 this->labelReleaseDate->Text = L"Relese Date:";
				 // 
				 // dateTimePicker
				 // 
				 this->dateTimePicker->CustomFormat = L"yyyyMMdd";
				 this->dateTimePicker->Location = System::Drawing::Point(175, 170);
				 this->dateTimePicker->Name = L"dateTimePicker";
				 this->dateTimePicker->Size = System::Drawing::Size(216, 22);
				 this->dateTimePicker->TabIndex = 15;
				 this->dateTimePicker->ValueChanged += gcnew System::EventHandler(this, &FormNewArticle::dateTimePicker_ValueChanged);
				 // 
				 // buttonPlus1
				 // 
				 this->buttonPlus1->Location = System::Drawing::Point(249, 210);
				 this->buttonPlus1->Name = L"buttonPlus1";
				 this->buttonPlus1->Size = System::Drawing::Size(68, 23);
				 this->buttonPlus1->TabIndex = 16;
				 this->buttonPlus1->Text = L"+1";
				 this->buttonPlus1->UseVisualStyleBackColor = true;
				 this->buttonPlus1->Click += gcnew System::EventHandler(this, &FormNewArticle::buttonPlus1_Click);
				 // 
				 // buttonMinus1
				 // 
				 this->buttonMinus1->Location = System::Drawing::Point(323, 210);
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
				 this->radioButtonMagazine->Location = System::Drawing::Point(221, 38);
				 this->radioButtonMagazine->Name = L"radioButtonMagazine";
				 this->radioButtonMagazine->Size = System::Drawing::Size(90, 21);
				 this->radioButtonMagazine->TabIndex = 18;
				 this->radioButtonMagazine->TabStop = true;
				 this->radioButtonMagazine->Text = L"Magazine";
				 this->radioButtonMagazine->UseVisualStyleBackColor = true;
				 // 
				 // textBox3
				 // 
				 this->textBox3->Location = System::Drawing::Point(100, 325);
				 this->textBox3->Name = L"textBox3";
				 this->textBox3->Size = System::Drawing::Size(291, 22);
				 this->textBox3->TabIndex = 22;
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(47, 328);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(46, 17);
				 this->label3->TabIndex = 21;
				 this->label3->Text = L"label3";
				 // 
				 // textBox4
				 // 
				 this->textBox4->Location = System::Drawing::Point(100, 363);
				 this->textBox4->Name = L"textBox4";
				 this->textBox4->Size = System::Drawing::Size(291, 22);
				 this->textBox4->TabIndex = 20;
				 this->textBox4->TextChanged += gcnew System::EventHandler(this, &FormNewArticle::textBox4_TextChanged);
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(48, 366);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(46, 17);
				 this->label4->TabIndex = 19;
				 this->label4->Text = L"label4";
				 // 
				 // FormNewArticle
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(482, 503);
				 this->Controls->Add(this->textBox3);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->textBox4);
				 this->Controls->Add(this->label4);
				 this->Controls->Add(this->radioButtonMagazine);
				 this->Controls->Add(this->buttonMinus1);
				 this->Controls->Add(this->buttonPlus1);
				 this->Controls->Add(this->dateTimePicker);
				 this->Controls->Add(this->labelReleaseDate);
				 this->Controls->Add(this->textBox2);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->textBox1);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->textBoxQty);
				 this->Controls->Add(this->label);
				 this->Controls->Add(this->textBoxTitle);
				 this->Controls->Add(this->labelTitle);
				 this->Controls->Add(this->textBoxID);
				 this->Controls->Add(this->labelID);
				 this->Controls->Add(this->buttonCreate);
				 this->Controls->Add(this->radioButtonCD);
				 this->Controls->Add(this->radioButtonBook);
				 this->MaximumSize = System::Drawing::Size(800, 550);
				 this->MinimumSize = System::Drawing::Size(500, 550);
				 this->Name = L"FormNewArticle";
				 this->Text = L"FormNewArticle";
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void buttonCreate_Click(System::Object^  sender, System::EventArgs^  e)//create the new article
			 {
				 bool aButtonIsChecked = (this->radioButtonBook->Checked == true) || (this->radioButtonCD->Checked == true);
				 bool dataIsOK = (this->textBoxTitle->Text->Length != 0);//minimum info required to create a book


				 if(aButtonIsChecked && dataIsOK)//create article
				 {
					 Library myLibrary;
					 if(this->radioButtonBook->Checked == true)//new article is a book
					 {
						 Book newBook;
						 newBook.setID(Convert::ToInt32(this->textBoxID->Text,10));//set ID
						 newBook.setTitle(managedStringToString(this->textBoxTitle->Text));//set Title
						 newBook.setReleaseDate(dateTimePicker->Value.Year * 10000 + dateTimePicker->Value.Month * 100 + dateTimePicker->Value.Day);
						 newBook.setQtyOwned(managedStringToInt(this->textBoxQty->Text));
						 newBook.save();
						 myLibrary.addBook();
					 }
					 else if(this->radioButtonCD->Checked == true)//new article is a CD
					 {
						 CD newCD;
						 newCD.setID(Convert::ToInt32(this->textBoxID->Text,10));//set ID
						 newCD.setTitle(managedStringToString(this->textBoxTitle->Text));//set Title
						 newCD.setReleaseDate(dateTimePicker->Value.Year * 10000 + dateTimePicker->Value.Month * 100 + dateTimePicker->Value.Day);
						 newCD.setQtyOwned(managedStringToInt(this->textBoxQty->Text));

						 newCD.save();
						 myLibrary.addCD();
					 }
					 this->Close();
				 }
			 }
	private: System::Void radioButtonBook_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//automatically sets smallest available ID
			 {
				 int fileID;
				 bool loopFlag = 1;
				 for(int i = 0; loopFlag; i++)
				 {
					 fileID = BASE_BOOK_ID + i;//update file ID
					 String ^ strIDFilePath = FILEPATH_BOOK + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt
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
	private: System::Void radioButtonCD_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//automatically sets smallest available ID
			 {
				 int fileID;
				 bool loopFlag = 1;
				 for(int i = 0; loopFlag; i++)
				 {
					 fileID = BASE_CD_ID + i;//update file ID
					 String ^ strIDFilePath = FILEPATH_CD + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt
					 char *filePath = managedStringToChar(strIDFilePath);//convert string

					 struct stat buffer;
					 if(stat(filePath, &buffer))//if file doesn't exist
						 loopFlag = 0;//exit loop
					 if(fileID == (BASE_CD_ID + 1000))//all available CD IDs have been used
					 {
						 popup("Error","All available IDs are in use. Please burn books to free IDs.");
						 this->Close();//close form
					 }
				 }
				 this->textBoxID->Text = ""+fileID;//convert int to managed string and write to File ID text box
			 }
	private: System::Void textBoxTitle_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void dateTimePicker_ValueChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 //popup("date changed", intToChar(dateTimePicker->Value.Year));//display year for debugging
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
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
