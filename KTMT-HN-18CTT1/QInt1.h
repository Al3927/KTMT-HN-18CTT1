#pragma once
#include "Task1/Header.h"
#include "Task1/Bit.h"
//#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using System::Runtime::InteropServices::Marshal;

class QInt1 {
	unsigned int data[4];
public:
	///
	///
	///
	//Add for UI
	static std::string toStandardString(System::String^ string)
	{
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;
	}
	void setMode(int mode);
	void input(System::String^ inp, int mode);
	String^ print(int mode);
	
	///
	///
	///End UI
	enum class mode { binary, decimal, hexadecimal };
	mode md;//MODE ma User dang thao tac -> moi ket qua se hien theo he cua mode
	QInt1();
	~QInt1();

	unsigned int MulAdd(const unsigned int& mul, const unsigned int add);// xu li du lieu vao cho data[]
	//-----------------HELPER-----------------

	//-----------------CONVERT----------------
	void setMode();//chon mode theo enum class
	void input(); //xu li input theo mode => lay data
	void print();//xu li output => in data theo mode ma user da chon
	void clear() { data[0] = data[1] = data[2] = data[3] = 0; };//Khoi tao
	void func_InToOut()
	{
		std::cout << "[>INPUT<]" << std::endl;
		input();
		std::cout << "[>OUTPUT<]" << std::endl;
		print();
	}; // function chuyen doi cac he co so voi nhau
	void test_bitshift() {
		std::cout << "[>INPUT<]" << std::endl;
		input();
		*this = *this >> 2;
		std::cout << "[>OUTPUT<]" << std::endl;
		print();
	}



	//----------MATH-OPERATOR---------
	unsigned int operator[](int i)
	{
		return data[i];
	}

	QInt operator+(QInt);
	QInt operator-(QInt);
	QInt operator*(QInt);
	QInt operator/(QInt);
	void func_MathOperator()
	{
		//nhap operator
		QInt param1, param2;
		param1.input();
		param2.input();
		(param1 * param2).print();

	};



	//---------------COMPARERATIVE-OPERATOR-----------
	bool operator<(QInt);
	bool operator>(QInt);
	bool operator==(QInt);
	bool operator<=(QInt);
	bool operator>=(QInt);
	void func_CompareOperator()
	{
		//nhap operator
		QInt param1, param2;
		param1.input();
		param2.input();
		std::cout << (param1 >= param2);
	};


	void operator=(QInt param)
	{
		for (int i = 0; i < 4; i++)
		{
			data[i] = param.data[i];
		}
	}
	//-----------------BIT-OPERATOR----------------
	QInt operator&(QInt);
	QInt operator|(QInt);
	QInt operator^(QInt);
	QInt operator~();

	QInt operator>>(unsigned int);
	QInt operator<<(unsigned int);
	bool rol(unsigned int l = 1);
	bool ror(unsigned int l = 1);
	void func_BitOperator()
	{
		//nhap operator
		input();
		std::string temp;
		unsigned int amount;
		std::cout << "ROL or ROR? (R/L)" << std::endl;
		std::cin >> temp;
		if (temp[0] == 'R') {
			std::cout << "How much?" << std::endl;
			std::cin >> amount;
			ror(amount);
		}
		else if (temp[0] == 'L') {
			std::cout << "How much?" << std::endl;
			std::cin >> amount;
			rol(amount);
		}
		print();
	};
	//--------------EXE-FUNCTION---------------
};/**/