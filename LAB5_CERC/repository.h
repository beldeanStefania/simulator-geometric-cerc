#pragma once
#include"entitate.h"
#include<iostream>
#include<vector>
using namespace std;


class Repository
{
private:
	vector <Entitate> elem;
	int length;
public:
	Repository();///constr de copiere
	Entitate& getAtr(int ind);
	void add(Entitate&);
	int size();
	friend ostream& operator<<(ostream &os,const Repository& entitie);
	//~Repository();
};