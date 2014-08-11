#include <iostream>
using namespace std;

typedef int* IntArPntr;

const int MAX = 100;

int main()
{
    char a[4];
    int m,x,y, sum;

    {
           cout << "How many integers are you going to enter? (no more than " << MAX << "):";
           cin >> m;
           while ( m < 2 || m > MAX)
               {
           cout << "Integer Overflow \n";
               }

    }
  IntArPntr *p = new IntArPntr[x];
    int i;
    for (i = 0; i < x; i++)
 p[i] = new int[y];

    cout <<"Enter the positive integers so as to achieve the sum: \n";
    cin >> a[i];



    cout <<"The integers you entered are " << x << " and " << y << endl;
 sum = (x + y);
 cout <<"The sum of these integers is: " << sum << endl;

 for (i = 0; i < x; i++)
     delete[] p[i];
 delete[] p;

     return 0;
}
