#include "calculationModel.h"

calculationModel::calculationModel()
{
	previousNumber1.unmangedQInt->setMode(10);
	//std::cout << "init calculator!!!";
	//throw gcnew System::NotImplementedException();
}

calculationModel::~calculationModel()
{
	//throw gcnew System::NotImplementedException();
}

void calculationModel::calculatorHandleEvent(String^ buttonTitle)
{
	// https://github.com/Al3927/Calculator_Swift/blob/master/Calculator/Calculator.swift

	result += "1";
	/*if (Type1) {

	}*/

	//Example about how to use the variable unmanagedQUint.
	/*
	if (buttonTitle == "DEC") {
		previousNumber1.unmangedQInt->setMode(10);
	}
	if (buttonTitle == "BIN") {
		previousNumber1.unmangedQInt->setMode(2);
	}
	if (buttonTitle == "HEX") {
		previousNumber1.unmangedQInt->setMode(16);
	}
	*/

	//result: Gia tri label. Label value
	//Cu the: Gia tri do nguoi dung nhap vao trong moi phien (life). Moi phien (life cycle) bat dau khi chuong trinh chay/thuc hien phep tinh/AC/./=
	//Va tiep tuc den khi bat dau phien moi hoac ket thuc chuong trinh.
	//previousNumber: Gia tri so, luu ket qua qua moi phep tinh. 

	if (isNewLife) {
		Type1 = true;
		result = "";
		resultBIN = "";
		resultDEC = "";
		resultHEX = "";
	}
	if (buttonTitle != "=")
	{
		if (buttonTitle == "x") {
		
			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				handleOperator();
			}

			nearestOperator = "x";
			result = "";
		}
		else if (buttonTitle == "÷") {
			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				handleOperator();
			}

			nearestOperator = "÷";
			result = "";

		}
		else if (buttonTitle == "+") {
			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				handleOperator();
			}

			nearestOperator = "+";
			result = "";
		}
		else if (buttonTitle == "-") {
			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				handleOperator();
			}

			nearestOperator = "-";
			result = "";

		}
		else if (buttonTitle == "AC") {
			Type1 = true;
			result = "";
			resultBIN = "";
			resultDEC = "";
			resultHEX = "";
			isNewLife = true;
			//previous = 0.0

		}
		else if (buttonTitle == "<<") {

		}
		else if (buttonTitle == ">>") {

		}
		else if (buttonTitle == "AND") {

		}
		else if (buttonTitle == "OR") {

		}
		else if (buttonTitle == "XOR") {

		}
		else if (buttonTitle == "NOT") {

		}
		else if (buttonTitle == "rol") {

		}
		else if (buttonTitle == "ror") {

		}
		else if (buttonTitle == "DEC") {

		}
		else if (buttonTitle == "BIN") {

		}
		else if (buttonTitle == "HEX") {

		}
		else if(buttonTitle == ".") {
			Type1 = false;
		}
		else {

		}
	}
	else {

	}

}

void calculationModel::handleOperator()
{
	if (result == "" || result == ".") {

	}
	else {

		if (nearestOperator == "+") {
			//previousNumber += Double(result)!
		}
		else if (nearestOperator == "-") {
			//previousNumber -= Double(result)!
		}
		else if (nearestOperator == "x") {
			//previousNumber *= Double(result)!
		}
		else if (nearestOperator == "/") {
			//previousNumber /= Double(result)!
		}
		else if (nearestOperator == "AND") {

		}
		else if (nearestOperator == "OR") {

		}
		else if (nearestOperator == "XOR") {

		}
		else if (nearestOperator == "NOT") {

		}
		else if (nearestOperator == "<<") {

		}
		else if (nearestOperator == ">>") {

		}
		else if (nearestOperator == "rol") {

		}
		else if (nearestOperator == "ror") {

		}
		else {
			//previousNumber = Double(result)!
		}
	}
	//throw gcnew System::NotImplementedException();
}
