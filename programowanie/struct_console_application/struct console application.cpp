
#include <iostream>
using namespace std;
struct point
{
    int x;
    int y;  
    int z;
};
float distanceFromCenter(int x, int y, int z)
{
    double distance;
    distance = sqrt(x * x + y * y + z * z);
    return distance;
}
float distanceFromCenter(point p)
{
    double distance;
    distance = sqrt(p.x * p.x + p.y * p.y + p.z * p.z);
    return distance;
}
int main()
{
    setlocale(LC_CTYPE, "polish");
    float x,y,z;
    cout << "podaj x\n";
    cin >> x;
    cout << "podaj y\n";
    cin >> y;

    cout << "podaj z\n";
    cin >> z;
    point firstPoint;
    firstPoint.x = 3;
    firstPoint.y = 5;
    firstPoint.z = 8;
    cout << "odleg³oœæ " << distanceFromCenter(firstPoint.x, firstPoint.y, firstPoint.z);
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
