#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H

// class to generate Rectangle2D
class Rectangle2D
{
    private: 
        double x, y, width, height; // delacing vars to be private

    public: 
        Rectangle2D(); // no-arg constructor, creating rectangle, initialized as x = 0, y = 0, w = 0, h = 0.
        Rectangle2D(double, double, double, double); // creating a rectangle using giving values
        // get funcs
        double GetX()const; // returns x cord
        double GetY()const; // returns y cord
        double GetW()const; // returns width
        double GetH()const; // returns heigth
        double GetA()const; // returns area
        double GetP()const; // returns perimeter
        // set funcs
        void SetX(double const); // sets x cord
        void SetY(double const); // sets y cord
        void SetW(double const); // sets width
        void SetH(double const); // sets heigth
        // overlaps and contains funcs
        bool Contains(double, double); // returns t or f if point falls inside rectangle
        bool Contains(const Rectangle2D& rect); // returns t or f if a rectangle falls inside of a rectangle
        bool OverLaps(const Rectangle2D& rect); // returns t or f if a rectangle overlaps a rectangle


};
#endif