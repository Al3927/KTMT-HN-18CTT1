#pragma once
#include "Header.h"
#include "Bit.h"
//#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using System::Runtime::InteropServices::Marshal;
//using namespace msclr::interop;

inline bool NaN(char ch) {
	return !('0' <= ch && ch <= '9');
}

inline bool NaN_hex(char ch) {
	return !(('0' <= ch && ch <= '9') || ('a' <= ch && ch <= 'f') || ('A' <= ch && ch <= 'F'));
}

class QInt {
private:
	unsigned int data[4];
public:

	enum class mode { binary, decimal, hexadecimal };
	//unsigned int data[4];
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

	void input(std::string inp, int mode);
	std::string print1(int mode);
	void setMode(mode& md, int mode);
	
	///
	///
	///End UI


	
	QInt();
	QInt(unsigned int);
	~QInt();
	//-----------------TESTING----------------
	void func_InToOut()
	{
		std::cout << "[>INPUT<]" << std::endl;
		input();
		std::cout << "[>OUTPUT<]" << std::endl;
		print();
	}; // function chuyen doi cac he co so voi nhau

	void func_CompareOperator()
	{
		//nhap operator
		QInt param1, param2;
		param1.input();
		param2.input();
		std::cout << (param1 >= param2);
	};
	void func_MathOperator()
	{
		//nhap operator
		QInt param1, param2;
		param1.input();
		param2.input();
		(param1 + param2).print();

	};
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
	void test_bitshift() {
		std::cout << "[>INPUT<]" << std::endl;
		input();
		*this = *this >> 2;
		std::cout << "[>OUTPUT<]" << std::endl;
		print();
	}
	//-------------INPUT/OUTPUT---------------

	void input(); //xu li input theo mode => lay data
	void print(); //xu li output => in data theo mode ma user da chon
	void clear() { data[0] = data[1] = data[2] = data[3] = 0; }; //Khoi tao
	//----------MATH-OPERATOR---------
	unsigned int operator[](int i) { return data[i]; }
	QInt operator+(QInt);
	QInt operator-(QInt);
	QInt operator*(QInt);
	QInt operator/(QInt);
	//---------------COMPARERATIVE-OPERATOR-----------
	bool operator<(QInt);
	bool operator>(QInt);
	bool operator==(QInt);
	bool operator<=(QInt);
	bool operator>=(QInt);
	void operator=(QInt param)// gan QInt -> QInt
	{
		for (int i = 0; i < 4; i++)
		{
			data[i] = param.data[i];
		}
	}
	void operator=(int param)// gan int vao QInt
	{
		clear();
		data[3] = param;
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
private:
	//-----------------HELPER-----------------
	unsigned int MulAdd(const unsigned int& mul, const unsigned int add); // xu li du lieu vao cho data[]
	void hexInp(std::string input); //xu li dau vao dang co so 16 (Hexadecimal)
	void binInp(std::string input); //xu li dau vao dang co so 2 (Binary)
	void decInp(std::string input); //xu li dau vao dang co so 10 (Decimal)
	std::string hexOut(); //xu li dau ra dang co so 16 (Hexadecimal)
	std::string binOut(); //xu li dau ra dang co so 2 (Binary)
	std::string decOut(); //xu li dau ra dang co so 10 (Decimal)
	void setMode(mode& md); //chon mode theo enum class
};