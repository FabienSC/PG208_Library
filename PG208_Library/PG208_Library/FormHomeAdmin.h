#pragma once
#include "stdafx.h"

namespace PG208_Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std;

	/// <summary>
	/// Summary for FormHomeAdmin
	/// </summary>
	public ref class FormHomeAdmin : public System::Windows::Forms::Form
	{
	public:
		FormHomeAdmin(char* username)//username is passed in
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here

			this->labelUsername->Text = gcnew String(username);
			listArticleSize = 100;
			listArticles = new Article[listArticleSize];
			listArticleCount = 0;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormHomeAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelWelcome;

			 System::Windows::Forms::LinkLabel^  linkLabelLogOut;
			 System::Windows::Forms::Label^  labelUsername;
			 System::Windows::Forms::ListBox^  listBoxDisplay;


			 System::Windows::Forms::Button^  buttonSelect;
			 System::Windows::Forms::Button^  buttonNewItem;
			 System::Windows::Forms::Button^  buttonDelete;
			 System::Windows::Forms::Label^  labelSortBy;
			 System::Windows::Forms::ComboBox^  comboBoxSortBy;
			 System::Windows::Forms::TextBox^  textBox1;
			 Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
			 Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape1;
			 System::Windows::Forms::Label^  labelNumberOfItemsLabel;
			 System::Windows::Forms::Label^  labelNumberOfItems;
			 System::Windows::Forms::Label^  labelArticleID;
			 System::Windows::Forms::RadioButton^  radioButtonAll;
			 System::Windows::Forms::RadioButton^  radioButtonBooks;
			 System::Windows::Forms::RadioButton^  radioButtonCDs;
			 System::Windows::Forms::Button^  button1;
			 System::Windows::Forms::Button^  buttonTerminalMode;



			 /// <summary>
			 /// Required designer variable.
			 /// </summary>


			 int listArticleSize;
			 Article * listArticles;//will point to a dynamic array of Articles. Start off with 100 articles
			 int listArticleCount;//number of articles in the list


			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->labelWelcome = (gcnew System::Windows::Forms::Label());
				 this->linkLabelLogOut = (gcnew System::Windows::Forms::LinkLabel());
				 this->labelUsername = (gcnew System::Windows::Forms::Label());
				 this->listBoxDisplay = (gcnew System::Windows::Forms::ListBox());
				 this->buttonSelect = (gcnew System::Windows::Forms::Button());
				 this->buttonNewItem = (gcnew System::Windows::Forms::Button());
				 this->buttonDelete = (gcnew System::Windows::Forms::Button());
				 this->labelSortBy = (gcnew System::Windows::Forms::Label());
				 this->comboBoxSortBy = (gcnew System::Windows::Forms::ComboBox());
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
				 this->lineShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
				 this->labelNumberOfItemsLabel = (gcnew System::Windows::Forms::Label());
				 this->labelNumberOfItems = (gcnew System::Windows::Forms::Label());
				 this->labelArticleID = (gcnew System::Windows::Forms::Label());
				 this->radioButtonAll = (gcnew System::Windows::Forms::RadioButton());
				 this->radioButtonBooks = (gcnew System::Windows::Forms::RadioButton());
				 this->radioButtonCDs = (gcnew System::Windows::Forms::RadioButton());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->buttonTerminalMode = (gcnew System::Windows::Forms::Button());
				 this->SuspendLayout();
				 // 
				 // labelWelcome
				 // 
				 this->labelWelcome->AutoSize = true;
				 this->labelWelcome->Location = System::Drawing::Point(12, 9);
				 this->labelWelcome->Name = L"labelWelcome";
				 this->labelWelcome->Size = System::Drawing::Size(66, 17);
				 this->labelWelcome->TabIndex = 0;
				 this->labelWelcome->Text = L"Welcome";
				 // 
				 // linkLabelLogOut
				 // 
				 this->linkLabelLogOut->AutoSize = true;
				 this->linkLabelLogOut->Location = System::Drawing::Point(12, 40);
				 this->linkLabelLogOut->Name = L"linkLabelLogOut";
				 this->linkLabelLogOut->Size = System::Drawing::Size(59, 17);
				 this->linkLabelLogOut->TabIndex = 1;
				 this->linkLabelLogOut->TabStop = true;
				 this->linkLabelLogOut->Text = L"Log Out";
				 this->linkLabelLogOut->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &FormHomeAdmin::linkLabelLogOut_LinkClicked);
				 // 
				 // labelUsername
				 // 
				 this->labelUsername->AutoSize = true;
				 this->labelUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->labelUsername->Location = System::Drawing::Point(85, 9);
				 this->labelUsername->Name = L"labelUsername";
				 this->labelUsername->Size = System::Drawing::Size(50, 17);
				 this->labelUsername->TabIndex = 2;
				 this->labelUsername->Text = L"USER";
				 // 
				 // listBoxDisplay
				 // 
				 this->listBoxDisplay->FormattingEnabled = true;
				 this->listBoxDisplay->ItemHeight = 16;
				 this->listBoxDisplay->Location = System::Drawing::Point(138, 153);
				 this->listBoxDisplay->Name = L"listBoxDisplay";
				 this->listBoxDisplay->Size = System::Drawing::Size(188, 260);
				 this->listBoxDisplay->TabIndex = 4;
				 this->listBoxDisplay->SelectedIndexChanged += gcnew System::EventHandler(this, &FormHomeAdmin::listBoxDisplay_SelectedIndexChanged);
				 // 
				 // buttonSelect
				 // 
				 this->buttonSelect->Location = System::Drawing::Point(482, 241);
				 this->buttonSelect->Name = L"buttonSelect";
				 this->buttonSelect->Size = System::Drawing::Size(105, 47);
				 this->buttonSelect->TabIndex = 7;
				 this->buttonSelect->Text = L"Select";
				 this->buttonSelect->UseVisualStyleBackColor = true;
				 // 
				 // buttonNewItem
				 // 
				 this->buttonNewItem->Location = System::Drawing::Point(581, 28);
				 this->buttonNewItem->Name = L"buttonNewItem";
				 this->buttonNewItem->Size = System::Drawing::Size(108, 29);
				 this->buttonNewItem->TabIndex = 8;
				 this->buttonNewItem->Text = L"Add New Item";
				 this->buttonNewItem->UseVisualStyleBackColor = true;
				 this->buttonNewItem->Click += gcnew System::EventHandler(this, &FormHomeAdmin::buttonNewItem_Click);
				 // 
				 // buttonDelete
				 // 
				 this->buttonDelete->Location = System::Drawing::Point(482, 294);
				 this->buttonDelete->Name = L"buttonDelete";
				 this->buttonDelete->Size = System::Drawing::Size(105, 47);
				 this->buttonDelete->TabIndex = 9;
				 this->buttonDelete->Text = L"Delete";
				 this->buttonDelete->UseVisualStyleBackColor = true;
				 this->buttonDelete->Click += gcnew System::EventHandler(this, &FormHomeAdmin::buttonDelete_Click);
				 // 
				 // labelSortBy
				 // 
				 this->labelSortBy->AutoSize = true;
				 this->labelSortBy->Location = System::Drawing::Point(58, 110);
				 this->labelSortBy->Name = L"labelSortBy";
				 this->labelSortBy->Size = System::Drawing::Size(54, 17);
				 this->labelSortBy->TabIndex = 11;
				 this->labelSortBy->Text = L"Sort By";
				 // 
				 // comboBoxSortBy
				 // 
				 this->comboBoxSortBy->FormattingEnabled = true;
				 this->comboBoxSortBy->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Title", L"Release Date"});
				 this->comboBoxSortBy->Location = System::Drawing::Point(138, 110);
				 this->comboBoxSortBy->Name = L"comboBoxSortBy";
				 this->comboBoxSortBy->Size = System::Drawing::Size(188, 24);
				 this->comboBoxSortBy->TabIndex = 12;
				 // 
				 // textBox1
				 // 
				 this->textBox1->Location = System::Drawing::Point(501, 114);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(188, 22);
				 this->textBox1->TabIndex = 13;
				 // 
				 // shapeContainer1
				 // 
				 this->shapeContainer1->Location = System::Drawing::Point(0, 0);
				 this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
				 this->shapeContainer1->Name = L"shapeContainer1";
				 this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->lineShape1});
				 this->shapeContainer1->Size = System::Drawing::Size(726, 482);
				 this->shapeContainer1->TabIndex = 14;
				 this->shapeContainer1->TabStop = false;
				 // 
				 // lineShape1
				 // 
				 this->lineShape1->BorderWidth = 2;
				 this->lineShape1->Name = L"lineShape1";
				 this->lineShape1->X1 = 0;
				 this->lineShape1->X2 = 1500;
				 this->lineShape1->Y1 = 75;
				 this->lineShape1->Y2 = 75;
				 // 
				 // labelNumberOfItemsLabel
				 // 
				 this->labelNumberOfItemsLabel->AutoSize = true;
				 this->labelNumberOfItemsLabel->Location = System::Drawing::Point(138, 421);
				 this->labelNumberOfItemsLabel->Name = L"labelNumberOfItemsLabel";
				 this->labelNumberOfItemsLabel->Size = System::Drawing::Size(115, 17);
				 this->labelNumberOfItemsLabel->TabIndex = 15;
				 this->labelNumberOfItemsLabel->Text = L"Number of Items:";
				 // 
				 // labelNumberOfItems
				 // 
				 this->labelNumberOfItems->AutoSize = true;
				 this->labelNumberOfItems->Location = System::Drawing::Point(259, 421);
				 this->labelNumberOfItems->Name = L"labelNumberOfItems";
				 this->labelNumberOfItems->Size = System::Drawing::Size(32, 17);
				 this->labelNumberOfItems->TabIndex = 16;
				 this->labelNumberOfItems->Text = L"000";
				 // 
				 // labelArticleID
				 // 
				 this->labelArticleID->AutoSize = true;
				 this->labelArticleID->Location = System::Drawing::Point(395, 117);
				 this->labelArticleID->Name = L"labelArticleID";
				 this->labelArticleID->Size = System::Drawing::Size(93, 17);
				 this->labelArticleID->TabIndex = 17;
				 this->labelArticleID->Text = L"Search by ID:";
				 // 
				 // radioButtonAll
				 // 
				 this->radioButtonAll->AutoSize = true;
				 this->radioButtonAll->Location = System::Drawing::Point(15, 153);
				 this->radioButtonAll->Name = L"radioButtonAll";
				 this->radioButtonAll->Size = System::Drawing::Size(44, 21);
				 this->radioButtonAll->TabIndex = 18;
				 this->radioButtonAll->TabStop = true;
				 this->radioButtonAll->Text = L"All";
				 this->radioButtonAll->UseVisualStyleBackColor = true;
				 this->radioButtonAll->CheckedChanged += gcnew System::EventHandler(this, &FormHomeAdmin::radioButtonAll_CheckedChanged);
				 // 
				 // radioButtonBooks
				 // 
				 this->radioButtonBooks->AutoSize = true;
				 this->radioButtonBooks->Location = System::Drawing::Point(15, 180);
				 this->radioButtonBooks->Name = L"radioButtonBooks";
				 this->radioButtonBooks->Size = System::Drawing::Size(68, 21);
				 this->radioButtonBooks->TabIndex = 19;
				 this->radioButtonBooks->Text = L"Books";
				 this->radioButtonBooks->UseVisualStyleBackColor = true;
				 this->radioButtonBooks->CheckedChanged += gcnew System::EventHandler(this, &FormHomeAdmin::radioButtonBooks_CheckedChanged);
				 // 
				 // radioButtonCDs
				 // 
				 this->radioButtonCDs->AutoSize = true;
				 this->radioButtonCDs->Location = System::Drawing::Point(15, 207);
				 this->radioButtonCDs->Name = L"radioButtonCDs";
				 this->radioButtonCDs->Size = System::Drawing::Size(55, 21);
				 this->radioButtonCDs->TabIndex = 20;
				 this->radioButtonCDs->Text = L"CDs";
				 this->radioButtonCDs->UseVisualStyleBackColor = true;
				 this->radioButtonCDs->CheckedChanged += gcnew System::EventHandler(this, &FormHomeAdmin::radioButtonCDs_CheckedChanged);
				 // 
				 // button1
				 // 
				 this->button1->Location = System::Drawing::Point(482, 370);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(80, 27);
				 this->button1->TabIndex = 21;
				 this->button1->Text = L"Editing";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &FormHomeAdmin::button1_Click);
				 // 
				 // buttonTerminalMode
				 // 
				 this->buttonTerminalMode->Location = System::Drawing::Point(245, 28);
				 this->buttonTerminalMode->Name = L"buttonTerminalMode";
				 this->buttonTerminalMode->Size = System::Drawing::Size(181, 26);
				 this->buttonTerminalMode->TabIndex = 21;
				 this->buttonTerminalMode->Text = L"Switch to terminal mode";
				 this->buttonTerminalMode->UseVisualStyleBackColor = true;
				 this->buttonTerminalMode->Click += gcnew System::EventHandler(this, &FormHomeAdmin::buttonTerminalMode_Click);
				 // 
				 // FormHomeAdmin
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(726, 482);
				 this->Controls->Add(this->button1);
				 this->Controls->Add(this->buttonTerminalMode);
				 this->Controls->Add(this->radioButtonCDs);
				 this->Controls->Add(this->radioButtonBooks);
				 this->Controls->Add(this->radioButtonAll);
				 this->Controls->Add(this->labelArticleID);
				 this->Controls->Add(this->labelNumberOfItems);
				 this->Controls->Add(this->labelNumberOfItemsLabel);
				 this->Controls->Add(this->textBox1);
				 this->Controls->Add(this->comboBoxSortBy);
				 this->Controls->Add(this->labelSortBy);
				 this->Controls->Add(this->buttonDelete);
				 this->Controls->Add(this->buttonNewItem);
				 this->Controls->Add(this->buttonSelect);
				 this->Controls->Add(this->listBoxDisplay);
				 this->Controls->Add(this->labelUsername);
				 this->Controls->Add(this->linkLabelLogOut);
				 this->Controls->Add(this->labelWelcome);
				 this->Controls->Add(this->shapeContainer1);
				 this->Name = L"FormHomeAdmin";
				 this->Text = L"Home";
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void linkLabelLogOut_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
			 {
				 this->Close();
			 }
	private: System::Void checkBoxBooks_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {


			 }
	private: System::Void buttonNewItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 FormNewArticle ^ F3 = gcnew FormNewArticle();
				 F3->ShowDialog();
			 }
	private: System::Void radioButtonBooks_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->radioButtonBooks->Checked)//if button is checked
				 {
					 int fileID;
					 String ^ strIDFilePath;
					 char *filePath;
					 ifstream myfile;
					 string line;

					 this->listBoxDisplay->Items->Clear();

					 Library myLibrary;
					 int countBooks = 0;
					 for(int i = 0; countBooks < myLibrary.getNumberOfBooks(); i++)
					 {
						 fileID = BASE_BOOK_ID + i;//update file ID
						 strIDFilePath = FILEPATH_BOOK + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt

						 filePath = (char*)Marshal::StringToHGlobalAnsi(strIDFilePath).ToPointer();//convert string
						 myfile.open(filePath);//open file

						 if(getline(myfile, line))//get 1st line and check if line exists
						 {
							 listArticles[listArticleCount].setTitle((char*)line.c_str());
							 listArticleCount++;
							 countBooks++;//to stop when all of the books are found
						 }
						 myfile.close();//close file so it can be opened again with a new path

						 updateListBox();//empty listbox and add all articles in the article list to it

					 }
				 }


			 }
	private: System::Void radioButtonCDs_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->radioButtonCDs->Checked)//if button is checked
				 {
					 int fileID;
					 String ^ strIDFilePath;
					 char *filePath;
					 ifstream myfile;
					 string line;

					 this->listBoxDisplay->Items->Clear();

					 Library myLibrary;
					 int countCDs = 0;
					 for(int i = 0; countCDs < myLibrary.getNumberOfCDs(); i++)
					 {
						 fileID = BASE_CD_ID + i;//update file ID
						 strIDFilePath = FILEPATH_CD + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt
						 filePath = (char*)Marshal::StringToHGlobalAnsi(strIDFilePath).ToPointer();//convert string
						 myfile.open(filePath);//open file
						 if(getline(myfile, line))//get 1st line and check if line exists
						 {
							 this->listBoxDisplay->Items->Add(gcnew String((char*)line.c_str()));
							 countCDs++;
						 }
						 myfile.close();//close file so it can be opened again with a new path

						 this->labelNumberOfItems->Text = "" + countCDs;//myLibrary.getNumberOfBooks()?
					 }
				 }
			 }
	private: System::Void radioButtonAll_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->radioButtonAll->Checked)//if button is checked
				 {
					 int fileID;
					 String ^ strIDFilePath;
					 char *filePath;
					 ifstream myfile;
					 string line;

					 this->listBoxDisplay->Items->Clear();

					 Library myLibrary;

					 int countBooks = 0;
					 int countCDs = 0;

					 for(int i = 0; countBooks < myLibrary.getNumberOfBooks(); i++)
					 {
						 fileID = BASE_BOOK_ID + i;//update file ID
						 strIDFilePath = FILEPATH_BOOK + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt
						 filePath = (char*)Marshal::StringToHGlobalAnsi(strIDFilePath).ToPointer();//convert string
						 myfile.open(filePath);//open file
						 if(getline(myfile, line))//get 1st line and check if line exists
						 {
							 this->listBoxDisplay->Items->Add(gcnew String((char*)line.c_str()));
							 countBooks++;
						 }
						 myfile.close();//close file so it can be opened again with a new path

						 this->labelNumberOfItems->Text = "" + countBooks;//myLibrary.getNumberOfBooks()?
					 }

					 for(int i = 0; countCDs < myLibrary.getNumberOfCDs(); i++)
					 {
						 fileID = BASE_CD_ID + i;//update file ID
						 strIDFilePath = FILEPATH_CD + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt
						 filePath = (char*)Marshal::StringToHGlobalAnsi(strIDFilePath).ToPointer();//convert string
						 myfile.open(filePath);//open file
						 if(getline(myfile, line))//get 1st line and check if line exists
						 {
							 this->listBoxDisplay->Items->Add(gcnew String((char*)line.c_str()));
							 countCDs++;
						 }
						 myfile.close();//close file so it can be opened again with a new path

						 this->labelNumberOfItems->Text = "" + myLibrary.getNumberOfAll();//myLibrary.getNumberOfBooks()?
					 }
				 }
			 }
	private: System::Void buttonTerminalMode_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 popup("Error", "This is the 21st century, nobody uses terminals anymore!");
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 popup("Login Successful", "Welcome!");
				 this->Hide();//hides the current form window (so two users can't login at the same time)
				 FormEditArticle ^ myForm = gcnew FormEditArticle(); //FormEditArticle defined in FormEditArticle.h
				 myForm->ShowDialog(); //blocks modifications on previous form (not visible anyway) 
				 //stays on F3 for most of the program execution time
				 this->Show();//redisplays previous form once F3 is shut

			 }
	private: System::Void buttonDelete_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 //DELETE selected article

				 int selectedIndex = this->listBoxDisplay->SelectedIndex;
				 // char *enteredUsername = (char*)Marshal::StringToHGlobalAnsi(strUsername).ToPointer();
				 popup("Login Successful", (char*)Marshal::StringToHGlobalAnsi("" + selectedIndex).ToPointer());
			 }

			 void updateListBox()//empty listbox and add all articles in the article list to it
			 {
				 this->listBoxDisplay->Items->Clear();

				 for(int i = 0; i < listArticleCount; i++)
					 this->listBoxDisplay->Items->Add(gcnew String(listArticles[i].getTitle().c_str()));

				 this->labelNumberOfItems->Text = "" + listArticleCount;//myLibrary.getNumberOfBooks()?
			 }
	private: System::Void listBoxDisplay_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
