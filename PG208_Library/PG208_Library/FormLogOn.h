#pragma once
#include "stdafx.h"
#include "FormNewUser.h"
#include "FormHomeAdmin.h"


namespace PG208_Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonRegister;
	protected: 

	private: System::Windows::Forms::TextBox^  textBoxUsername;
	private: System::Windows::Forms::Label^  labelUsername;
	protected: 


	private: System::Windows::Forms::Label^  labelPassword;

	private: System::Windows::Forms::TextBox^  textBoxPassword;
	private: System::Windows::Forms::LinkLabel^  linkLabelNewUser;
	private: System::Windows::Forms::LinkLabel^  linkLabelForgotPassword;
	private: System::Windows::Forms::Button^  buttonExit;




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
			this->buttonRegister = (gcnew System::Windows::Forms::Button());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->linkLabelNewUser = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabelForgotPassword = (gcnew System::Windows::Forms::LinkLabel());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonRegister
			// 
			this->buttonRegister->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonRegister->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonRegister->Location = System::Drawing::Point(108, 143);
			this->buttonRegister->Name = L"buttonRegister";
			this->buttonRegister->Size = System::Drawing::Size(75, 29);
			this->buttonRegister->TabIndex = 0;
			this->buttonRegister->Text = L"Log on";
			this->buttonRegister->UseVisualStyleBackColor = false;
			this->buttonRegister->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxUsername->Location = System::Drawing::Point(108, 43);
			this->textBoxUsername->MaxLength = 255;
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(192, 22);
			this->textBoxUsername->TabIndex = 1;
			this->textBoxUsername->Text = L"Mr.Fab";
			// 
			// labelUsername
			// 
			this->labelUsername->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelUsername->AutoSize = true;
			this->labelUsername->Location = System::Drawing::Point(29, 47);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(77, 17);
			this->labelUsername->TabIndex = 2;
			this->labelUsername->Text = L"Username:";
			// 
			// labelPassword
			// 
			this->labelPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelPassword->AutoSize = true;
			this->labelPassword->Location = System::Drawing::Point(29, 89);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(73, 17);
			this->labelPassword->TabIndex = 4;
			this->labelPassword->Text = L"Password:";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxPassword->Location = System::Drawing::Point(108, 85);
			this->textBoxPassword->MaxLength = 63;
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(192, 22);
			this->textBoxPassword->TabIndex = 3;
			this->textBoxPassword->Text = L"1234";
			this->textBoxPassword->UseSystemPasswordChar = true;
			// 
			// linkLabelNewUser
			// 
			this->linkLabelNewUser->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->linkLabelNewUser->AutoSize = true;
			this->linkLabelNewUser->Location = System::Drawing::Point(105, 110);
			this->linkLabelNewUser->Name = L"linkLabelNewUser";
			this->linkLabelNewUser->Size = System::Drawing::Size(67, 17);
			this->linkLabelNewUser->TabIndex = 5;
			this->linkLabelNewUser->TabStop = true;
			this->linkLabelNewUser->Text = L"New user";
			this->linkLabelNewUser->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabelNewUser_LinkClicked);
			// 
			// linkLabelForgotPassword
			// 
			this->linkLabelForgotPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->linkLabelForgotPassword->AutoSize = true;
			this->linkLabelForgotPassword->Location = System::Drawing::Point(178, 110);
			this->linkLabelForgotPassword->Name = L"linkLabelForgotPassword";
			this->linkLabelForgotPassword->Size = System::Drawing::Size(122, 17);
			this->linkLabelForgotPassword->TabIndex = 6;
			this->linkLabelForgotPassword->TabStop = true;
			this->linkLabelForgotPassword->Text = L"Forgot Password\?";
			this->linkLabelForgotPassword->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabelForgotPassword_LinkClicked);
			// 
			// buttonExit
			// 
			this->buttonExit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonExit->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonExit->Location = System::Drawing::Point(245, 143);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(55, 29);
			this->buttonExit->TabIndex = 7;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Form1::buttonExit_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(332, 203);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->linkLabelForgotPassword);
			this->Controls->Add(this->linkLabelNewUser);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->textBoxUsername);
			this->Controls->Add(this->buttonRegister);
			this->MaximumSize = System::Drawing::Size(350, 250);
			this->MinimumSize = System::Drawing::Size(350, 250);
			this->Name = L"Form1";
			this->Text = L"Library Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)//login
		{
			String ^ strUsername = textBoxUsername->Text;//typed in username
			String ^ strPassword = textBoxPassword->Text;//typed in password
			char *enteredUsername = (char*)Marshal::StringToHGlobalAnsi(strUsername).ToPointer();
			strUsername = FILEPATH_USERS + strUsername + ".txt";//change username to filepath
			char *userFilePath = (char*)Marshal::StringToHGlobalAnsi(strUsername).ToPointer();//Marshal::FreeHGlobal((IntPtr)name); // add at the end to free up memory?
			char *enteredPassword = (char*)Marshal::StringToHGlobalAnsi(strPassword).ToPointer();

			ifstream input(userFilePath);
			string line;
			getline( input, line );
			int sizePassword = line.size();
			char* filePassword = (char*)line.c_str();

			char* decryptedPassword = decrypt(enteredUsername,filePassword);


			if((strcmp(enteredPassword,decryptedPassword) == 0) && (sizePassword > 3))//if username and password match AND password on file is longer than 3
			{
				popup("Login Successful", "Welcome!");
				this->Hide();
				FormHomeAdmin ^ F3 = gcnew FormHomeAdmin(enteredUsername); //FormHomeAdmin defined in FormHomeAdmin.h
				F3->ShowDialog();
				this->Show();
			}
			else//invalid username/password
				popup("Login Failed", "Invalid username or password. If problem persists, contact the 2 idiots who made this program.");

		}
private: System::Void linkLabelForgotPassword_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
		{
			popup("Forgot Password", "Try very hard to remember it.");
		}
private: System::Void linkLabelNewUser_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
		 {//clicked on "New User" link
			FormNewUser ^ F2 = gcnew FormNewUser(); //FormNewUser defined in FormNewUser.h
			F2->ShowDialog();
		 }
private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 this->Close();
		 }
};
}

