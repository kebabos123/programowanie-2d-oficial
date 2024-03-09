#include <iostream>
#include <cmath>
using namespace std;

//class Point
//{
//private:
//    int x;
//    int y;
//    int z;
//
//public:
//    Point()
//    {
//        x = 3;
//        y = 7;
//        z = 10;
//    }
//
//    Point(int xx)
//    {
//        x = xx;
//        y = 7;
//        z = 10;
//    }
//
//    Point(int xx, int yy, int zz)
//    {
//        x = xx;
//        y = yy;
//        z = zz;
//    }
//
//    void SetX(int value)
//    {
//        //x=abs(value)
//
//        if (value >= 0)
//        {
//            x = value;
//        }
//        else
//        {
//            //reakcja na b³¹d
//        }
//    }
//    int GetX()
//    {
//        //if(uprawnienia)
//        return x;
//    }
//
//    double distanceFromCenter(Point p)
//    {
//        double distance;
//        distance = sqrt(p.x * p.x + p.y * p.y + p.z * p.z);
//        return distance;
//    }
//};
//class Rect
//   {
//       private:
//        float height;
//        float width;
//       public:
//        rect()
//        {
//           height = 5;
//           width = 3;
//        }
//        float circuitOfRect()
//        {
//           float circuit = 2 * height + 2 + width;
//        }
//        float areaOfRect()
//        {
//           float area = width * height;
//        }
//        float diagonalOfRect()
//        {
//           float diagonal = sqrt(height * height + width * width);
//        }
//   };
class Konto
{
private:
    string login;
    string password;
    double balance;
public:
    Konto()
    {
        login = "undefined";
        password = "undefined";
        balance = 0;
    }
    void createLogin()
    {
        cout << "wpisz login"<<'\n';
        cin >> login;
        cout << '\n';
    }
    void createPassword()
    {
        cout << "wpisz hasło"<<'\n';
        cin >> password;
        cout << '\n';
    }
    void logIn()
    {
        string l;
        string p;
        while (true)
        {
            if (login != "undefined" && password != "undefined")
            {
                cout << "logowanie:\n"<<"wpisz login\n";
                cin >> l;
                cout << "wpisz hasło\n";
                cin >> p;
                if (l != login || p != password)
                {
                    cout << "niepoprawne dane\n";
                    continue;
                }
                else
                {
                    cout << "zostałeś zalogowany\n";
                    break;
                }
            }
        }
    }
    void addMoney()
    {
        cout << "ile pieniędzy chcesz dodać na konto?";
        cin >> balance;
        cout << "dodane!";
    }
    void transaction(Konto &targetAccount)
    {
        targetAccount.
    }

};
int main()
{
    setlocale(LC_CTYPE, "polish");
    //Point firstPoint;
   
    // firstPoint.x = 3;
    // firstPoint.y = 5;
    //firstPoint.z = 8;
    //rect firstRectangle;   
    Konto firstAccount;
    firstAccount.createLogin();
    firstAccount.createPassword();
    firstAccount.logIn();
    firstAccount.addMoney();
    Konto secondAccount;
    secondAccount.createLogin();
    secondAccount.createPassword();
    secondAccount.logIn();
    secondAccount.addMoney();
}