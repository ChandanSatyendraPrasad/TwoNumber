/* 3. Write a program in C++ to print the sum of two numbers*/

#include <iostream>
using namespace std;

int main()
{
    int var1 = 0, var2 = 0;
    int sum = 0;

    cout << "Enter a num: " << endl;
    cin >> var1;

    cout << "Enter 2nd num: " << endl;
    cin >> var2;

    sum = var1 + var2;

    cout << sum;

    return 0;
}