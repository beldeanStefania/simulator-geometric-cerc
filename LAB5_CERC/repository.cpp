#include "repository.h"
#include<iostream>
using namespace std;

Repository::Repository()
{
	this->length = 0;
}

Entitate& Repository::getAtr(int ind)
{
	return elem[ind];
}

void Repository::add(Entitate& entitate)
{

	this->elem.push_back(entitate);
	length++;
	//cout << "s-a adaugat";
}

int Repository::size()
{
	return this->length;
}

/*Repository::~Repository()
{
}*/

ostream& operator<<(ostream& os, const Repository& entitie)
{
	for(int i = 0;i < entitie.length; i++)
		cout << entitie.elem[i] << " ";
	return os;
}
