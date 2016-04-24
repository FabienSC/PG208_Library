#pragma once
#include "stdafx.h"

namespace PG208_Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace std;

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
	protected: 
	private: System::Windows::Forms::RadioButton^  radioButtonCD;
	private: System::Windows::Forms::Button^  buttonCreate;
	private: System::Windows::Forms::Label^  labelID;
	private: System::Windows::Forms::TextBox^  textBoxID;
	private: System::Windows::Forms::TextBox^  textBoxTitle;



	private: System::Windows::Forms::Label^  labelTitle;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;

	private:
		/// <summary>
		/// Required designer variable.
		Article * newArticle;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar;
	private: System::Windows::Forms::Label^  labelReleaseDate;
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
				 this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->textBox4 = (gcnew System::Windows::Forms::TextBox());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->textBox5 = (gcnew System::Windows::Forms::TextBox());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->monthCalendar = (gcnew System::Windows::Forms::MonthCalendar());
				 this->labelReleaseDate = (gcnew System::Windows::Forms::Label());
				 this->SuspendLayout();
				 // 
				 // radioButtonBook
				 // 
				 this->radioButtonBook->Anchor = System::Windows::Forms::AnchorStyles::Top;
				 this->radioButtonBook->AutoSize = true;
				 this->radioButtonBook->Location = System::Drawing::Point(306, 37);
				 this->radioButtonBook->Name = L"radioButtonBook";
				 this->radioButtonBook->Size = System::Drawing::Size(61, 21);
				 this->radioButtonBook->TabIndex = 0;
				 this->radioButtonBook->Text = L"Book";
				 this->radioButtonBook->UseVisualStyleBackColor = true;
				 this->radioButtonBook->CheckedChanged += gcnew System::EventHandler(this, &FormNewArticle::radioButtonBook_CheckedChanged);
				 // 
				 // radioButtonCD
				 // 
				 this->radioButtonCD->Anchor = System::Windows::Forms::AnchorStyles::Top;
				 this->radioButtonCD->AutoSize = true;
				 this->radioButtonCD->Location = System::Drawing::Point(373, 37);
				 this->radioButtonCD->Name = L"radioButtonCD";
				 this->radioButtonCD->Size = System::Drawing::Size(48, 21);
				 this->radioButtonCD->TabIndex = 1;
				 this->radioButtonCD->Text = L"CD";
				 this->radioButtonCD->UseVisualStyleBackColor = true;
				 this->radioButtonCD->CheckedChanged += gcnew System::EventHandler(this, &FormNewArticle::radioButtonCD_CheckedChanged);
				 // 
				 // buttonCreate
				 // 
				 this->buttonCreate->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->buttonCreate->Location = System::Drawing::Point(328, 458);
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
				 // textBox3
				 // 
				 this->textBox3->Location = System::Drawing::Point(100, 168);
				 this->textBox3->Name = L"textBox3";
				 this->textBox3->Size = System::Drawing::Size(291, 22);
				 this->textBox3->TabIndex = 8;
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(47, 168);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(46, 17);
				 this->label3->TabIndex = 7;
				 this->label3->Text = L"label3";
				 // 
				 // textBox4
				 // 
				 this->textBox4->Location = System::Drawing::Point(100, 206);
				 this->textBox4->Name = L"textBox4";
				 this->textBox4->Size = System::Drawing::Size(291, 22);
				 this->textBox4->TabIndex = 10;
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(47, 206);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(46, 17);
				 this->label4->TabIndex = 9;
				 this->label4->Text = L"label4";
				 // 
				 // textBox5
				 // 
				 this->textBox5->Location = System::Drawing::Point(100, 244);
				 this->textBox5->Name = L"textBox5";
				 this->textBox5->Size = System::Drawing::Size(291, 22);
				 this->textBox5->TabIndex = 12;
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Location = System::Drawing::Point(47, 244);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(46, 17);
				 this->label5->TabIndex = 11;
				 this->label5->Text = L"label5";
				 // 
				 // monthCalendar
				 // 
				 this->monthCalendar->Location = System::Drawing::Point(447, 90);
				 this->monthCalendar->MaxDate = System::DateTime(2016, 12, 31, 0, 0, 0, 0);
				 this->monthCalendar->Name = L"monthCalendar";
				 this->monthCalendar->TabIndex = 13;
				 // 
				 // labelReleaseDate
				 // 
				 this->labelReleaseDate->AutoSize = true;
				 this->labelReleaseDate->Location = System::Drawing::Point(483, 64);
				 this->labelReleaseDate->Name = L"labelReleaseDate";
				 this->labelReleaseDate->Size = System::Drawing::Size(90, 17);
				 this->labelReleaseDate->TabIndex = 14;
				 this->labelReleaseDate->Text = L"Relese Date:";
				 // 
				 // FormNewArticle
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(739, 515);
				 this->Controls->Add(this->labelReleaseDate);
				 this->Controls->Add(this->monthCalendar);
				 this->Controls->Add(this->textBox5);
				 this->Controls->Add(this->label5);
				 this->Controls->Add(this->textBox4);
				 this->Controls->Add(this->label4);
				 this->Controls->Add(this->textBox3);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->textBoxTitle);
				 this->Controls->Add(this->labelTitle);
				 this->Controls->Add(this->textBoxID);
				 this->Controls->Add(this->labelID);
				 this->Controls->Add(this->buttonCreate);
				 this->Controls->Add(this->radioButtonCD);
				 this->Controls->Add(this->radioButtonBook);
				 this->MinimumSize = System::Drawing::Size(500, 450);
				 this->Name = L"FormNewArticle";
				 this->Text = L"FormNewArticle";
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void buttonCreate_Click(System::Object^  sender, System::EventArgs^  e)//create the new article
			 {
				 bool aButtonIsChecked = (this->radioButtonBook->Checked == true) || (this->radioButtonCD->Checked == true);
				 bool dataIsOK = (this->textBoxTitle->Text->Length != 0);

				 String ^ strFilePath;

				 if(aButtonIsChecked && dataIsOK)
				 {
					 Library myLibrary;
					 myLibrary.addBook();
					 if(this->radioButtonBook->Checked == true)//new article is a book
					 {
						 strFilePath = "Articles/Books/";
						 myLibrary.addBook();
					 }
					 else if(this->radioButtonCD->Checked == true)//new article is a CD
					 {
						 strFilePath = "Articles/CDs/";
						 myLibrary.addCD();
					 }

					 strFilePath = strFilePath + this->textBoxID->Text + ".txt";
					 char *filePath = (char*)Marshal::StringToHGlobalAnsi(strFilePath).ToPointer();//Marshal::FreeHGlobal((IntPtr)name); // add at the end to free up memory?
					 ofstream myfile(filePath);

					 myfile << (char*)Marshal::StringToHGlobalAnsi(this->textBoxTitle->Text).ToPointer();
					 myfile.close();

					 this->Close();
				 }

			 }
	private: System::Void radioButtonBook_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//automatically sets smallest available ID
			 {
				 int fileID;
				 String ^ strIDFilePath;
				 char *filePath;
				 fstream myfile;
				 string line;

				 bool loopFlag = 1;
				 for(int i = 0; loopFlag; i++)
				 {
					 fileID = BASE_BOOK_ID + i;//update file ID
					 strIDFilePath = FILEPATH_BOOK + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt
					 filePath = (char*)Marshal::StringToHGlobalAnsi(strIDFilePath).ToPointer();//convert string
					 myfile.open(filePath, ios::in);//open file to write
					 if(myfile.is_open() == 0)//file doesn't exist
						 loopFlag = 0;//exit loop
					 if(fileID == BASE_CD_ID)//all available Book IDs have been used
					 {
						 popup("Error","All available IDs are in use. Please burn books to free IDs.");
						 this->Close();//close form
					 }
					 myfile.close();//close file so it can be opened again with a new path
				 }
				 this->textBoxID->Text = ""+fileID;//convert int to managed string and write to File ID text box
			 }
	private: System::Void radioButtonCD_CheckedChanged(System::Object^  sender, System::EventArgs^  e)//automatically sets smallest available ID
			 {
				 int fileID;
				 String ^ strIDFilePath;
				 char *filePath;
				 fstream myfile;
				 string line;

				 bool loopFlag = 1;
				 for(int i = 0; loopFlag; i++)
				 {
					 fileID = BASE_CD_ID + i;//update file ID
					 strIDFilePath = FILEPATH_CD + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt
					 filePath = (char*)Marshal::StringToHGlobalAnsi(strIDFilePath).ToPointer();//convert string
					 myfile.open(filePath, ios::in);//open file to write
					 if(myfile.is_open() == 0)//file doesn't exist
						 loopFlag = 0;//exit loop
					 if(fileID == BASE_BOOK_ID)//all available Book IDs have been used//#### change to whatever is after CDs
					 {
						 popup("Error","All available IDs are in use. Please burn books to free IDs.");
						 this->Close();//close form
					 }
					 myfile.close();//close file so it can be opened again with a new path
				 }
				 this->textBoxID->Text = ""+fileID;//convert int to managed string and write to File ID text box
			 }
	};
}
