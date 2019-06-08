#include <iostream>
#include <array>

using namespace std;

// Function for finding the smallest element in a array
int smallestElement(double *list, int size)
{
    double min = list[0];
    int temp = 0;

    for (int j = 1; j < size; j++)
    {
        if (list[j] < min)
        {
            min = list[j];
            temp = j;
        }
    }
    
    return temp;
}

int main()
{
    // Declaring vars
    int size;
    // Delcaring pointer vars
    double *list;

    // Asking user to give the size of the array
    cout << "Please enter the size of the array: " << endl;
    cin >> size;

    // Delcaring pointer "list" to be array
    list = new double[size];

    // Asking user to fill the array with integers. (ILL BE USING THE ONES GIVEN FROM THE BOOK)
    cout << "Please enter in " << size << " integers to fill the array: " << endl;\
    // loop for filling the array with the users inputs
    for (int i = 0; i < size; i++)
    {
        cin >> list[i];
    }

    // Telling the user the smallest number of the array
    cout << "The index with the smallest element is " << smallestElement(list, size)+1 << endl;


}