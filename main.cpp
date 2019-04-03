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
		cout << "1) �������� ������� � �������" << endl << "2) ������� ������� �� �������" << endl;
		cout << "3) ������� ������� �� �����" << endl << "4) ������� ����� �������� ���������" << endl;
		cout << "5) �������� ����� �������" << endl << "6) ������� ��������" << endl;
		cout << "7) ����� �� ���������" << endl;
		cout << "������� ����� ��������: ";
		cin >> choise;
		switch (choise){
		case 1: {
			int val;
			cout << "������� �������� �������� �������: ";
			cin >> val;
			qu._add(val);
			break;
		}
		case 2: {
			if (qu.getSum() == 0) {
				cout << "������� ������. ������� �����." << endl;
				system("pause");
			}
			else
				qu._delete();
			break;
		}
		case 3: {
			if (qu.getSum() == 0) 
				cout << "�������� ������. ������� �����." << endl;
			else
				qu._pin();
			system("pause");
			break;
		}
		case 4: {
			if (qu.getSum() == 0) {
				cout << "������� ������. ������� �����." << endl;
				system("pause");
			}
			else {
				cout << "�������� ����������� ������������" << endl;
				cout << "1) Private" << endl;
				cout << "2) Protected" << endl;
				cout << "3) Public" << endl;
				cout << "��� �����: ";
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
				cout << "���������� ������. ������� �����." << endl;
			else {
				cop._copy(qu);
				cop._pin();
			}
			system("pause");
			break;
		}
		case 6: {
			if (qu.getSum() == 0 && cop.getSum() == 0) 
				cout << "��������� ������. ������� �����." << endl;
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
			cout << "������� ���������� ����� ��������" << endl;
			system("pause");
		}
		}
	}
	while (ex != 'b');
}