#include "teste.h"
#include"repository.h"
#include"service.h"
#include<assert.h>
#include"entitate.h"

void testEntitate()
{
	Entitate entitate(2, 3, 4);
	assert(entitate.getRaza() == 2);
	assert(entitate.getX() == 3);
	assert(entitate.getY() == 4);
	entitate.setRaza(5);
	assert(entitate.getRaza() == 5);
}

void testRepo()
{
	Entitate entitate1(2, 3, 4);
	Entitate entitate2(5, 3, 6);
	Entitate entitate3(2, 5, 7);
	Repository repo;
	repo.add(entitate1);
	repo.add(entitate2);
	repo.add(entitate3);
	assert(repo.size()==3);
}

void testServ()
{
	Service serv;
	serv.addEntitate(2, 3, 4);
	serv.addEntitate(5, 3, 6);
	serv.addEntitate(2, 5, 7);
	assert(serv.size() == 3);
	assert(serv.determinareCeaMaiMareEntitate() == 1);
}

void testAll()
{
	testEntitate();
	testRepo();
	testServ();
}
