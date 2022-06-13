#include <iostream>
using namespace std;

int main()
{
    system("CLS");
    cout << "OUTPUT PROGRAM 05" << endl;
    cout << "Program to find factorial of a number" << endl;
    int num = 0;
    long double factorial = 1;

    cout << "Enter a Number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        factorial*=i;
    }

    cout << factorial ;
    

}