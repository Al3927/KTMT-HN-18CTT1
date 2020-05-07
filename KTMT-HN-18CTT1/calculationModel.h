#pragma once

#include <iostream>
//#include "Header.h"
#include "Task1/QIntManaged.h"

using namespace System;
using namespace System::Windows::Forms;

ref class calculationModel
{
public:
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

	double previousNumber = 0.0;
	bool isNewLife = true;
	bool isNewLife1 = true; //Sau dau bang hoac vua mo ct.
	QIntManaged ppNumber;
	QIntManaged ppNumber1;
	calculationModel();
	~calculationModel();

	//Goi ham nay khi nhan vao mot button
	void calculatorHandleEvent(String^ buttonTitle);
	void handleOperator();
	void updateResult(String^ buttonTitle);

private:

	String^ Log = "";

};

