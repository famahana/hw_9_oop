#pragma once
class String
{
private:
	char* str;
	int size;
	static int counterObject;
public:
	String();
	String(int size_1);
	String(const char* userinput);
	String(const String& s);
	static int getCounterObject();
	void showString();
	void MyStrcpy(String& obj);
	int MyStrlen();
	void MyStrCat(String& b);
	~String();
};

