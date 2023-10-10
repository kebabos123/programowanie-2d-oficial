#include <iostream>
using namespace std;
/*
Operatory por�wnania:
== - r�wno�ci
!= - r�no�ci
>
<
>=
<=

*/

/*
1.
2. Program sprawdzaj�cy czy podana liczba jest dodatnia, ujemna czy r�wna zero
3. Program sprawdzaj�cy czy podany rok jest rokiem przest�pnym
4. Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
5. Program sprawdzaj�cy czy podane has�o jest poprawne (np. je�li has�o jest "abc123", program powinien wy�wietli� "has�o poprawne", je�li jest inne, powinien wy�wietli� "has�o niepoprawne").
6. Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
7. Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej temperatury (np. "ciep�o" dla temperatury powy�ej 20 stopni Celsjusza, "ch�odno" dla temperatury poni�ej 10 stopni Celsjusza itd.)
*/




//Program sprawdzaj�cy czy podana liczba jest parzysta czy nieparzysta
void task1()
{
    int number1;
    cout << "wypisz liczb�\n";
    cin >> number1;
    if (number1 % 2 == 0)
    {
        cout << "ta liczba jest parzysta";
    }
    else
    {
        cout << "liczba jest nieparzysta";
    }
}
// Program sprawdzaj�cy czy podana liczba jest dodatnia, ujemna czy r�wna zero
void task2()
{
    int number2;
    cout << "wypisz liczb�\n";
    cin >> number2;
    if (number2 % 2 == 0)
    {
        cout << "ta liczba jest parzysta";
    }
    else if (number2 % 2 != 0)
    {
        cout << "liczba jest nieparzysta";
    }
    else
    {
        cout << "ta liczba jest r�wna 0";

    }


}
//Program sprawdzaj�cy czy podany rok jest rokiem przest�pnym
void task3()
{
    int year;
    cout << "wypisz rok\n";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0||year % 400==0)
    {
        cout << "ten rok jest przest�pny";
    }
    else
    {
        cout << "ten rok nie jest przest�pny";
    }


}
//Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
void task4()
{
    int grade;
    cout << "wpisz ocene";
    cin >> grade;
    if (grade == 6)
    {
        cout << "ta ocena jest celuj�ca";
    }
    else if (grade == 5)
    {
        cout << "ta ocena jest bardzo dobra";
    }
    else if (grade == 4)
    {
        cout << "ta ocena jest dobra";
    }
    else if (grade == 3)
    {
        cout << "ta ocena jest dostateczna";
    }
    else if (grade == 2)
    {
        cout << "ta ocena jest dopuszczaj�ca";
    }
    else if (grade == 1)
    {
        cout << "ta ocena jest niedostateczna";
    }
    else
    {
        cout << "to nie jest ocena";
    }
}
//Program sprawdzaj�cy czy podane has�o jest poprawne(np.je�li has�o jest "abc123", program powinien wy�wietli� "has�o poprawne",
//je�li jest inne, powinien wy�wietli� "has�o niepoprawne")
void task5()
{
    string password;
    cout << "wpisz haslo\n";
    cin >> password;
    if (password == "abc123")
    {
        cout << "haslo jest poprawne";
    }
    else
    {
        cout << "haslo jest niepoprawne";
    }
}
//Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
void task6()
{
    int day;
    int month;
    cout << "wpisz dzie�";
    cin >> day;
    cout << "wpisz miesi�c";
    cin >> month;

    if (day <= 31 && day >= 1 && month <= 12 && month >= 1 )
    {
        cout << "ta data jest poprawna\n";
    }
    else
    {
        cout << "ta data nie jest poprawna";
    }
}
//Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej temperatury(np. "ciep�o" dla temperatury powy�ej 20 stopni Celsjusza,
//"ch�odno" dla temperatury poni�ej 10 stopni Celsjusza itd.)
void task7()
{
    float temperature;
    cout << "wpisz temperatur�";
    cin >> temperature;
    if (temperature >= 20)
    {
        cout << "ciep�o";
    }
    else if (temperature <= 10)
    {
        cout << "zimno";
    }
    else
    {
        cout << "temperatura jest �rednia";
    }
}
//8. Program sprawdzj�cy czy podana liczba jest z przedia�u <1;15)
void task8()
{
    float number;
    cout << "wprowad� numer";
    cin >> number;
    if (number >= 1 && number < 15)
    {
        cout << "ta liczba mie�ci si� w przedziale";
    }
    else
    {
        cout << " ta liczba nie mie�ci si� w przedziale";
    }
}
//9. Program sprawdzaj�cy czy osoba jest pe�noletnia.
void task9()
{
    float age;
    cout << "test czy jeste� pe�noletni\n ile masz lat?";
    cin >> age;
    if (age >= 18)
    {
        cout << "jeste� pe�noletni";
    }
    else
    {
        cout << "nie jeste� pe�noletni";
    }

}
//10. Program, kt�ry sprawdzi czy z podanych d�ugo�ci bok�w mo�na zrobi� tr�jk�t.
void task10()
{
    float sidea, sideb, sidec;
    cout << "wprowad� d�ugo�ci bok�w\n";
    cin >> sidea;
    cin >> sideb;
    cin >> sidec;
    if (sidea < sideb + sidec &&  sideb < sidea + sidec &&sidec < sidea + sideb)
    {
        cout << "to mo�e by� tr�jk�t";
    }
    else
    {
        cout << "to nie mo�e by� tr�jk�t";
    }
}


int main()
{
    setlocale(LC_CTYPE, "polish");

    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    task10();
}



//8. Program sprawdzj�cy czy podana liczba jest z przedia�u <1;15)
//9. Program sprawdzaj�cy czy osoba jest pe�noletnia.
//10. Program, kt�ry sprawdzi czy z podanych d�ugo�ci bok�w mo�na zrobi� tr�jk�t.