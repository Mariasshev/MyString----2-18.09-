#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"
#include <iostream>
using namespace std;

int main() {
	MyString str1("Hello");
	
	//1check: operator [] overloading
	cout << "Element with index 2: ";
	cout << str1[2] << endl;
	cout << "________________________" << endl;

	//2check: operator () overloading
	MyString str2;
	str2();
	str2.PrintString();
	cout << "________________________" << endl;

	//3check: overloading with function (obj + 'A')
	cout << "(obj + 'A'): ";
	MyString str3 = str1 + 10;
	str3.PrintString();
	cout << "________________________" << endl;

	//4check: overloading with function ('A' + obj)
	cout << "('A' + obj): ";
	MyString str4 = '!' + str1;
	str4.PrintString();
	cout << "________________________" << endl;

	//5check: overloading with function (obj + 'A')
	cout << "(obj + 'A'): ";
	MyString str5 =  str1 + '!';
	str5.PrintString();
	cout << "________________________" << endl;

	//6check: overloading with function (++obj)
	cout << "(++obj): ";
	MyString str6 = ++str1;
	str6.PrintString();
	cout << "________________________" << endl;

	//7check: overloading with function (obj++)
	cout << "(obj++): ";
	MyString str7 = str1++;
	str7.PrintString();
	cout << "________________________" << endl;




	////check: copu construct
	//MyString str2 = str1;
	//cout << "Str1: ";
	//str1.PrintString();
	//cout << "Str2: ";
	//str2.PrintString();
	//cout << "------------------------------" << endl;

	////check: find substring in string (if true - the substring is in string)
	//str1.AskStrToCheck();
	//cout << "------------------------------" << endl;

	////check: find char
	//char c;
	//cout << "Enter ch to find it index: ";
	//cin >> c;
	//cout << str1.MyChr(c) << endl;
	//cout << "------------------------------" << endl;

	////check: str length
	//cout << "Length str1 (with 0 terminator): " << str1.MyStrLen() << endl;
	//cout << "------------------------------" << endl;

	////check: concatenate strings
	//cout << "Concatenate str1 + str2" << endl;
	//MyString rez = str1 + str2;
	//rez.PrintString();
	//cout << "------------------------------" << endl;

	////check: delete user ch
	//char ch;
	//cout << "Enter char that you want to delete: ";
	//cin >> ch;
	//rez.MyDelChr(ch);
	//rez.PrintString();
	//cout << "------------------------------" << endl;

	////check: enter + print user string
	//cout << "Enter + print user string" << endl;
	//MyString p2;
	//p2.EnterString();
	//p2.PrintString();
	//cout << "------------------------------" << endl;

	////check: compare two strings
	//cout << "Compare str1 and str2" << endl;
	//cout << str1.MyStrCmp(rez) << endl;
	//cout << "------------------------------" << endl;

	////check: operator overloading
	//cout << "find which statement is true: str1 and str2" << endl;
	//if (str1 > str2) {
	//	cout << "str1 > str2" << endl;
	//}
	//if (str1 < str2) {
	//	cout << "str1 < str2" << endl;
	//}

	//if (str1 == str2) {
	//	cout << "str1 == str2" << endl;
	//}


	return 0;
}