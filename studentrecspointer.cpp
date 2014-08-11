#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>
using namespace std;

const int MAX = 10;
int n;
struct student
{
    char name[20];
    float gpa;

};

void inputA(student []);
void showA(const char *, student []);
void sortA(student []);
void swap(student *, student *);

main()
{
    student data[MAX];

    inputA(data);
    showA("The original order of the students' records: ", data);
    sortA(data);
    showA("The increasing order of the students' records: ", data);
}

void inputA(student a[])
{

    cout << "How many student records will you enter? (no more than "
         << MAX << "): ";

    cin >> n;

    //  cin.get();

    for (int i = 0; i < n; i++)
        {
            cout << " Enter the name of student [" << i << "]: ";
            cin.get();
            cin.getline(a[i].name, 20, '\n');
            //  cin.get();
            cout << " Enter the GPA of student [" << i << "]: ";
            //      getline(cin, a[i].gpa);
            cin >> a[i].gpa;
        }
}

void showA(const char *title, student a[])
{
    cout << "\n";
    while (*title != '\0')
        {
            cout << *title;
            title++;
        }
    cout << "\n";

    for (int i = 0; i < n; i++)
        {
            cout << "Name: " << setw(20) << a[i].name << setw(10)
                 << "GPA: " << a[i].gpa << "\n";
        }

    cout << "\n";
}

void sortA(student a[])
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            {
                if (a[j].gpa < a[i].gpa)
                    swap(&a[i], &a[j]);
            }
}

void swap(student *std1, student *std2)
{
    char tempn[20];
    float tempgpa;
    strcpy(tempn, (*std1).name);
    strcpy((*std1).name, (*std2).name);
    strcpy((*std2).name, tempn);

    tempgpa = (*std1).gpa;
    (*std1).gpa = (*std2).gpa;
    (*std2).gpa = tempgpa;
}
