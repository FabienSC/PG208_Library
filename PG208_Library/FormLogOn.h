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
			
			setup();

			String ^ strSavePath = SAVEPATH;
			if(File::Exists( strSavePath ))
			{
				StreamReader^ sr = File::OpenText( strSavePath );
				try
				{
					hiScore = System::Convert::ToInt32(sr->ReadLine());
				}
				finally//make sure to close file
				{
					if ( sr )
						delete (IDisposable^)sr;
				}
			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormLogOn()
		{
			save();
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
	private: System::ComponentModel::IContainer^  components;





			 /// <summary>
			 /// Required designer variable.
			 /// </summary>

	private: System::Windows::Forms::Button^  buttonUp;
	private: System::Windows::Forms::Timer^  timer30FPS;
			 bool lol;
			 
		float posX;
		float posY;
		float accelX;
		float accelY;
		int intPosX;
		int intPosY;

		long score;
		long hiScore;

		bool buttonDoShitPressed;
		int roof;
		int floor;
		array<int, 2>^ walls;
		int wallHeight;//multiple of 2
		bool crashed;
		bool justCrashed;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 this->buttonRegister = (gcnew System::Windows::Forms::Button());
				 this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
				 this->labelUsername = (gcnew System::Windows::Forms::Label());
				 this->labelPassword = (gcnew System::Windows::Forms::Label());
				 this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
				 this->linkLabelNewUser = (gcnew System::Windows::Forms::LinkLabel());
				 this->linkLabelForgotPassword = (gcnew System::Windows::Forms::LinkLabel());
				 this->buttonExit = (gcnew System::Windows::Forms::Button());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->buttonUp = (gcnew System::Windows::Forms::Button());
				 this->timer30FPS = (gcnew System::Windows::Forms::Timer(this->components));
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // buttonRegister
				 // 
				 this->buttonRegister->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->buttonRegister->BackColor = System::Drawing::SystemColors::ButtonFace;
				 this->buttonRegister->Location = System::Drawing::Point(133, 412);
				 this->buttonRegister->Name = L"buttonRegister";
				 this->buttonRegister->Size = System::Drawing::Size(75, 29);
				 this->buttonRegister->TabIndex = 4;
				 this->buttonRegister->Text = L"Log on";
				 this->buttonRegister->UseVisualStyleBackColor = false;
				 this->buttonRegister->Click += gcnew System::EventHandler(this, &FormLogOn::buttonRegister_Click);
				 // 
				 // textBoxUsername
				 // 
				 this->textBoxUsername->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->textBoxUsername->Location = System::Drawing::Point(133, 312);
				 this->textBoxUsername->MaxLength = 255;
				 this->textBoxUsername->Name = L"textBoxUsername";
				 this->textBoxUsername->Size = System::Drawing::Size(192, 22);
				 this->textBoxUsername->TabIndex = 1;
				 this->textBoxUsername->TextChanged += gcnew System::EventHandler(this, &FormLogOn::textBoxUsername_TextChanged);
				 // 
				 // labelUsername
				 // 
				 this->labelUsername->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->labelUsername->AutoSize = true;
				 this->labelUsername->Location = System::Drawing::Point(54, 316);
				 this->labelUsername->Name = L"labelUsername";
				 this->labelUsername->Size = System::Drawing::Size(77, 17);
				 this->labelUsername->TabIndex = 2;
				 this->labelUsername->Text = L"Username:";
				 // 
				 // labelPassword
				 // 
				 this->labelPassword->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->labelPassword->AutoSize = true;
				 this->labelPassword->Location = System::Drawing::Point(54, 358);
				 this->labelPassword->Name = L"labelPassword";
				 this->labelPassword->Size = System::Drawing::Size(73, 17);
				 this->labelPassword->TabIndex = 4;
				 this->labelPassword->Text = L"Password:";
				 // 
				 // textBoxPassword
				 // 
				 this->textBoxPassword->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->textBoxPassword->Location = System::Drawing::Point(133, 354);
				 this->textBoxPassword->MaxLength = 63;
				 this->textBoxPassword->Name = L"textBoxPassword";
				 this->textBoxPassword->Size = System::Drawing::Size(192, 22);
				 this->textBoxPassword->TabIndex = 3;
				 this->textBoxPassword->UseSystemPasswordChar = true;
				 // 
				 // linkLabelNewUser
				 // 
				 this->linkLabelNewUser->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				 this->linkLabelNewUser->AutoSize = true;
				 this->linkLabelNewUser->Location = System::Drawing::Point(130, 379);
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
				 this->linkLabelForgotPassword->Location = System::Drawing::Point(203, 379);
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
				 this->buttonExit->Location = System::Drawing::Point(270, 412);
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
				 this->pictureBox1->Location = System::Drawing::Point(-1, -6);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(388, 264);
				 this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->pictureBox1->TabIndex = 8;
				 this->pictureBox1->TabStop = false;
				 this->pictureBox1->Click += gcnew System::EventHandler(this, &FormLogOn::pictureBox1_Click);
				 // 
				 // buttonUp
				 // 
				 this->buttonUp->Location = System::Drawing::Point(133, 249);
				 this->buttonUp->Name = L"buttonUp";
				 this->buttonUp->Size = System::Drawing::Size(103, 48);
				 this->buttonUp->TabIndex = 9;
				 this->buttonUp->Text = L"UP";
				 this->buttonUp->UseVisualStyleBackColor = true;
				 this->buttonUp->Visible = false;
				 this->buttonUp->Click += gcnew System::EventHandler(this, &FormLogOn::buttonUp_Click);
				 this->buttonUp->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormLogOn::buttonDoShit_MouseDown);
				 this->buttonUp->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormLogOn::buttonDoShit_MouseUp);
				 // 
				 // timer30FPS
				 // 
				 this->timer30FPS->Interval = 33;
				 this->timer30FPS->Tick += gcnew System::EventHandler(this, &FormLogOn::timer30FPS_Tick);
				 // 
				 // FormLogOn
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::SystemColors::ActiveBorder;
				 this->ClientSize = System::Drawing::Size(382, 453);
				 this->Controls->Add(this->buttonUp);
				 this->Controls->Add(this->pictureBox1);
				 this->Controls->Add(this->buttonExit);
				 this->Controls->Add(this->linkLabelForgotPassword);
				 this->Controls->Add(this->linkLabelNewUser);
				 this->Controls->Add(this->labelPassword);
				 this->Controls->Add(this->textBoxPassword);
				 this->Controls->Add(this->labelUsername);
				 this->Controls->Add(this->textBoxUsername);
				 this->Controls->Add(this->buttonRegister);
				 this->MaximumSize = System::Drawing::Size(400, 500);
				 this->MinimumSize = System::Drawing::Size(400, 500);
				 this->Name = L"FormLogOn";
				 this->Text = L"Library Login";
				 this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormLogOn::PaintForm);
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
					 popup("Login Successful", "Welcome!");
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
					 pictureBox1->Visible = false;
					 this->buttonUp->Visible = true;
					 setup();
					 
				 this->timer30FPS->Enabled = true;

			 }

	private: System::Void buttonUp_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(crashed)
					 setup();//restart
			 }

			 void setup()
		{
			posX = 50;
			posY = 100;
			accelX = 0;//don't move
			accelY = 0;
			buttonDoShitPressed = false;
			roof = 1;
			floor = 200;
			crashed = false;
			justCrashed = false;
			score = 0;

			wallHeight = 50;
			walls = gcnew array<int, 2>(2,5);

			srand (time(NULL));

			for(int i = 0; i<5; i++)
				walls[1,i] = -1;//vertical pos

			int pos = 0;
			for(int i = 0; i<5; i++)
			{
				walls[0,i] = pos;//Horizontal pos
				pos += 58;
			}
		}
