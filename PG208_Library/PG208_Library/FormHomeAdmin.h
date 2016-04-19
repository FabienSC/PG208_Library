#pragma once
#include "stdafx.h"
#include "FormNewArticle.h"

namespace PG208_Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::CheckBox^  checkBoxBooks;
	private: System::Windows::Forms::CheckBox^  checkBoxCDs;
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
			this->labelWelcome = (gcnew System::Windows::Forms::Label());
			this->linkLabelLogOut = (gcnew System::Windows::Forms::LinkLabel());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->listBoxDisplay = (gcnew System::Windows::Forms::ListBox());
			this->checkBoxBooks = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCDs = (gcnew System::Windows::Forms::CheckBox());
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
			this->labelUsername->Location = System::Drawing::Point(85, 9);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(46, 17);
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
			// 
			// checkBoxBooks
			// 
			this->checkBoxBooks->AutoSize = true;
			this->checkBoxBooks->Location = System::Drawing::Point(15, 153);
			this->checkBoxBooks->Name = L"checkBoxBooks";
			this->checkBoxBooks->Size = System::Drawing::Size(69, 21);
			this->checkBoxBooks->TabIndex = 5;
			this->checkBoxBooks->Text = L"Books";
			this->checkBoxBooks->UseVisualStyleBackColor = true;
			this->checkBoxBooks->CheckedChanged += gcnew System::EventHandler(this, &FormHomeAdmin::checkBoxBooks_CheckedChanged);
			// 
			// checkBoxCDs
			// 
			this->checkBoxCDs->AutoSize = true;
			this->checkBoxCDs->Location = System::Drawing::Point(15, 180);
			this->checkBoxCDs->Name = L"checkBoxCDs";
			this->checkBoxCDs->Size = System::Drawing::Size(56, 21);
			this->checkBoxCDs->TabIndex = 6;
			this->checkBoxCDs->Text = L"CDs";
			this->checkBoxCDs->UseVisualStyleBackColor = true;
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
			// FormHomeAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 482);
			this->Controls->Add(this->labelArticleID);
			this->Controls->Add(this->labelNumberOfItems);
			this->Controls->Add(this->labelNumberOfItemsLabel);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBoxSortBy);
			this->Controls->Add(this->labelSortBy);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonNewItem);
			this->Controls->Add(this->buttonSelect);
			this->Controls->Add(this->checkBoxCDs);
			this->Controls->Add(this->checkBoxBooks);
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
				 int fileID = 1000;
				 String ^ strIDFilePath = "Articles/Books/" + fileID + ".txt";//change username to filepath
				 char *filePath = (char*)Marshal::StringToHGlobalAnsi(strIDFilePath).ToPointer();//Marshal::FreeHGlobal((IntPtr)name); // add at the end to free up memory?

				 ifstream input(filePath);
				 string line;
				 getline( input, line );
				 //char* title1 = (char*)line.c_str();

				 this->listBoxDisplay->Items->Add(gcnew String((char*)line.c_str()));
			 }
	private: System::Void buttonNewItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 FormNewArticle ^ F3 = gcnew FormNewArticle();
				 F3->ShowDialog();
			 }
	};
}
