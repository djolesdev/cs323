#include <iostream>
#include "zadatak1/Kvadar.h"
#include "zadatak1/Krug.h"
#include "zadatak2/Student.h"
using namespace std;

int main() {

    // ZADATAK 1
    Krug k1(4);

    cout << k1.getRadius() << endl;

    cout<< k1.racunajPovrsinu()<< endl;
    cout<< k1.racunajObim()<< endl;

    k1.setRadius(10);

    cout << k1.getRadius() << endl;


    Kvadar k2(2,3);

    cout << k2.getSirina() << endl;
    cout << k2.getDuzina() << endl;

    cout<< k2.racunajPovrsinu()<< endl;

    cout<< k2.racunajObim()<< endl;

    k2.setSirina(20);
    k2.setDuzina(30);

    cout << k2.getSirina() << endl;
    cout << k2.getDuzina() << endl;


    // Zadatak 2
    Student s1("djordje","stefanovic","SI",7.3);

    cout << s1.getIme() << endl;
    cout << s1.getPrezime() << endl;
    cout << s1.getProsek() << endl;
    cout << s1.getSmer() << endl;

    return 0;
}
