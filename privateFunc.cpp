#include <iostream>
#include "privateFunc.h"


elem *Q_Private::getLast(void) { return Queue::getLast(); }
int Q_Private::getSum(void) { return Queue::getSum(); }

void Q_Private::function() {
	int res = 0;
	elem *temp = getLast();
	int sum = getSum();
	while (sum > 0) {
		if (temp->value % 2 != 0) 
			res += temp->value;
		temp = temp->prev;
		sum--;
	}
	std::cout << "Результат = " << res << std::endl;
	system("pause");
}

void Q_Private::setSum(int argument) { Queue::setSum(argument); }
void Q_Private::setLast(elem *argument) { Queue::setLast(argument); }