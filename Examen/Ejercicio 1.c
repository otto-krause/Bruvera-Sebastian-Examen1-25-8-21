#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0, t1=0, t2=1;
    int tsig=t1+t2;
    printf("Inserte la cantidad de terminos: ");
    scanf("%d", &a);
    printf("La serie Fibonacci es:\n%d\n%d\n", t1, t2);
    for(int i=3; i<=a+1; i++)
    {
        printf("%d\n", tsig);
        t1=t2;
        t2=tsig;
        tsig=t1+t2;
    }
    return 0;
}
