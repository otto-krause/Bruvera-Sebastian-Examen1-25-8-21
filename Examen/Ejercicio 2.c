#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a=0, b=0, c=0, d=0;
    printf("Inserte el numero correspondiente al resultado deseado:\n");
    printf("1. Division\n");
    printf("2. Resto\n");
    printf("3. Multiplicacion\n");
    scanf("%d", a);
    switch(a)
    {
        case 1:

            break;
        case 2:

            break;
        case 3:
        {
            printf("Inserte los numeros a multiplicar:\n");
            scanf("%d", &b);
            scanf("%d", &c);
            for(int i=1; i<=c; i++)
            {
                d=d+b;
            }
            printf("El producto es %d", b);
            break;
        }
        default:
            printf("Error");
            break;
    }
    return 0;
}
