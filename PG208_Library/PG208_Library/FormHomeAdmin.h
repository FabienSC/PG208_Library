#pragma once
#include "stdafx.h"

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
			
			this->labelUsername->Text = gcnew String(username);//L"Wel...
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
	private: System::Windows::Forms::ComboBox^  comboBox1;






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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
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
			this->buttonSelect->Location = System::Drawing::Point(383, 214);
			this->buttonSelect->Name = L"buttonSelect";
			this->buttonSelect->Size = System::Drawing::Size(75, 26);
			this->buttonSelect->TabIndex = 7;
			this->buttonSelect->Text = L"Select";
			this->buttonSelect->UseVisualStyleBackColor = true;
			// 
			// buttonNewItem
			// 
			this->buttonNewItem->Location = System::Drawing::Point(614, 28);
			this->buttonNewItem->Name = L"buttonNewItem";
			this->buttonNewItem->Size = System::Drawing::Size(75, 29);
			this->buttonNewItem->TabIndex = 8;
			this->buttonNewItem->Text = L"New Item";
			this->buttonNewItem->UseVisualStyleBackColor = true;
			// 
			// buttonDelete
			// 
			this->buttonDelete->Location = System::Drawing::Point(383, 267);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(75, 26);
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
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Title", L"Release Date"});
			this->comboBox1->Location = System::Drawing::Point(138, 110);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(188, 24);
			this->comboBox1->TabIndex = 12;
			// 
			// FormHomeAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(737, 459);
			this->Controls->Add(this->comboBox1);
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
private: System::Void checkBoxBooks_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
