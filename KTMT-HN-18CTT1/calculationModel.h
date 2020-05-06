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

	String^ nearestOperator = "";
	String^ result = "";
	
	QIntManaged previousNumber1;

	double previousNumber = 0.0;
	bool isNewLife = true;
	double ppNumber = 1.0;
	double ppNumber1 = 1.0;
	calculationModel();
	~calculationModel();

	void calculatorHandleEvent(String^ buttonTitle);
private:

	String^ Log = "";

};

