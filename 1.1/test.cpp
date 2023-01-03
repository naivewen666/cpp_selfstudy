#include <iostream>
#include <string.h>
// #include <cstring>

using namespace std;
int main()
{
	
	char buff[11] = "abcdefghij";
	char *label=buff;
	cout << (*label) << endl;// a
	cout << &(*label) << endl;//abcdefghij
	cout << (void*)&(*label) << endl;//0x16f0f6de8
	cout << label << endl;//abcdefghij
	cout << &label << endl;//0x16f0f6dd8
	cout << (void*)&label << endl;//0x16f0f6dd8

}