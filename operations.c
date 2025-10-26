#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "operations.h"

void addition(float* a, float b)
{
    *a += b;
}

void soustraction(float* a, float b)
{
    *a -= b;
}

void multiplication(float* a, float b)
{
    *a *= b;
}

void division(float* a, float* b)
{
    if (*b != 0)
    {
        *a /= *b;
    }
    else
    {
        printf("error");
    }
}

void exponential(float* a)
{
    *a = exp(*a);
}

void racine(float* a)
{
    *a = sqrt(*a);
}

void cosinus (float* a, char* angle)
{
    if (*angle == 'd')
    {
        *a = cosf(*a*3.14159265358979/180);
    }
    else if (*angle == 'r')
    {
        *a = cosf(*a);
    }
    else
    {
        printf("error");
    }
}

void sinus (float* a, char* angle)
{
    if (*angle == 'd')
    {
        *a = sinf(*a*3.14159265358979/180);
    }
    else if (*angle == 'r')
    {
        *a = sinf(*a);
    }
    else
    {
        printf("error");
    }
}

