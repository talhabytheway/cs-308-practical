#include <iostream>
using namespace std;

int main()
{
    system("CLS");
    int len, lar, sl = 0;
       cout << "OUTPUT PROGRAM 02" << endl;
    cout << "Program to find second smallest number in a array" << endl;

    cout << "Enter length of array: ";
    cin >> len;

    int arr[len] = {};

    for (int i = 0; i < len; i++)
    {
        cout << "Enter " << i+1 << " element of array: ";
        cin >> arr[i];
    }
    
    for (int j = 0; j < len; j++)
    {
        if(arr[j]>lar) {
            sl = lar;
            lar = arr[j];
        } else 
            continue;
    }
    cout << "Second largest number in given array is: " << sl;
}