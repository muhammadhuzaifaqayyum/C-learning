#include <iostream>
#include <string>
using namespace std;

// Function Declaration Practice
int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    // cout << "Hello, World!" << endl;
    // cout << "I'm Muhammad Huzaifa Qayyum";

    // int markInMaths = 90;
    // cout << "I'm Just testing this " << markInMaths;

    // int b;
    // long a;
    // long long c;
    // float score = 3.4;
    // double score2 = 3.4;
    // long double score3 = 3.4;
    // score = 3.4;
    // cout << "Size of int: " << endl;

    // int a, b;
    // cout << "Enter First Number";
    // cin >> a;
    // cout << "Enter Second Number";
    // cin >> b;
    // cout << "The sum of two numbers is: " << a + b;

    // If else Case practice

    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // if (age >= 150 || age <= 0)
    // {
    //     cout << "You are not human being";
    // }
    // else if (age >= 18)
    // {
    //     cout << "You are eligible to vote";
    // }
    // else
    // {
    //     cout << "You are not eligible to vote";
    // }

    // switch case practice
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // switch (age)
    // {
    // case 12:
    //     cout << "You are 12 years old";
    //     break;
    // case 13:
    //     cout << "You are 13 years old";
    //     break;

    // default:
    //     cout << "You are not 12 or 13 years old";
    //     break;
    // }

    // While Loops Practice
    // int index = 0;
    // while (index < 34)
    // {
    //     cout << "The value of index is: " << index << endl;
    //     index = index + 1;
    // }

    // Do While Loop Practice
    // int index = 0;
    // do
    // {
    //     cout << "The value of index is: " << index << endl;
    //     index = index + 1;
    // } while (index < 5);

    // For Loop Practice
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "the value of i is: " << i << endl;
    // }

    // Function Practice
    // int a, b;
    // cout << "Enter First Number";
    // cin >> a;
    // cout << "Enter Second Number";
    // cin >> b;
    // cout << "The sum of add Function is: " << add(a, b);

    // Array Practice
    // int arr[] = {1, 3, 6};
    // int marks[6];
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Enter the Marks of " << i << "th Student" << endl;
    //     cin >> marks[i];
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "marks of " << i << "th Student is " << marks[i] << endl;
    // }

    // int arr2d[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}

    // };
    // for (int i = 0; i, i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "the value at " << i << ", " << j << " is " << arr2d[i][j] << endl;
    //     }
    // }

    // String Practice
    // string name = "Huzaifa";
    // cout << "the name is " << name << endl;
    // cout << "the length of name is " << name.length() << endl;
    // cout << "the name is " << name.substr(0, 3) << endl;
    // cout << "the name is " << name.substr(3, 7) << endl;

    // Pointers Practice
    int a = 3;
    int *ptra;
    ptra = &a;
    cout << "The value of a is " << a << endl;
    cout << "The value of a is " << *ptra << endl;
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << ptra << endl;

    return 0;
}