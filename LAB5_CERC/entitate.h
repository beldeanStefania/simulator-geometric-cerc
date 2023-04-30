#pragma once
#include<iostream>
using namespace std;
class Entitate
{
private:
	int raza;///daca x-raza>=0 and y-raza>=0 ->cadran 1
	int x;
	int y;
public:
	Entitate();
	Entitate(int, int, int);
	Entitate(const Entitate& r);
	~Entitate();
	int getRaza();
	void setRaza(int);
	int getX();
	int getY();
	void setX(int);
	void setY(int);
	Entitate& operator=(const Entitate& entitate);
	//bool operator==(const Entitate&);
	friend ostream& operator<<(ostream &os, const Entitate& entitate);
};
