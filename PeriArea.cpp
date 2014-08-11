#include <iostream>
#include <cmath>
using namespace std;

void area_peri(double& area, double& peri, int& a, int& b, int& c);

int main()
{
    double a, p; int x, y, z;
    area_peri(a, p, x, y, z);
    return 0;

}

void area_peri(double& area, double& peri, int& a, int& b, int& c)
{
    double s;
do
    {
    cout << "Enter the length of the three sides of the triangle:\n";
    cin >> a;
    cin >> b;
    cin >> c;
    peri = a + b + c;
    s = peri/2;
    area =  sqrt(s*(s-a)*(s-b)*(s-c));
    if (peri <= 0)
        {
            cout << "The combination of sides you entered is invalid. Please enter a valid combination: ";
        }
    } while (peri <= 0);
    cout << "The perimeter of the triangle is " << peri << " and the area is " << area << endl;
}
