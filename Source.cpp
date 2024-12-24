#include <iostream>
#include "String.h"
using namespace std;



int main()
{
	cout << "Default: ";
	String st;
	st.showString();

	String st2(35);
	cout << "Custom size: ";
	st2.showString();

	String st3("Test2321313131");
	cout << "String: ";
	st3.showString();


	String st5("Hello");
	cout << "String: ";
	st5.showString();


	String st4 = st3;
	cout << "String: ";
	st4.showString();

	st3.MyStrCat(st5);
	cout << "Concatenated: ";
	st3.showString();

	String st6;
	st6.MyStrcpy(st3);
	cout << "Copied: ";
	st6.showString();

	cout << "Lenght of string 3: " << st3.MyStrlen() << endl;




	return 0;
}