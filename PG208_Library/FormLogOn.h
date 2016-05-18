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
	public ref class FormLogOn : public System::Windows::Forms::Form
	{
	public:
		FormLogOn(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lol = false;
			pictureBox1->Image = Image::FromFile(FILEPATH_LOGO);

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormLogOn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonRegister;

			 System::Windows::Forms::TextBox^  textBoxUsername;
			 System::Windows::Forms::Label^  labelUsername;

			 System::Windows::Forms::Label^  labelPassword;

			 System::Windows::Forms::TextBox^  textBoxPassword;
			 System::Windows::Forms::LinkLabel^  linkLabelNewUser;
			 System::Windows::Forms::LinkLabel^  linkLabelForgotPassword;
			 System::Windows::Forms::Button^  buttonExit;
	private: System::Windows::Forms::PictureBox^  pictureBox1;





			 /// <summary>
			 /// Required designer variable.
			 /// </summary>
			 System::ComponentModel::Container ^components;
			 bool lol;

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
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // buttonRegister
				 // 
				 this->buttonRegister->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->buttonRegister->BackColor = System::Drawing::SystemColors::ButtonFace;
				 this->buttonRegister->Location = System::Drawing::Point(108, 262);
				 this->buttonRegister->Name = L"buttonRegister";
				 this->buttonRegister->Size = System::Drawing::Size(75, 29);
				 this->buttonRegister->TabIndex = 0;
				 this->buttonRegister->Text = L"Log on";
				 this->buttonRegister->UseVisualStyleBackColor = false;
				 this->buttonRegister->Click += gcnew System::EventHandler(this, &FormLogOn::buttonRegister_Click);
				 // 
				 // textBoxUsername
				 // 
				 this->textBoxUsername->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->textBoxUsername->Location = System::Drawing::Point(108, 162);
				 this->textBoxUsername->MaxLength = 255;
				 this->textBoxUsername->Name = L"textBoxUsername";
				 this->textBoxUsername->Size = System::Drawing::Size(192, 22);
				 this->textBoxUsername->TabIndex = 1;
				 this->textBoxUsername->Text = L"Mr.Fab";
				 this->textBoxUsername->TextChanged += gcnew System::EventHandler(this, &FormLogOn::textBoxUsername_TextChanged);
				 // 
				 // labelUsername
				 // 
				 this->labelUsername->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->labelUsername->AutoSize = true;
				 this->labelUsername->Location = System::Drawing::Point(29, 166);
				 this->labelUsername->Name = L"labelUsername";
				 this->labelUsername->Size = System::Drawing::Size(77, 17);
				 this->labelUsername->TabIndex = 2;
				 this->labelUsername->Text = L"Username:";
				 // 
				 // labelPassword
				 // 
				 this->labelPassword->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->labelPassword->AutoSize = true;
				 this->labelPassword->Location = System::Drawing::Point(29, 208);
				 this->labelPassword->Name = L"labelPassword";
				 this->labelPassword->Size = System::Drawing::Size(73, 17);
				 this->labelPassword->TabIndex = 4;
				 this->labelPassword->Text = L"Password:";
				 // 
				 // textBoxPassword
				 // 
				 this->textBoxPassword->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->textBoxPassword->Location = System::Drawing::Point(108, 204);
				 this->textBoxPassword->MaxLength = 63;
				 this->textBoxPassword->Name = L"textBoxPassword";
				 this->textBoxPassword->Size = System::Drawing::Size(192, 22);
				 this->textBoxPassword->TabIndex = 3;
				 this->textBoxPassword->Text = L"1234";
				 this->textBoxPassword->UseSystemPasswordChar = true;
				 // 
				 // linkLabelNewUser
				 // 
				 this->linkLabelNewUser->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->linkLabelNewUser->AutoSize = true;
				 this->linkLabelNewUser->Location = System::Drawing::Point(105, 229);
				 this->linkLabelNewUser->Name = L"linkLabelNewUser";
				 this->linkLabelNewUser->Size = System::Drawing::Size(67, 17);
				 this->linkLabelNewUser->TabIndex = 5;
				 this->linkLabelNewUser->TabStop = true;
				 this->linkLabelNewUser->Text = L"New user";
				 this->linkLabelNewUser->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &FormLogOn::linkLabelNewUser_LinkClicked);
				 // 
				 // linkLabelForgotPassword
				 // 
				 this->linkLabelForgotPassword->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->linkLabelForgotPassword->AutoSize = true;
				 this->linkLabelForgotPassword->Location = System::Drawing::Point(178, 229);
				 this->linkLabelForgotPassword->Name = L"linkLabelForgotPassword";
				 this->linkLabelForgotPassword->Size = System::Drawing::Size(122, 17);
				 this->linkLabelForgotPassword->TabIndex = 6;
				 this->linkLabelForgotPassword->TabStop = true;
				 this->linkLabelForgotPassword->Text = L"Forgot Password\?";
				 this->linkLabelForgotPassword->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &FormLogOn::linkLabelForgotPassword_LinkClicked);
				 // 
				 // buttonExit
				 // 
				 this->buttonExit->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->buttonExit->BackColor = System::Drawing::SystemColors::ButtonFace;
				 this->buttonExit->Location = System::Drawing::Point(245, 262);
				 this->buttonExit->Name = L"buttonExit";
				 this->buttonExit->Size = System::Drawing::Size(55, 29);
				 this->buttonExit->TabIndex = 7;
				 this->buttonExit->Text = L"Exit";
				 this->buttonExit->UseVisualStyleBackColor = false;
				 this->buttonExit->Click += gcnew System::EventHandler(this, &FormLogOn::buttonExit_Click);
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->ImageLocation = L"";
				 this->pictureBox1->Location = System::Drawing::Point(58, 16);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(204, 128);
				 this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->pictureBox1->TabIndex = 8;
				 this->pictureBox1->TabStop = false;
				 this->pictureBox1->Click += gcnew System::EventHandler(this, &FormLogOn::pictureBox1_Click);
				 // 
				 // FormLogOn
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::SystemColors::ActiveBorder;
				 this->ClientSize = System::Drawing::Size(332, 303);
				 this->Controls->Add(this->pictureBox1);
				 this->Controls->Add(this->buttonExit);
				 this->Controls->Add(this->linkLabelForgotPassword);
				 this->Controls->Add(this->linkLabelNewUser);
				 this->Controls->Add(this->labelPassword);
				 this->Controls->Add(this->textBoxPassword);
				 this->Controls->Add(this->labelUsername);
				 this->Controls->Add(this->textBoxUsername);
				 this->Controls->Add(this->buttonRegister);
				 this->MaximumSize = System::Drawing::Size(350, 350);
				 this->MinimumSize = System::Drawing::Size(350, 350);
				 this->Name = L"FormLogOn";
				 this->Text = L"Library Login";
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }

