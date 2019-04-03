#pragma once
#include "base_queue.h"

class Q_Private:private Queue {
public:
	void _copypriv(Queue &qu);
	void function();
};
