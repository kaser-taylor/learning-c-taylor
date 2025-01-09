/*
int (4 bytes)    | %d for printing
double (8 bytes) | %1f for printing
float (4 bytes)  | %f for printing
char (1 byte)    | %c for pringting
*/

#include <stdio.h>

int main() {

    int age  = 10;
    printf("Age = %d\n", age);

    double number = 12.45;
    printf("number = %1f\n", number);

    return 0;
}