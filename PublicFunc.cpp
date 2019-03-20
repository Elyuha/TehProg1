#include <iostream>
#include "PublicFunc.h"

void Q_Publ::function() {
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

void Q_Publ::setSum(int argument) { Queue::setSum(argument); }
void Q_Publ::setLast(elem *argument) { Queue::setLast(argument); }