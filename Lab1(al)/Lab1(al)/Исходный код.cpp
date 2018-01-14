#include <iostream>
#include "header.h"
#include <conio.h>

using namespace std;

int main()
{
	Stack p;
	for (int i(0); i < 10; i++)
	{
		p.Push(i);
	}
	for (int i(0); i < 10; i++)
	{
		cout << p.Pop() << endl;
	}
	_getch();
	return 0;
}