#include "Course.h"
#include <iostream>
#include <string>
#include <array>

using namespace std;
 
// default constructor
Course::Course(const string& courseName, int limit)
{
    numberOfStudents = 0; // 0 students in course
    this->courseName = courseName; // course name 
    this->limit = limit; // limit of the course
    students = new string[limit]; // dynamic array size cap limit
}

// copying the contents of object to be used in another
Course::Course(const Course& course)
{
    numberOfStudents = course.numberOfStudents;
    courseName = course.courseName;
    limit = course.limit;
    students = new string[limit];
}

// destructor
Course::~Course()
{
    delete [] students;
}

// returns name of course as a string
string Course::GetCourseName() const
{
    return courseName;
}
// Adding a student
void Course::AddStudents(const string& name)
{
    // condition to fill array of students
    if (numberOfStudents >= limit)
    {
        string numberOfStudents_new[limit * 10];

        for (int i = 0; i < numberOfStudents; i++)
        {
            numberOfStudents_new[i] = students[i];
        }

        numberOfStudents++;
    }
        students[numberOfStudents] = name;
        numberOfStudents++;
}

// Dropping a student
void Course::DropStudents(const string& name)
{
    for (int i = 0; i < numberOfStudents; i++)
    {
        // testing to see if student droped and comparing it the list and
        // size of array to match number of students will decease the.
        if (students[i] == name)
        {
            for (int j = i; j < numberOfStudents; j++)
            {
                students[j] = students[j + 1];
            }
                numberOfStudents--;
        }
    }
}

// getting the students name
string* Course::GetStudents() const
{
    return students;
}

// getting the number of students 
int Course::GetNumberOfStudents() const
{
    return numberOfStudents;
}