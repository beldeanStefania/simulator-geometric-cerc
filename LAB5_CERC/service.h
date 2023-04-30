#pragma once
#include"entitate.h"
#include"repository.h"
class Service
{
private:
	Repository repository;
public:
	Service();
	Service(Repository&);
	void addEntitate(int, int, int);
	int determinareCeaMaiMareEntitate();
	int identificareEntitateCadran1(Repository*& entitatec1, int& k);
	int identificareSecvEntitatiEgale(int& st, int& dr, int& lmax);
	int size();
	void printAll();
	void printSecv(int st, int dr);
	~Service();
};
