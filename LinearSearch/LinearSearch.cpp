#include <iostream>
using namespace std;

int arr[20]; //Araay to be search
int n; //number of elements in the array
int i; //index of array elments

void input() {
    while (true) {
        cout << "Enter the Number of element in the Array : ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray hhould have minimum 1 and maximum 20 element.\n\n ";
    }

    //accept array elements
    cout << "\n====================\n";
    cout << "Enter Array element\n";
    cout << "\n====================\n";
    for (i = 0; i < n; i++)
   