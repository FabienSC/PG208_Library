#pragma once

namespace PG208_Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormCancelReservations
	/// </summary>
	public ref class FormCancelReservations : public System::Windows::Forms::Form
	{
	public:
		FormCancelReservations(String^ userName)
		{
			InitializeComponent();

			borrower = gcnew User(userName);
			this->buttonBorrow->Visible = false; //only display this button if borrowing is possible
			updateBoxAll();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormCancelReservations()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonCancelReservation;
	protected: 
	private: System::Windows::Forms::Button^  buttonBack;
	private: System::Windows::Forms::ListBox^  listBoxReservations;
	private: System::Windows::Forms::CheckBox^  checkBoxShowAvailable;
	private: System::Windows::Forms::Button^  buttonBorrow;


	private:
		/// <summary>
		/// Required designer variable.
		User^ borrower; // for the functions to call
		Article^ selectedArticle; // for the functions to call
		array<int>^ listIDsALL;
		array<int>^ listIDsBORROWABLE;
		bool displayAll;
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonCancelReservation = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->listBoxReservations = (gcnew System::Windows::Forms::ListBox());
			this->checkBoxShowAvailable = (gcnew System::Windows::Forms::CheckBox());
			this->buttonBorrow = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonCancelReservation
			// 
			this->buttonCancelReservation->Location = System::Drawing::Point(50, 315);
			this->buttonCancelReservation->Name = L"buttonCancelReservation";
			this->buttonCancelReservation->Size = System::Drawing::Size(149, 46);
			this->buttonCancelReservation->TabIndex = 0;
			this->buttonCancelReservation->Text = L"Cancel Reservation";
			this->buttonCancelReservation->UseVisualStyleBackColor = true;
			this->buttonCancelReservation->Click += gcnew System::EventHandler(this, &FormCancelReservations::buttonCancelReservation_Click);
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(243, 315);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(104, 46);
			this->buttonBack->TabIndex = 1;
			this->buttonBack->Text = L"Back";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &FormCancelReservations::buttonBack_Click);
			// 
			// listBoxReservations
			// 
			this->listBoxReservations->FormattingEnabled = true;
			this->listBoxReservations->ItemHeight = 16;
			this->listBoxReservations->Location = System::Drawing::Point(50, 54);
			this->listBoxReservations->Name = L"listBoxReservations";
			this->listBoxReservations->Size = System::Drawing::Size(297, 180);
			this->listBoxReservations->TabIndex = 2;
			this->listBoxReservations->SelectedIndexChanged += gcnew System::EventHandler(this, &FormCancelReservations::listBoxReservations_SelectedIndexChanged);
			// 
			// checkBoxShowAvailable
			// 
			this->checkBoxShowAvailable->AutoSize = true;
			this->checkBoxShowAvailable->Location = System::Drawing::Point(50, 269);
			this->checkBoxShowAvailable->Name = L"checkBoxShowAvailable";
			this->checkBoxShowAvailable->Size = System::Drawing::Size(158, 21);
			this->checkBoxShowAvailable->TabIndex = 4;
			this->checkBoxShowAvailable->Text = L"Show Available Only";
			this->checkBoxShowAvailable->UseVisualStyleBackColor = true;
			this->checkBoxShowAvailable->CheckedChanged += gcnew System::EventHandler(this, &FormCancelReservations::checkBoxShowAvailable_CheckedChanged);
			// 
			// buttonBorrow
			// 
			this->buttonBorrow->Location = System::Drawing::Point(243, 258);
			this->buttonBorrow->Name = L"buttonBorrow";
			this->buttonBorrow->Size = System::Drawing::Size(104, 41);
			this->buttonBorrow->TabIndex = 5;
			this->buttonBorrow->Text = L"Borrow";
			this->buttonBorrow->UseVisualStyleBackColor = true;
			this->buttonBorrow->Click += gcnew System::EventHandler(this, &FormCancelReservations::buttonBorrow_Click);
			// 
			// FormCancelReservations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 393);
			this->Controls->Add(this->buttonBorrow);
			this->Controls->Add(this->checkBoxShowAvailable);
			this->Controls->Add(this->listBoxReservations);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->buttonCancelReservation);
			this->MaximumSize = System::Drawing::Size(420, 440);
			this->MinimumSize = System::Drawing::Size(420, 440);
			this->Name = L"FormCancelReservations";
			this->Text = L"FormCancelReservations";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBoxShowAvailable_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(this->checkBoxShowAvailable->Checked)//checkbox checked
				 {
					 this->buttonBorrow->Visible = true;
					 updateBoxBorrowables();
				 }
				 
				 else
				 {
					 this->buttonBorrow->Visible = false;
					 updateBoxAll();
				 }
			 }

private: System::Void buttonBack_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->Close();
		 }

