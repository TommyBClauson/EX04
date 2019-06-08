#ifndef COURSE_H
#define COURSE_H
#include <string>

using namespace std;

class Course
{
    private:
        string courseName; // name of the course
        string* students; // array of students who are taking the course, pointer "student" for the array
        int numberOfStudents; // number of students, default will be 0
        int limit; // max amount of students allowed in the course
    
    public: 
        Course(const string& courseName, int limit); // Default Constructor, creating course with max students and name
        Course(const Course&); // copy constructor
        ~Course(); // Destructor
        string GetCourseName() const; // returns course name
        void AddStudents(const string& name); // adds a new student to the course
        void DropStudents(const string& name); // drops a student from the course
        string* GetStudents() const; // returns array students name
        int GetNumberOfStudents() const; // returns amount of students for course

};
#endif