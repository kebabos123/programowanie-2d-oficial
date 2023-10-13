#include <iostream>
using namespace std;
/*
Operatory porównania:
== - równoœci
!= - ró¿noœci
>
<
>=
<=

*/

/*
1.
2. Program sprawdzaj¹cy czy podana liczba jest dodatnia, ujemna czy równa zero
3. Program sprawdzaj¹cy czy podany rok jest rokiem przestêpnym
4. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
5. Program sprawdzaj¹cy czy podane has³o jest poprawne (np. jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne", jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
6. Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
7. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury (np. "ciep³o" dla temperatury powy¿ej 20 stopni Celsjusza, "ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)
*/




//Program sprawdzaj¹cy czy podana liczba jest parzysta czy nieparzysta
void task1()
{
    int number1;
    cout << "wypisz liczbê\n";
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
// Program sprawdzaj¹cy czy podana liczba jest dodatnia, ujemna czy równa zero
void task2()
{
    int number2;
    cout << "wypisz liczbê\n";
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
        cout << "ta liczba jest równa 0";

    }


}
//Program sprawdzaj¹cy czy podany rok jest rokiem przestêpnym
void task3()
{
    int year;
    cout << "wypisz rok\n";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0||year % 400==0)
    {
        cout << "ten rok jest przestêpny";
    }
    else
    {
        cout << "ten rok nie jest przestêpny";
    }


}
//Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
void task4()
{
    int grade;
    cout << "wpisz ocene";
    cin >> grade;
    if (grade == 6)
    {
        cout << "ta ocena jest celuj¹ca";
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
        cout << "ta ocena jest dopuszczaj¹ca";
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
//Program sprawdzaj¹cy czy podane has³o jest poprawne(np.jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne",
//jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne")
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
//Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
void task6()
{
    int day;
    int month;
    cout << "wpisz dzieñ";
    cin >> day;
    cout << "wpisz miesi¹c";
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
//Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury(np. "ciep³o" dla temperatury powy¿ej 20 stopni Celsjusza,
//"ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)
void task7()
{
    float temperature;
    cout << "wpisz temperaturê";
    cin >> temperature;
    if (temperature >= 20)
    {
        cout << "ciep³o";
    }
    else if (temperature <= 10)
    {
        cout << "zimno";
    }
    else
    {
        cout << "temperatura jest œrednia";
    }
}
//8. Program sprawdzj¹cy czy podana liczba jest z przedia³u <1;15)
void task8()
{
    float number;
    cout << "wprowadŸ numer";
    cin >> number;
    if (number >= 1 && number < 15)
    {
        cout << "ta liczba mieœci siê w przedziale";
    }
    else
    {
        cout << " ta liczba nie mieœci siê w przedziale";
    }
}
//9. Program sprawdzaj¹cy czy osoba jest pe³noletnia.
void task9()
{
    float age;
    cout << "test czy jesteœ pe³noletni\n ile masz lat?";
    cin >> age;
    if (age >= 18)
    {
        cout << "jesteœ pe³noletni";
    }
    else
    {
        cout << "nie jesteœ pe³noletni";
    }

}
//10. Program, który sprawdzi czy z podanych d³ugoœci boków mo¿na zrobiæ trójk¹t.
void task10()
{
    float sidea, sideb, sidec;
    cout << "wprowadŸ d³ugoœci boków\n";
    cin >> sidea;
    cin >> sideb;
    cin >> sidec;
    if (sidea < sideb + sidec &&  sideb < sidea + sidec &&sidec < sidea + sideb)
    {
        cout << "to mo¿e byæ trójk¹t";
    }
    else
    {
        cout << "to nie mo¿e byæ trójk¹t";
    }
}
//11. Napisz program, który bêdzie dzia³aæ jako prosty kalkulator matematyczny,
//  umo¿liwiaj¹c u¿ytkownikowi wybór operacji(dodawanie, odejmowanie, mno¿enie, dzielenie) i wprowadzanie liczb do obliczeñ.
void task11()
{
    float firstnumber, secondnumber;
    int sign;
    cout << "wpisz dwie liczby\n";
    cin >> firstnumber;
    cin >> secondnumber;
    cout << "wpisz:\n '1' jeœli chcesz dodaæ liczby\n'2' jeœli chcesz odj¹æ liczby\n '3' jeœli chcesz pomno¿yæ liczby\n'4'jeœli chcesz podzieliæ liczby\n ";
    cin >> sign;

    switch (sign)
    {
    case 1:
        cout << firstnumber + secondnumber;
        break;
    case 2:
        cout << firstnumber - secondnumber;
        break;
    case 3:
        cout << firstnumber * secondnumber;
        break;
    case 4:
        cout << firstnumber / secondnumber;
        break;
    default:
        cout << "jeden ze znaków albo oba nie jest liczb¹";
    }
}
//12. Napisz program, który wczyta numer miesi¹ca i wyœwietli jego s³owny odpowiednik.
void task12()
{
    int month;
    cout << "wpisz numer miesi¹ca\n";
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "styczeñ";
        break;
    case 2:
        cout << "luty";
        break;
    case 3:
        cout << "marzec";
        break;
    case 4:
        cout << "kwiecieñ";
        break;
    case 5:
        cout << "maj";
        break;
    case 6:
        cout << "czerwiec";
        break;
    case 7:
        cout << "lipiec";
        break;
    case 8:
        cout << "sierpieñ";
        break;
    case 9:
        cout << "wrzesieñ";
        break;
    case 10:
        cout << "paŸdziernik";
        break;
    case 11:
        cout << "listopad";
        break;
    case 12:
        cout << "gródzieñ";
        break;
    default:
        cout << "nie ma takiego miesi¹ca";
        break;
    }
}
//13. Napisz program, który na podstawie wspó³czynników równania kwadratowego(a, b, c) sprawdzi, czy to równanie ma rozwi¹zania rzeczywiste, i jeœli tak,
//  to je obliczy.

void task13()
{

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
    //task10();
    //task11();
    //task12();
    task13();
}



//8. Program sprawdzj¹cy czy podana liczba jest z przedia³u <1;15)
//9. Program sprawdzaj¹cy czy osoba jest pe³noletnia.
//10. Program, który sprawdzi czy z podanych d³ugoœci boków mo¿na zrobiæ trójk¹t.
//11. Napisz program, który bêdzie dzia³aæ jako prosty kalkulator matematyczny, umo¿liwiaj¹c u¿ytkownikowi wybór operacji(dodawanie, odejmowanie, mno¿enie, dzielenie) i wprowadzanie liczb do obliczeñ.
//12. Napisz program, który wczyta numer miesi¹ca i wyœwietli jego s³owny odpowiednik.
//13. Napisz program, który na podstawie wspó³czynników równania kwadratowego(a, b, c) sprawdzi, czy to równanie ma rozwi¹zania rzeczywiste, i jeœli tak, to je obliczy.
