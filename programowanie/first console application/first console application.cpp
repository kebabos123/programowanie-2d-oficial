#define _USE_MATH_DEFINES
using namespace std;
#include <iostream>
#include<cmath>

//Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb
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
//Program obliczaj¹cy pole prostok¹ta
void task2()
{
    float side_a;
    float side_b;
    cout << "wpisz dlugosc pierwszego boku\n";
    cin >> side_a;
    cout << "wpisz dlugosc drugiego boku\n";
    cin >> side_b;
    float area = side_a * side_b;
    cout << "pole wynosi:" << area;


}
// Program obliczaj¹cy objêtoœæ sto¿ka.
void task3()
{
    float height;
    float radius;
    cout << "wpisz wysokosc stozka\n";
    cin >> height;
    cout << "wpisz promien stozka\n";
    cin >> radius;
    float volume = 1.0 / 3.0 * M_PI * (radius * radius) * height;
    cout << "pole wynosi:  " << volume;


}
//Program obliczaj¹cy pole ko³a.
void task4()
{
    float radius;
    cout << "podaj promien kola\n";
    cin >> radius;
    float area = M_PI * (radius * radius);
    cout << "pole kola: " << area;
}
//Program obliczaj¹cy wartoœæ wyra¿enia a ^ 2 + b ^ 2
void task5()
{
    float a;
    float b;
    cout << "wpisz a\n";
    cin >> a;
    cout << "wpisz b\n";
    cin >> b;
    float wartosc = (a * a) + (b * b);
    cout << wartosc;

}
//Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
void task6()
{
    float b;
    float h;
    cout << "wpisz b\n";
    cin >> b;
    cout << "wpisz h\n";
    cin >> h;
    float area = 1.0 / 2.0 * b * h;
    cout << area;


}
//Program obliczaj¹cy objêtoœæ kuli o promieniu r
void task7()
{
    int r;
    cout << "wpisz r\n";
    cin >> r;
    float volume = 4.0 / 3.0 * M_PI * pow(r, 3);
    cout << "objetosc wynosi: " << volume;
}
//Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
void task8()
{
    float a, b, h;
    cout << "wpisz a\n";
    cin >> a;
    cout << "wpisz b\n";
    cin >> b;
    cout << "wpisz h\n";
    cin >> h;
    float area = 1.0 / 2.0 * (a + b) * h;
    cout << "pole wynosi" << area;



}
//Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task9()
{

    float number1;
    float number2;
    float number3;

    float weight1;
    float weight2;
    float weight3;

    cout << "wpisz pierwsza liczbe\n";
    cin >> number1;
    cout << "wpisz pierwsza wage\n";
    cin >> weight1;


    cout << "wpisz druga liczbe\n";
    cin >> number2;
    cout << "wpisz druga wage\n";
    cin >> weight2;

    cout << "wpisz trzecia liczbe\n";
    cin >> number3;
    cout << "wpisz trzecia wage\n";
    cin >> weight3;

    
    float srednia = (number1 * weight1 + number2 * 2 + number3 * 3) / weight1 + weight2 + weight3;
    cout << "srednia wynosi: " << srednia;



}
void bettertask9()
{
    double grades[2];


}

int main()
{
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    bettertask9();
}

/*1.
2. Program obliczaj¹cy pole prostok¹ta.
3. Program obliczaj¹cy objêtoœæ sto¿ka.
4. Program obliczaj¹cy pole ko³a.
5. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
6. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
7. Program obliczaj¹cy objêtoœæ kuli o promieniu r
8. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
9. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*/

       
   

 
