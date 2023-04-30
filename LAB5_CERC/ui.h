#pragma once
#include"service.h"
class UI
{
private:
	Service service;
	void addEnt();
public:
	void printAll();
	void printSecv(int st, int dr);
	UI();
	UI(Service&);
	//void printAll();
	~UI();
	void Meniu();
	//friend ostream& operator<<(ostream& os, const UI& ui);
};
