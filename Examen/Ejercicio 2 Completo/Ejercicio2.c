#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0, b, c=0, d=0, i;
    printf("Seleccione la operacion deseada:\n");
    printf("1. Division\n");
    printf("2. Resto\n");
    printf("3. Multiplicacion\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        puts("Inserte el dividendo y el divisor:\n");
        scanf("%d %d", &b, &c);
        if (b>=c)
        {
            for (i = 0; b>0; i++)
            {
                b=b-c;
            }
            printf("El resultado es %d", i);
        }
        else
        {
            printf("No se puede realizar la division\n");
        }
        break;
    case 2:
        puts("Inserte el dividendo y el divisor:\n");
        scanf("%d %d", &b, &c);
        d=c;
        if (b>=c)
        {
            for (i=1; b>=0; i++)
            {
                b=b-c;
                if (b<0)
                {
                    b=b+d;
                    break;
                }
            }
            printf("El resto de la division es %d", b);
        }
        else
        {
            printf("No se puede realizar la division\n");
        }
        break;
    case 3:
        puts("Inserte los numeros a multiplicar:\n");
        scanf("%d %d", &b, &c);
        if (b<0 || c<0)
        {
            printf("Los numeros negativos no son validos\n");
        }
        else
        {
            for (i=1; i<=c; i++)
            {
                d=d+b;
            }
            printf("El producto es %d", d);
        }
        break;
    default:
        puts("Error\n");
        break;
    }
    return 0;
}