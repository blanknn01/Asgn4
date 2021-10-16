#include "Course.h"

Course::Course()
{
    name_of_course = "Course1";
    number_of_students = 0;
    lecturer = "lecturer";
}

Course::Course(std::string name_of_course, int number_of_students, std::string lecturer)
{
    this->name_of_course = name_of_course;
    this->number_of_students = number_of_students;
    this->lecturer = lecturer;
}

std::string Course::getNameOfCourse() const
{
    return name_of_course;
}

int Course::getNumberOfStudents() const
{
    return number_of_students;
}

std::string Course::getLecturer() const
{
    return lecturer;
}

void Course::setNameOfCourse(std::string name_of_cource)
{
    this->name_of_course = name_of_cource;
}

void Course::setNumberOfStudents(int number_of_students)
{
    this->number_of_students = number_of_students;
}

void Course::setLecturer(std::string lecturer)
{
    this->lecturer = lecturer;
}
