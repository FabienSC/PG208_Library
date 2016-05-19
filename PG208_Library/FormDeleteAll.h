#pragma once

namespace PG208_Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeleteAll
	/// </summary>
	public ref class FormDeleteAll : public System::Windows::Forms::Form
	{
	public:
		FormDeleteAll(void)
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
		~FormDeleteAll()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonCancel;
	protected: 
	private: System::Windows::Forms::Button^  buttonDeleteAll;

	protected: 

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
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonDeleteAll = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(58, 49);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(160, 102);
			this->buttonCancel->TabIndex = 0;
			this->buttonCancel->Text = L"CANCEL";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &FormDeleteAll::buttonCancel_Click);
			// 
			// buttonDeleteAll
			// 
			this->buttonDeleteAll->Location = System::Drawing::Point(72, 188);
			this->buttonDeleteAll->Name = L"buttonDeleteAll";
			this->buttonDeleteAll->Size = System::Drawing::Size(128, 42);
			this->buttonDeleteAll->TabIndex = 1;
			this->buttonDeleteAll->Text = L"DELETE ALL";
			this->buttonDeleteAll->UseVisualStyleBackColor = true;
			this->buttonDeleteAll->Click += gcnew System::EventHandler(this, &FormDeleteAll::buttonDeleteAll_Click);
			// 
			// DeleteAll
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->buttonDeleteAll);
			this->Controls->Add(this->buttonCancel);
			this->Name = L"DeleteAll";
			this->Text = L"DeleteAll";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 this->Close();
			 }
	private: System::Void buttonDeleteAll_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 Library myLibrary;//get number of books, CDs...

				 int fileID = 0;
				 int count = 0;
				 for(int i = 0; count < myLibrary.getNumberOfBooks(); i++)//myLibrary.getNumberOfBooks()
				 {
					 fileID = BASE_BOOK_ID + i;//update file ID
					 Book ^ myArticle = gcnew Book;// = new Book;//create new book
					 if(myArticle->load(fileID))//load data from file is successful
					 {
						myArticle->deleteFile();
						 count++;
					 }
					 else
						 delete myArticle;
				 }
				 count = 0;//reset count
				 for(int i = 0; count < myLibrary.getNumberOfMagazines(); i++)
				 {
					 fileID = BASE_MAGAZINE_ID + i;//update file ID
					 Magazine ^ myArticle = gcnew Magazine;
					 if(myArticle->load(fileID))//load data from file is successful
					 {
						myArticle->deleteFile();
						 count++;
					 }
					 else
						 delete myArticle;
				 }
				 count = 0;//reset count
				 for(int i = 0; count < myLibrary.getNumberOfCDs(); i++)
				 {
					 fileID = BASE_CD_ID + i;//update file ID
					 CD ^ myArticle = gcnew CD;
					 if(myArticle->load(fileID))//load data from file is successful
					 {
						myArticle->deleteFile();
						 count++;
					 }
					 else
						 delete myArticle;
				 }
				 count = 0;//reset count
				 for(int i = 0; count < myLibrary.getNumberOfDVDs(); i++)
				 {
					 fileID = BASE_DVD_ID + i;//update file ID
					 Video ^ myArticle = gcnew Video;
					 if(myArticle->load(fileID))//load data from file is successful
					 {
						myArticle->deleteFile();
						 count++;
					 }
					 else
						 delete myArticle;
				 }
				 count = 0;//reset count
				 for(int i = 0; count < myLibrary.getNumberOfVHSs(); i++)
				 {
					 fileID = BASE_VHS_ID + i;//update file ID
					 Video ^ myArticle = gcnew Video;
					 if(myArticle->load(fileID))//load data from file is successful
					 {
						myArticle->deleteFile();
						 count++;
					 }
					 else
						 delete myArticle;
				 }
				 count = 0;//reset count
				 for(int i = 0; count < myLibrary.getNumberOfDigitalResources(); i++)
				 {
					 fileID = BASE_DIGITAL_ID + i;//update file ID
					 DigitalRes ^ myArticle = gcnew DigitalRes;
					 if(myArticle->load(fileID))//load data from file is successful
					 {
						myArticle->deleteFile();
						 count++;
					 }
					 else
						 delete myArticle;
				 }
				 this->Close();
			 }
	};
}
