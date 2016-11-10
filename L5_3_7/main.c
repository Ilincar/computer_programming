#include <stdio.h>
#include <stdlib.h>

void calculare_zile(int an, int luna, int zi)
{
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int zile_an, nr_zi = 0, zile_ramase;
    if (((an%4 == 0) && (an%100 != 0)) || (an%400 == 0))
    {
        a[1] = 29;
        zile_an = 366;
    }

    else
        zile_an = 365;
    for (int i = 0; i < luna-1; i++ )
        nr_zi += a[i];
    nr_zi += zi;
    zile_ramase = zile_an - nr_zi;
    printf("\nData introdusa reprezinta ziua %d din an, iar pana la sfarsitul anului mai sunt %d zile ramase.", nr_zi, zile_ramase);
}

int main()
{
    int an, luna, zi;
    printf("Introduceti o data calendaristica de forma aaaa.ll.zz: ");
    scanf("%d.%d.%d", &an, &luna, &zi);
    calculare_zile(an, luna, zi);
    return 0;
}
