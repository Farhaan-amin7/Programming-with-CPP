#include <iostream>
using namespace std;
int main()
{
    int arr[3];
   
    
     int a = 7;
     cout<< "Enter the elements you want to store in the array: \n" << endl;
     for (int i = 0; i < size(arr); i++) {
        cin >> arr[i];
    }
    cout <<"The elements sorted in this array are: " << endl;
     for (int i = 0; i < size(arr); i++) {
        cout <<  arr[i] << endl;
    }    
    return 0;
}
