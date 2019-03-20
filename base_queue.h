#pragma once
#include "elem.h"

class Queue {
	elem *first;
	elem *last;
	int sum; // ��������� ���-�� ��������� � �������
public:
	Queue();
	~Queue();
	void _add(int val);
	void _delete();
	void _pin();
	void _copy(Queue &cop);
	elem *getLast();
	void setLast(elem *argument);
	int getSum();
	void setSum(int argument);
};
