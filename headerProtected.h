#pragma once
#include "header.h"

class childQueueProtected : protected mainQueue
{
public:
	float arithmeticMath();
	int pop(); 
	void push(int el); 
	void print(); 
	void merge(childQueueProtected& quePrivate); 
	void copy(childQueueProtected& queue); 
	bool isEmpty(); 
};