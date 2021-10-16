#pragma once
#include<iostream>
#include<string>
class Course
{
private:
	std::string name_of_course;
	int number_of_students;
	std::string lecturer;
public:
	Course();
	Course(std::string name_of_course, int number_of_students, std::string lecturer);
	std::string getNameOfCourse() const;
	int getNumberOfStudents() const;
	std::string getLecturer() const;
	void setNameOfCourse(std::string name_of_course);
	void setNumberOfStudents(int number_of_students);
	void setLecturer(std::string lecturer);
};

