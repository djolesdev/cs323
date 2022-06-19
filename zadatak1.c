#include <stdio.h>
#include<stdbool.h>
int main() {
    int num1;
    int num2;
    int num3;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter another number: ");
    scanf("%d", &num2);
    printf("Enter another number: ");
    scanf("%d", &num3);

    bool sum1 = num1 + num2 == num3;
    bool sum2 = num1 + num3 == num2;
    bool sum3 = num2 + num3 == num1;

    if (sum1 || sum2 || sum3){
        printf("Moze");
    } else {
        printf("Ne moze");
    };

    return 0;
}
