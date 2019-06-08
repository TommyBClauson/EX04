#include <Rectangle2D.h>
#include <iostream>

using namespace std;

// no-arg constructor
Rectangle2D::Rectangle2D() 
{
    // defaults vars set
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}

// arg constructor for inputed values
Rectangle2D::Rectangle2D(double x, double y, double w, double h)
{
    x = x; // x-cord
    y = y; // y-cord
    width = w; // width
    height = h; // height
}

// get funcs
double Rectangle2D::GetX() const // get-func for x-cord
{
    return x;
}

double Rectangle2D::GetY() const // get-func for y-cord
{
    return y;
}

double Rectangle2D::GetW() const // get-func for width
{
    return width;
}

double Rectangle2D::GetH() const // get-func for heigth
{
    return height;
}

// set funcs
void Rectangle2D::SetX(const double X) // Setting value of x-cord
{
    x = X;
}

void Rectangle2D::SetY(const double Y) // Setting value of y-cord
{
    y = Y;
}

void Rectangle2D::SetW(const double W) // Setting value of width
{
    width = W;
}

void Rectangle2D::SetH(const double H) // Setting value of height
{
    height = H;
}

// func for calculating area and the perimeter of the rectangle
double Rectangle2D::GetA() const // returns area W*H
{
    return width * height;
}
double Rectangle2D::GetP() const // returns perimeter 
{
    return 2 * (width + height);
}

// func for finding if point lies inside the rectangle
bool Rectangle2D::Contains(double x, double y)
{
    double xCord = x;
    double yCord = y;

    // condition for check if point lies inside rectangle
    if (xCord < (this-> x + (.5 * this-> width)) && // destance between point x and the centres x is less than half the width
        xCord > (this-> x - (.5 * this-> width)) && // destance between point y and the centres y is less than half the hiegth
        yCord < (this-> y + (.5 * this-> height)) && // if all return true than the point does fall inside the rectangle
        yCord > (this-> y - (.5 * this-> height))) ///////////////////////////////////////////////////////////////////////////////
        {
            return true;
        }

        else
        {
            return false;
    }
}

// func for seeing if rectangle are overlaping each other
bool Rectangle2D::OverLaps(const Rectangle2D& rect)
{
    double rect1w = this-> width;
    double rect1h = this-> height;
    double rect2w = rect.width;
    double rect2h = rect.height;
    
    // condition to check if any width or heigth = 0
    if (rect2w <= 0 || rect2h <= 0 || rect1w <= 0 || rect1h <= 0)
    {
        return false;
    }
    else
    {
        return true;
    }

    double rect1x = this-> x;
    double rect1y = this-> y;
    double rect2x = rect.x;
    double rect2y = rect.y;
    rect2w = rect2w + rect2x;
    rect2h = rect2h + rect2y;
    rect1w = rect1w + rect1x;
    rect1h = rect1h + rect1y;
    
    // condition to check overlapping two rectangles
    // checking where all the points fall to check overlapping
    if ((rect2w < rect2x || rect2w > rect1x) && 
        (rect2h < rect2y || rect2h > rect1y) && 
        (rect1w < rect1x || rect1w > rect2x) && 
        (rect1h < rect1y || rect1h > rect2y))
        {
            return true;
        }
        else{
            return false;
    }

}

// func for checking rectangle inside a rectangle
bool Rectangle2D::Contains(const Rectangle2D& rect)
{
    // conditon check if left, right, top and bottom of both rectangles are overlapping
    if (this-> x - (this-> width / 2) > rect.x - (rect.width / 2) && 
        this-> x + (this-> width / 2) < rect.x + (rect.width / 2) &&
        this-> y - (this-> height / 2) > rect.y - (rect.height / 2) &&
        this-> y + (this-> height / 2) < rect.y + (rect.height / 2))
        {
            return true;
        }
        else{
            return false;
    }
}