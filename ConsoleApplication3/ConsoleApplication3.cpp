#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <clocale>
#include "reference_book.h"

using namespace std;

int main()
{
	srand(__time64_t(NULL));
	setlocale(LC_ALL, "rus");

	reference_book ref_book;
	ref_book.Add("YLC", "Grigory", 87017433210, "Georgia, Shakvitelli", "writing poems");
	ref_book.ShowReferenceBook();

	ref_book.SearchByName("YLC");
	ref_book.SearchByOwner("Grigory");
	ref_book.SearchByHobby("Building reproduction facilities");
	ref_book.SearchByTelephoneNumber(87017433210);

    return EXIT_SUCCESS;
}