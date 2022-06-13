#include <iostream>
using namespace std;

int main() 
{ 
    system("CLS");
    int len;
     cout << "OUTPUT PROGRAM 04" << endl;
     cout << "Program to find repeating elements" << endl;
     cout << "Enter length of the array: ";
     cin >> len;
    int arr[len] = {}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    for (int i = 0; i < len; i++)
    {
        cout << "Enter " << i+1 << " element: ";
        cin >> arr[i];
    }
    int visited[n];
 
    for(int i=0; i < n; i++){
        
        if(visited[i] == 0){
            int count = 1;
          
            for(int j = i+1; j < n; j++) { 
                if(arr[i] == arr[j])
                { 
                    count++; 
                    visited[j] = 1; 
                } 
            } 
            if(count > 1)
                cout << arr[i];
        }
    }
 
   return 0; 
}