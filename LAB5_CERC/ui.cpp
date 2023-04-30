#include"service.h"
#include<iostream>
#include "ui.h"
using namespace std;

void afisareMeniu()
{
    cout << "Alegeti optiunea:" << endl;
    cout << "1. Introduceti informatii despre mai multe entitati" << endl;
    cout << "2. Determinarea celei mai mari entitati" << endl;
    cout << "3. Afisare entitati care se afla in cadranul 1" << endl;
    cout << "4. Afiseza cea mai lunga secventa de enitati de lungimi egale" << endl;
    cout << "5. Afisare informatii despre entitati" << endl;
    cout << "0. Iesire din program" << endl;
}

void afisareInformatii(Repository* entitati, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Entitatea cu nr. " << i + 1 << " are: raza = " << entitati->getAtr(i).getRaza() << ", x = " << entitati->getAtr(i).getX() << ", y = " << entitati->getAtr(i).getY() << endl;
    }
}



void UI::Meniu()
{
    int k = 0, st = 0, dr = 0, lmax = 0;
    int val = 1;
    while (val)
    {
        afisareMeniu();
        cin >> val;
        switch (val)
        {
        case 1:
            addEnt();
            break;
        case 2: {
            int max = this->service.determinareCeaMaiMareEntitate();
            cout << "Cea mai mare entitate este cea cu numarul: "<<max+1 << endl;
            break; }
        case 3: {
            Repository* repo1 = nullptr;
            this->service.identificareEntitateCadran1(repo1, k);
            afisareInformatii(repo1, k);
            break; }
        case 4: {
            this->service.identificareSecvEntitatiEgale(st, dr, lmax);
            service.printSecv(st, dr);
            break; }
        case 5:
            service.printAll();
            break;
        case 0:
            val = 0;
            break;
        default:
            cout << "Optiune invalida. Va rugam selectati o optiune valida." << endl;
            break;
        }
    }
}

void UI::addEnt()
{
    //Entitate entitate;
    int raza, x, y;
    cout << "Scrieti valoarea razei: " << endl;
    cin >> raza;
    cout << "Scrieti valoarea pentru x: " << endl;
    cin >> x;
    cout << "Scrieti valoarea pentru y: " << endl;
    cin >> y;
    this->service.addEntitate(raza, x, y);
}

void UI::printAll()
{
    service.printAll();
}

void UI::printSecv(int st, int dr)
{
    this->service.printSecv(st, dr);
}

UI::UI()
{
}


UI::~UI()
{
}

/*ostream& operator<<(ostream& os, const UI& ui)
{
    // TODO: insert return statement here
}*/
