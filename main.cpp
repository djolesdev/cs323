#include <iostream>
using namespace std;

// U domacem je dato da se rade zadaci br indeksa % 15 i br indeksa mod 30;
// U mom slucaju (3992) oba su 3, tako da sam uradio samo 3. zadatak :)

int main() {
    char c;
    cout << "Enter char: ";

    cin.get(c);

    cout << "Uneti karakter: " << c << "  " << "Njegov ASCI kod: " << int(c) << endl;

    int i = 0;
    while (i < 3) {
        cout << "Sledeci karakter: " << char(int(c) + i + 1) << "  " << "Njegov ASCI kod: " << (int(c) + i + 1)<< endl;
        i++;
    }



    return 0;
}
