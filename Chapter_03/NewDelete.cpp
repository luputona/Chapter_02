#include<iostream>
#include<string.h>

using namespace std;

char * MakeStrAdr(int len)
{
	char *str = new char[len];
	return str;
}
void main1()
{
	char * str = MakeStrAdr(20);
	strcpy_s(str, 20,"I am so happy");
	cout << str << endl;
	
	delete []str;
	
}