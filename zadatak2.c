#include <stdio.h>
#include <stdbool.h>

// a) Napisati funkciju kojom se elementi niza pomeraju za jednu poziciju ulevo.
// Na primer: ako je dat niz 1 2 3 4 5, posle pomeranja za jednu poziciju ulevo niz je 2 3 4 5 1
// Koristiti pokazivač kao argument funkcije, a ne niz

// b) Koristeći prethodnu funkciju, napisati program kojim se učitava dimenzija niza (n<50) i
// elementi niza, a zatim i ceo broj k (k>0) i ispisuje se niz dobijen pomeranjem elemenata
// za k pozicija ulevo.
// Na primer: ako korisnik unese n=5, niz 3 4 5 6 7 i k=3 rezultat je 6 7 3 4 5

const int size = 4;

void  pomeriLevoZaJedan(int *niz) {
    int first = niz[0];
    for (int i = 1; i < 4; ++i) {
        niz[i - 1] = niz[i];
    }
    niz[size - 1] = first;
}

void pomeriLevoZaN(int *niz, int n) {
    while(n) {
        int temp = niz[0];
        for (int i = 0; i <size - 1; ++i) {
            niz[i] = niz[i + 1];
        }
        niz[size - 1] = temp;
        n--;
    }

}

void printArray(int *niz) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", niz[i]);
    }
    printf("\n");
}

int main() {

    // Zadatak A)
    int niz[size] = {1,2,3,4};
    printf("Niz pre metode: ");
    printArray(niz);
    pomeriLevoZaJedan(niz);
    printf("Niz posle metode: ");
    printArray(niz);

    // Zadatak B)
    int arr[size] = {1,2,3,4};
    int n;
    printf("Unesite broj pomeraja na levo: ");
    scanf("%d", &n);
    printf("Niz pre metode: ");
    printArray(arr);
    pomeriLevoZaN(arr, n);
    printf("Niz posle metode: ");
    printArray(arr);

    return 0;
}