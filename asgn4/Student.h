#pragma once
#include<string>
#include<algorithm>
#include"Course.h"
#include"ACM.h"
#include "IEEE.h"
template<typename T>
class Student:public Course, public IEEE, public ACM
{
private:
	std::string name_of_s;
	int ID;
	int age;
	Course* course;
	T* activities;
public:
	Student();
	Student(std::string name_of_s, int ID, int age, Course* course, T* activities);
	friend std::ostream& operator<<(std::ostream& os, const Student& st);
	friend std::istream& operator>> (std::istream& in, Student<T>& st);
	std::string getNameOfS();
	void setName(std::string name_of_s);
	int getID();
	void setID(int ID);
	int getAge();
	void setAge(int age);
	T* getT();
	bool operator==(const Student& other);
};


