// array console application.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void task1()
{
    const int UPPER_RANGE=1000;
    const int LOWER_RANGE = 0;
    const int SIZE_OF_ARRAY = 100;
    int numbers[SIZE_OF_ARRAY];
    srand(time(NULL));
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
    }
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        cout << numbers[i] << ',';
        cout << '\n';
    }
    //szukanie maksimum
    int max = numbers[0];
    for (int i = 1; i  < SIZE_OF_ARRAY; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
        //szukanie minimum
    }
    int min = numbers[0];
    for (int i = 1; i < SIZE_OF_ARRAY; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    cout << "najwiêksza liczba to: " << max << '\n';
    cout << "najmniejsza liczba to: " << min << '\n';
}
void task2()
{

}
int main()
{
    task1();
    task2();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
