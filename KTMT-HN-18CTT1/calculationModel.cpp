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
	result += "1";
	if (buttonTitle == "DEC") {
		previousNumber1.unmangedQInt->setMode(10);
	}
	if (buttonTitle == "BIN") {
		previousNumber1.unmangedQInt->setMode(2);
	}
	if (buttonTitle == "HEX") {
		previousNumber1.unmangedQInt->setMode(16);
	}
	if (isNewLife) {
		result = "";
		resultBIN = "";
		resultDEC = "";
		resultHEX = "";
	}
//    if (isNewLife){
//        //previousNumber = 0.0
//        result = "";
//    }
//        //let buttonTitle = button.title(for: .normal)
//        if (buttonTitle != "=")
//        {
//            //isNewLife = false
//            if (buttonTitle == "x")
//            {
//                //previousNumber = result
//                Log += " x ";
//
//
//                    if (result == "" || result == ".") {
//
//                    }
//                    else {
//
//                        if (previousNumber == 0.0) {
//                            Double resultDouble = Double (result);
//                            if (resultDouble != 0.0)
//                            {
//                                ppNumber1 = 0.0;
//                            }
//                            previousNumber = Double(result)!;
//
//                        }
//                        else {
//
//                            handleOperator()
//                        }
//
//                        if previousNumber != 0.0, ppNumber1 == 0.0
//                        {
//                            previousNumber = 0.0;
//                                ppNumber1 = 1;
//                        }
//                    }
//                nearestOperator = "x";
//                result = "";
//
//            }
//            else if buttonTitle == "÷" {
//
//                Log += " ÷ "
//
//                    if result == "" || result == "." {
//
//                    }
//                    else {
//
//                        if previousNumber == 0.0 {
//
//                            if Double(result) != = 0.0
//                            {
//                                ppNumber = 0.0
//                            }
//                            previousNumber = Double(result)!
//
//                        }
//                        else {
//
//                            handleOperator()
//                        }
//
//                        if previousNumber != 0.0, ppNumber == 0.0
//                        {
//                            previousNumber = 0.0
//                                ppNumber = 1
//                        }
//                    }
//                nearestOperator = "/"
//                    result = ""
//
//            }
//            else if buttonTitle == "-" {
//
//                Log += " - "
//
//                    if result == "" || result == "." {
//
//                    }
//                    else {
//
//                        if previousNumber == 0.0 {
//                            previousNumber = Double(result)!
//                        }
//                        else {
//
//                            handleOperator()
//
//                        }
//                    }
//                nearestOperator = "-"
//                    result = ""
//
//            }
//            else if buttonTitle == "+" {
//
//                Log += " + "
//
//                    if result == "" || result == "." {
//
//                    }
//                    else {
//
//                        if previousNumber == 0.0 {
//                            previousNumber = Double(result)!
//                        }
//                        else {
//
//                            handleOperator()
//                        }
//                    }
//                nearestOperator = "+"
//                    result = ""
//
//
//            }
//            else if buttonTitle == "AC" {
//                result = ""
//                    Log = ""
//                    isNewLife = true
//                    previousNumber = 0.0
//
//            }
//            else {
//                if isNewLife, nearestOperator == "" {
//                    previousNumber = 0.0
//                }
//                result += buttonTitle ? ? "?"
//                    Log += buttonTitle ? ? "?"
//            }
//            isNewLife = false
//        }
//        else {
//            handleOperator()
//                result = String(previousNumber)
//                nearestOperator = ""
//                isNewLife = true
//
//                Log += " = " + "\(result)" + "\n"
//        }
//}
	//throw gcnew System::NotImplementedException();
}
