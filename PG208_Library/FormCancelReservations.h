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
		FormCancelReservations(void)
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
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(243, 315);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(104, 46);
			this->buttonBack->TabIndex = 1;
			this->buttonBack->Text = L"Back";
			this->buttonBack->UseVisualStyleBackColor = true;
			// 
			// listBoxReservations
			// 
			this->listBoxReservations->FormattingEnabled = true;
			this->listBoxReservations->ItemHeight = 16;
			this->listBoxReservations->Location = System::Drawing::Point(50, 54);
			this->listBoxReservations->Name = L"listBoxReservations";
			this->listBoxReservations->Size = System::Drawing::Size(297, 180);
			this->listBoxReservations->TabIndex = 2;
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
				 //checkbox checked
			 }
};
}
