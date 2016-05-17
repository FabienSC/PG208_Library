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
		FormHomeAdmin(String^ username, bool userIsAdmin)//username and status passed in 
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here

			this->labelUsername->Text = username;

			listArticleSize = 2;
			listArticles = initArticleList();
			listArticleCount = 0;

			if(!userIsAdmin)//regular user
			{
				this->buttonNewItem->Visible = false;
				this->buttonAddUser->Visible = false;
				this->buttonDelete->Visible = false;
				this->buttonEdit->Visible = false;
			}
			else //admin user
				this->buttonSelect->Visible = false;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>

		~FormHomeAdmin()
		{
			//thibaud.tonnellier@ims-bordeaux.fr
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
	private: System::Windows::Forms::Button^  buttonEdit;




	private: System::Windows::Forms::Button^  buttonTerminalMode;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


		int listArticleSize;//Start off with 10 articles
		array<Article ^>^ listArticles;//will point to a dynamic array of Articles henceforth refered to as "DynArray(TM)"
		int listArticleCount;//number of articles in the list

	private: System::Windows::Forms::Button^  buttonAddUser;
	private: System::Windows::Forms::CheckBox^  checkBoxAll;
	private: System::Windows::Forms::CheckBox^  checkBoxBooks;
	private: System::Windows::Forms::CheckBox^  checkBoxCDs;
	private: System::Windows::Forms::CheckBox^  checkBoxDVDs;
	private: System::Windows::Forms::CheckBox^  checkBoxMagazines;
	private: System::Windows::Forms::Label^  labelCheckBoxes;
	private: System::Windows::Forms::CheckBox^  checkBoxVHSs;
	private: System::Windows::Forms::CheckBox^  checkBoxDigital;
	private: System::Windows::Forms::Button^  buttonView;



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
				 this->buttonEdit = (gcnew System::Windows::Forms::Button());
				 this->buttonTerminalMode = (gcnew System::Windows::Forms::Button());
				 this->buttonAddUser = (gcnew System::Windows::Forms::Button());
				 this->checkBoxAll = (gcnew System::Windows::Forms::CheckBox());
				 this->checkBoxBooks = (gcnew System::Windows::Forms::CheckBox());
				 this->checkBoxCDs = (gcnew System::Windows::Forms::CheckBox());
				 this->checkBoxDVDs = (gcnew System::Windows::Forms::CheckBox());
				 this->checkBoxMagazines = (gcnew System::Windows::Forms::CheckBox());
				 this->labelCheckBoxes = (gcnew System::Windows::Forms::Label());
				 this->checkBoxVHSs = (gcnew System::Windows::Forms::CheckBox());
				 this->checkBoxDigital = (gcnew System::Windows::Forms::CheckBox());
				 this->buttonView = (gcnew System::Windows::Forms::Button());
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
				 this->listBoxDisplay->SelectedIndexChanged += gcnew System::EventHandler(this, &FormHomeAdmin::listBoxDisplay_SelectedIndexChanged);
				 // 
				 // buttonSelect
				 // 
				 this->buttonSelect->Location = System::Drawing::Point(469, 267);
				 this->buttonSelect->Name = L"buttonSelect";
				 this->buttonSelect->Size = System::Drawing::Size(136, 47);
				 this->buttonSelect->TabIndex = 7;
				 this->buttonSelect->Text = L"Borrow/Return";
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
				 this->labelSortBy->Location = System::Drawing::Point(46, 136);
				 this->labelSortBy->Name = L"labelSortBy";
				 this->labelSortBy->Size = System::Drawing::Size(54, 17);
				 this->labelSortBy->TabIndex = 11;
				 this->labelSortBy->Text = L"Sort By";
				 // 
				 // comboBoxSortBy
				 // 
				 this->comboBoxSortBy->FormattingEnabled = true;
				 this->comboBoxSortBy->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"ID (Ascending)", L"ID (Descending)", L"Title (A->Z)", 
					 L"Title (Z->A)", L"Release Date (Newest First)", L"Release Date (Oldest First)"});
				 this->comboBoxSortBy->Location = System::Drawing::Point(134, 136);
				 this->comboBoxSortBy->Name = L"comboBoxSortBy";
				 this->comboBoxSortBy->Size = System::Drawing::Size(207, 24);
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
				 // buttonEdit
				 // 
				 this->buttonEdit->Location = System::Drawing::Point(488, 373);
				 this->buttonEdit->Name = L"buttonEdit";
				 this->buttonEdit->Size = System::Drawing::Size(105, 47);
				 this->buttonEdit->TabIndex = 21;
				 this->buttonEdit->Text = L"Edit";
				 this->buttonEdit->UseVisualStyleBackColor = true;
				 this->buttonEdit->Click += gcnew System::EventHandler(this, &FormHomeAdmin::buttonEdit_Click);
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
				 this->checkBoxCDs->Location = System::Drawing::Point(16, 287);
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
				 this->checkBoxDVDs->Location = System::Drawing::Point(15, 314);
				 this->checkBoxDVDs->Name = L"checkBoxDVDs";
				 this->checkBoxDVDs->Size = System::Drawing::Size(66, 21);
				 this->checkBoxDVDs->TabIndex = 26;
				 this->checkBoxDVDs->Text = L"DVDs";
				 this->checkBoxDVDs->UseVisualStyleBackColor = true;
				 this->checkBoxDVDs->CheckedChanged += gcnew System::EventHandler(this, &FormHomeAdmin::checkBoxDVDs_CheckedChanged);
				 // 
				 // checkBoxMagazines
				 // 
				 this->checkBoxMagazines->AutoSize = true;
				 this->checkBoxMagazines->Location = System::Drawing::Point(16, 260);
				 this->checkBoxMagazines->Name = L"checkBoxMagazines";
				 this->checkBoxMagazines->Size = System::Drawing::Size(98, 21);
				 this->checkBoxMagazines->TabIndex = 27;
				 this->checkBoxMagazines->Text = L"Magazines";
				 this->checkBoxMagazines->UseVisualStyleBackColor = true;
				 this->checkBoxMagazines->CheckedChanged += gcnew System::EventHandler(this, &FormHomeAdmin::checkBoxMagazines_CheckedChanged);
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
				 // checkBoxVHSs
				 // 
				 this->checkBoxVHSs->AutoSize = true;
				 this->checkBoxVHSs->Location = System::Drawing::Point(15, 341);
				 this->checkBoxVHSs->Name = L"checkBoxVHSs";
				 this->checkBoxVHSs->Size = System::Drawing::Size(65, 21);
				 this->checkBoxVHSs->TabIndex = 29;
				 this->checkBoxVHSs->Text = L"VHSs";
				 this->checkBoxVHSs->UseVisualStyleBackColor = true;
				 this->checkBoxVHSs->CheckedChanged += gcnew System::EventHandler(this, &FormHomeAdmin::checkBoxVHSs_CheckedChanged);
				 // 
				 // checkBoxDigital
				 // 
				 this->checkBoxDigital->AutoSize = true;
				 this->checkBoxDigital->Location = System::Drawing::Point(15, 369);
				 this->checkBoxDigital->Name = L"checkBoxDigital";
				 this->checkBoxDigital->Size = System::Drawing::Size(102, 21);
				 this->checkBoxDigital->TabIndex = 30;
				 this->checkBoxDigital->Text = L"Digital Res.";
				 this->checkBoxDigital->UseVisualStyleBackColor = true;
				 this->checkBoxDigital->CheckedChanged += gcnew System::EventHandler(this, &FormHomeAdmin::checkBoxDigital_CheckedChanged);
				 // 
				 // buttonView
				 // 
				 this->buttonView->Location = System::Drawing::Point(488, 216);
				 this->buttonView->Name = L"buttonView";
				 this->buttonView->Size = System::Drawing::Size(105, 43);
				 this->buttonView->TabIndex = 31;
				 this->buttonView->Text = L"View";
				 this->buttonView->UseVisualStyleBackColor = true;
				 this->buttonView->Click += gcnew System::EventHandler(this, &FormHomeAdmin::buttonView_Click);
				 // 
				 // FormHomeAdmin
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(732, 503);
				 this->Controls->Add(this->buttonView);
				 this->Controls->Add(this->checkBoxDigital);
				 this->Controls->Add(this->checkBoxVHSs);
				 this->Controls->Add(this->labelCheckBoxes);
				 this->Controls->Add(this->checkBoxMagazines);
				 this->Controls->Add(this->checkBoxDVDs);
				 this->Controls->Add(this->checkBoxCDs);
				 this->Controls->Add(this->checkBoxBooks);
				 this->Controls->Add(this->checkBoxAll);
				 this->Controls->Add(this->buttonAddUser);
				 this->Controls->Add(this->buttonEdit);
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
				 loadArticles();//update list
			 }


	private: System::Void checkBoxAll_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->checkBoxAll->Checked)	//if box is checked
				 {
					 this->checkBoxBooks->Checked		= false;//uncheck books
					 this->checkBoxMagazines->Checked	= false;//uncheck
					 this->checkBoxCDs->Checked			= false;//uncheck
					 this->checkBoxDVDs->Checked		= false;//uncheck
					 this->checkBoxVHSs->Checked		= false;//uncheck
					 this->checkBoxDigital->Checked		= false;//uncheck
				 }
				 loadArticles();
			 }

	private: System::Void checkBoxBooks_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->checkBoxBooks->Checked)//if box is checked
					 this->checkBoxAll->Checked = false;//useless to check first
				 if(this->checkBoxAll->Checked == false)//no need to load if the check all box is true, it will load the articles
					 loadArticles();
			 }

	private: System::Void checkBoxMagazines_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->checkBoxMagazines->Checked)//if box is checked
					 this->checkBoxAll->Checked = false;//useless to check first
				 if(this->checkBoxAll->Checked == false)//no need to load if the check all box is true, it will load the articles
					 loadArticles();
			 }

	private: System::Void checkBoxCDs_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->checkBoxCDs->Checked)//if box is checked
					 this->checkBoxAll->Checked = false;//useless to check first
				 if(this->checkBoxAll->Checked == false)//no need to load if the check all box is true, it will load the articles
					 loadArticles();
			 }

	private: System::Void checkBoxDVDs_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->checkBoxDVDs->Checked)//if box is checked
					 this->checkBoxAll->Checked = false;//useless to check first
				 if(this->checkBoxAll->Checked == false)//no need to load if the check all box is true, it will load the articles
					 loadArticles();
			 }

	private: System::Void checkBoxVHSs_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->checkBoxVHSs->Checked)//if box is checked
					 this->checkBoxAll->Checked = false;//useless to check first
				 if(this->checkBoxAll->Checked == false)//no need to load if the check all box is true, it will load the articles
					 loadArticles();
			 }

	private: System::Void checkBoxDigital_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->checkBoxDigital->Checked)//if box is checked
					 this->checkBoxAll->Checked = false;//useless to check first
				 if(this->checkBoxAll->Checked == false)//no need to load if the check all box is true, it will load the articles
					 loadArticles();
			 }


	private: System::Void buttonTerminalMode_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 popup("Error", "This is the 21st century, nobody uses terminals anymore!");
			 }

	private: System::Void buttonEdit_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 int selectedIndex = this->listBoxDisplay->SelectedIndex;
				 if(selectedIndex == -1)
					 return;//no selection => do nothing

				 FormNewArticle ^ Fedit = gcnew FormNewArticle(listArticles[selectedIndex]->getID(), true);//Edit Article
				 Fedit->ShowDialog();

				 loadArticles();
				 updateListBox();//loadArticles();//update list
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

 				 if(selectedIndex == -1)
				 {
					 popup("Epic Fail", "Please choose your article first!");
					 return;//no selection => do nothing
				 }

				 popup("Borrowing Programme", "Welcome! Choose your article!");
				 this->Hide();

				 FormEditArticle ^ FBorrowArticle = gcnew FormEditArticle(listArticles[selectedIndex]->getID(), this->labelUsername->Text); //FormEditArticle defined in FormBorrowArticle.h
				 FBorrowArticle->ShowDialog();
				 this->Show();

				 //			 popup("Selected", listArticles[selectedIndex]->getTitle());//display title
			 }

	private: System::Void comboBoxSortBy_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 //sort by title/release date...
				 int index = comboBoxSortBy->SelectedIndex;

				 if(index == 0)		//ID Low->High selected
					 sortByID(1);
				 else if(index == 1)//ID High->Low selected
					sortByID(-1);
				 else if(index == 2)//A->Z selected
					sortByTitle(1);
				 else if(index == 3)//Z->A selected
					sortByTitle(-1);
				 else if(index == 4)//Release date newest 1st selected
					sortByReleaseDate(1);
				 else if(index == 5)//Release date oldest 1st selected
					sortByReleaseDate(-1);
				 else
					 popup("Error", "sorting index error");

				 updateListBox();
			 }

			 ///////////////////////////////////////////////////////////////

			 void updateListBox()//empty listbox and add all articles in the article list to it
			 {
				 this->listBoxDisplay->Items->Clear();

				 for(int i = 0; i < listArticleCount; i++)
				 {
					 this->listBoxDisplay->Items->Add(listArticles[i]->getTitle());
				 }

				 this->labelNumberOfItems->Text = intToManagedString(listArticleCount);//myLibrary.getNumberOfBooks()?
			 }

			 ///////////////////////////////////////////////////////////////

			 void loadArticles()//load all/books/CDs...
			 {
				 listArticlesClear();
				 Library myLibrary;//get number of books, CDs...

				 if(this->checkBoxBooks->Checked || this->checkBoxAll->Checked)
				 {
					 int countBooks = 0;
					 for(int i = 0; countBooks < myLibrary.getNumberOfBooks(); i++)//myLibrary.getNumberOfBooks()
					 {
						 int fileID = BASE_BOOK_ID + i;//update file ID

						 Book ^ myBook = gcnew Book;// = new Book;//create new book
						 if(myBook->load(fileID))//load data from file is successful
						 {
							 listArticles[listArticleCount] = gcnew Book;
							 listArticles[listArticleCount] = myBook;//store book in the DynArray(TM)

							 countBooks++;//to stop when all of the books are found
							 listArticleCount++;
							 if(listArticleCount >= listArticleSize)//if Dynamic Array is too small
								 listArticles = increaseListArticleSize();//increase Dynamic array size*/
						 }
						 else
							 delete myBook;
					 }
				 }/*
				  if(this->checkBoxMagazines->Checked || this->checkBoxAll->Checked)
				  {
				  int countMagazines = 0;
				  for(int i = 0; countMagazines < myLibrary.getNumberOfMagazines(); i++)
				  {
				  int fileID = BASE_MAGAZINE_ID + i;//update file ID

				  Book * myMag = new Book;//create new magazine
				  if(myMag->load(fileID))//load data from file is successful
				  {
				  listArticles[listArticleCount] = myMag;//store magazine in the DynArray(TM)

				  countMagazines++;//to stop when all of the Magazines are found
				  listArticleCount++;
				  if(listArticleCount >= listArticleSize)//if Dynamic Array is too small
				  increaseListArticleSize();//increase Dynamic array size
				  }
				  }
				  }*/
				 if(this->checkBoxCDs->Checked || this->checkBoxAll->Checked)
				 {
					 int countCDs = 0;
					 for(int i = 0; countCDs < myLibrary.getNumberOfCDs(); i++)
					 {
						 int fileID = BASE_CD_ID + i;//update file ID

						 CD ^ myCD = gcnew CD;//create new CD
						 if(myCD->load(fileID))//load data from file is successful
						 {
							 listArticles[listArticleCount] = gcnew CD;
							 listArticles[listArticleCount] = myCD;//store book in the DynArray(TM)

							 countCDs++;//to stop when all of the CDs are found
							 listArticleCount++;
							 if(listArticleCount >= listArticleSize)//if Dynamic Array is too small
								 listArticles = increaseListArticleSize();//increase Dynamic array size
						 }
						 else
							 delete myCD;
					 }
				 }
				 if(this->checkBoxDVDs->Checked || this->checkBoxAll->Checked)
				 {
					 int countDVDs = 0;
					 for(int i = 0; countDVDs < myLibrary.getNumberOfDVDs(); i++)
					 {
						 int fileID = BASE_DVD_ID + i;//update file ID

						 Video ^ myDVD = gcnew Video;//create new DVD
						 if(myDVD->load(fileID))//load data from file is successful
						 {
							 listArticles[listArticleCount] = gcnew Video;
							 listArticles[listArticleCount] = myDVD;//store book in the DynArray(TM)

							 countDVDs++;//to stop when all of the DVDs are found
							 listArticleCount++;
							 if(listArticleCount >= listArticleSize)//if Dynamic Array is too small
								 listArticles = increaseListArticleSize();//increase Dynamic array size
						 }
						 else
							 delete myDVD;
					 }
				 }
				 if(this->checkBoxVHSs->Checked || this->checkBoxAll->Checked)
				 {
					 int countVHSs = 0;
					 for(int i = 0; countVHSs < myLibrary.getNumberOfVHSs(); i++)
					 {
						 int fileID = BASE_VHS_ID + i;//update file ID

						 Video ^ myVHS = gcnew Video;//create new book
						 if(myVHS->load(fileID))//load data from file is successful
						 {
							 listArticles[listArticleCount] = gcnew Video;
							 listArticles[listArticleCount] = myVHS;//store book in the DynArray(TM)

							 countVHSs++;//to stop when all of the books are found
							 listArticleCount++;
							 if(listArticleCount >= listArticleSize)//if Dynamic Array is too small
								 listArticles = increaseListArticleSize();//increase Dynamic array size
						 }
						 else
							 delete myVHS;
					 }
				 }
				 if(this->checkBoxDigital->Checked || this->checkBoxAll->Checked)
				 {
					 int digitalResources = 0;
					 for(int i = 0; digitalResources < myLibrary.getNumberOfDigitalResources(); i++)
					 {
						 int fileID = BASE_DIGITAL_ID + i;//update file ID

						 DigitalRes ^ myDigitalRes = gcnew DigitalRes;//create new book
						 if(myDigitalRes->load(fileID))//load data from file is successful
						 {
							 listArticles[listArticleCount] = gcnew DigitalRes;
							 listArticles[listArticleCount] = myDigitalRes;//store book in the DynArray(TM)

							 digitalResources++;//to stop when all of the books are found
							 listArticleCount++;
							 if(listArticleCount >= listArticleSize)//if Dynamic Array is too small
								 listArticles = increaseListArticleSize();//increase Dynamic array size
						 }
						 else
							 delete myDigitalRes;
					 }
				 }
				 updateListBox();//empty listbox and add all articles in the article list to it
			 }

			 ///////////////////////////////////////////////////////////////

			 array<Article^>^ increaseListArticleSize()//empty listbox and add all articles in the article list to it
			 {

				 listArticleSize = listArticleSize*2;
				 int i;
				 array< Article^ >^ local = gcnew array< Article^ >(listArticleSize);

				 for (i = 0 ; i < listArticleSize/2 ; i++)
				 {
					 local[i] = gcnew Article;
					 local[i] = listArticles[i];
				 }

				 for (i = listArticleSize/2 ; i < listArticleSize ; i++)
				 {
					 local[i] = gcnew Article;
				 }
				 return local;
			 }

			 ///////////////////////////////////////////////////////////////

			 void listArticlesClear()
			 {
				 // free old array memory.
				 /* for(int i = 0; i < listArticleCount; i++)
				 delete listArticles[i];

				 delete [] listArticles;

				 listArticleSize = 10;
				 listArticles = new Article*[listArticleSize];*/
				 listArticleCount = 0;
			 }



			 array<Article^>^ initArticleList()
			 {
				 int i;
				 array< Article^ >^ local = gcnew array< Article^ >(listArticleSize);

				 for (i = 0 ; i < listArticleSize ; i++)
				 {
					 local[i] = gcnew Article;
				 }
				 return local;
			 }


			 void sortByID(int dir)
			 {
				 if((dir != -1) && (dir != 1))//extra safety, it should never happen, but if it does, I want to know
				 {
					 popup("Error", "wrong parameters in ID sort");
					 return;//don't sort
				 }

				 bool direction = false;
				 if(dir == 1)
					direction = true;

				 for(int i = listArticleCount-1; i > 0; i--)//bubble sort
				 {
					 for(int j = 0; j < i; j++)
					 {
						 if((listArticles[j]->getID() > listArticles[j+1]->getID()) == direction)//sorting direction
						 {//swap
							 Article ^ tmp = listArticles[j];
							 listArticles[j] = listArticles[j+1];
							 listArticles[j+1] = tmp;
						 }
					 }
				 }
			 }


			 void sortByTitle(int dir)
			 {
				 if((dir != -1) && (dir != 1))//extra safety, it should never happen, but if it does, I want to know
				 {
					 popup("Error", "wrong parameters in Title sort");
					 return;//don't sort
				 }

				 for(int i = listArticleCount-1; i > 0; i--)//bubble sort
				 {
					 for(int j = 0; j < i; j++)
					 {
						 if(String::Compare(listArticles[j]->getTitle(),listArticles[j+1]->getTitle()) == dir)//sorting direction
						 {//swap
							 Article ^ tmp = listArticles[j];
							 listArticles[j] = listArticles[j+1];
							 listArticles[j+1] = tmp;
						 }
					 }
				 }
			 }

			 

			 void sortByReleaseDate(int dir)
			 {
				 if((dir != -1) && (dir != 1))//extra safety, it should never happen, but if it does, I want to know
				 {
					 popup("Error", "wrong parameters in ReleaseDate sort");
					 return;//don't sort
				 }

				 bool direction = false;
				 if(dir == 1)
					direction = true;

				 for(int i = listArticleCount-1; i > 0; i--)//bubble sort
				 {
					 for(int j = 0; j < i; j++)
					 {
						 if((listArticles[j]->getReleaseDate() > listArticles[j+1]->getReleaseDate()) == direction)//sorting direction
						 {//swap
							 Article ^ tmp = listArticles[j];
							 listArticles[j] = listArticles[j+1];
							 listArticles[j+1] = tmp;
						 }
					 }
				 }
			 }

	private: System::Void buttonAddUser_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 FormNewUser ^ FNewUser = gcnew FormNewUser(1); //FormNewUser for Admin users
				 FNewUser->ShowDialog();
			 }
	private: System::Void listBoxDisplay_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void buttonView_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 int selectedIndex = this->listBoxDisplay->SelectedIndex;
				 if(selectedIndex == -1)
					 return;//no selection => do nothing

				 FormNewArticle ^ Fedit = gcnew FormNewArticle(listArticles[selectedIndex]->getID(),false);//view Article
				 Fedit->ShowDialog();
			 }
};
}
