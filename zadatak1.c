#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdbool.h>

//Napisati program kojim unosimo tekst do pojavljivanja znaka '$'. Prikazati broj
//pojavljivanja slova 'A', 'E', 'I', 'O', 'U' i izraziti tu vrednost procentualno u odnosu na
//sve unete znake.

int main() {

    int size = 0;
    char arr[size];
    char samoglasnici[5] = {'a','e','i','o','u'};
    int samoglasniciCount = 0;
    int samoglasniciPercentage;

    while(true) {
        char temp;
        printf("Unesite karakter: ");
        scanf("%s", &temp);

        if (temp == '$') break;

        arr[size] = temp;
        size++;
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (arr[i] == samoglasnici[j]){
                samoglasniciCount++;
            }
        }
    }

    printf("Duzina niza: %d \n", size);
    printf("Broj samoglasnika: %d \n", samoglasniciCount);

    samoglasniciPercentage = samoglasniciCount * 100 / size;

    printf("Procenat samoglasnika je: %d", samoglasniciPercentage);


    return 0;
}
