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
	/// Summary for FormHome
	/// </summary>
	public ref class FormHome : public System::Windows::Forms::Form
	{
	public:
		FormHome(char* username)//username is passed in
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
		~FormHome()
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
			this->SuspendLayout();
			// 
			// labelWelcome
			// 
			this->labelWelcome->AutoSize = true;
			this->labelWelcome->Location = System::Drawing::Point(56, 35);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->Size = System::Drawing::Size(66, 17);
			this->labelWelcome->TabIndex = 0;
			this->labelWelcome->Text = L"Welcome";
			// 
			// linkLabelLogOut
			// 
			this->linkLabelLogOut->AutoSize = true;
			this->linkLabelLogOut->Location = System::Drawing::Point(56, 66);
			this->linkLabelLogOut->Name = L"linkLabelLogOut";
			this->linkLabelLogOut->Size = System::Drawing::Size(59, 17);
			this->linkLabelLogOut->TabIndex = 1;
			this->linkLabelLogOut->TabStop = true;
			this->linkLabelLogOut->Text = L"Log Out";
			this->linkLabelLogOut->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &FormHome::linkLabelLogOut_LinkClicked);
			// 
			// labelUsername
			// 
			this->labelUsername->AutoSize = true;
			this->labelUsername->Location = System::Drawing::Point(129, 35);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(46, 17);
			this->labelUsername->TabIndex = 2;
			this->labelUsername->Text = L"USER";
			// 
			// FormHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(778, 442);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->linkLabelLogOut);
			this->Controls->Add(this->labelWelcome);
			this->Name = L"FormHome";
			this->Text = L"FormHome";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabelLogOut_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
			 {
				 this->Close();
			 }
	};
}
