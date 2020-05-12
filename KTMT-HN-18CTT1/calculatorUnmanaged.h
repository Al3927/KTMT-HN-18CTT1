#pragma once

#include <iostream>
//#include "Header.h"
#include "Task1/QInt.h"

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

	double previousNumber = 0.0;
	bool isNewLife = true;
	bool isNewLife1 = true; //Sau dau bang hoac vua mo ct.
	bool isUpdateResult = false;
	QInt ppNumber;
	QInt ppNumber1;
	calculatorUnmanaged();
	~calculatorUnmanaged();

	//Goi ham nay khi nhan vao mot button
	void calculatorHandleEvent(String^ buttonTitle);
	void handleOperator();

	//Goi ham nay khi ket qua thay doi
	void updateResult(std::string buttonTitle);

private:

	//String^ Log = "";

};

