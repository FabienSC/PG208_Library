#pragma once
#include <string.h>

namespace PG208_Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

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
	private: System::Windows::Forms::Button^  buttonLogOn;
	protected: 

	private: System::Windows::Forms::TextBox^  textBoxUsername;
	private: System::Windows::Forms::Label^  labelUsername;
	protected: 


	private: System::Windows::Forms::Label^  labelPassword;

	private: System::Windows::Forms::TextBox^  textBoxPassword;
	private: System::Windows::Forms::LinkLabel^  linkLabelNewUser;
	private: System::Windows::Forms::LinkLabel^  linkLabelForgotPassword;




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
			this->buttonLogOn = (gcnew System::Windows::Forms::Button());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->linkLabelNewUser = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabelForgotPassword = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// buttonLogOn
			// 
			this->buttonLogOn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonLogOn->Location = System::Drawing::Point(108, 143);
			this->buttonLogOn->Name = L"buttonLogOn";
			this->buttonLogOn->Size = System::Drawing::Size(75, 29);
			this->buttonLogOn->TabIndex = 0;
			this->buttonLogOn->Text = L"Log on";
			this->buttonLogOn->UseVisualStyleBackColor = true;
			this->buttonLogOn->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
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
			this->textBoxUsername->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
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
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(332, 203);
			this->Controls->Add(this->linkLabelForgotPassword);
			this->Controls->Add(this->linkLabelNewUser);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->textBoxUsername);
			this->Controls->Add(this->buttonLogOn);
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
			
			String ^ strUsername = textBoxUsername->Text;
			String ^ strPassword = textBoxPassword->Text;
			char *enteredUsername = (char*)Marshal::StringToHGlobalAnsi(strUsername).ToPointer();
			char *enteredPassword = (char*)Marshal::StringToHGlobalAnsi(strPassword).ToPointer();

			
/*			char message[100] = "Hello "; //Unmanaged type
			String ^ tbstr = textBoxUsername->Text;
			char *name = (char*)Marshal::StringToHGlobalAnsi(tbstr).ToPointer();
			strcat(message,name); //Combine "Hello " with name	
			String^ Mmge=Marshal::PtrToStringAnsi((IntPtr)message);
			String^ title = "Welcome";
			MessageBox::Show(Mmge,title,MessageBoxButtons::OK);
			Marshal::FreeHGlobal((IntPtr)name); // just like delete
*/



			if((strcmp(enteredUsername,"Mr.Fab") == 0) && (strcmp(enteredPassword,"1234") == 0))//if username and password match, login
			{
				String^ message = "Welcome"; // ^ specifies a tracking handle
				String^ title = "Login Successful"; // String is a managed class
				MessageBox::Show(message, title, MessageBoxButtons::OK);
			}
			else//invalid username/password
			{
				String^ message = "Invalid username or password. If problem persists, contact the 2 idiots who made this program."; // ^ specifies a tracking handle
				String^ title = "Login Failed"; // String is a managed class
				MessageBox::Show(message, title, MessageBoxButtons::OK);
			}

		}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void linkLabelForgotPassword_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
		{
			String^ message = "Try very hard to remember it."; // ^ specifies a tracking handle
			String^ title = "Forgot Password"; // String is a managed class
			MessageBox::Show(message, title, MessageBoxButtons::OK);
		}
};
}

