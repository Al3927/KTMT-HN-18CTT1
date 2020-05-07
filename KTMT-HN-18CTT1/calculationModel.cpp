#include "calculationModel.h"

calculationModel::calculationModel()
{
	previousNumber1.unmangedQInt->setMode(10);
	ppNumber.unmangedQInt = 0;
	ppNumber.unmangedQInt += 1;
	ppNumber1.unmangedQInt = 0;
	ppNumber1.unmangedQInt += 1;
	//std::cout << "init calculator!!!";
	//throw gcnew System::NotImplementedException();
}

calculationModel::~calculationModel()
{
	//throw gcnew System::NotImplementedException();
}

//Goi ham nay khi nhan vao mot button
void calculationModel::calculatorHandleEvent(String^ buttonTitle)
{
	// https://github.com/Al3927/Calculator_Swift/blob/master/Calculator/Calculator.swift

	

	//result += "1";
	/*if (Type1) {

	}*/

	//Example about how to use the variable unmanagedQUint.
	/*
	if (buttonTitle == "DEC") {
		previousNumber1.unmangedQInt->setMode(10);
	}
	*/

	//Giai thich:

	//result: Gia tri label. Label value
	//Cu the: Gia tri do nguoi dung nhap vao trong moi phien (life). Moi phien (life cycle) bat dau khi chuong trinh chay/thuc hien phep tinh/AC/./=
	//Va tiep tuc den khi bat dau phien moi hoac ket thuc chuong trinh.

	//previousNumber: Gia tri so, luu ket qua qua moi phep tinh. 

	//Voi kieu Double va std::string ta co the su dung bien result qua lai giua Double va String 
	//tuy nhien QInt khong co type cast/convert sang String^ nen pahi them mot bien nua de giu gia tri
	if (isNewLife1) {
		Type1 = true;
		result = "";
		resultBIN = "";
		resultDEC = "";
		resultHEX = "";
		previousNumberManaged.unmangedQInt = 0;
	}
	if (isNewLife) {
		Type1 = true;
		result = "";
		resultBIN = "";
		resultDEC = "";
		resultHEX = "";
		previousNumberManaged.unmangedQInt = 0;
	}
	if (buttonTitle != "=")
	{
		//isNewLife1 = false
		if (buttonTitle == "x" && isBin) {
		
			if (result == "" || result == ".") {

			}
			else {
				if (previousNumber1.unmangedQInt = 0) {
					if (previousNumberManaged.unmangedQInt == 0) {
						ppNumber1.unmangedQInt = 0;
					}
					previousNumber1.unmangedQInt = previousNumberManaged.unmangedQInt;
				}
				else {
					handleOperator();
				}
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1.unmangedQInt != 0 && ppNumber1.unmangedQInt == 0) {
					previousNumber1.unmangedQInt = 0;
					ppNumber1.unmangedQInt += 1;
				}
			}

			nearestOperator = "x";
			isNewLife = true;
		}
		else if (buttonTitle == "÷" && isBin) {
			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1.unmangedQInt == 0) {
					previousNumber1.unmangedQInt = previousNumberManaged.unmangedQInt;
				}
				else {
					handleOperator();
				}
				
			}

			nearestOperator = "÷";
			isNewLife = true;

		}
		else if (buttonTitle == "+" && isBin) {
			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1.unmangedQInt == 0) {
					previousNumber1.unmangedQInt = previousNumberManaged.unmangedQInt;
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "+";
			isNewLife = true;
		}
		else if (buttonTitle == "-" && isBin) {
			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1.unmangedQInt == 0) {
					previousNumber1.unmangedQInt = previousNumberManaged.unmangedQInt;
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "-";
			isNewLife = true;

		}
		else if (buttonTitle == "AC") { //clear all
			Type1 = true;
			result = "";
			resultBIN = "";
			resultDEC = "";
			resultHEX = "";
			isNewLife = true;
			previousNumber1.unmangedQInt = 0;
			previousNumberManaged.unmangedQInt = 0;
			//previous = 0.0

		}
		else if (buttonTitle == "<<" && isBin) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1.unmangedQInt == 0) {
					previousNumber1.unmangedQInt = previousNumberManaged.unmangedQInt;
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "<<";
			isNewLife = true;

		}
		else if (buttonTitle == ">>" && isBin) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1.unmangedQInt == 0) {
					previousNumber1.unmangedQInt = previousNumberManaged.unmangedQInt;
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = ">>";
			isNewLife = true;

		}
		else if (buttonTitle == "AND" && isBin) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1.unmangedQInt == 0) {
					previousNumber1.unmangedQInt = previousNumberManaged.unmangedQInt;
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "AND";
			isNewLife = true;

		}
		else if (buttonTitle == "OR" && isBin) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1.unmangedQInt == 0) {
					previousNumber1.unmangedQInt = previousNumberManaged.unmangedQInt;
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "OR";
			isNewLife = true;

		}
		else if (buttonTitle == "XOR" && isBin) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1.unmangedQInt == 0) {
					previousNumber1.unmangedQInt = previousNumberManaged.unmangedQInt;
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "XOR";
			isNewLife = true;

		}
		else if (buttonTitle == "NOT" && isBin) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1.unmangedQInt == 0) {
					previousNumber1.unmangedQInt = previousNumberManaged.unmangedQInt;
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "NOT";
			isNewLife = true;

		}
		else if (buttonTitle == "rol" && isBin) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1.unmangedQInt == 0) {
					previousNumber1.unmangedQInt = previousNumberManaged.unmangedQInt;
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "rol";
			isNewLife = true;

		}
		else if (buttonTitle == "ror" && isBin) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1.unmangedQInt == 0) {
					previousNumber1.unmangedQInt = previousNumberManaged.unmangedQInt;
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "ror";
			isNewLife = true;

		}
		else if (buttonTitle == "DEC") {
			isHex = false;
			isBin = false;
			isNewLife = false;
		}
		else if (buttonTitle == "BIN") {
			isHex = false;
			isBin = true;
			isNewLife = false;
		}
		else if (buttonTitle == "HEX") {
			isHex = true;
			isBin = false;
			isNewLife = false;

		}
		else if(buttonTitle == ".") {
			Type1 = false;
			isNewLife = true;
		}
		else if (buttonTitle == "A" || buttonTitle == "B" || buttonTitle == "C" || buttonTitle == "D" || buttonTitle == "E" || buttonTitle == "F") {
			if (!Type1) {
				//Do nothing, type 2 don't have hex.
			}
			else {
				if (!isHex) {
					//Do nothing
				}
				else {
					if (isNewLife1 && nearestOperator == "") {
						previousNumber1.unmangedQInt = 0;
					}
					//result += buttonTitle;
					updateResult(buttonTitle);
					isNewLife = false;

					//Xu li PreviousNumberManaged
					if (Type1) {

					}
					else {

					}
					////
				}
			}
		}
		else if (buttonTitle != "0" || buttonTitle != "1") {

		//xu li nhap so 2->9

			if (isBin) {
				//Do nothing...
			}
			else {
				if (isNewLife1 && nearestOperator == "") {
					previousNumber1.unmangedQInt = 0;
				}
				//result += buttonTitle;
				updateResult(buttonTitle);
				isNewLife = false;
				//Xu li previousNumberManaged
				if (Type1) {
					if (isHex) {

					}
					else {
						//Dec
					}
				}
				else {

					if (isHex) {

					}
					else {
						//Dec
					}
				}
				//////
				
				
			}
		
		}
		else {
			//Xu li nhap so 0 va 1
			if (isNewLife1 && nearestOperator == "") {
				previousNumber1.unmangedQInt = 0;
			}
			//result += buttonTitle;
			updateResult(buttonTitle);
			isNewLife = false;
			//Xu li previousNumberManaged
			if (Type1) {

			}
			else {
				
			}
		}
		isNewLife1 = false;
	}
	else { // buttonTitle == "="
		handleOperator();
		//result = String(previousNumber1. Khong co ep keu String @@
		//updateResult();
	}

}

void calculationModel::handleOperator()
{
	if (result == "" || result == ".") {

	}
	else {

		if (nearestOperator == "+") {
			//previousNumber += Double(result)!
			previousNumber1.unmangedQInt = (previousNumber1.unmangedQInt + previousNumberManaged.unmangedQInt);
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

void calculationModel::updateResult(String^ buttonTitle)
{
	
	if (isBin) {
		resultBIN += buttonTitle;
		result = resultBIN;
	}
	else if (isHex) {
		resultHEX += buttonTitle;
		result = resultHEX;
	}
	else {
		resultDEC += buttonTitle;
		result = resultDEC;
	}
	
	
	
	//throw gcnew System::NotImplementedException();
}
