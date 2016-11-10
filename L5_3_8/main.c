#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gen_numar (char nr_roman[20])
{
    int nr_arab = 0;
    nr_roman = strupr(nr_roman);

    for(int i = strlen(nr_roman)-1; i >= 0; i--)
        switch (nr_roman[i])
        {
        case 'I' :
            nr_arab += 1;
            break;
        case 'X' :
            if (nr_roman[i-1] == 'I')
            {
                nr_arab += 9;
                i--;
            }
            else
                nr_arab += 10;
            break;
        case 'C' :
            if (nr_roman[i-1] == 'X')
            {
                nr_arab += 90;
                i--;
            }
            else
                nr_arab += 100;
            break;
        case 'V' :
            if (nr_roman[i-1] == 'I')
            {
                nr_arab += 4;
                i--;
            }
            else
                nr_arab += 5;
            break;
        case 'L' :
            if (nr_roman[i-1] == 'X')
            {
                nr_arab += 40;
                i--;
            }
            else
                nr_arab += 50;
            break;
        case 'D' :
            if (nr_roman[i-1] == 'C')
            {
                nr_arab += 400;
                i--;
            }
            else
                nr_arab += 500;
            break;
        case 'M' :
            nr_arab += 1000;
            break;
        }
    return nr_arab;
}

int main()
{
    char nr[20];
    printf("Intoduceti un numar roman: ");
    scanf("%s", nr);
    printf("\n");
    printf("Numarul arab corespunzator este: %d\n", gen_numar(nr));
    return 0;
}