private: System::Void timer30FPS_Tick(System::Object^  sender, System::EventArgs^  e)
		 {
				 if (!crashed)
				 {
					 posX += accelX;
					 posY += accelY;
					 intPosX = posX;
					 intPosY = posY;
					 score++;

					 for(int i = 0; i < 5; i++)
						 walls[0,i]--;//move left

					 if(buttonDoShitPressed)//mouse is clicking on button
						 accelY -= 0.28;

					 if(accelY < -5)//fast accel => slow down faster
						 accelY += 0.2;
					 else
						 accelY += 0.13;

					 for(int i = 0; i<5; i++)
					 {
						 if (walls[1,i] != -1)
						 {
							 if(abs(intPosX - walls[0,i]) < 2)//on top of the wall
								 if(abs(intPosY - walls[1,i]) < wallHeight/2)
									 justCrashed = true;

						 }
						 if(walls[0,i] < 0)
						 {
							 walls[0,i] = 290;
							 walls[1,i] = myRand();
						 }
					 }
					 if((intPosY <= roof)||(intPosY >= floor))//out of bounds
						 justCrashed = true;
					 if(score%25 == 0)
					 {
						 roof++;
						 floor--;
					 }
					 if(score%100 == 0)
						 wallHeight -= 2;
				 }
				 if(!crashed)
					 this->Invalidate();
				 if(justCrashed)
				 {
					 if(score>hiScore)
						 hiScore = score;
					 this->Invalidate();//redraw form
					 crashed = true;
					 justCrashed = false;
				 }
		 }
