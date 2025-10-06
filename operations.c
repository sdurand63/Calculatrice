#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "operations.h"

void addition(int* a, int b)
{
    *a += b;
}

void soustraction(int* a, int b)
{
    *a -= b;
}

void multiplication(int* a, int b)
{
    *a *= b;
}

void division(int* a, int* b)
{
    if (b != 0)
    {
        int q = *a / *b;
        *b = q;
        int r = *a % *b;
        *a = r;
    }
    else
    {
        return ("error");
    }
}

void ex(int* a)
{
    *a = exp(*a);
}

void racine(int *a)
{
    *a = sqrt(*a);
}
