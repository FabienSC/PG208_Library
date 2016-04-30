#pragma once
#include "stdafx.h"

namespace PG208_Library
{

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

			listArticleSize = 10;
			listArticles = new Article*[listArticleSize];
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
	protected: 
	private: System::Windows::Forms::LinkLabel^  linkLabelLogOut;
	private: System::Windows::Forms::Label^  labelUsername;
	private: System::Windows::Forms::ListBox^  listBoxDisplay;


	private: System::Windows::Forms::Button^  buttonSelect;
	private: System::Windows::Forms::Button^  buttonNewItem;
	private: System::Windows::Forms::Button^  buttonDelete;
	private: System::Windows::Forms::Label^  labelSortBy;
	private: System::Windows::Forms::ComboBox^  comboBoxSortBy;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape1;
	private: System::Windows::Forms::Label^  labelNumberOfItemsLabel;
	private: System::Windows::Forms::Label^  labelNumberOfItems;
	private: System::Windows::Forms::Label^  labelArticleID;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  buttonTerminalMode;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


		int listArticleSize;//Start off with 10 articles
		Article ** listArticles;//will point to a dynamic array of Articles henceforth refered to as "DynArray(TM)"
		int listArticleCount;//number of articles in the list
	private: System::Windows::Forms::Button^  buttonAddUser;
	private: System::Windows::Forms::CheckBox^  checkBoxAll;
	private: System::Windows::Forms::CheckBox^  checkBoxBooks;
	private: System::Windows::Forms::CheckBox^  checkBoxCDs;
	private: System::Windows::Forms::CheckBox^  checkBoxDVDs;
	private: System::Windows::Forms::CheckBox^  checkBoxMagazines;
	private: System::Windows::Forms::Label^  labelCheckBoxes;



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
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->buttonTerminalMode = (gcnew System::Windows::Forms::Button());
				 this->buttonAddUser = (gcnew System::Windows::Forms::Button());
				 this->checkBoxAll = (gcnew System::Windows::Forms::CheckBox());
				 this->checkBoxBooks = (gcnew System::Windows::Forms::CheckBox());
				 this->checkBoxCDs = (gcnew System::Windows::Forms::CheckBox());
				 this->checkBoxDVDs = (gcnew System::Windows::Forms::CheckBox());
				 this->checkBoxMagazines = (gcnew System::Windows::Forms::CheckBox());
				 this->labelCheckBoxes = (gcnew System::Windows::Forms::Label());
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
				 this->linkLabelLogOut->Location = System::Drawing::Point(12, 34);
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
				 this->listBoxDisplay->Location = System::Drawing::Point(144, 179);
				 this->listBoxDisplay->Name = L"listBoxDisplay";
				 this->listBoxDisplay->Size = System::Drawing::Size(188, 260);
				 this->listBoxDisplay->TabIndex = 4;
				 // 
				 // buttonSelect
				 // 
				 this->buttonSelect->Location = System::Drawing::Point(488, 267);
				 this->buttonSelect->Name = L"buttonSelect";
				 this->buttonSelect->Size = System::Drawing::Size(105, 47);
				 this->buttonSelect->TabIndex = 7;
				 this->buttonSelect->Text = L"Select";
				 this->buttonSelect->UseVisualStyleBackColor = true;
				 this->buttonSelect->Click += gcnew System::EventHandler(this, &FormHomeAdmin::buttonSelect_Click);
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
				 this->buttonDelete->Location = System::Drawing::Point(488, 320);
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
				 this->labelSortBy->Location = System::Drawing::Point(64, 136);
				 this->labelSortBy->Name = L"labelSortBy";
				 this->labelSortBy->Size = System::Drawing::Size(54, 17);
				 this->labelSortBy->TabIndex = 11;
				 this->labelSortBy->Text = L"Sort By";
				 // 
				 // comboBoxSortBy
				 // 
				 this->comboBoxSortBy->FormattingEnabled = true;
				 this->comboBoxSortBy->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Title", L"Release Date"});
				 this->comboBoxSortBy->Location = System::Drawing::Point(144, 136);
				 this->comboBoxSortBy->Name = L"comboBoxSortBy";
				 this->comboBoxSortBy->Size = System::Drawing::Size(188, 24);
				 this->comboBoxSortBy->TabIndex = 12;
				 this->comboBoxSortBy->SelectedIndexChanged += gcnew System::EventHandler(this, &FormHomeAdmin::comboBoxSortBy_SelectedIndexChanged);
				 // 
				 // textBox1
				 // 
				 this->textBox1->Location = System::Drawing::Point(501, 133);
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
				 this->shapeContainer1->Size = System::Drawing::Size(732, 503);
				 this->shapeContainer1->TabIndex = 14;
				 this->shapeContainer1->TabStop = false;
				 // 
				 // lineShape1
				 // 
				 this->lineShape1->BorderWidth = 2;
				 this->lineShape1->Name = L"lineShape1";
				 this->lineShape1->X1 = 0;
				 this->lineShape1->X2 = 1500;
				 this->lineShape1->Y1 = 80;
				 this->lineShape1->Y2 = 80;
				 // 
				 // labelNumberOfItemsLabel
				 // 
				 this->labelNumberOfItemsLabel->AutoSize = true;
				 this->labelNumberOfItemsLabel->Location = System::Drawing::Point(141, 455);
				 this->labelNumberOfItemsLabel->Name = L"labelNumberOfItemsLabel";
				 this->labelNumberOfItemsLabel->Size = System::Drawing::Size(115, 17);
				 this->labelNumberOfItemsLabel->TabIndex = 15;
				 this->labelNumberOfItemsLabel->Text = L"Number of Items:";
				 // 
				 // labelNumberOfItems
				 // 
				 this->labelNumberOfItems->AutoSize = true;
				 this->labelNumberOfItems->Location = System::Drawing::Point(262, 455);
				 this->labelNumberOfItems->Name = L"labelNumberOfItems";
				 this->labelNumberOfItems->Size = System::Drawing::Size(16, 17);
				 this->labelNumberOfItems->TabIndex = 16;
				 this->labelNumberOfItems->Text = L"0";
				 // 
				 // labelArticleID
				 // 
				 this->labelArticleID->AutoSize = true;
				 this->labelArticleID->Location = System::Drawing::Point(395, 136);
				 this->labelArticleID->Name = L"labelArticleID";
				 this->labelArticleID->Size = System::Drawing::Size(93, 17);
				 this->labelArticleID->TabIndex = 17;
				 this->labelArticleID->Text = L"Search by ID:";
				 // 
				 // button1
				 // 
				 this->button1->Location = System::Drawing::Point(488, 396);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(80, 27);
				 this->button1->TabIndex = 21;
				 this->button1->Text = L"Editing";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &FormHomeAdmin::button1_Click);
				 // 
				 // buttonTerminalMode
				 // 
				 this->buttonTerminalMode->Location = System::Drawing::Point(217, 10);
				 this->buttonTerminalMode->Name = L"buttonTerminalMode";
				 this->buttonTerminalMode->Size = System::Drawing::Size(115, 47);
				 this->buttonTerminalMode->TabIndex = 21;
				 this->buttonTerminalMode->Text = L"Switch to terminal mode";
				 this->buttonTerminalMode->UseVisualStyleBackColor = true;
				 this->buttonTerminalMode->Click += gcnew System::EventHandler(this, &FormHomeAdmin::buttonTerminalMode_Click);
				 // 
				 // buttonAddUser
				 // 
				 this->buttonAddUser->Location = System::Drawing::Point(425, 28);
				 this->buttonAddUser->Name = L"buttonAddUser";
				 this->buttonAddUser->Size = System::Drawing::Size(108, 28);
				 this->buttonAddUser->TabIndex = 22;
				 this->buttonAddUser->Text = L"Add User";
				 this->buttonAddUser->UseVisualStyleBackColor = true;
				 this->buttonAddUser->Click += gcnew System::EventHandler(this, &FormHomeAdmin::buttonAddUser_Click);
				 // 
				 // checkBoxAll
				 // 
				 this->checkBoxAll->AutoSize = true;
				 this->checkBoxAll->Location = System::Drawing::Point(16, 206);
				 this->checkBoxAll->Name = L"checkBoxAll";
				 this->checkBoxAll->Size = System::Drawing::Size(45, 21);
				 this->checkBoxAll->TabIndex = 23;
				 this->checkBoxAll->Text = L"All";
				 this->checkBoxAll->UseVisualStyleBackColor = true;
				 this->checkBoxAll->CheckedChanged += gcnew System::EventHandler(this, &FormHomeAdmin::checkBoxAll_CheckedChanged);
				 // 
				 // checkBoxBooks
				 // 
				 this->checkBoxBooks->AutoSize = true;
				 this->checkBoxBooks->Location = System::Drawing::Point(16, 233);
				 this->checkBoxBooks->Name = L"checkBoxBooks";
				 this->checkBoxBooks->Size = System::Drawing::Size(69, 21);
				 this->checkBoxBooks->TabIndex = 24;
				 this->checkBoxBooks->Text = L"Books";
				 this->checkBoxBooks->UseVisualStyleBackColor = true;
				 this->checkBoxBooks->CheckedChanged += gcnew System::EventHandler(this, &FormHomeAdmin::checkBoxBooks_CheckedChanged);
				 // 
				 // checkBoxCDs
				 // 
				 this->checkBoxCDs->AutoSize = true;
				 this->checkBoxCDs->Location = System::Drawing::Point(16, 260);
				 this->checkBoxCDs->Name = L"checkBoxCDs";
				 this->checkBoxCDs->Size = System::Drawing::Size(56, 21);
				 this->checkBoxCDs->TabIndex = 25;
				 this->checkBoxCDs->Text = L"CDs";
				 this->checkBoxCDs->UseVisualStyleBackColor = true;
				 this->checkBoxCDs->CheckedChanged += gcnew System::EventHandler(this, &FormHomeAdmin::checkBoxCDs_CheckedChanged);
				 // 
				 // checkBoxDVDs
				 // 
				 this->checkBoxDVDs->AutoSize = true;
				 this->checkBoxDVDs->Location = System::Drawing::Point(16, 287);
				 this->checkBoxDVDs->Name = L"checkBoxDVDs";
				 this->checkBoxDVDs->Size = System::Drawing::Size(66, 21);
				 this->checkBoxDVDs->TabIndex = 26;
				 this->checkBoxDVDs->Text = L"DVDs";
				 this->checkBoxDVDs->UseVisualStyleBackColor = true;
				 // 
				 // checkBoxMagazines
				 // 
				 this->checkBoxMagazines->AutoSize = true;
				 this->checkBoxMagazines->Location = System::Drawing::Point(16, 314);
				 this->checkBoxMagazines->Name = L"checkBoxMagazines";
				 this->checkBoxMagazines->Size = System::Drawing::Size(98, 21);
				 this->checkBoxMagazines->TabIndex = 27;
				 this->checkBoxMagazines->Text = L"Magazines";
				 this->checkBoxMagazines->UseVisualStyleBackColor = true;
				 // 
				 // labelCheckBoxes
				 // 
				 this->labelCheckBoxes->AutoSize = true;
				 this->labelCheckBoxes->Location = System::Drawing::Point(13, 179);
				 this->labelCheckBoxes->Name = L"labelCheckBoxes";
				 this->labelCheckBoxes->Size = System::Drawing::Size(58, 17);
				 this->labelCheckBoxes->TabIndex = 28;
				 this->labelCheckBoxes->Text = L"Display:";
				 // 
				 // FormHomeAdmin
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(732, 503);
				 this->Controls->Add(this->labelCheckBoxes);
				 this->Controls->Add(this->checkBoxMagazines);
				 this->Controls->Add(this->checkBoxDVDs);
				 this->Controls->Add(this->checkBoxCDs);
				 this->Controls->Add(this->checkBoxBooks);
				 this->Controls->Add(this->checkBoxAll);
				 this->Controls->Add(this->buttonAddUser);
				 this->Controls->Add(this->button1);
				 this->Controls->Add(this->buttonTerminalMode);
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
				 this->MaximumSize = System::Drawing::Size(750, 550);
				 this->MinimumSize = System::Drawing::Size(750, 550);
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


	private: System::Void buttonNewItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 FormNewArticle ^ F3 = gcnew FormNewArticle();
				 F3->ShowDialog();
			 }


	private: System::Void checkBoxAll_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->checkBoxAll->Checked)//if box is checked
				 {
					 this->checkBoxBooks->Checked = false;//uncheck books
					 this->checkBoxCDs->Checked = false;//uncheck CDs
				 }
				 loadArticles();
			 }

	private: System::Void checkBoxBooks_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->checkBoxBooks->Checked)//if box is checked
					 this->checkBoxAll->Checked = false;//useless to check first

				 loadArticles();
			 }

	private: System::Void checkBoxCDs_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->checkBoxCDs->Checked)//if box is checked
					 this->checkBoxAll->Checked = false;//useless to check first

				 loadArticles();
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

	private: System::Void buttonDelete_Click(System::Object^  sender, System::EventArgs^  e) //DELETE Article
			 {
				 //DELETE selected article
				 int selectedIndex = this->listBoxDisplay->SelectedIndex;
				 if(selectedIndex == -1)
					 return;//no selection => do nothing
				 listArticles[selectedIndex]->deleteFile();
				 for(int i = selectedIndex; i < listArticleCount; i++)
				 {
					 listArticles[i] = listArticles[i+1];
				 }
				 listArticleCount--;//there is one less article in the DynArray(TM)
				 updateListBox();
			 }

	private: System::Void buttonSelect_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 int selectedIndex = this->listBoxDisplay->SelectedIndex;//-1 means nothing is selected
				 popup("Selected", listArticles[selectedIndex]->getTitle());//display title
			 }

	private: System::Void comboBoxSortBy_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 //sort by title/release date...
			 }

			 ///////////////////////////////////////////////////////////////

			 void updateListBox()//empty listbox and add all articles in the article list to it
			 {
				 this->listBoxDisplay->Items->Clear();

				 for(int i = 0; i < listArticleCount; i++)
				 {
					 this->listBoxDisplay->Items->Add(gcnew String(listArticles[i]->getTitle()));
				 }

				 this->labelNumberOfItems->Text = "" + listArticleCount;//myLibrary.getNumberOfBooks()?
			 }

			 ///////////////////////////////////////////////////////////////

			 void loadArticles()//load all/books/CDs...
			 {
				 listArticlesClear();
				 Library myLibrary;//get number of books, CDs...

				 if(this->checkBoxBooks->Checked || this->checkBoxAll->Checked)
				 {
					 int countBooks = 0;
					 for(int i = 0; countBooks < myLibrary.getNumberOfBooks(); i++)
					 {
						 int fileID = BASE_BOOK_ID + i;//update file ID

						 Book * myBook = new Book;//create new book
						 if(myBook->load(fileID))//load data from file is successful
						 {
							 listArticles[listArticleCount] = myBook;//store book in the DynArray(TM)

							 countBooks++;//to stop when all of the books are found
							 listArticleCount++;
							 if(listArticleCount >= listArticleSize)//if Dynamic Array is too small
								 increaseListArticleSize();//increase Dynamic array size
						 }
					 }
				 }
				 if(this->checkBoxCDs->Checked || this->checkBoxAll->Checked)
				 {
					 int countCDs = 0;
					 for(int i = 0; countCDs < myLibrary.getNumberOfCDs(); i++)
					 {
						 int fileID = BASE_CD_ID + i;//update file ID

						 CD * myCD = new CD;//create new book
						 if(myCD->load(fileID))//load data from file is successful
						 {
							 listArticles[listArticleCount] = myCD;//store book in the DynArray(TM)

							 countCDs++;//to stop when all of the books are found
							 listArticleCount++;
							 if(listArticleCount >= listArticleSize)//if Dynamic Array is too small
								 increaseListArticleSize();//increase Dynamic array size
						 }
					 }
				 }
				 updateListBox();//empty listbox and add all articles in the article list to it
			 }

			 ///////////////////////////////////////////////////////////////

			 void increaseListArticleSize()//empty listbox and add all articles in the article list to it
			 {
				 int n = listArticleSize;
				 listArticleSize = 2 * listArticleSize;

				 Article** temp = new Article*[listArticleSize]; // create new bigger, better, faster, stronger array.
				 for (int i=0; i<n; i++)
				 {
					 temp[i] = listArticles[i];       // copy values to new array.
				 }
				 delete [] listArticles;              // free old array memory.
				 listArticles = temp;         
			 }

			 ///////////////////////////////////////////////////////////////

			 void listArticlesClear()
			 {
				 delete [] listArticles;              // free old array memory.
				 listArticleSize = 10;
				 listArticles = new Article*[listArticleSize];
				 listArticleCount = 0;
			 }

	private: System::Void buttonAddUser_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 FormNewUser ^ FNewUser = gcnew FormNewUser(1); //FormNewUser for Admin users
				 FNewUser->ShowDialog();
			 }
};
}