private: System::Void buttonCancelReservation_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int selectedIndex = this->listBoxReservations->SelectedIndex;
			 loadArticle(selectedIndex, selectedArticle);

			 if(selectedIndex == -1)
			 {
				 popup("EPIC FAIL!", "Actually select an article first...");
			 }
			 else
			 {
				 if(displayAll)
				 {
					 borrower->cancelReservation(listIDsALL[selectedIndex]); // need article ID ...
					 selectedArticle->cancelReserveArticle(borrower->getUsername());
				 }
				 else
				 {
					 borrower->cancelReservation(listIDsBORROWABLE[selectedIndex]); // need article ID ...
					 selectedArticle->cancelReserveArticle(borrower->getUsername());
				 }
				 popup("Thank You", "Your reservation cancel was taken in account!");
			 }			
		 }

private: System::Void buttonBorrow_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int selectedIndex = this->listBoxReservations->SelectedIndex;
			 loadArticle(selectedIndex, selectedArticle);

			 if(selectedIndex == -1)
			 {
				 popup("EPIC FAIL!", "Actually select an Article first...");
			 }
			 else
			 {
				 if(displayAll)
				 {
					 borrower->borrowArticle(listIDsALL[selectedIndex]); // need article ID ...
					 selectedArticle->borrowArticle(borrower->getUsername());
				 }
				 else
				 {
					 borrower->borrowArticle(listIDsBORROWABLE[selectedIndex]); // need article ID ...
					 selectedArticle->borrowArticle(borrower->getUsername());
				 }
				 popup("BORROW SUCCESSFUl", "Your reservation led to borrowing!");
			 }	
		 }

private: System::Void listBoxReservations_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {

		 }
		 /////////////////////////////////////////////////////////////
		 /////////////////////////////////////////////////////////////

		 void updateBoxBorrowables()//empty listbox and add available reserved articles
		 {
			 displayAll = 0;
			 selectedArticle = gcnew Article;
			 this->listBoxReservations->Items->Clear(); //init text box
			 int cpt = 0;

			 for(int i = 0; i < RESERVE_LIMIT; i++) //write reservation list to box
			 {
				 if(borrower->getReserved(i) != 0)
				 {
					 loadArticle(borrower->getReserved(i), selectedArticle); //load article depending on ID in reservation list
					 if (selectedArticle->getAvailability())
					 {
						 this->listBoxReservations->Items->Add(selectedArticle->getTitle()); // write to text box
						 listIDsBORROWABLE[cpt] = borrower->getReserved(i);
						 cpt ++;
					 }
				 }
			 }

			 if (cpt ==0)
			 {
				 popup("EPIC FAIL!", "None of your reserved articles are available yet...");
			 }
		 }
		 
		 ///////////////////////////////////////////////////////////// 

		 void updateBoxAll()//empty listbox and add articles that are reserved
		 {
			 displayAll = 1;
			 selectedArticle = gcnew Article;
			 this->listBoxReservations->Items->Clear(); //init text box
			 int cpt = 0;

			 for(int i = 0; i < RESERVE_LIMIT; i++) //write reservation list to box
			 {
				 listIDsALL[i] = borrower->getReserved(i); 
				 if(borrower->getReserved(i) != 0)
				 {
					 loadArticle(borrower->getReserved(i), selectedArticle); //load article depending on ID in reservation list
 
					 this->listBoxReservations->Items->Add(selectedArticle->getTitle()); // write to text box
					 cpt ++;
				 }
			 }

			 if (cpt ==0)
			 {
				 popup("EPIC FAIL!", "You have no reserved articles...");
			 }
		 }
		 	
		 ///////////////////////////////////////////////////////////// 

		 void loadArticle(int newID, Article^ newArticle)
		 {
			 if(newID >= BASE_BOOK_ID && newID < BASE_MAGAZINE_ID) //Book IDs
			 {
				 Book ^ newBook = gcnew Book;
				 newBook->load(newID);
				 newArticle = newBook;
			 }

			 else if(newID >= BASE_MAGAZINE_ID && newID < BASE_CD_ID) //Magazine IDs
			 {
				 Magazine ^ newMagazine = gcnew Magazine;
				 newMagazine->load(newID);
				 newArticle = newMagazine;
			 }

			 else if(newID >= BASE_CD_ID && newID < BASE_DVD_ID) //CD IDs
			 {
				 CD ^ newCD = gcnew CD;
				 newCD->load(newID);
				 newArticle = newCD;
			 }

			 else if(newID >= BASE_DVD_ID && newID < BASE_VHS_ID) //DVD IDs
			 {
				 Video ^ newDVD = gcnew Video;
				 newDVD->load(newID);
				 newArticle = newDVD;
			 }

			 else if(newID >= BASE_VHS_ID && newID < BASE_DIGITAL_ID)//VHS IDs
			 {
				 Video ^ newVHS = gcnew Video;
				 newVHS->load(newID);
				 newArticle = newVHS;
			 }

			 else if(newID >= BASE_DIGITAL_ID && newID < BASE_MAX_ID)//digital ressource IDs
			 {
				 DigitalRes ^ newDigitalRes = gcnew DigitalRes;
				 newDigitalRes->load(newID);
				 newArticle = newDigitalRes;
			 }
		 }


};
}
