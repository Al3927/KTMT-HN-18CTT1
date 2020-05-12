#pragma once

#include <iostream>
//#include "Header.h"
#include "Task1/QInt.h"
#include "calculatorUnmanaged.h"

using namespace System;
using namespace System::Windows::Forms;

ref class calculationModel
{
public:
	static calculatorUnmanaged* Calculator = new calculatorUnmanaged();



	//BO TOAN BO phan duoi va trong file cpp
#if 0
	//Type 1 = true, type 2 = false
	bool Type1 = true;
	bool isHex = false;
	bool isBin = false;

	String^ nearestOperator = "";
	String^ result = "";
	String^ resultDEC = "";
	String^ resultHEX = "";
	String^ resultBIN = "";
	
	QIntManaged previousNumberManaged;
	QIntManaged previousNumber1;
	QIntManaged Number0;
	QIntManaged Number0dec;
	QIntManaged Number0hex;

	double previousNumber = 0.0;
	bool isNewLife = true;
	bool isNewLife1 = true; //Sau dau bang hoac vua mo ct.
	bool isUpdateResult = false;


	QIntManaged ppNumber;
	QIntManaged ppNumber1;
	calculationModel();
	~calculationModel();

	//Goi ham nay khi nhan vao mot button
	void calculatorHandleEvent(String^ buttonTitle);
	void handleOperator();

	//Goi ham nay khi ket qua thay doi
	void updateResult(String^ buttonTitle);

private:

	String^ Log = "";

#endif

};

