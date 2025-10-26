#include <stdio.h>
#include <stdlib.h>
#include "operations.c"

int main()
{
    float a, b, res;
    char fin;
    char angle;
    char operation;
    while (fin != 'y')
    {
        printf("Quelle operation voulez-vous effectuer : + , - , * , / , 'r' pour racine, 'e' pour exponentielle, 'c' pour cosinus, 's' pour sinus ? \n ") ;
        scanf (" %c", &operation);
        if (operation == 'r' || operation == 'e' )
        {
            printf("Veuillez saisir un nombre \n");
            scanf(" %f", &a);
            if (a == 0)
            {
                a = res;
            }

        }
        else if (operation == 'c' || operation == 's')
        {
            printf("Saisissez si votre angle est en degre 'd' ou en radians 'r', puis saisissez un angle \n");
            scanf(" %c", &angle);
            scanf(" %f", &a);
            if (a == 0)
            {
                a = res;
            }
        }
        else
        {
            printf("Veuillez saisir deux nombres \n");
            scanf(" %f", &a);
            scanf(" %f", &b);
            if (a == 0)
            {
                a = res;
            }
        }

        switch (operation)
        {
            case '+' :
                addition(&a,b);
                printf("%f", a);
                break;
            case '-' :
                soustraction(&a,b);
                printf("%f", a);
                break;
            case '*' :
                multiplication(&a,b);
                printf("%f", a);
                break;
            case '/':
                division (&a,&b);
                printf("%f",a);
                break;
            case 'r' :
                racine(&a);
                printf("%f",a);
                break;
            case 'e' :
                exponential(&a);
                printf("%f",a);
                break;
            case 'c':
                cosinus(&a,&angle);
                printf("%f",a);
                break;
            case 's':
                sinus(&a,&angle);
                printf("%f",a);
                break;
            default:
                printf("error\n");
                break;
        }
        res = a;
        printf("\n Voulez vous arreter ? y/n \n");
        scanf(" %c",&fin);
    }

    return 0;

}
