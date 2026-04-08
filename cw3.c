#include <stdio.h>
#include <stdlib.h>

    void zeruj(int n,int *tab)
    {
    while(n--)
    {
    tab[n]=0;
    }
    }

    void indeks(int n,int *tab)
    {
    while(n--)
    {
    tab[n]=n;
    }
    }

    void podw(int n,int *tab)
    {
    while(n--)
    {
    tab[n]=tab[n]*2;
    }
    }

    void bezw(int n,int *tab)
    {
    while(n--)
    {
    if (tab[n]<0)
    {
    tab[n] = tab[n]*(-1);
    }
    }
    }

    double sred(int n,int *tab)
    {
    double wynik = 0;
    int dzielnik = n;
    while(n--)
    {
    wynik = wynik + tab[n];
    }
    wynik = wynik / dzielnik;
    printf("%lf\n",wynik);
    }


    double suma(int n,int *tab)
    {
    double wynik = 0;
    while(n--)
    {
    wynik = wynik + tab[n];
    }
    printf("%lf\n",wynik);
    }

    double sumak(int n,int *tab)
    {
    double wynik = 0;
    while(n--)
    {
    wynik = wynik + (tab[n]*tab[n]);
    }
    printf("%lf\n",wynik);
    }

    void aryt(int n,const int *tab)
    {
    double wynik = 0;
    int dzielnik = n;
    while(n--)
    {
    wynik = wynik + tab[n];
    }
    wynik = wynik / dzielnik;
    printf("%lf\n",wynik);
    }

    void geo(int n,unsigned int *tab)
    {
    double wynik = 1;
    double dzielnik = n;
    while(n--)
    {
    wynik = wynik * tab[n];
    }
    wynik = wynik / dzielnik;
    printf("%lf\n",wynik);
    }

int main()
{
    //zad 4.2.1 / 4.2.2
//    int n = 5;
//    int tab[5]={-2,2,-2,2,2};
    //zeruj(n,tab);
    //indeks(n,tab);
    //podw(n,tab);
    //bezw(n,tab);
    //sred(n,tab);
    //suma(n,tab);
    //sumak(n,tab);
//    for(int i = 0; i < n; i++)
//    {
//        printf("%d\", tab[i]);
//    }

    //zad 4.2.3
//    int n = 5;
//    const int tab[5] = {2,3,2,3,2};
    //aryt(n,tab);

    // zad 4.2.4
    int n = 5;
    unsigned int tab[5] = {2,3,2,3,2};
    geo(n,tab);
    return 0;
}
