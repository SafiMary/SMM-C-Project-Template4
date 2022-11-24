#include "Struct.h"
#include <iostream>
#include <fstream>
//функции 

void show_book(book &P){
	std::cout << "Название книги: " << P.title << '\n';
	std::cout << "Имя автора: " << P.surname_name.name << '\n';
	std::cout << "Фамилия автора: " << P.surname_name.surname << '\n' ;
	std::cout << "Год издания: " <<  P.year << '\n';
	std::cout << "Кол-во страниц: " << P.num_pages << '\n';
	std::cout << "Цена за экземпляр: " << P.price << '\n';

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
		std::cout << "Файл открыт для записи.\n";
		std::cout << "Введите информацию о книге:";
		out << P << '\n';
	}
	else
		std::cout << "Ошибка открытия файла.\n";

	out.close();
}