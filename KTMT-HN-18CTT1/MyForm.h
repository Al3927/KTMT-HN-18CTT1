#pragma once

#include "Source.cpp"
#include "calculationModel.h"
#include <iostream>

namespace KTMTHN18CTT1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		calculationModel calculator;
		bool isBin = false;
		bool isHex = false;

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			
			
			//abc Ddd();
			//Ddd.sss();
			
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	//private: calculationModel calculator();
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button30;

	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button34;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(85, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"____";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 307);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(39, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(167, 307);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(39, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(212, 307);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(39, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(122, 336);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(39, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(167, 336);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(39, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(212, 336);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(39, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(122, 365);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(39, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(167, 365);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(39, 23);
			this->button8->TabIndex = 8;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(212, 365);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(39, 23);
			this->button9->TabIndex = 9;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(122, 394);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(84, 23);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(212, 394);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(39, 23);
			this->button11->TabIndex = 11;
			this->button11->Text = L".";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(257, 394);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(39, 23);
			this->button12->TabIndex = 12;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button13
			// 
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button13->Location = System::Drawing::Point(257, 365);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(39, 23);
			this->button13->TabIndex = 13;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button14
			// 
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button14->Location = System::Drawing::Point(257, 336);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(39, 23);
			this->button14->TabIndex = 14;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button15
			// 
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button15->Location = System::Drawing::Point(257, 307);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(39, 23);
			this->button15->TabIndex = 15;
			this->button15->Text = L"x";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button16
			// 
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button16->Location = System::Drawing::Point(257, 278);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(39, 23);
			this->button16->TabIndex = 16;
			this->button16->Text = L"÷";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button18
			// 
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button18->Location = System::Drawing::Point(122, 249);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(39, 23);
			this->button18->TabIndex = 18;
			this->button18->Text = L"AND";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button19
			// 
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button19->Location = System::Drawing::Point(167, 249);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(39, 23);
			this->button19->TabIndex = 19;
			this->button19->Text = L"OR";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button20
			// 
			this->button20->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button20->Location = System::Drawing::Point(212, 249);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(39, 23);
			this->button20->TabIndex = 20;
			this->button20->Text = L"XOR";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button21
			// 
			this->button21->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button21->Location = System::Drawing::Point(257, 249);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(39, 23);
			this->button21->TabIndex = 21;
			this->button21->Text = L"NOT";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button17
			// 
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button17->Location = System::Drawing::Point(122, 278);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(39, 23);
			this->button17->TabIndex = 22;
			this->button17->Text = L"<<";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button22
			// 
			this->button22->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button22->Location = System::Drawing::Point(167, 278);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(39, 23);
			this->button22->TabIndex = 23;
			this->button22->Text = L">>";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(212, 278);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(39, 23);
			this->button23->TabIndex = 24;
			this->button23->Text = L"AC";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button24
			// 
			this->button24->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button24->Location = System::Drawing::Point(77, 394);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(39, 23);
			this->button24->TabIndex = 25;
			this->button24->Text = L"F";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button25
			// 
			this->button25->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button25->Location = System::Drawing::Point(77, 365);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(39, 23);
			this->button25->TabIndex = 26;
			this->button25->Text = L"E";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button26
			// 
			this->button26->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button26->Location = System::Drawing::Point(77, 336);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(39, 23);
			this->button26->TabIndex = 27;
			this->button26->Text = L"D";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button27
			// 
			this->button27->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button27->Location = System::Drawing::Point(77, 307);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(39, 23);
			this->button27->TabIndex = 28;
			this->button27->Text = L"C";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button28
			// 
			this->button28->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button28->Location = System::Drawing::Point(77, 278);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(39, 23);
			this->button28->TabIndex = 29;
			this->button28->Text = L"B";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button29
			// 
			this->button29->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button29->Location = System::Drawing::Point(77, 249);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(39, 23);
			this->button29->TabIndex = 30;
			this->button29->Text = L"A";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(122, 191);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 35;
			this->label6->Text = L"_";
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(77, 186);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(39, 23);
			this->button30->TabIndex = 39;
			this->button30->Text = L"BIN";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(77, 157);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(39, 23);
			this->button32->TabIndex = 41;
			this->button32->Text = L"HEX";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(77, 128);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(39, 23);
			this->button33->TabIndex = 42;
			this->button33->Text = L"DEC";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(122, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 44;
			this->label3->Text = L"_";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(122, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 45;
			this->label4->Text = L"_";
			// 
			// button31
			// 
			this->button31->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button31->Location = System::Drawing::Point(77, 220);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(107, 23);
			this->button31->TabIndex = 46;
			this->button31->Text = L"rol";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button34
			// 
			this->button34->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button34->Location = System::Drawing::Point(189, 220);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(107, 23);
			this->button34->TabIndex = 47;
			this->button34->Text = L"ror";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(747, 462);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"KTMT-HN";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		//label1->Text = "";
		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
		Button^ x = (Button^)sender;

		this->calculator.calculatorHandleEvent(x->Text);
		//label1->Text = calculator.result;
		UpdateViewFromModel();
		//Button x = sender as Button;
		//label1->Text += x->Text;
		if (x->Text == "BIN") {
			isBin = true;
			isHex = false;
		}
		else if (x->Text == "HEX") {
			isHex = true;
			isBin = false;
		}
		else if (x->Text == "DEC") {
			isBin = false;
			isHex = false;
		}
		UpdateIsHEX();
		UpdateIsBIN();
		
	}
	private: System::Void UpdateIsHEX() {

		if (isHex) {
			//this->button29->Text = L"A";
			this->button29->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button29->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			//this->button28->Text = L"B";
			this->button28->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button28->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			//this->button27->Text = L"C";
			this->button27->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button27->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			//this->button26->Text = L"D";
			this->button26->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button26->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			//this->button25->Text = L"E";
			this->button25->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button25->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			//this->button24->Text = L"F";
			this->button24->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button24->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
		}
		else {
			this->button29->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button29->Text = L"";
			//this->button29->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			//this->button28->Text = L"";
			this->button28->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button28->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			//this->button27->Text = L"";
			this->button27->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button27->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			//this->button26->Text = L"";
			this->button26->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button26->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			//this->button25->Text = L"";
			this->button25->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button25->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			//this->button24->Text = L"";
			this->button24->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button24->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
		}
	
	}
	private: System::Void UpdateIsBIN(){
		if (isBin) {
			//operator button
			this->button13->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button13->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button14->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button14->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button15->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button15->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button16->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button16->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button18->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button18->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button19->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button19->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button20->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button20->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button21->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button21->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button17->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button17->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button22->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button22->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button31->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button31->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button34->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button34->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);

			//2->9 button
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button8->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button9->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button4->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button5->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button6->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button1->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button2->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button3->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);

			//0,1

			
			
		}
		else {
			//operator button

			this->button13->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button13->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button14->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button15->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button16->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button18->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button19->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button20->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button20->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button21->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button21->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button17->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button22->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button22->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button31->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button31->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button34->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button34->Click -= gcnew System::EventHandler(this, &MyForm::button1_Click);

			//2->9 button
			this->button8->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button8->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button9->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button9->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button4->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button5->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button6->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			//this->button3->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
		}
	}
	private: System::Void UpdateViewFromModel() {

		label1->Text = calculator.result;
		//4: Dec 3: Hex 6:Bin
		label4->Text = calculator.resultDEC;
		label3->Text = calculator.resultHEX;
		label6->Text = calculator.resultBIN;
	}


private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
