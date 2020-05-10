#include "calculatorUnmanaged.h"
#include "calculationModel.h"

calculatorUnmanaged::calculatorUnmanaged()
{
	previousNumber1.setMode(10);
	Number0.input("0", 2);
	Number0dec.input("0", 10);
	Number0hex.input("0", 16);
	//previousNumber1 = Number0;

	//ppNumber.unmangedQInt = 0;
	//ppNumber.unmangedQInt += 1;
	//ppNumber1.unmangedQInt = 0;
	//ppNumber1.unmangedQInt += 1;

	//std::cout << "init calculator!!!";
	//throw gcnew System::NotImplementedException();
}

calculatorUnmanaged::~calculatorUnmanaged()
{
	//throw gcnew System::NotImplementedException();
}

//Goi ham nay khi nhan vao mot button
void calculatorUnmanaged::calculatorHandleEvent(String^ buttonTitle1)
{
	// https://github.com/Al3927/Calculator_Swift/blob/master/Calculator/Calculator.swift


	std::string buttonTitle = toStandardString(buttonTitle1);

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
		previousNumberManaged = Number0;
	}

	if (buttonTitle != "=")
	{
		//isNewLife1 = false
		if (buttonTitle == "x" && isBin) {

			if (result == "" || result == ".") {

			}
			else {
				/*
				Xu ly neu nhap 0 dau, can != giua 2 QInt
				if (previousNumber1.unmangedQInt == 0) {
					QIntManaged temp;
					temp.unmangedQInt->input(resultBIN, 2);
					QIntManaged temp1;
					temp1.unmangedQInt->input("0", 2);
					if (temp != temp1) {
						ppNumber1.unmangedQInt->input("0", 2);
					}
					previousNumber1.unmangedQInt->input(resultBIN, 2);
				}
				else {
					handleOperator();
				}
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1.unmangedQInt != 0 && ppNumber1.unmangedQInt == 0) {
					previousNumber1.unmangedQInt = 0;
					ppNumber1.unmangedQInt += 1;
				}*/

				if (Type1)
				{
					//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
					if (previousNumber1 == Number0) {
						previousNumber1.input(resultBIN, 2);
					}
					else {
						handleOperator();
					}
				}
				else {

				}
			}

			nearestOperator = "x";
			isNewLife = true;
		}
		else if (buttonTitle == "÷" && isBin) {
			if (result == "" || result == ".") {

			}
			else {
				if (Type1)
				{
					//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
					if (previousNumber1 == Number0) {
						previousNumber1.input(resultBIN, 2);
					}
					else {
						handleOperator();
					}
				}
				else {

				}

			}

			nearestOperator = "÷";
			isNewLife = true;

		}
		else if (buttonTitle == "+" && isBin) {
			if (result == "" || result == ".") {

			}
			else {
				if (Type1)
				{
					//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
					if (previousNumber1 == Number0) {
						previousNumber1.input(resultBIN, 2);
					}
					else {
						handleOperator();
					}
				}
				else {

				}
			}

			nearestOperator = "+";
			isNewLife = true;
		}
		else if (buttonTitle == "-" && isBin) {
			if (result == "" || result == ".") {

			}
			else {
				if (Type1)
				{
					//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
					if (previousNumber1 == Number0) {
						previousNumber1.input(resultBIN, 2);
					}
					else {
						handleOperator();
					}
				}
				else {

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
			nearestOperator == "";
			isNewLife = true;
			isNewLife1 = true;
			previousNumber1 = Number0;
			previousNumberManaged = Number0;
			//previous = 0.0

		}
		else if (buttonTitle == "<<" && isBin && Type1) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1 == Number0) {
					previousNumber1.input(resultBIN, 2);
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "<<";
			isNewLife = true;

		}
		else if (buttonTitle == ">>" && isBin && Type1) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1 == Number0) {
					previousNumber1.input(resultBIN, 2);
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = ">>";
			isNewLife = true;

		}
		else if (buttonTitle == "AND" && isBin && Type1) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1 == Number0) {
					previousNumber1.input(resultBIN, 2);
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "AND";
			isNewLife = true;

		}
		else if (buttonTitle == "OR" && isBin && Type1) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1 == Number0) {
					previousNumber1.input(resultBIN, 2);
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "OR";
			isNewLife = true;

		}
		else if (buttonTitle == "XOR" && isBin && Type1) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1 == Number0) {
					previousNumber1.input(resultBIN, 2);
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "XOR";
			isNewLife = true;

		}
		else if (buttonTitle == "NOT" && isBin && Type1) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1 == Number0) {
					previousNumber1.input(resultBIN, 2);
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "NOT";
			isNewLife = true;

		}
		else if (buttonTitle == "rol" && isBin && Type1) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1 == Number0) {
					previousNumber1.input(resultBIN, 2);
				}
				else {
					handleOperator();
				}
			}

			nearestOperator = "rol";
			isNewLife = true;

		}
		else if (buttonTitle == "ror" && isBin && Type1) {

			if (result == "" || result == ".") {

			}
			else {
				//neu previous = 0.0 xu li: previous = result nguoc lai handle oprator, rieng nhan va chia se khac (do co truong hop nhap 0 dau)
				if (previousNumber1 == Number0) {
					previousNumber1.input(resultBIN, 2);
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
			updateResult(buttonTitle);
		}
		else if (buttonTitle == "BIN") {
			isHex = false;
			isBin = true;
			isNewLife = false;
			updateResult(buttonTitle);
		}
		else if (buttonTitle == "HEX") {
			isHex = true;
			isBin = false;
			isNewLife = false;
			updateResult(buttonTitle);

		}
		else if (buttonTitle == ".") {
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
						previousNumber1 = Number0hex;
					}
					//result += buttonTitle;
					updateResult(buttonTitle);
					isNewLife = false;

					//Xu li PreviousNumberManaged
					/*if (Type1) {

					}
					else {

					}*/
					////
				}
			}
		}
		else if (buttonTitle != "0" && buttonTitle != "1" && buttonTitle != "+" && buttonTitle != "-"
			&& buttonTitle != "x" && buttonTitle != "÷"
			&& buttonTitle != "AND" && buttonTitle != "OR" && buttonTitle != "XOR" && buttonTitle != "NOT"
			&& buttonTitle != "<<" && buttonTitle != ">>" && buttonTitle != "rol" && buttonTitle != "ror") {

			//xu li nhap so 2->9

			if (isBin) {
				//Do nothing...
			}
			else {
				if (isNewLife1 && nearestOperator == "") {
					previousNumber1 = Number0;
				}
				//result += buttonTitle;
				updateResult(buttonTitle);
				isNewLife = false;

			}

		}
		else if (buttonTitle == "0" || buttonTitle == "1") {
			//Xu li nhap so 0 va 1
			if (isNewLife1 && nearestOperator == "") {
				previousNumber1 = Number0;
			}
			//result += buttonTitle;
			updateResult(buttonTitle);
			isNewLife = false;
			////Xu li previousNumberManaged
			//if (Type1) {

			//}
			//else {
			//	
			//}
		}
		isNewLife1 = false;
	}
	else if (buttonTitle == "=") { // buttonTitle == "="
		handleOperator();
		//result = String(previousNumber1.)
		resultDEC = previousNumber1.print1(10);
		resultHEX = previousNumber1.print1(16);
		resultBIN = previousNumber1.print1(2);
		result = resultBIN;
		nearestOperator = "";
		isNewLife1 = true;
		isNewLife = false;
		//updateResult();
	}

	if (isNewLife) {
		result = "";
		resultBIN = "";
		resultDEC = "";
		resultHEX = "";
		previousNumberManaged = Number0;
	}


}

