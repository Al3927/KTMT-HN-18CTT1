#pragma once

#include <iostream>
//#include "Header.h"
#include "Task1/QInt.h"
#include "Task2/QFloat.h"

using namespace System;
using namespace System::Windows::Forms;
using System::Runtime::InteropServices::Marshal;

class calculatorUnmanaged
{

public:

	static std::string toStandardString(System::String^ string)
	{
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;
	}
	//Type 1 = true, type 2 = false
	bool Type1 = true;
	bool isHex = false;
	bool isBin = false;

	std::string nearestOperator = "";
	std::string result = "";
	std::string resultDEC = "";
	std::string resultHEX = "";
	std::string resultBIN = "";

	QInt previousNumberManaged;
	QInt previousNumber1;
	QInt Number0;
	QInt Number0dec;
	QInt Number0hex;

	QFloat previousNumber2;
	QFloat floatNumber0BIN;
	QFloat floatNumber0DEC;



	double previousNumber = 0.0;
	bool isNewLife = true;
	bool isNewLife1 = true; //Sau dau bang hoac vua mo ct.
	bool isUpdateResult = false;
	
	calculatorUnmanaged();
	~calculatorUnmanaged();

	//Call This function when user touch up inside a button.
	void calculatorHandleEvent(String^ buttonTitle);
	void handleOperator();

	//Call This function when result changed.
	void updateResult(std::string buttonTitle);

private:

	//String^ Log = "";

};

