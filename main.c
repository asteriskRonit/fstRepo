#include <stdio.h>
#include <stdlib.h>

void createSymbol(int range, char symbol)
{
    for (; range >= 1; range--)
    {
        printf("%c ", symbol);
    }
}

void main()
{
    printf("\n");
    for (int count = 1; count <= 6; count++)
    {
        printf("\e[97;1;196m");
        createSymbol(15, '*');
        printf("\e[93;5;196m");
        createSymbol(4, '*');
        printf("\n");
    }
    printf("\n");
}