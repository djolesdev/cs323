#include <stdio.h>

int main() {

    double celsius;
    double fahrenheit;

    printf("Enter celsius value: ");

    scanf("%lf",&celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("Fahrenheit value is: %lf", fahrenheit);

    return 0;
}