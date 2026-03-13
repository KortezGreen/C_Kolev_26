#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bez(int a)
{
    if (a<0)
    {
        a=a*(-1);
    }
    printf("Wynik to: %d\n",a);
}

void silnia(int a)
{
    int b=a-1;
    while (b>0)
    {
        a=a*b;
        b=b-1;
    }
    printf("Wynik to: %d\n",a);
}

void pom(int n)
{
    int k=n-1;
    while (k>0)
    {
        if (n%k==0)
        {
        printf("Wynik to: %d\n",k);
        return;
        }
        else
        {
        k=k-1;
        }
    }
}

void potega(int n)
{
    int a =n;
    int w =2;
    if (a==1)
    {
    printf("Wynik to: 2");
    }
    else
    {
    n=n-1;
    while(n>0)
    {
        w = w*2;
        n=n-1;
    }
    printf("Wynik to: %d\n",w);
    }
}

void potega2(int n)
{
    int a =n;
    int w =2;
    if (a==1)
    {
    printf("Wynik to: 2");
    }
    else if (a==0)
    {
    printf("Wynik to: 0");
    }
    else if (a==-1)
    {
    printf("Wynik to: -2");
    }
    else
    {
    if (a>0)
    {
        n=n-1;
    while(n>0)
    {
        w = w*2;
        n=n-1;
    }
    printf("Wynik to: %d\n",w);
    }
    else
    {
    n=n*(-1);
    n=n-1;
    while(n>0)
    {
        w = w*2;
        n=n-1;
    }
    printf("Wynik to: %d\n",w);
    }
    }
}

int main()
{
//2.2.1
//int n;
//printf("Podaj liczbe calkowita: ");
//scanf("%d", &n);
//bez(n);

//2.2.2
//int n;
//printf("Podaj liczbe calkowita: ");
//scanf("%d", &n);
//silnia(n);

//2.2.3
//int n;
//printf("Podaj liczbe calkowita n>2: ");
//scanf("%d", &n);
//pom(n);

//2.2.4
//int n;
//printf("Podaj liczbe calkowita: ");
//scanf("%d", &n);
//potega(n);

//2.2.5
int n;
printf("Podaj liczbe calkowita: ");
scanf("%d", &n);
potega2(n);

//2.2.6


//2.2.7
//2.2.8
//2.2.9
//2.2.10
//2.2.11
//2.2.12
//2.2.13
//2.2.14
//2.2.15
//2.2.16
//2.2.17
//2.2.18
//2.2.19
//2.2.20
//2.2.21
//2.2.22
//2.2.23
//2.2.24
//2.2.25


    return 0;
}
