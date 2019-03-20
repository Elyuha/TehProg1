#pragma once
#include "base_queue.h"

class Q_Prot :protected Queue {
public:
	void function();
	void setSum(int argument);
	int getSum(void);
	elem *getLast(void);
	void setLast(elem *argument);
};
