#include <iostream>
#include <locale>
#include "base_queue.h"
#include "privateFunc.h"
#include "ProtectedFunc.h"
#include "PublicFunc.h"
#include "megeFunc.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	Queue qu;
	Queue cop;
	Queue res;
	Q_Private q_1;
	Q_Prot q_2;
	Q_Publ q_3;
	char ex = 'a';
	int choise;
	do {
		system("CLS");
		cout << "1) Добавить элемент в очередь" << endl << "2) Удалить элемент из очереди" << endl;
		cout << "3) Вывести очередь на экран" << endl << "4) Подсчёт суммы нечётных элементов" << endl;
		cout << "5) Создание копии очереди" << endl << "6) Слияние очередей" << endl;
		cout << "7) Выход из программы" << endl;
		cout << "Введите номер операции: ";
		cin >> choise;
		switch (choise){
		case 1: {
			int val;
			cout << "Введите значение элемента очереди: ";
			cin >> val;
			qu._add(val);
			break;
		}
		case 2: {
			if (qu.getSum() == 0) {
				cout << "Удалять нечего. Очередь пуста." << endl;
				system("pause");
			}
			else
				qu._delete();
			break;
		}
		case 3: {
			if (qu.getSum() == 0) 
				cout << "Выводить нечего. Очередь пуста." << endl;
			else
				qu._pin();
			system("pause");
			break;
		}
		case 4: {
			if (qu.getSum() == 0) {
				cout << "Считать нечего. Очередь пуста." << endl;
				system("pause");
			}
			else {
				cout << "Выберете модификатор наследования" << endl;
				cout << "1) Private" << endl;
				cout << "2) Protected" << endl;
				cout << "3) Public" << endl;
				cout << "Ваш выбор: ";
				cin >> choise;
				switch (choise) {
				case 1: {
					q_1._copypriv(qu);
					q_1.function();
					break;
				}
				case 2: {
					q_2._copyprot(qu);
					q_2.function();
					break;
				}
				case 3: {
					q_3._copy(qu);
					q_3.function();
					break;
				}
				}
			}
			break;
		}
		case 5: {
			if (qu.getSum() == 0) 
				cout << "Копировать нечего. Очередь пуста." << endl;
			else {
				cop._copy(qu);
				cop._pin();
			}
			system("pause");
			break;
		}
		case 6: {
			if (qu.getSum() == 0 && cop.getSum() == 0) 
				cout << "Соединять нечего. Очереди пусты." << endl;
			else
				merge(qu, cop, res);
			system("pause");
			break;
		}
		case 7: {
			ex = 'b';
			break;
		}
		default: {
			cout << "Введите корректный номер операции" << endl;
			system("pause");
		}
		}
	}
	while (ex != 'b');
}