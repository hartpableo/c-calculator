#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

float num1, num2;

void getNums()
{
    printf("\n=== Enter numbers to calculate ===");
    printf("\nFirst number: ");
    scanf(" %f", &num1);
    getchar();

    printf("Second number: ");
    scanf(" %f", &num2);
    getchar();
}

int main()
{
    char input[5];
    int operation;
    float answer;

    system("clear");
    printf("\n*********** CALCULATOR ***********\n");

    do
    {
        printf("\nChoose your operation by picking the number:\n\n");
        printf("1. Addition     3. Multiplication\n");
        printf("2. Subtraction  4. Division\n");
        printf("5. Exit\n");

        // prompt user on what operation to use
        do
        {
            operation = 0;
            printf("\nOperation: ");
            fgets(input, 5, stdin);
            operation = atoi(input);
            if(operation > 5)
            {
                printf("Invalid value! Try again (choose only among values 1 - 4).\n");
            }
        } while (operation > 5);

        // handle numbers and chosen operation
        switch (operation)
        {
            case 1:
                getNums();
                answer = num1 + num2;
                break;
            
            case 2:
                getNums();
                answer = num1 - num2;
                break;

            case 3:
                getNums();
                answer = num1 * num2;
                break;

            case 4:
                getNums();
                answer = num1 / num2;
                break;

            case 5:
                answer = 0;
                break;
            
            default:
                printf("\nThere has been an issue with the calculation!\n");
                break;
        }

        sleep(1);

        if (answer != 0)
        {
            printf("\nThe answer is: %f\n", answer);
            operation = 0;
            sleep(2.5);
            printf("\n**************************************\n");
            printf("******* Another calculation *******\n");
            printf("**************************************\n\n");
            sleep(1.25);
        }
    } while (answer != 0);
    

    printf("\n=== Good bye! ===");
    
    return 0;
}