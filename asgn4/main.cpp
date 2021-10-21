#include<iostream>
#include"Course.h"
#include"ACM.h"
#include"IEEE.h"
#include<map>
#include<set>
#include"Student.h"	

int main()
{
	Course course;
	IEEE ieee;
	Student<IEEE> student("Nurik",12345687,20,new Course(),new IEEE());
	std::cout << student.getAge();

}

