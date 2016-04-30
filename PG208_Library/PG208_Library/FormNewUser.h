#pragma once
#include "stdafx.h"

namespace PG208_Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;//
	using namespace std;							 //

	/// <summary>
	/// Summary for FormNewUser
	/// </summary>
	public ref class FormNewUser : public System::Windows::Forms::Form
	{
	public:
		FormNewUser(bool userStatus)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			if(userStatus == 0)//if User is not an Admin
				this->checkBoxAdmin->Visible = false;//hide admin selection box
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormNewUser()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  labelPassword;
			 System::Windows::Forms::TextBox^  textBoxPassword;
			 System::Windows::Forms::Label^  labelUsername;
			 System::Windows::Forms::TextBox^  textBoxUsername;
			 System::Windows::Forms::Button^  buttonRegister;
	private: System::Windows::Forms::CheckBox^  checkBoxAdmin;




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
				 this->labelPassword = (gcnew System::Windows::Forms::Label());
				 this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
				 this->labelUsername = (gcnew System::Windows::Forms::Label());
				 this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
				 this->buttonRegister = (gcnew System::Windows::Forms::Button());
				 this->checkBoxAdmin = (gcnew System::Windows::Forms::CheckBox());
				 this->SuspendLayout();
				 // 
				 // labelPassword
				 // 
				 this->labelPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
				 this->labelPassword->AutoSize = true;
				 this->labelPassword->Location = System::Drawing::Point(31, 93);
				 this->labelPassword->Name = L"labelPassword";
				 this->labelPassword->Size = System::Drawing::Size(73, 17);
				 this->labelPassword->TabIndex = 11;
				 this->labelPassword->Text = L"Password:";
				 // 
				 // textBoxPassword
				 // 
				 this->textBoxPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
				 this->textBoxPassword->Location = System::Drawing::Point(110, 89);
				 this->textBoxPassword->MaxLength = 63;
				 this->textBoxPassword->Name = L"textBoxPassword";
				 this->textBoxPassword->Size = System::Drawing::Size(192, 22);
				 this->textBoxPassword->TabIndex = 10;
				 this->textBoxPassword->UseSystemPasswordChar = true;
				 // 
				 // labelUsername
				 // 
				 this->labelUsername->Anchor = System::Windows::Forms::AnchorStyles::None;
				 this->labelUsername->AutoSize = true;
				 this->labelUsername->Location = System::Drawing::Point(31, 51);
				 this->labelUsername->Name = L"labelUsername";
				 this->labelUsername->Size = System::Drawing::Size(77, 17);
				 this->labelUsername->TabIndex = 9;
				 this->labelUsername->Text = L"Username:";
				 // 
				 // textBoxUsername
				 // 
				 this->textBoxUsername->Anchor = System::Windows::Forms::AnchorStyles::None;
				 this->textBoxUsername->Location = System::Drawing::Point(110, 47);
				 this->textBoxUsername->MaxLength = 255;
				 this->textBoxUsername->Name = L"textBoxUsername";
				 this->textBoxUsername->Size = System::Drawing::Size(192, 22);
				 this->textBoxUsername->TabIndex = 8;
				 // 
				 // buttonRegister
				 // 
				 this->buttonRegister->Anchor = System::Windows::Forms::AnchorStyles::None;
				 this->buttonRegister->Location = System::Drawing::Point(110, 130);
				 this->buttonRegister->Name = L"buttonRegister";
				 this->buttonRegister->Size = System::Drawing::Size(89, 36);
				 this->buttonRegister->TabIndex = 7;
				 this->buttonRegister->Text = L"Register";
				 this->buttonRegister->UseVisualStyleBackColor = true;
				 this->buttonRegister->Click += gcnew System::EventHandler(this, &FormNewUser::buttonRegister_Click);
				 // 
				 // checkBoxAdmin
				 // 
				 this->checkBoxAdmin->Anchor = System::Windows::Forms::AnchorStyles::None;
				 this->checkBoxAdmin->AutoSize = true;
				 this->checkBoxAdmin->Location = System::Drawing::Point(110, 19);
				 this->checkBoxAdmin->Name = L"checkBoxAdmin";
				 this->checkBoxAdmin->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				 this->checkBoxAdmin->Size = System::Drawing::Size(69, 21);
				 this->checkBoxAdmin->TabIndex = 12;
				 this->checkBoxAdmin->Text = L"Admin";
				 this->checkBoxAdmin->UseVisualStyleBackColor = true;
				 // 
				 // FormNewUser
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(332, 193);
				 this->Controls->Add(this->checkBoxAdmin);
				 this->Controls->Add(this->labelPassword);
				 this->Controls->Add(this->textBoxPassword);
				 this->Controls->Add(this->labelUsername);
				 this->Controls->Add(this->textBoxUsername);
				 this->Controls->Add(this->buttonRegister);
				 this->MaximumSize = System::Drawing::Size(350, 240);
				 this->MinimumSize = System::Drawing::Size(350, 240);
				 this->Name = L"FormNewUser";
				 this->Text = L"FormNewUser";
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void buttonRegister_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 String ^ strUsername = textBoxUsername->Text;//typed in username
				 String ^ strPassword = textBoxPassword->Text;//typed in password

				 char *enteredUsername = (char*)Marshal::StringToHGlobalAnsi(strUsername).ToPointer();
				 strUsername = FILEPATH_USERS + strUsername + ".txt";//change username to filepath
				 char *userFilePath = (char*)Marshal::StringToHGlobalAnsi(strUsername).ToPointer();//Marshal::FreeHGlobal((IntPtr)name); // add at the end to free up memory?
				 char *enteredPassword = (char*)Marshal::StringToHGlobalAnsi(strPassword).ToPointer();

				 struct stat buffer;
				 if(stat (userFilePath, &buffer) == 0)//If username doesn't already exist
					popup("Epic Fail!","Username already exists!");
				 else
				 {
					 int sizeUsername = strlen(enteredUsername);
					 int sizePassword = strlen(enteredPassword);

					 if((sizeUsername > 0) && (sizePassword > 3))
					 {
						 char* encryptedPassword = encrypt(enteredUsername,enteredPassword);

						 ofstream myfile;
						 myfile.open (userFilePath);
						 myfile << encryptedPassword << endl;
						 myfile << this->checkBoxAdmin->Checked << endl;
						 myfile.close();
						 popup("Success", "New user registered.");
						 this->Close();
					 }
					 else
					 {
						 popup("3P1C FA1L L0LZ", "Username must contain at least one character.\nPassword must contain at least 4 characters.");
					 }
				 }

			 }
	};
}
