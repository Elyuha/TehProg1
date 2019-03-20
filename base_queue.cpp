#include "base_queue.h"
#include <iostream>

using namespace std;

Queue::Queue() {
	first = NULL;
	last = NULL;
	sum = 0;
}

Queue::~Queue() {
	elem *temp;
	for (int i = 0; i < sum; i++) {
		temp = last->prev;
		delete last;
		last = temp;
	}
}

void Queue::_add(int val) {
	elem *temp = new elem;
	temp->prev = last;
	temp->value = val;
	if (sum == 0) {
		first = temp;
	}
	last = temp;
	sum++;
}

void Queue::_delete() {
	elem *temp = last;
	if (temp != first) {
		while (temp->prev != first) {
			temp = temp->prev;
		}
		delete first;
		first = temp;
	}
	else 
		delete first;
	sum--;
}

void Queue::_pin() {
	elem *temp = last;
	int *tmp = new int[sum];
	int i = sum - 1;
	tmp[i] = temp->value;
	i--;
	while (temp != first) {
		temp = temp->prev;
		tmp[i] = temp->value;
		i--;
	}
	for (i = 0; i < sum; i++)
		cout << tmp[i] << " ";
}

void Queue::_copy(Queue &cop) {
	elem *temp = last;
	int *tmp = new int[sum];
	int i = cop.sum;
	while (i > 0) {
		cop._delete();
		i--;
	}
	i = sum - 1;
	while (temp != first) {
		tmp[i] = temp->value;
		temp = temp->prev;
		i--;
	}
	tmp[i] = temp->value;
	for (i = 0; i < sum; i++) {
		cop._add(tmp[i]);
	}
}

void Queue::setLast(elem *argument) { last = argument; }
void Queue::setSum(int argument) { sum = argument; }
elem *Queue::getLast() { return last; }
int Queue::getSum() { return sum; }