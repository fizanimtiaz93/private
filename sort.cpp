#include <iostream>
using namespace std;

void get_numbers(int& input1, int& input2);

void get_numbers(int& input1, int& input2, int& input3);

void min(int input1, int input2, int& min);

void min(int input1, int input2, int input3, int& min);

void show_results(int& input1, int& input2, int& min);

void show_results(int& input1, int& input2, int& input3, int& min);

int main()
{
    int first_num, second_num, third_num, minimum, num;

    cout << "How many integers will you enter (2 or 3)? ";
    cin >> num;

    if (num == 2)
        {
            get_numbers(first_num, second_num);
            min(first_num, second_num, minimum);
            show_results(first_num, second_num, minimum);
        }
    else
        {
            get_numbers(first_num, second_num, third_num);
            min(first_num, second_num, third_num, minimum);
            show_results(first_num, second_num, third_num, minimum);
        }
    return 0;
}

void get_numbers(int& input1, int& input2)
{
    cout << "Enter two integers: ";
    cin >> input1
        >> input2;
}

void get_numbers(int& input1, int& input2, int& input3)
{
    cout << "Enter three integers: ";
    cin >> input1
        >> input2
        >> input3;
}

void min(int input1, int input2, int& min)
{
    min = input1;
    if (input2 < min)
        {
            min = input2;
        }
}

void min(int input1, int input2, int input3, int& min)
{
    min = input1;
    if (input2 < min)
        {
            min = input2;
        }
    if (input3 < min)
        {
            min = input3;
        }
}

void show_results(int& input1, int& input2, int& min)
{
    cout << "The least value of the two integers is: "
         << min << endl;
}

void show_results(int& input1, int& input2, int& input3, int& min)
{
    cout << "The least value of the three integers is: "
         << min << endl;
}
