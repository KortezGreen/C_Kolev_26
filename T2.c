#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//////////////////////////////////////////////////
// ZADANIE 1
//////////////////////////////////////////////////

double f1(double x)
{
    return x;
}

double f2(double x)
{
    return 1.0 / x;
}

double f3(double x)
{
    return x + 1;
}

int sprawdz(double (*a)(double), double (*b)(double), int n)
{
    int i;

    for(i = 1; i <= n; i++)
    {
        if(a(i) != 1.0 / b(i))
        {
            return -1;
        }
    }

    return 1;
}

//////////////////////////////////////////////////
// ZADANIE 2
//////////////////////////////////////////////////

void wczytaj(int A[10][10], int m, int n)
{
    int i, j;

    printf("Podaj elementy tablicy:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
}

int znajdzNajwiekszyUjemny(int A[10][10], int m, int n,
                           int *wiersz, int *kolumna)
{
    int i, j;
    int znaleziono = 0;
    int maxUjemny = -2147483648;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(A[i][j] < 0)
            {
                if(!znaleziono || A[i][j] > maxUjemny)
                {
                    maxUjemny = A[i][j];
                    *wiersz = i;
                    *kolumna = j;
                    znaleziono = 1;
                }
            }
        }
    }

    if(znaleziono)
    {
        return maxUjemny;
    }

    return 0;
}

//////////////////////////////////////////////////
// ZADANIE 3
//////////////////////////////////////////////////

struct student
{
    char imie[50];
    char nazwisko[50];
    char kierunek[50];
    int numerLegitymacji;
};

void wczytajStudenta(struct student *s)
{
    printf("Podaj imie: ");
    scanf("%s", s->imie);

    printf("Podaj nazwisko: ");
    scanf("%s", s->nazwisko);

    printf("Podaj kierunek: ");
    scanf("%s", s->kierunek);

    printf("Podaj numer legitymacji: ");
    scanf("%d", &s->numerLegitymacji);
}

void wypiszStudentow(struct student tab[], int n)
{
    int i;

    printf("\nDane studentow:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Imie: %s\n", tab[i].imie);
        printf("Nazwisko: %s\n", tab[i].nazwisko);
        printf("Kierunek: %s\n", tab[i].kierunek);
        printf("Numer legitymacji: %d\n", tab[i].numerLegitymacji);
    }
}

//////////////////////////////////////////////////
// ZADANIE 4
//////////////////////////////////////////////////

struct element
{
    int dane;
    struct element *next;
};

void dodaj(struct element **head, int wartosc)
{
    struct element *nowy =
        (struct element*)malloc(sizeof(struct element));

    nowy->dane = wartosc;
    nowy->next = NULL;

    if(*head == NULL)
    {
        *head = nowy;
    }
    else
    {
        struct element *temp = *head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = nowy;
    }
}

void wypisz(struct element *head)
{
    int licznik = 1;

    printf("Co drugi element listy:\n");

    while(head != NULL)
    {
        if(licznik % 2 == 1)
        {
            printf("%d ", head->dane);
        }

        licznik++;
        head = head->next;
    }

    printf("\n");
}

//////////////////////////////////////////////////
// MAIN
//////////////////////////////////////////////////

int main()
{
    //////////////////////////////////////////////////
    // ZADANIE 1
    //////////////////////////////////////////////////

    printf("ZADANIE 1\n");

    printf("Test 1: %d\n", sprawdz(f1, f2, 5));
    printf("Test 2: %d\n", sprawdz(f1, f3, 5));

    //////////////////////////////////////////////////
    // ZADANIE 2
    //////////////////////////////////////////////////

    int m, n;
    int A[10][10];
    int wiersz, kolumna;
    int wynik;

    printf("\nZADANIE 2\n");

    do
    {
        printf("Podaj m (0-10): ");
        scanf("%d", &m);

        if(m < 0 || m > 10)
        {
            printf("Niepoprawne m!\n");
        }

    } while(m < 0 || m > 10);

    do
    {
        printf("Podaj n (0-10): ");
        scanf("%d", &n);

        if(n < 0 || n > 10)
        {
            printf("Niepoprawne n!\n");
        }

    } while(n < 0 || n > 10);

    wczytaj(A, m, n);

    wynik = znajdzNajwiekszyUjemny(A, m, n,
                                   &wiersz, &kolumna);

    if(wynik != 0)
    {
        printf("Najwiekszy ujemny element: %d\n", wynik);
        printf("Wiersz: %d\n", wiersz);
        printf("Kolumna: %d\n", kolumna);
    }
    else
    {
        printf("Brak elementow ujemnych.\n");
    }

    //////////////////////////////////////////////////
    // ZADANIE 3
    //////////////////////////////////////////////////

    struct student studenci[5];
    int i;

    printf("\nZADANIE 3\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        wczytajStudenta(&studenci[i]);
    }

    wypiszStudentow(studenci, 5);

    //////////////////////////////////////////////////
    // ZADANIE 4
    //////////////////////////////////////////////////

    struct element *lista = NULL;
    int liczba;
    int ile;

    printf("\nZADANIE 4\n");

    printf("Ile elementow chcesz dodac? ");
    scanf("%d", &ile);

    for(i = 0; i < ile; i++)
    {
        printf("Podaj liczbe: ");
        scanf("%d", &liczba);

        dodaj(&lista, liczba);
    }

    wypisz(lista);

    return 0;
}
