#include <iostream>
#include "zadatak1/BachelorStudent.h"
#include "zadatak1/Student.h"
#include "zadatak2/atms/IntesaATM.h"
#include "zadatak2/User.h"
#include "zadatak2/atms/ErsteATM.h"
#include <string>


using namespace std;

int main() {

//    Zadatak 1;
//    BachelorStudent s1("djole", "stefanovic", 3992, "softversko inzinjerstvo");
//    s1.info();


//    Zadatak2;
    IntesaATM atm1(1000);
    ErsteATM atm2(2000);

    User user(3992, 0);

//    Uspesno skidanje sa racuna i uspesna uplata na racun kod usera sa skinutim procentom fee-ja
    user.podigniSaBankomata(atm1, 500);

//    Uspesno ispisivanje greske i ne smanjenje stanja sa bankomata
    user.podigniSaBankomata(atm2, 2200);


    cout << user.getRacun() << endl;
    cout << atm1.getStanje() << endl;
    cout << atm2.getStanje() << endl;


    return 0;
}
