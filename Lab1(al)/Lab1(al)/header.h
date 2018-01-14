#pragma once
#include <iostream>


struct Stek
{
	int data;
	Stek* next;
};

class Stack
{
private:
	Stek *next;
public: 
	Stack(){};
	void Push(int n)
	{
		Stek *pv = new Stek;
		pv->data = n;
		pv->next = next;
		next = pv;
	}
	int Pop()
	{
		int temp = next->data;
		Stek *pv = next;
		next = next->next;
		delete pv;
		return temp;
	}

};
