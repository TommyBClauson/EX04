#include <Rectangle2D.h>
#include <iostream>

using namespace std;

int main()
{
    // Declaring and creating 3 differnt rectangles objects (from the book)
    Rectangle2D rect1(2, 2, 5.5, 4.9);
    Rectangle2D rect2(4, 5, 10.5, 3.2);
    Rectangle2D rect3(3, 5, 2.3, 5.4);

    // finding the area and perimeter of rect1
    cout << "The area and perimeter of rectangle 1 is: " << rect1.GetA() << " and " << rect1.GetP() << endl;
    
    // calling back to function to check if points (3, 3) falls inside a rect1
    if (rect1.Contains(3, 3))
    {
        cout << "The points fall inside Rectangle 1." << endl;
    }
    else
    {
        cout << "The points fall outside Rectangle 1." << endl;
    }

    // now checking to see if rect2 falls inside of rect1
    if (rect1.Contains(rect2))
    {
        cout << "Rectangle 2 is inside of Rectangle 1." << endl;
    }
    else
    {
        cout << "Rectangle 2 is outside of Rectangle 1." << endl;
    }

    // now checking to see if rect3 overlaps rect1
    if (rect1.OverLaps(rect3))
    {
        cout << "Rectangle 3 does overlap Rectangle 1." << endl;
    }
    else
    {
        cout << "Rectangle 3 does not overlap Rectangle 1." << endl;
    }

    return 0;
}