#include <iostream>
#include "headerProtected.h"
using namespace std; 

float childQueueProtected::arithmeticMath()
{
	Unit* buff = getTail();
	float sym = 0;
	int iter = 0;
	float start = (size % 2 == 1) ? buff->data : buff->prev->data;
	Unit* tail = getTail();
	if (size % 2 == 1) {
		iter = size / 2 + 1;
	}
	else {

		iter = size / 2;
		tail = tail->prev;
	}

	for (int i = 0; i < iter; i++)
	{
		if (start != 0)
		{
			sym = sym + start;
		}
		tail = tail->prev;
		
		if (tail == nullptr)
		{
			break;
		}
		
		tail = tail->prev;
		start = tail->data;
	}

	return sym / iter;
}
int childQueueProtected::pop() { return mainQueue::pop(); }
void childQueueProtected::push(int el) { return mainQueue::push(el); }
void childQueueProtected::print() { return mainQueue::print(); }
void childQueueProtected::merge(childQueueProtected& quePrivate) { return mainQueue::merge(quePrivate); }
void childQueueProtected::copy(childQueueProtected& quePrivate) { return mainQueue::copy(quePrivate); }
bool childQueueProtected::isEmpty() { return mainQueue::isEmpty(); }