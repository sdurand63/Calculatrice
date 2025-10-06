#include <stdio.h>
#include <stdlib.h>
#include "operations.c"

int main()
{
    int a, b ;
    char operation ;
    printf("Quelle operation voulez-vous effectuer : + , - , * , / , 'r' pour racine, 'e' pour exponentielle ? \n ") ;
    scanf ("%c", &operation);
    printf("Veuillez saisir deux entiers \n");
    scanf("%d", &a);
    scanf("%d", &b);

    switch (operation)
    {
        case '+' :
            addition(&a,b);
            printf("%d", a);
            break;
        case '-' :
            soustraction(&a,b);
            printf("%d", a);
            break;
        case '*' :
            multiplication(&a,b);
            printf("%d", a);
            break;
        case '/' :
            division (&a,&b);
            printf("quotient = %d \n", b);
            printf("reste = %d", a);
            break;
        case 'r' :
            racine(&a);
            printf("%d",a);
            break;
        case 'e' :
            ex(&a);
            printf("%d",a);
            break;
        default:
            printf("error\n");
            break;
    }


    return 0;
}
