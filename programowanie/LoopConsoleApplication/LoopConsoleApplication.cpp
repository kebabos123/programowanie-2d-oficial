﻿
#include <iostream>
#include <cmath>

using namespace std;
//Program wyświetlający na ekranie kolejne liczby naturalne od 1 do 10
void task1for()
{

    for (int i = 1; i < 11; i++)
    {
        cout << i << "\n";
    }

}
//Program obliczający sumę liczb od 1 do 100
void task2for()
{
    int number = 0;
    for (int i = 1; i < 101; i++)
    {
        number = number + i;
    }
    cout << "suma liczb od 1 do 100 wynosi: " << number;


}
//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task3for()
{

    for (int i = 1; i < 11; i++)
    {
        cout << "\n" << i * i;
    }
}
//Program obliczający n!.
void task4for()
{
    int number;
    double factorial = 1;
    cout << "wpisz liczbe\n";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    cout << "silnia liczby winosi: " << factorial;
}
//Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task5for()
{
    int silnia = 1;
    for (int i = 1; i <= 10; i++)
    {

        silnia = i * silnia;
        cout << silnia << "\n";
    }
}
//Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
void task6for()
{
    for (int i = 1; i < 10; i++)
    {
        for (int k = 1; k < 10; k++)
        {
            cout << i * k << "\n";
        }
    }
}
//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task7for()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << "\n";
        }
    }
}
// Program obliczający sumę kwadratów liczb od 1 do 10
void task8for()
{
    int k = 0;
    for (int i = 1; i <= 10; i++)
    {
        k = (i * i) + k;

    }
    cout << k;
}
/*Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu
(ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)*/
void task9for()
{
    int fib1 = 1, fib2 = 0;
    for (int i = 1; i <= 20; i++)
    {
        int fib = fib1 + fib2;
        cout << fib << "\n";
        fib2 = fib1;
        fib1 = fib;

    }
}
/** Program, kóry wyświetli poniższe cztery zwory:
    ****       54321        121212        122333
    ***        65432        212121        223334444
    **         76543        121212        333444455555
    *          87654        212121        444455555666666*/
void task10for()
{

    for (int i = 4; i > 0; i--)
    {
        for (int j = 0; i > j; j++)
        {
            cout << "*";
        }
        cout << "\n";

    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 5; j >= 1; j--)
        {
            cout << j + i;
        }
        cout << "\n";
    }

    int up = 0;
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 != 0)
        {
            up = 1;
        }
        else
        {
            up = 0;
        }
        for (int j = 1 + up; j <= 6 + up; j++)
        {
            if (j % 2 != 0)
            {
                cout << '1';
            }
            else
            {
                cout << '2';
            }
        }
        cout << "\n";
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j <= i + 3; j++)
        {
            for (int k = 0; k < j; k++)
            {
                cout << j;
            }

        }
        cout << "\n";
    }

}
/*Oblicz sumę szeregu 1 / 1 ^ 2 + 1 / 2 ^ 2 + 1 / 3 ^ 2 + ... + 1 / n ^ 2. Jeżeli się nie pomylisz,
to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π(suma szeregu jest równa π2 / 6).
Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.
*/
void task11for()
{
    double o = 0;
    for (double n = 1; n < 1000000; n++)
    {
        o += pow(1 / n, 2);
    }
    cout << sqrt(o * 6);
}
/*Miasto T.ma obecnie 100 tys.mieszkańców, ale jego populacja rośnie co roku o 3 % rocznie.Miasto B.ma 300 tys.
mieszkańców i ta liczba rośnie w tempie 2 % na rok.
Wykonaj symulację prezentującą liczbę mieszkańców w obu miastach i zatrzymującą się, gdy liczba mieszkańców miasta
T.przekroczy liczbę z miasta B.*/
void task1while()
{
    int pocT = 100'000, pocB = 300'000;
    cout << pocT << "  " << pocB << "\n";
    while (pocT <= pocB)
    {
        pocT = pocT * 1.03;
        pocB = pocB * 1.02;
        cout << pocT << "  " << pocB << "\n";
    }
}
//Napisz program, który poprosi użytkownika o wprowadzenie dowolnej liczby całkowitej.Następnie program powinien obliczyć i wyświetlić liczbę cyfr.

void task2while()
{
    int numberOfNumbers = 1, number;
    cout << "wpisz dowolna liczbe calkowita" << "\n";
    cin >> number;
    while (number >= 10)
    {
        number /= 10;
        numberOfNumbers++;
    }
    cout << "liczba cyfr wynosi: " << numberOfNumbers;

}
/*Program sprawdzający czy podana liczba jest liczbą doskonałą(czyli taką, której suma dzielników(z wyłączeniem samej siebie) jest równa danej liczbie,
np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).*/
void task3while()
{
    int perfectNumber, dp = 1, dumD = 0;
    cout << "wpisz leiczbe";
    cin >> perfectNumber;
    while (dp < perfectNumber)
    {
        if (perfectNumber % dp == 0)
        {
            dumD += dp;
        }
        dp++;
    }
    if (dumD == perfectNumber)
    {
        cout << "ta liczba jest doskonala";
    }
    else cout << "ta liczba nie jest doskonala";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1for();
    //task2for();
    //task3for();
    //task4for();
    //task5for();
    //task6for();
    //task7for();
    //task8for();
    //task9for();
    //task10for();
    //task11for();
    //task1while();
    //task2while();
    task3while();
}


/*

DO-WHILE
* Napisz program, który policzy sumę cyfr podanej przez użytkownika liczby.
* Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dopóki suma tych kwadratów nie przekroczy 1000.

WHILE


*/