#include <stdio.h>
#include <stdlib.h>

float add(float num1, float num2)
{
    return num1 + num2;
}

float subtract(float num1, float num2)
{
    return num1 - num2;
}

float multiply(float num1, float num2)
{
    return num1 * num2;
}

float divide(float num1, float num2)
{
    return num1 / num2;
}

int main()
{
    float num1;
    float num2;
    int operation;
    float answer;

    system("clear");
    printf("\n*********** CALCULATOR ***********\n");
    printf("\nChoose your operation by picking the number:\n\n");
    printf("1. Addition     3. Multiplication\n");
    printf("2. Subtraction     4. Division\n");

    return 0;
}