#pragma endregion
	private: System::Void buttonRegister_Click(System::Object^  sender, System::EventArgs^  e)//login
			 {
				 String^ strUsername = textBoxUsername->Text;//typed in username
				 String^ strPassword = textBoxPassword->Text;//typed in password

				 User ^ newUser = gcnew User();
				 if(newUser->load(strUsername) == false)//if user's file doesn't exist
				 {
					 popup("Login Failed","No record exists for that user, verify username.");
					 return;
				 }

				 char *enteredPassword = managedStringToChar(strPassword);
				 char* decryptedPassword = decrypt(managedStringToChar(newUser->getUsername()), managedStringToChar(newUser->getEncryptedPassword()));

				 if((strcmp(enteredPassword,decryptedPassword) == 0) && (strPassword->Length >= MIN_PASSWORD_SIZE))//if username and password match AND password on file is longer than 3
				 {
					 //	 popup("Login Successful", "Welcome!");
					 this->Hide();

					 FormHomeAdmin ^ FHomeAdmin = gcnew FormHomeAdmin(strUsername, newUser->getAdminStatus()); //FormHomeAdmin defined in FormHomeAdmin.h
					 FHomeAdmin->ShowDialog();

					 this->Show();
				 }
				 else//invalid username/password
					 popup("Login Failed", "Invalid password. If problem persists, contact the 2 idiots who made this program.");

			 }

	private: System::Void linkLabelForgotPassword_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
			 {
				 popup("Forgot Password", "Try very hard to remember it.");
			 }

	private: System::Void linkLabelNewUser_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
			 {//clicked on "New User" link
				 FormNewUser ^ FNewUser = gcnew FormNewUser(0); //FormNewUser for non-Admin users
				 FNewUser->ShowDialog();
			 }

	private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 this->Close();
			 }
	private: System::Void textBoxUsername_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 lol = !lol;//toggle lol
				 if(lol)
					 pictureBox1->Image = Image::FromFile(FILEPATH_LOL);
				 else
					 pictureBox1->Image = Image::FromFile(FILEPATH_LOGO);

			 }
	};
}

