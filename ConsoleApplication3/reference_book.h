#pragma once
#include <iostream>
#include <string>
#include <exception>

using namespace std;

class reference_book
{
private:
	string name_of_company;
	string owner;
	long long telephone_number;
	string adress;
	string hobby;
public:
	reference_book();

	void SearchByName(string name_of_company);
	void SearchByOwner(string owner);
	void SearchByTelephoneNumber(long long telephone_number);
	void SearchByHobby(string hobby);
	void ShowReferenceBook();
	reference_book Add(string name_of_company, string owner, long telephone_number, string adress, string hobby);

	virtual ~reference_book();
};