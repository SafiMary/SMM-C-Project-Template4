#include <iostream>
#include "Struct.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;




int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 3;
	book* mass = new book[n];
	book a = { "dog","Tor","Artimov", 1980, 350, 35 };
	book b = { "frog","Tom", "Germanovich", 2000, 340, 34 };
	book c = { "like", "Red", "jonson", 2003, 200, 36 };
	/*for (int i = 0; i < n; i++) {
		cout << "������� �������� �����: " << '\n';
		cin >> mass[i].title;
		cout << "������� ��� ������: " << '\n';
		cin >> mass[i].surname_name.name;
		cin.ignore();
		cout << "������� ������� ������: " << '\n';
		cin >> mass[i].surname_name.surname;
		cout << "������� ��� �������: " << '\n';
		cin >> mass[i].year;
		cout << "������� ���-�� �������: " << '\n';
		cin >> mass[i].num_pages;
		cout << "������� ���� �� ���������: " << '\n';
		cin >> mass[i].price;
	}*/
	show_book(a);
	save_book(a,path);


	return 0;
}
