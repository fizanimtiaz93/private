#include<iostream>
#include<string>

using namespace std;

int main()
{
    int numStudents;
    int count = 0;


    cout << "Enter the number of students (no more than 10): ";
    cin >> numStudents;

    while(numStudents < 1 || numStudents > 10)
        {
            cout << "Error: Please enter a number between 1 and 10." << endl;
            cin >> numStudents;
        }
    string name[numStudents];

    for (int i=0; i<numStudents; i++)
        {
            cout<<"Enter name of student number "<<i+1<<": ";
            cin>>name[i];
        }
    string nTemp;


    for (int j=1;j<numStudents;++j)
        {
            nTemp = name[j];
            int k;

            for (k = j-1; k>=0 && name[k] > nTemp; k--)
                {
                    name[k+1] = name[k];
                }
            name[k+1] = nTemp;
        }

    cout<<"\nThe students in alphabetical order are: ";

    for (numStudents = 0; numStudents >= 0 && numStudents <= 10; numStudents++)
        {
            cout << "\n" << name[numStudents] << endl;
        }
    return 0;
}
