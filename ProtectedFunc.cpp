#include <iostream>
#include "ProtectedFunc.h"


elem *Q_Prot::getLast(void) { return Queue::getLast(); }
int Q_Prot::getSum(void) { return Queue::getSum(); }

void Q_Prot::function() {
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

void Q_Prot::setSum(int argument) { Queue::setSum(argument); }
void Q_Prot::setLast(elem *argument) { Queue::setLast(argument); }