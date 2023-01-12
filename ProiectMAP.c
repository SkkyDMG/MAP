/*11. Se dă un număr natural N. Să se afișeze acest număr cu cifre romane (I, V, X, L, C, D, M).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numar;
    
    printf("\nIntroduceti numarul:");
    scanf("%d", &numar);

    printf("Numarul convertit in cifre romane: ");
    do
    {
        //printf("\nIntroduceti numarul:");
        //scanf("%d", &numar);

        //printf("Numarul convertit in cifre romane: ");

        if(numar >= 1000)
        {
            printf("M");
            numar -= 1000;
        }
        else if (numar >= 900)
        {
            printf("CM");
            numar -= 900;
        }
        else if (numar >= 500)
        {
            printf("D");
            numar -= 500;
        }
        else if (numar >= 400)
        {
            printf("CD");
            numar -= 400;
        }
        else if (numar >= 100)
        {
            printf("C");
            numar -= 100;
        }
        else if (numar >= 90)
        {
            printf("XC");
            numar -= 90;
        }
        else if (numar >= 50)
        {
            printf("L");
            numar -= 50;
        }
        else if (numar >= 40)
        {
            printf("XL");
            numar -= 40;
        }
        else if (numar >= 10)
        {
            printf("X");
            numar -= 10;
        }
        else if (numar >= 9)
        {
            printf("IX");
            numar -= 9;
        }
        else if (numar >= 8)
        {
            printf("VIII");
            numar -= 8;
        }
        else if (numar >= 7)
        {
            printf("VII");
            numar -= 7;
        }
        else if (numar >= 6)
        {
            printf("VI");
            numar -= 6;
        }
        else if (numar >= 5)
        {
            printf("V");
            numar -= 5;
        }
        else if (numar >= 4)
        {
            printf("IV");
            numar -= 4;
        }
        else if (numar >= 3)
        {
            printf("III");
            numar -= 3;
        }
        else if (numar >= 2)
        {
            printf("II");
            numar -= 2;
        }
        else if (numar >= 1)
        {
            printf("I");
            numar -= 1;
        }

        
        
    } while (numar != 0);
    


    return 0;
}