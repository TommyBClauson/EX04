#include <iostream>
#include <array>
#include <cmath>

using namespace std;

// Function
int *doubleCapacity (const int *list, int size)
{
    // creating the array
    int *p = new int[size];

    for (int i = 0; i < size; i++)
    {
        *(list + i);
        p[i] = list[i];
    }
    return p;
}

int main()
{
    // Declaring vars
    int size, sizeX2, input;
    // Declaring pointer vars
    int *list, *list2;

    // Asking user for size of array
    cout << "Please enter the size of the array: " << endl;
    cin >> size;

    // Initializing the dynamic array with size
    list = new int[size];

    // Asking user for input to fill array
    cout << "Please enter " << size << " numbers to fill array: " << endl;
    // loop to ask user untill array is filled
    for (int i = 0; i < size; i++)
    {
        cin >> input;
        *(list + i) = input;
    }

    // doubling the array size var
    sizeX2 = size * 2;
    // calling back to function to double size of array
    list2 = doubleCapacity(list, sizeX2);

    // Asking the user to add more entrys to the array
    cout << "The array size has doubled, Please enter in more values: " << endl;
    for (int i = 0; i < sizeX2; i++)
    {
        cin >> input;
        *(list2 + i) = input;
    }

    // Printing out doubled array
    cout << "The array after being doubled in size are: ";
    // loop for printing array elements
    for (int k = 0; k < sizeX2; k++)
    {
        cout << *(list2 + k) << " ";
    }
    cout << endl;

    return 0;
}