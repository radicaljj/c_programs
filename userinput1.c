#include <stdio.h>

int main()
{

    int age;

    double number;
    char alphabet;

    printf("Enter input values: ");
    scanf("%lf %c", &number, &alphabet);

   

    printf("Number: %lf", number);
    printf("\nCharacter: %c", alphabet);

    return 0;
}