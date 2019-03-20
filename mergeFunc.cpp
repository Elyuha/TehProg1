#include <iostream>
#include "megeFunc.h"
#include "base_queue.h"

void merge(Queue &q1, Queue &q2, Queue &res) {
	int *mass_q1 = new int [q1.getSum()];
	int *mass_q2 = new int [q2.getSum()];
	elem *temp_q1 = q1.getLast();
	elem *temp_q2 = q2.getLast();
	int ind_q1 = res.getSum();
	int ind_q2 = q2.getSum() - 1;

	while (ind_q1 > 0) {
		res._delete();
		ind_q1--;
	}
	ind_q1 = q1.getSum() - 1;

	while (ind_q1 > 1) {
		mass_q1[ind_q1] = temp_q1->value;
		temp_q1 = temp_q1->prev;
		ind_q1--;
	}
	mass_q1[ind_q1] = temp_q1->value;

	while (ind_q2 > 1) {
		mass_q2[ind_q2--] = temp_q2->value;
		temp_q2 = temp_q2->prev;
	}
	mass_q2[ind_q2--] = temp_q2->value;

	for (int i = 0; i < q1.getSum(); i++) {
		res._add(mass_q1[i]);
	}

	for (int i = 0; i < q2.getSum(); i++) {
		res._add(mass_q2[i]);
	}
	res._pin();
}