#include "String.h"
#include <cstring>
#include <iostream>


String::String()
{
	size = 80;
	str = new char[size];
	str[0] = '\0';
	counterObject++;
}
String::String(int size_1)
{
	size = size_1;
	str = new char[size];
	str[0] = '\0';
	counterObject++;
}
String::String(const char* userinput)
{
	size = strlen(userinput);
	str = new char[size + 1];
	int i = 0;
	while (userinput[i] != '\0')
	{
		str[i] = userinput[i];
		i++;
	}
	str[size] = '\0';
	counterObject++;
}
String::String(const String& s)
{
	this->str = s.str;
	this->size = s.size;
	this->str = new char[strlen(s.str) + 1];
	strcpy_s(this->str, strlen(s.str) + 1, s.str);
}
int String::getCounterObject()
{
	return counterObject;
}
void String::showString()
{
	std::cout << str << std::endl;
}
void String::MyStrcpy(String& obj)
{
	delete[] str;
	size = obj.size;
	str = new char[size + 1];
	for (int i = 0; i <= size; i++)
	{
		str[i] = obj.str[i];
	}
}
int String::MyStrlen()
{
	int size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return size;
}
void String::MyStrCat(String& b)
{
	int newsize = size + b.size;
	char* newstr = new char[newsize + 1];
	for (int i = 0; i < size; i++)
	{
		newstr[i] = str[i];
	}
	for (int i = 0; i < b.size; i++)
	{
		newstr[size + i] = b.str[i];
	}
	newstr[newsize] = '\0';
	delete[] str;
	str = newstr;
	size = newsize;
}
String::~String()
{
	delete[]str;
}

int String::counterObject = 0;

