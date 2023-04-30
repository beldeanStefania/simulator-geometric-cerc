#include"entitate.h"
#include "service.h"

Service::Service()
{
}

Service::Service(Repository& repo1)
{
	this->repository = repo1;
}

void Service::addEntitate(int raza_param, int x_param, int y_param)
{
	Entitate ent(raza_param, x_param, y_param);
	repository.add(ent);
	//cout << "s-a adaugat"<<endl;
}

int Service::determinareCeaMaiMareEntitate()
{
	int maxIndex = 0;
	for (int i = 1; i < this->repository.size(); i++)
	{
		if (repository.getAtr(i).getRaza() > repository.getAtr(maxIndex).getRaza()) maxIndex = i;
	}
	//cout << "S-a determinat cea mai mare entitate"<<endl;
	return maxIndex;
}

int Service::identificareEntitateCadran1(Repository*& entitatec1, int& k)
{
	entitatec1 = new Repository[repository.size()];
	k = 0;
	for (int i = 0; i < repository.size(); i++)
	{
		if (repository.getAtr(i).getX() - repository.getAtr(i).getRaza() >= 0 and repository.getAtr(i).getY() - repository.getAtr(i).getRaza() >= 0)
		{
			entitatec1->getAtr(k) = repository.getAtr(i);
			k++;
		}
	}
	return 0;
}

int Service::identificareSecvEntitatiEgale(int& st, int& dr, int& lmax)
{
	int l = 1;
	lmax = 0;
	for (int i = 1; i < repository.size(); i++)
		if (repository.getAtr(i).getRaza() == repository.getAtr(i + 1).getRaza() and repository.getAtr(i).getX() == repository.getAtr(i + 1).getX() and repository.getAtr(i).getY() == repository.getAtr(i + 1).getY())
			l++;
		else
		{
			if (l > lmax) lmax = l, l = 1, dr = i - 1;
			l = 1;
			dr = i - 1;
		}
	if (l > lmax) lmax = l, dr = repository.size();
	st = dr - lmax + 1;
	return 0;
}


int Service::size()
{
	return repository.size();
}

void Service::printAll()
{
	//cout << "se printeaza" << endl;
	cout << repository.size();
	for (int i = 0; i <repository.size(); i++)
		cout << repository.getAtr(i)<<endl;
}

void Service::printSecv(int st, int dr)
{
	for (int i = st ;i <= dr; i++)
		cout << repository.getAtr(i) << endl;
}

Service::~Service()
{
}
