#include<iostream>
#include<stdlib.h>

using namespace std;

class Simple
{
public:
	Simple()
	{
		cout << "I'm simple constructor!" << endl;
	}
};

void main2()
{
	cout << "case 1: ";
	Simple *sp1 = new Simple;

	cout << "case 2: ";
	Simple *sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	delete sp1;
	free(sp2);
}