private: System::Void PaintForm(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
			 {
				 //calculate
				 Graphics ^g = e->Graphics;
				 Pen ^myPen = gcnew Pen(Color::Black, 2);

				 //redraw
				 g->DrawLine(myPen, 0, roof, 290, roof);//draw roof
				 g->DrawLine(myPen, 0, floor, 290, floor);//draw floor
				 g->DrawLine(myPen, intPosX, intPosY, intPosX+2, intPosY);


				 System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 8);
				 System::Drawing::Font^ drawFont2 = gcnew System::Drawing::Font("Arial", 5);
				 SolidBrush^ drawBrush = gcnew SolidBrush( Color::Black );
				 g->DrawString( ""+score, drawFont, drawBrush, PointF(260,15) );//draw score
				 g->DrawString( ""+hiScore, drawFont2, drawBrush, PointF(270,5) );//draw score

				 if(crashed)
					 g->DrawEllipse(myPen, intPosX-5, intPosY-6, 11, 11);

				 for(int i = 0; i<5; i++)
					 drawWall(g,i);
			 }

		 private: System::Void buttonDoShit_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
			 {buttonDoShitPressed = true;}

	private: System::Void buttonDoShit_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
			 {buttonDoShitPressed = false;}

			 void drawWall(Graphics^ g, int i)//draw wall i
			 {
				 Pen ^myPen = gcnew Pen(Color::Black, 2);
				 if (walls[1,i] == -1)
					 return;
				 g->DrawLine(myPen, walls[0,i], walls[1,i] + wallHeight/2, walls[0,i], walls[1,i] - wallHeight/2);
			 }

			 int myRand()
			 {return rand()%((floor-roof) - wallHeight - 20) + (wallHeight/2 + 10 + roof);}

			 void save()
			 {
				 String ^ strSavePath = SAVEPATH;
				 FileStream^ fs = File::Create( strSavePath );
				 try
				 {
					 array<Byte>^info = (gcnew UTF8Encoding( true ))->GetBytes(""+hiScore);
					 fs->Write( info, 0, info->Length );
				 }
				 finally//make sure to close file
				 {
					 if ( fs )
						 delete (IDisposable^)fs;
				 }
			 }
};
}