void calculatorUnmanaged::handleOperator()
{
	if (result == "" || result == ".") {

	}
	else {

		if (nearestOperator == "+") {
			//previousNumber += Double(result)!
			if (!Type1)
			{

			}
			else {

				QInt temp = Number0;
				temp.input(result, 2);
				previousNumber1 = previousNumber1 + temp;
				//previousNumber1.unmangedQInt = (previousNumber1.unmangedQInt + previousNumberManaged.unmangedQInt);
				//previousNumber1.unmangedQInt = previousNumber1.unmangedQInt - temp.unmangedQInt;
				//previousNumber1.unmangedQInt = previousNumber1.unmangedQInt->plus(temp.unmangedQInt);
				


			}

		}
		else if (nearestOperator == "-") {
			if (!Type1) {

			}
			else {
				QInt temp = Number0;
				temp.input(result, 2);
				previousNumber1 = previousNumber1 - temp;
				//previousNumber1.unmangedQInt = previousNumber1.unmangedQInt->tru(temp.unmangedQInt);
			}
			//previousNumber -= Double(result)!
		}
		else if (nearestOperator == "x") {
			if (!Type1) {

			}
			else {
				QInt temp = Number0;
				temp.input(result, 2);
				previousNumber1 = previousNumber1 * temp;
			}
			//previousNumber *= Double(result)!
		}
		else if (nearestOperator == "÷") {
			if (!Type1) {

			}
			else {

			}
			//previousNumber /= Double(result)!
		}
		else if (nearestOperator == "AND") {
			QInt temp = Number0;
			temp.input(result, 2);
			previousNumber1 = previousNumber1 & temp;
		}
		else if (nearestOperator == "OR") {
			QInt temp = Number0;
			temp.input(result, 2);
			previousNumber1 = previousNumber1 | temp;
		}
		else if (nearestOperator == "XOR") {
			QInt temp = Number0;
			temp.input(result, 2);
			previousNumber1 = previousNumber1 ^ temp;
		}
		else if (nearestOperator == "NOT") {
			
			previousNumber1.input(result, 2);
			previousNumber1 = ~previousNumber1;
		}
		else if (nearestOperator == "<<") {
			unsigned int temp = 0;
			previousNumber1 = previousNumber1 << temp;

		}
		else if (nearestOperator == ">>") {
			unsigned int temp = 0;
			//temp = (unsigned int)result;
			previousNumber1 = previousNumber1 >> temp;

		}
		else if (nearestOperator == "rol") {

		}
		else if (nearestOperator == "ror") {

		}
		else {
			//previousNumber = Double(result)!
			
			String^ Inp = gcnew String(result.c_str());
			
			previousNumber1.input(Inp, 2);
		}
	}
	//throw gcnew System::NotImplementedException();
}

