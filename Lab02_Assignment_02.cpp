#include <iostream>
#include <stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
 
    char input[0];
    //input number from the user
    printf("Enter a number from 1 to 9: ");
    scanf("%s", &input);

    int len = strlen(input);

    if (len > 1)
    {
        printf("Inputted value should be from 0 to 9!");
    }
    else if (isdigit(input[0]))
    {
        int check = input[0];

        switch (check)
            {
            case '0':
                printf ("Zero ");
                break;

            case '1':
            printf ("One ");
                break;

            case '2':
                printf ("Two ");
                break;

            case '3':
                printf ("Three ");
                break;

            case '4':
                printf ("Four ");
                break;

            case '5':
                printf ("Five ");
                break;

            case '6':
                printf ("Six ");
                break;

            case '7':
                printf ("Seven ");
                break;

            case '8':
                printf ("Eight ");
                break;

            case '9':
                printf ("Nine ");
                break;

            default:
                printf("Inputted value is not an integers!");
                break;
            }
                
    }
}