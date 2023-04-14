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
    {
        cout << "<" << (i + 1) << "> ";
        cin >> arr[i];
    }
}


void LinearSearch() {
    char ch;
    int comparisons; //number of comparisons

    do
    {
        //accept the number to be searched
        cout << "\nEnter the element you want to search : "; // lamgkah 1
        int item;
        cin >> item;

        comparisons = 0;
        for (i = 0; i < n; i++) //langkah 2, 3 dan 4
        {
            comparisons++;
            if (arr[i] == item) //langkah 5A fount
            {
                cout << "\n" << item << " found at position " << (i + 1) << endl;
                break;
            }
        }

        if (i == n) // langkah 5B not found
            cout << "\n" << item << " not found in the array\n";
        cout << "\nNumber of comparisons: " << comparisons << endl;

        cout << "\nContinue search (y/n): ";
        cin >> ch;
    } while ((ch == 'y') || (ch == 'y'));
}

