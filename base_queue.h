#pragma once
#include "elem.h"

class Queue {
	elem *first;
	elem *last;
	int sum; 
public:
	Queue();
	~Queue();
	void _add(int val);
	void _delete();
	void _pin();
	void _copy(Queue &qu);
	elem *getLast();
	int getSum();
};
