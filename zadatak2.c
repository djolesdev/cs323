#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdbool.h>

//Napisati program koji računa sumu S = 1! + 2! + ... + n!, ako se koristi funkcija za
//faktorijel broja.

int fact(int n) {
    if (n <= 0) return 1;
    else {
        return n * fact(n - 1);
    }
}

int result (int num) {
    if (num == 0) return 0;
    else {
        return fact(num) + result(num - 1);
    }
}

int main() {

    printf("Enter number: ");
    int num;
    scanf("%d", &num);

//    Bez rekurzije
//    for (int i = 1; i <= num; ++i) {
//        sum += fact(i);
//    }

   int sum = result(num);

    printf("%d", sum);

    return 0;

}