#include <iostream>
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
    int a, b;
    cout << "Enter First Number";
    cin >> a;
    cout << "Enter Second Number";
    cin >> b;
    cout << "The sum of add Function is: " << add(a, b);

    return 0;
}