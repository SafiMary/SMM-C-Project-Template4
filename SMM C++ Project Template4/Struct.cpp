#include "Struct.h"
#include <iostream>
#include <fstream>
//������� 

void show_book(book &P){
	std::cout << "�������� �����: " << P.title << '\n';
	std::cout << "��� ������: " << P.surname_name.name << '\n';
	std::cout << "������� ������: " << P.surname_name.surname << '\n' ;
	std::cout << "��� �������: " <<  P.year << '\n';
	std::cout << "���-�� �������: " << P.num_pages << '\n';
	std::cout << "���� �� ���������: " << P.price << '\n';

}
/*int author_name(book& P) {
	return P.surname_name.name;
}*/
template <typename T>
void  save_book(book& P, std::string path) {
	std::string path = "file.txt";
	std::ofstream out;
	out.open(path, std::ios::app);
	if (out.is_open()) {
		std::cout << "���� ������ ��� ������.\n";
		std::cout << "������� ���������� � �����:";
		out << P << '\n';
	}
	else
		std::cout << "������ �������� �����.\n";

	out.close();
}