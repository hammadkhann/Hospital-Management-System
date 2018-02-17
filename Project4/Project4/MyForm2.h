#pragma once
#include"ward.h"
#include"patient.h"
#include"doctor.h"
#include"department.h"
#include"header.h"
namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(479, 98);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(228, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L" Ward Details";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(38, 98);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(228, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Ward Details";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(246, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(243, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Welcome Manager";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(479, 155);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(228, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L" Doctor Details";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(38, 183);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(228, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Doctor Details";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(38, 212);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(228, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Department Details";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(476, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Edit Details";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"View Details";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(38, 154);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(228, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Patient Details";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(479, 183);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(228, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Patient Details";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(479, 212);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(228, 23);
			this->button8->TabIndex = 11;
			this->button8->Text = L"New Doctor";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::button8_Click_1);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(739, 261);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		ward wardd;
		wardd.setdetails();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		ward wardd;
		wardd.datadet();
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		Patient pat;
		int a;
		cout << "Enter Id of Patient to be viewed:";
		cin >> a;
		pat.displaydeta(a);
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	doctor doc;
	int a;
	cout << "Enter Id of Patient to be viewed:";
	cin >> a;
	doc.display(a);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Department depart;
	depart.departmentdetails();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	doctor doc;
	doc.edit();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	Patient pat;
	pat.editdata();
}
private: System::Void button8_Click_1(System::Object^  sender, System::EventArgs^  e) {
	management head;
	head.adddoctor();

}
};
}