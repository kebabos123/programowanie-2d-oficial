// stringconsoleapplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

//Napisz program, który będzie prosił o hasło.Nie przepuści dalej dopóki nie zostanie ono podane prawidłowo.
void task1()
{
	while (true)
	{
		string password;
		cout << "enter a password: ";
		cin >> password;
		if (password == "password")
		{
			cout << "you're logged in!";
			break;
		}
		else
		{
			cout << "incorrect password!\n";
		}

	}
}
//Napisz program, który pobiera od użytkownika ciąg znaków i wyświetla liczbę samogłosek i spółgłosek w tym ciągu.
void task2()
{

	int liczbaspolglosek = 0, liczbasamoglosek = 0;
	string ciag;
	cout << "napisz ciag znakow: ";
	cin >> ciag;
	for (int i = 0; i < ciag.length(); i++)
	{
		char l = tolower(ciag[i]);
		if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' || l == 'y')
		{
			liczbasamoglosek++;
		}
		else if (l == 'b' || l == 'c' || l == 'd' || l == 'f' || l == 'g' || l == 'h' || l == 'j' || l == 'k' || l == 'l' || l == 'm' || l == 'n' || l == 'p' || l == 'q' || l == 'r' || l == 's' || l == 't' || l == 'v' || l == 'w' || l == 'x' || l == 'z')
		{
			liczbaspolglosek++;
		}
	}
	cout << "liczba samoglosek wynosi: " << liczbasamoglosek << "\n";
	cout << "liczba spolglosek wynosi: " << liczbaspolglosek;

}
// Poproś użytkownika o wprowadzenie liczby całkowitej w systemie dziesiętnym. Następnie skonwertuj tę liczbę na system dwójkowy (binarny) i wyświetl wynik.
void task3()
{
	string  binary;
	int number;
	cin >> number;
	while (number >= 1)
	{
		if (number % 2 == 0)
		{
			string zero = "0";
			binary += zero;
		}
		else
		{
			string one = "1";
			binary += one;
		}
		number /= 2;
	}
	for (int i = binary.size() - 1; i >= 0; i--)
	{
		cout << binary[i];
	}
}
//Program sprawdzający czy podany ciąg znaków jest palindromem (czyli takim, który czytany od tyłu jest taki sam, jak czytany od przodu, np. "kajak")
void task4()
{
	string str;
	cin >> str;
	string part1 = str.substr(0, str.length() / 2);
	string r_part2;
	if (str.length() % 2 == 0)
	{
		string part2 = str.substr(str.length() / 2, str.length() / 2);
	}
	else
	{
		string part2 = str.substr(str.length() / 2 + 1, str.length() / 2);
	}
	for (int i = str.length() - 1; i >= str.length() / 2; i--)
	{
		if (str.length() % 2 != 0 && i == str.length() / 2)
		{
			break;
		}
		r_part2 += str[i];
	}
	if (part1 == r_part2)
	{
		cout << "to jest palindrom";
	}
	else
	{
		cout << "to nie jest palindrom";
	}

}
//Program sprawdzający czy podane dwa słowa są anagramami (czyli takimi, które zawierają te same litery, ale w innym układzie, np. "klasa" i "salka")
void task5()
{

}
//Program wyciągający informacje z numeru PESEL
void task6()
{
	string pesel;
	cin >> pesel;
	if (pesel.length() != 11)
	{
		return;
	}
	for (int i = 0; i <= 10; i++)
	{
		if (pesel[i] < 48 || pesel[i]>57)
		{
			return;
		}
	}
	int year = (pesel[0] - '0') * 10 + pesel[1] - '0';
	int month = (pesel[2] - '0') * 10 + pesel[3] - '0';
	int day = (pesel[4] - '0') * 10 + pesel[5] - '0';
	int control = 
		  (pesel[0]-'0') * 1
		+ (pesel[1]-'0') * 3
		+ (pesel[2]-'0') * 7
		+ (pesel[3]-'0') * 9
		+ (pesel[4]-'0') * 1
		+ (pesel[5]-'0') * 3
		+ (pesel[6]-'0') * 7
		+ (pesel[7]-'0') * 9
		+ (pesel[8]-'0') * 1
		+ (pesel[9]-'0') * 3
		+ (pesel[10]-'0')* 1;

	if (control % 10 != 0)
	{
		return;
	}
	if (month > 12 || month <= 0 || day < 1 || day>31)
	{
		return;
	}
	if (pesel[9] % 2 == 1)
	{
		cout << "gender: male\n";
	}
	else
	{
		cout << "gender: female\n";
	}
	cout << "your birth date is" << day << "." << month << "." << year;






}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	task6();

}
/*



*
*
*

*
* Program implementujący algorytm szyfrowania Cezara (proste szyfrowanie, w którym każdy znak w tekście jest zastępowany innym znakiem, przesuniętym o stałą liczbę pozycji w alfabecie).


* Program który na wejściu przyjmie równanie a na wyjściu da równanie w odwrotnej notacji polskiej ONP. Np. na wejściu 2+3*4 na wyjścu da 234*+
* Program, który na wejściu przyjmie rówanie w ONP a na wyjściu wyświetli wynik rówania.
*/
