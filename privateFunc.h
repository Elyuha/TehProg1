#pragma once
#include "base_queue.h"

class Q_Private:private Queue {
public:
	void function();
	void setSum(int argument);
	int getSum(void);
	elem *getLast(void);
	void setLast(elem *argument);
};
