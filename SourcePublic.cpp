#include <iostream>
#include "headerPublic.h"
using namespace std;

float childQueuePublic::arithmeticMath()
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