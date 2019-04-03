#include <iostream>
#include "ProtectedFunc.h"

void Q_Prot::_copyprot(Queue &qu) { Queue::_copy(qu); }

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