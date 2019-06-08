#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declaring Vars
    int i, j, size, sum, count, input;
    double avg;
    
    // Delcaring pointer Var
    int *num;

    // Getting array size from user
    cout << "please enter a number for the size of the array." << endl;
    cout << "enter number here: ";
    cin >> size;

    // Delcaring the pointer "num" as the array with its size given by the user
    num = new int[size];

    // loop for getting integer inputs from user and storing them
    for (i = 0; i < size; i++)
    {
        cin >> input;
        input = *(num + i);
        sum = sum + input;
    }

    // Calculating the average of user inputs
    avg = sum/size;
    cout << "the average number is: " << avg << endl;
    cout << "the above average numbers are: ";
    
    // loop for checking the above average numbers
    for (j = 0; j < size; j++)
    {
        if (*(num + j) > avg)
        {
            cout << *(num + j) << " ";
            count++;
        }

        cout << "the total of above average numbers are: " << count << endl;

    }
    
}