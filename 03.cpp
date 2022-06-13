#include <iostream>
using namespace std;

int main()
{
    system("CLS");
    cout << "OUTPUT PROGRAM 03" << endl;
    cout << "Program to find wether a word is palindrome or not" << endl;
    int len, flag = 0;
    string arr[1] = {};
    cout << "Enter a word: ";
    cin >> arr[0];
    len = arr[0].size();
    for (int i = 1; i <= len / 2; i++)
    {
        if (arr[0][i - 1] == arr[0][len - i])
        {
            continue;
        }
        flag = 1;
    }
    if (!flag)
        cout << "Palindrome";
    else
        cout << "Not palindrome";
}