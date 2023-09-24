#pragma once
#include <iostream>

using namespace std;
class MyString
{
private:
	char* str;
	int length;
public:
	MyString();
	MyString(int size);
	MyString(const char* input);
	void SetStr(char* ch);
	void SetLength(int s);
	char* GetStr()const ;
	int GetLength()const;

	void EnterString();
	void PrintString();

	MyString(const MyString& str1);
	void AskStrToCheck();
	bool MyStrStr(const char* str, const char* p);
	int MyChr(char c);	//find ch in string
	int MyStrLen();		//get length of string
	void MyDelChr(char ch);
	int MyStrCmp(MyString& b);

	MyString operator+(const MyString& b);	//strcat (str1 + str2)
	bool operator>(MyString& b);		//>
	bool operator<(MyString& b);		//<
	bool operator ==(MyString& b);		//==

	char& operator[](int index);
	void operator()();

	~MyString();

};
MyString operator+(const MyString a, const int b);	//obj + num
MyString operator+(const int b, const MyString a);	//num + obj
MyString operator++(const MyString a);				//++obj
MyString operator++(const MyString a, int b);		//obj++
MyString operator+(const MyString a, char b);		//obj + 'a'
MyString operator+(char b, const MyString a);		//'a' + obj
