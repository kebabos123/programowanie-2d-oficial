
#define _USE_MATH_DEFINES
using namespace std;
#include <iostream>
#include<cmath>

//Program obliczaj�cy �redni� arytmetyczn� dw�ch liczb
void task1()
{
    
    double firstnumber;
    double secondnumber;

    cout << "wpisz pierwsza liczbe\n";

    cin >> firstnumber;

    cout << "wpisz druga liczbe\n";

    cin >> secondnumber;

    double avarage = (firstnumber + secondnumber) / 2;

    cout << "srednia wynosi:\n" << avarage;

}
//Program obliczaj�cy pole prostok�ta
void task2()
{
    float side_a;
    float side_b;
    cout << "wpisz dlugosc pierwszego boku";
    cin >> side_a;
    cout << "wpisz dlugosc drugiego boku";
    cin >> side_b;
    float area = side_a * side_b;
    cout << "pole wynosi:" << area;


}
// Program obliczaj�cy obj�to�� sto�ka.
void task3()
{
    float height;
    float radius;
    cout << "wpisz wysokosc stozka";
    cin >> height;
    cout << "wpisz promien stozka";
    cin >> radius;
    float volume = 1.0 / 3.0 * M_PI * (radius * radius) * height;
    cout <<"pole wynosi"<< volume;


}
//Program obliczaj�cy pole ko�a.
void task4()
{
    float radius;
    cout << "podaj promien kola";
    cin >> radius;
    float area = M_PI * (radius * radius);
    cout << "pole kola:" << area;
}
//Program obliczaj�cy warto�� wyra�enia a ^ 2 + b ^ 2
void task5()
{
    float a;
    float b;
    cout << "wpisz a";
    cin >> a;
    cout << "wpisz b";
    cin >> b;
    float wartosc = (a * a) + (b * b);
    cout << wartosc;

}
//Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
void task6()
{
    float b;
    float h;
    cout << "wpisz b";
    cin >> b;
    cout << "wpisz h";
    cin >> h;
    float area = 1.0 / 2.0 * b * h;
    cout << area;


}
int main()
{
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();


}
    
/*1. 
2. Program obliczaj�cy pole prostok�ta.
3. Program obliczaj�cy obj�to�� sto�ka.
4. Program obliczaj�cy pole ko�a.
5. Program obliczaj�cy warto�� wyra�enia a^2 + b^2
6. Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
7. Program obliczaj�cy obj�to�� kuli o promieniu r
8. Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
9. Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*/


       
   

 
