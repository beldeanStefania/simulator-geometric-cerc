#include "entitate.h"
#include<iostream>
using namespace std;

Entitate::Entitate()
{
	this->raza = 0;
	this->x = 0;
	this->y = 0;
}

Entitate::Entitate(int raza_param, int xp, int yp)//constructor general
{
	this->raza = raza_param;
	this->x = xp;
	this->y = yp;
	/*if (raza_param > 0) {
		this->raza = raza_param;
		this->x = xp;
		this->y = yp;
	}
	else cout << "Valoarea razei este gresita!";*/
}

Entitate::Entitate(const Entitate& r)//constructor de copiere
{
	if (r.raza > 0) {
		this->raza = r.raza;
		this->x = x;
		this->y = y;
	}
	//else cout << "Valoarea razei este gresita!";
	//cout << "s-a copiat";
}

Entitate::~Entitate()
{
}

int Entitate::getRaza()
{
	return this->raza;
}

void Entitate::setRaza(int raza_param)
{
	this->raza = raza_param;
	//cout << "s-a setat";
}

int Entitate::getX()
{
	return this->x;
}

int Entitate::getY()
{
	return this->y;
}

void Entitate::setX(int x)
{
	this->x = x;
	//cout << "s-a setat";
}

void Entitate::setY(int y)
{
	this->y = y;
	//cout << "s-a setat";
}

Entitate& Entitate::operator=(const Entitate& cerc)//operator e atribuire
{
	// TODO: insert return statement here
	if (this != &cerc)
	{
		//if(this->raza)
		this->raza = cerc.raza;
		this->x = cerc.x;
		this->y = cerc.y;
	}
	//cout << "Self assignment";
	return *this;
	//cout << "s-a setat";
}

/*bool Entitate::operator==(const Entitate& cerc)
{
	
}*/

ostream& operator<<(ostream& os, const Entitate& entitate)
{
	// TODO: insert return statement here
	cout << "Raza= " << entitate.raza << " X=" << entitate.x << " Y=" << entitate.y<<endl;
	return os;
}
