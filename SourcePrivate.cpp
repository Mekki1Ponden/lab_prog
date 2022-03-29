#include <iostream>
#include "headerPrivate.h"
using namespace std;

float childQueuePrivate::arithmeticMath()
{
	Unit* buff = getTail();
	float sym = 0;
	float iter = 0;
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
int childQueuePrivate::pop() { return mainQueue::pop(); }
void childQueuePrivate::push(int el) { return mainQueue::push(el); }
void childQueuePrivate::print() { return mainQueue::print(); }
void childQueuePrivate::merge(childQueuePrivate& quePrivate) { return mainQueue::merge(quePrivate); }
void childQueuePrivate::copy(childQueuePrivate& quePrivate) { return mainQueue::copy(quePrivate); }
bool childQueuePrivate::isEmpty() { return mainQueue::isEmpty(); }