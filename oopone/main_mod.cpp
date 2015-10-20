#include "MyVector.h"  
#include <iostream>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Russian");
	CMyVector *mas[10];
	int k1 = 0;
	int k = 0;
	int *a;
	int c = 0;
	int j = 0;
	while (k1 != 99) {
		cout << "1. ������� ���������" << endl;
		cout << "2. ������� ��������� ������������� �������" << endl;
		cout << "3. ������ �������� ��������� " << endl;
		cout << "4. �������� ������� " << endl;
		cout << "5. ������� ������� " << endl;
		cout << "6. ������� �������� � ������ " << endl;
		cout << "7. ������� �������� � ����� " << endl;
		cout << "8. ������� ���������� ��������� ��������� " << endl;
		cout << "9. ��������� � ���������� ������ ��������� " << endl;
		cout << "10. ��������� � ���������� ������ ��������� " << endl;
		cout << "11. C����� ��������, ���������� ������������� �������� " << endl;
		cout << "12. ������ ������ ��������" << endl;
		cout << "99. �����" << endl;
		cout << "��� �����: ";
		cin >> k1;
		switch (k1)
		{
		case 1:
			mas[c] = new CMyVector();
			c++;
			break;
		case 2:
			cout << "������� ������ ���������: ";
			cin >> k;
			mas[c] = new CMyVector(k);
			c++;
			break;
		case 3:
			cout << "������� ����� ���������: ";
			cin >> k;
			k1 = mas[k]->getSize();
			cout << "������� " << k1 << " �������� ���������: ";
			for (int i = 0; i < k1; i++) {
				cin >> j;
				mas[k]->setM_vector(j, i);
			}
			break;
		case 4:
			cout << "������� ����� ���������: ";
			cin >> k;
			mas[k]->setSize(1);
			cout << "������� ������� ���������: ";
			cin >> k1;
			mas[k]->setM_vector(k1, mas[k]->getSize() - 1);
			break;
		case 5:
			cout << "������� ����� ���������: ";
			cin >> k;
			cout << "������� ���������� ����� �������� ���������: ";
			cin >> k1;
			mas[k]->del(k1);
			break;
		case 6:
			cout << "������� ����� ���������: ";
			cin >> k;
			mas[k]->print();
			break;
		case 7:
			cout << "������� ����� ���������: ";
			cin >> k;
			mas[k]->printl();
			break;
		case 8:
			cout << "������� ����� ���������: ";
			cin >> k;
			cout << "���������� ��������� � ���������: " << mas[k]->getSize() << endl;
			break;
		case 9:            
			a = new int[c];
			k = mas[0]->sum();
			a[0] = k;
			for (int i = 1; i < c; i++) { 
				if (mas[i]->sum() > k)
					k = mas[i]->sum();
				a[i] = mas[i]->sum();
			}
			cout << "��������� � ���������� ������ ���������: ";
			for (int i = 0; i < c; i++) {
				if (a[i] == k) cout << i << " ";
			}
			cout << endl;
			delete[] a;
			break;
		case 10:
			a = new int[c];
			k = mas[0]->sum();
			a[0] = k;
			for (int i = 1; i < c; i++) {
				if (mas[i]->sum() < k)
					k = mas[i]->sum();
				a[i] = mas[i]->sum();
			}
			cout << "��������� � ���������� ������ ���������: ";
			for (int i = 0; i < c; i++) {
				if (a[i] == k) cout << i << " ";
			}
			cout << endl;
			delete[] a;
			break;
		case 11:
			cout << "C����� ��������, ���������� ������������� ��������: ";
			for (int i = 0; i < c; i++) {
				for (j = 0; j < mas[i]->getSize(); j++) {
					if (mas[i]->getM_vector(j) < 0) {
						cout << i << " ";
						break;
					}
				}
			}
			cout << endl;
			break;
		case 12:
			cout << "������ ������ ��������: ";
			for (int i = 0; i < c - 1; i++) {
				for (j = i + 1; j < c; j++) {
					if (mas[i]->getSize() == mas[j]->getSize()) {
						for (k = 0; k < mas[i]->getSize(); k++) {
							if (mas[i]->getM_vector(k) != mas[j]->getM_vector(k)) break;
						}
						if (k == mas[i]->getSize()) cout << i << " = " << j << "; ";
					}
				}
			}
			cout << endl;
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}