void calculatorUnmanaged::updateResult(std::string buttonTitle)
{
	if (buttonTitle == "DEC" || buttonTitle == "BIN" || buttonTitle == "HEX") {
		if (buttonTitle == "DEC") {
			result = resultDEC;
		}
		else if (buttonTitle == "HEX") {
			result = resultHEX;
		}
		else if (buttonTitle == "BIN") {
			result = resultBIN;
		}
	}
	else if (Type1) {
		if (isBin) {
			resultBIN += buttonTitle;
			result = resultBIN;
			
			String^ Inp = gcnew String(result.c_str());
			
			previousNumberManaged.input(Inp, 2);
			resultDEC = previousNumberManaged.print1(10);
			resultHEX = previousNumberManaged.print1(16);
		}
		else if (isHex) {
			resultHEX += buttonTitle;
			String^ Inp = gcnew String(result.c_str());

			previousNumberManaged.input(Inp, 16);
			resultDEC = previousNumberManaged.print1(10);
			resultBIN = previousNumberManaged.print1(2);
		}
		else {
			resultDEC += buttonTitle;
			result = resultDEC;
			String^ Inp = gcnew String(result.c_str());

			previousNumberManaged.input(Inp, 10);
			resultBIN = previousNumberManaged.print1(2);
			resultHEX = previousNumberManaged.print1(16);
		}
	}
	else {
		if (isBin) {

		}
		else {

		}
	}



	//throw gcnew System::NotImplementedException();
}
