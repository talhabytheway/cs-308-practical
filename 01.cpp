#include <iostream>
using namespace std;

int main()
{
    system("CLS");
    int row, col = 0;

    cout << "OUTPUT PROGRAM 01" << endl;
    cout << "Program to input matrix using 2D array" << endl;

    cout << "Enter Matrix's rows: ";
    cin >> row;

    cout << "Enter Matrix's columns: ";
    cin >> col;

    int arr[row][col] = {};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter " << j+1 << " element of " << i+1 << " row: ";
            cin >> arr[j][i];
        }
    }

        cout << "[ \n";

    for (int i = 0; i < row; i++)
    {
        cout << "[";
        for (int j = 0; j < col; j++)
        {
            cout << arr[j][i] << "  ";
        }
        cout << "], \n";
    }
        cout << "] \n";
}