using namespace std;
#include <iostream>
//napisz funkcjê która podzieli 2 liczby...
void task1()
{
    float first_number;
    float second_nuber;
    cout << "podaj pierwsza liczbe\n";
    cin >> first_number;
    cout << "podaj druge liczbe\n";
    cin >> second_nuber;
    cout << "wynik dzielenia to\n" << first_number / second_nuber;
    

}
int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}
