#include <iostream>
#include <stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{  
int num;
printf("Enter a real number: ");
 scanf("%d", &num);

    if (3 <= num < 8.5) // first checking the condition.
        {
            printf("A,");
            if (num < 3 || 5.4 < (num <= 7.3) || num >13)
            {
                printf("B,");
                if (num != 3 && num < 9.75)
                {
                    printf("C");
                }
                else
                {
                    printf("Not C");
                }
            }
            else if (num != 3 && num < 9.75)
            {
               printf("Not B, C");
            }
            else
            {
                printf("Not B, Not C");
            }
        }
    else if (num < 3 || 5.4 < (num <= 7.3) || num > 13) //when the first checking is false it will proceed in this condition to check.
       {
            printf("Not A,B,");
            if (num != 3 && num < 9.75)
            {
                printf("C");
            }
            else
            {
                printf("Not C");
            }
       }
    else if (num != 3 && num < 9.75)//If the first and second are false the program will go in this line.
        {
             printf("Not A,Not B,C");// if the third condition is true this will be printed.
        }
    else
        {
            printf("Not A,Not B,Not C");// if all condition are false this will be print.
        }
}   