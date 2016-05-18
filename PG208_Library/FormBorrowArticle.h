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
	/// Summary for FormEditArticle
	/// </summary>
	public ref class FormEditArticle : public System::Windows::Forms::Form
	{
	public:
		FormEditArticle(int articleID, String^ userName)
		{
			InitializeComponent();

			selectedArticle = gcnew Article;

			if(articleID >= BASE_BOOK_ID && articleID < BASE_MAGAZINE_ID) //Book IDs
			{
				Book ^ newBook = gcnew Book;
				newBook->load(articleID);
				selectedArticle = newBook;
			}

			else if(articleID >= BASE_MAGAZINE_ID && articleID < BASE_CD_ID) //Magazine IDs
			{
				Magazine ^ newMagazine = gcnew Magazine;
				newMagazine->load(articleID);
				selectedArticle = newMagazine;
			}

			else if(articleID >= BASE_CD_ID && articleID < BASE_DVD_ID) //CD IDs
			{
				CD ^ newCD = gcnew CD;
				newCD->load(articleID);
				selectedArticle = newCD;
			}

			else if(articleID >= BASE_DVD_ID && articleID < BASE_VHS_ID) //DVD IDs
			{
				Video ^ newDVD = gcnew Video;
				newDVD->load(articleID);
				selectedArticle = newDVD;
			}

			else if(articleID >= BASE_VHS_ID && articleID < BASE_DIGITAL_ID)//VHS IDs
			{
				Video ^ newVHS = gcnew Video;
				newVHS->load(articleID);
				selectedArticle = newVHS;
			}

			else if(articleID >= BASE_DIGITAL_ID && articleID < BASE_MAX_ID)//digital ressource IDs
			{
				DigitalRes ^ newDigitalRes = gcnew DigitalRes;
				newDigitalRes->load(articleID);
				selectedArticle = newDigitalRes;
			}
			this->textBox2->Text = selectedArticle->getTitle();
			this->textBox1->Text = userName;
			user = gcnew User(userName);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormEditArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;

			 /// <summary>
			 /// Required designer variable.

			 Article^ selectedArticle; // for the functions to call
			 User^ user; // for the functions to call
			 /// </summary>
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
				 this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->SuspendLayout();
				 // 
				 // button1
				 // 
				 this->button1->Location = System::Drawing::Point(30, 173);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(98, 48);
				 this->button1->TabIndex = 0;
				 this->button1->Text = L"OK";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &FormEditArticle::button1_Click);
				 // 
				 // radioButton1
				 // 
				 this->radioButton1->AutoSize = true;
				 this->radioButton1->Location = System::Drawing::Point(67, 136);
				 this->radioButton1->Name = L"radioButton1";
				 this->radioButton1->Size = System::Drawing::Size(72, 21);
				 this->radioButton1->TabIndex = 1;
				 this->radioButton1->TabStop = true;
				 this->radioButton1->Text = L"borrow";
				 this->radioButton1->UseVisualStyleBackColor = true;
				 // 
				 // radioButton2
				 // 
				 this->radioButton2->AutoSize = true;
				 this->radioButton2->Location = System::Drawing::Point(145, 136);
				 this->radioButton2->Name = L"radioButton2";
				 this->radioButton2->Size = System::Drawing::Size(67, 21);
				 this->radioButton2->TabIndex = 2;
				 this->radioButton2->TabStop = true;
				 this->radioButton2->Text = L"return";
				 this->radioButton2->UseVisualStyleBackColor = true;
				 this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &FormEditArticle::radioButton2_CheckedChanged);
				 // 
				 // textBox1
				 // 
				 this->textBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
				 this->textBox1->Enabled = false;
				 this->textBox1->Location = System::Drawing::Point(89, 43);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(100, 22);
				 this->textBox1->TabIndex = 3;
				 this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormEditArticle::textBox1_TextChanged);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(86, 75);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(103, 17);
				 this->label1->TabIndex = 4;
				 this->label1->Text = L"selected article";
				 // 
				 // button2
				 // 
				 this->button2->Location = System::Drawing::Point(161, 173);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(98, 48);
				 this->button2->TabIndex = 5;
				 this->button2->Text = L"cancel";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &FormEditArticle::button2_Click);
				 // 
				 // textBox2
				 // 
				 this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
				 this->textBox2->Enabled = false;
				 this->textBox2->Location = System::Drawing::Point(89, 95);
				 this->textBox2->Name = L"textBox2";
				 this->textBox2->Size = System::Drawing::Size(100, 22);
				 this->textBox2->TabIndex = 6;
				 this->textBox2->TextChanged += gcnew System::EventHandler(this, &FormEditArticle::textBox2_TextChanged);
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(89, 23);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(75, 17);
				 this->label2->TabIndex = 7;
				 this->label2->Text = L"user name";
				 // 
				 // FormEditArticle
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(282, 253);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->textBox2);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->textBox1);
				 this->Controls->Add(this->radioButton2);
				 this->Controls->Add(this->radioButton1);
				 this->Controls->Add(this->button1);
				 this->Name = L"FormEditArticle";
				 this->Text = L"FormEditArticle";
				 this->Load += gcnew System::EventHandler(this, &FormEditArticle::FormEditArticle_Load);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(this->radioButton1->Checked == true) //borrow button
				 {
					 int fileID = selectedArticle->getID();

					 if(fileID >= BASE_BOOK_ID && fileID < BASE_MAGAZINE_ID) //Book IDs
					 {
						 Book ^ newBook = gcnew Book;
						 newBook->load(fileID);
						 newBook->borrowArticle(user->getUsername());
						 newBook->save();
					 }
					 else if(fileID >= BASE_MAGAZINE_ID && fileID < BASE_CD_ID) //Magazine IDs
					 {
						 Magazine ^ newMagazine = gcnew Magazine;
						 newMagazine->load(fileID);
						 newMagazine->borrowArticle(user->getUsername());
						 newMagazine->save();
					 }
					 else if(fileID >= BASE_CD_ID && fileID < BASE_DVD_ID) //CD IDs
					 {
						 CD ^ newCD = gcnew CD;
						 newCD->load(fileID);
						 newCD->borrowArticle(user->getUsername());
						 newCD->save();
					 }
					 else if(fileID >= BASE_DVD_ID && fileID < BASE_VHS_ID) //DVD IDs
					 {
						 Video ^ newDVD = gcnew Video;
						 newDVD->load(fileID);
						 newDVD->borrowArticle(user->getUsername());
						 newDVD->save();
					 }
					 else if(fileID >= BASE_VHS_ID && fileID < BASE_DIGITAL_ID)//VHS IDs
					 {
						 Video ^ newVHS = gcnew Video;
						 newVHS->load(fileID);
						 newVHS->borrowArticle(user->getUsername());
						 newVHS->save();
					 }

					 this->Close();
				 }
				 else if(this->radioButton2->Checked == true) //return button
				 {
					 if (user->canReturn(selectedArticle->getID()))
					 {
						 int fileID = selectedArticle->getID();

						 if(fileID >= BASE_BOOK_ID && fileID < BASE_MAGAZINE_ID) //Book IDs
						 {
							 Book ^ newBook = gcnew Book;
							 newBook->load(fileID);
							 newBook->returnArticle(user->getUsername());
							 newBook->save();
						 }
						 else if(fileID >= BASE_MAGAZINE_ID && fileID < BASE_CD_ID) //Magazine IDs
						 {
							 Magazine ^ newMagazine = gcnew Magazine;
							 newMagazine->load(fileID);
							 newMagazine->returnArticle(user->getUsername());
							 newMagazine->save();
						 }
						 else if(fileID >= BASE_CD_ID && fileID < BASE_DVD_ID) //CD IDs
						 {
							 CD ^ newCD = gcnew CD;
							 newCD->load(fileID);
							 newCD->returnArticle(user->getUsername());
							 newCD->save();
						 }
						 else if(fileID >= BASE_DVD_ID && fileID < BASE_VHS_ID) //DVD IDs
						 {
							 Video ^ newDVD = gcnew Video;
							 newDVD->load(fileID);
							 newDVD->returnArticle(user->getUsername());
							 newDVD->save();
						 }
						 else if(fileID >= BASE_VHS_ID && fileID < BASE_DIGITAL_ID)//VHS IDs
						 {
							 Video ^ newVHS = gcnew Video;
							 newVHS->load(fileID);
							 newVHS->returnArticle(user->getUsername());
							 newVHS->save();
						 }

						 this->Close();
					 }
					 else
					 {
						 popup("WOOPS", "Cannot return this article...");
					 }
				 }
				 else												// no button selected
				 {
					 popup("EPIC FAIL", "Select borrow or return. Otherwise, use cancel to leave");
				 }
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) //cancel button
			 {
				 this->Close();
			 }
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
	private: System::Void FormEditArticle_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
