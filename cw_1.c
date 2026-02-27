#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
//1.2.1
//printf("Hello world!\n");

//1.2.2
//printf("Bardzo \ndlugi \nnapis\n");

//1.2.3
//printf("Napis zawierajacy rozne dziwne znaczki // \\ \\ $ & %%");

//1.2.4
//int l;
//printf("Podaj liczbe calkowita: ");
//scanf("%d", &l);
//printf("Ta liczba to: %d", l);

//1.2.5
//double l;
//printf("Podaj liczbe calkowita: ");
//scanf("%lf", &l);
//printf("Ta liczba to: %lf", l);

//1.2.6
//int l1, l2, l3;
//printf("Podaj 3 liczby calkowite oddzielone spacja: ");
//scanf("%d %d %d", &l1, &l2, &l3);
//printf("%d \n%d \n%d", l1, l2, l3);

//1.2.7
//int l;
//printf("Podaj liczbe calkowita: ");
//scanf("%d", &l);
//printf("Ta liczba to: %d", l+1);

//1.2.8
//int l1, l2, l3;
//printf("Podaj 3 liczby calkowite oddzielone spacja: ");
//scanf("%d %d %d", &l1, &l2, &l3);
//double s = (l1+l2+l3)/3.0;
//printf("\n%lf", s);

//1.2.9
//double x;
//printf("Podaj x: ");
//scanf("%lf", &x);
//printf("Wynik: %lf\n", sqrt(x));

//1.2.10
//double x;
//printf("Podaj liczbe wymierna: ");
//scanf("%lf", &x);
//double x2 = (x < 0) ? -x : x;
//printf("%lf", x2);

//1.2.11
//double x;
//printf("Podaj liczbe wymierna: ");
//scanf("%lf", &x);
//printf("%.2lf", x);

//1.2.12
//double x;
//printf("Podaj liczbe wymierna: ");
//scanf("%lf", &x);
//printf("%e", x);

//1.3.1
//int x;
//printf("Podaj liczbe calkowita: ");
//scanf("%d", &x);
//if (x<0)
//{
//    int x2 = -x;
//    printf("%d", x2);
//}
//else
//{
//    printf("%d", x);
//}

//1.3.2
//int a,b;
//printf("Podaj 2 liczby calkowite: ");
//scanf("%d" "%d", &a,&b);
//if (a<=b)
//{
//    printf("%d", b);
//}
//else
//{
//    printf("%d", a);
//}

//1.3.3
//int a,b,c;
//printf("Podaj 3 liczby calkowite: ");
//scanf("%d" "%d" "%d", &a,&b,&c);
//if (a<=b && c<=b)
//{
//    printf("%d", b);
//}
//else if (b<=c && a<=c)
//{
//    printf("%d", c);
//}
//else
//{
//    printf("%d", a);
//}

//Dodatkowe Ax+B=0
//double a,b;
//printf("Podaj 2 liczby wymierne A i B: ");
//scanf("%lf" "%lf", &a,&b);
//if (b==0 && a==0)
//{
//    printf("0 = 0\n");
//}
//else if (b==0)
//{
//    printf("Sprzecznosc\n");
//}
//else if (a==0)
//{
//    printf("Nieskonczenie wiele rozwiazan\n");
//}
//else
//{
//    double x = (-b)/a;
//    printf("Wartosc x to: %lf\n", x);
//}


//1.3.4
//int a,b;
//printf("Podaj 2 liczby calkowite: ");
//scanf("%d" "%d", &a,&b);
//if (a<0)
//{
//    a = -a;
//}
//if (b<0)
//{
//    b = -b;
//}
//if (a<b)
//{
//    printf("%d", b);
//}
//else
//{
//    printf("%d", a);
//}

//1.3.5
//int wybor;
//double a, b, c, h, p, pole;
//
//    printf("Wybierz metode obliczania pola trojkata:\n");
//    printf("1. Podstawa i wysokosc\n");
//    printf("2. Trzy boki (wzor Herona)\n");
//    printf("Twoj wybor: ");
//    scanf("%d", &wybor);
//
//    if (wybor == 1)
//    {
//        printf("Podaj dlugosc podstawy: ");
//        scanf("%lf", &a);
//        printf("Podaj wysokosc: ");
//        scanf("%lf", &h);
//
//        if (a > 0 && h > 0)
//        {
//            pole = 0.5 * a * h;
//            printf("Pole trojkata wynosi: %.2f\n", pole);
//        } else
//        {
//            printf("Bledne dane! Wartosci musza byc dodatnie.\n");
//        }
//
//    } else if (wybor == 2) {
//        printf("Podaj dlugosci trzech bokow (a b c): ");
//        scanf("%lf %lf %lf", &a, &b, &c);
//
//
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            p = (a + b + c) / 2.0;
//            pole = sqrt(p * (p - a) * (p - b) * (p - c));
//            printf("Pole trojkata (wzor Herona) wynosi: %.2f\n", pole);
//        } else
//        {
//            printf("Z podanych bokow nie mozna zbudowac trojkata!\n");
//        }
//
//    } else
//    {
//        printf("Nieprawidlowy wybor.\n");
//    }

//1.3.6
//    double a1, b1, c1;
//    double a2, b2, c2;
//
//    printf("Podaj wspolczynniki a1, b1, c1:\n");
//    scanf("%lf %lf %lf", &a1, &b1, &c1);
//
//    printf("Podaj wspolczynniki a2, b2, c2:\n");
//    scanf("%lf %lf %lf", &a2, &b2, &c2);
//
//
//    double D = a1 * b2 - a2 * b1;
//    double Dx = c1 * b2 - c2 * b1;
//    double Dy = a1 * c2 - a2 * c1;
//
//    if (D != 0)
//    {
//        double x = Dx / D;
//        double y = Dy / D;
//        printf("Uklad ma jedno rozwiazanie:\n");
//        printf("x = %.2lf\n", x);
//        printf("y = %.2lf\n", y);
//    } else
//    {
//        if (Dx == 0 && Dy == 0)
//        {
//            printf("Uklad ma nieskonczenie wiele rozwiazan.\n");
//        } else
//        {
//            printf("Uklad nie ma rozwiazan.\n");
//        }
//    }

//1.3.7
//int a,b,c;
//printf("Podaj 3 liczby calkowite: ");
//scanf("%d" "%d" "%d", &a,&b,&c);

//Zadanie domowe ax2+bx+c=0

//1.3.8


//1.3.9


//1.4.1


//1.4.2


//1.4.3


//1.4.4


//1.4.5


//1.4.6


//1.4.7


//1.4.8


//1.4.9


//1.4.10


//1.4.11


//1.4.12


//1.4.13


//1.4.14



    return 0;
}
