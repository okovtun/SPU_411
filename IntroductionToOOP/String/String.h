#pragma once
#include<Windows.h>
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define delimiter "\n------------------------------------\n"

#define DEBUG

/////////////////////////////////////////////////////////////////////////
/////////		Объявление класса - Class declaration			/////////

class String;
String operator+(const String& left, const String& right);
std::ostream& operator<<(std::ostream& os, const String& obj);
std::istream& operator>>(std::istream& cin, String& obj);
std::istream& getline(std::istream& cin, String& obj);

class String
{
	int size;	//Размер строки в Байтах
	char* str;	//Указатель на строку в динамической памяти
public:
	int get_size()const;
	const char* get_str()const;
	char* get_str();

	//				Constructors:
	explicit String(int size = 80);
	String(const char str[]);
	String(const String& other);
	String(String&& other);
	~String();

	//				Operators:
	String& operator=(const String& other);
	String& operator=(String&& other);
	String& operator+=(const String& other);

	char operator[](int i)const;
	char& operator[](int i);

	//				Methods:
	void info()const;
};

/////////	Конец объявления класса - Class declaration end		/////////
/////////////////////////////////////////////////////////////////////////
