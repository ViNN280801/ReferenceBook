#include "stdafx.h"
#include "reference_book.h"


reference_book::reference_book()
{
	telephone_number = NULL;
}

void reference_book::SearchByName(string name_of_company)
{
	if (this->name_of_company == name_of_company)
		cout << "We found this name of company: " << name_of_company << endl;
	else
		cout << "Sorry, we don't found this name of company, try later please. " << endl;
}

void reference_book::SearchByOwner(string owner)
{
	if (this->owner == owner)
		cout << "We found this name of owner: " << owner << endl;
	else
		cout << "Sorry, we don't found this name of owner, try later please. " << endl;
}

void reference_book::SearchByTelephoneNumber(long long telephone_number)
{
	if(this->telephone_number == telephone_number)
		cout << "We found owner with this telephone number:  " << telephone_number << endl;
	else
		cout << "Sorry, we don't found owner with this telephone number, try later please. " << endl;
}

void reference_book::SearchByHobby(string hobby)
{
	if (this->hobby == hobby)
		cout << "We found owner by his hobby: " << hobby << endl;
	else
		cout << "Sorry, we don't found owner by entered hobby, try later. " << endl;
}

void reference_book::ShowReferenceBook()
{
	cout << "========== Reference book ==========" << endl;
	cout << "Name of company: " << name_of_company << endl;
	cout << "Owner of this company: " << owner << endl;
	cout << "Telephone number: " << telephone_number << endl;
	cout << "Adress: " << adress << endl;
	cout << "Hobby: " << hobby << endl;
	cout << "===== ===== ===== ===== ===== ===== " << endl << endl;
}

reference_book reference_book::Add(string name_of_company, string owner, long telephone_number, string adress, string hobby)
{
	this->name_of_company = name_of_company;
	this->owner = owner;
	this->telephone_number = telephone_number;
	this->adress = adress;
	this->hobby = hobby;

	return *this;
}

reference_book::~reference_book()
{
}