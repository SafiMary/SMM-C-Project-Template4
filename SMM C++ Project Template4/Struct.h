#pragma once
//прототипы функций

#include <iostream>
#include <fstream>

struct author {
	std::string name;
	std::string surname;
};

struct book {
	std::string title;
	author surname_name;
	int year{};
	int num_pages{};
	int price{};
};

void show_book(book &P);
int author_name(book& P);
template <typename T>
void  save_book(book& P,std::string path);