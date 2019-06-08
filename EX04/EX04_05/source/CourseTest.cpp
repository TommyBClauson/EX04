#include "Course.h"
#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
    // creating course object, course name "CS_172" with a class limit of 12 students
    Course c1("CS_172", 12);

    // creating a copy of object
    Course c2(c1);

    // adding students to course object c1
    c1.AddStudents("Bob");
    c1.AddStudents("Tom");
    c1.AddStudents("John");
    c1.AddStudents("Morgan");

    string* students = c1.GetStudents();

    // outputting to screen students in course
    cout << "There are " << c1.GetNumberOfStudents() << " students taking " << c1.GetCourseName() << endl;
    cout << "The Students Names are: ";
    
    // loop to print names
    for (int i = 0; i < c1.GetNumberOfStudents(); i++)
    {
        cout << students[i] << " ";
    }
    cout << endl;

    // dropping students from course
    c1.DropStudents("Tom");

    // outputting students list after they have been dropped
    students = c1.GetStudents();

    // outputting students name and student count after dropping students
    cout << "\nAfter dropping some students, there are now " << c1.GetNumberOfStudents() << " students taking " << c1.GetCourseName() << endl;
    cout << "The Students Names are: ";

    // loop for printing students
    for (int i = 0; i < c1.GetNumberOfStudents(); i++)
    {
        cout << students[i] << " ";
    }

    // copying list
    students = c2.GetStudents();

    cout << endl;

    return 0;
}