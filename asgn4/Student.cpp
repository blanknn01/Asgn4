#include "Student.h"
template<typename T>
Student<T>::Student()
{
	name_of_s = "name";
	ID = 12345678;
	age = 0;
	course = new Course();
	activities = new T();
}
template<typename T>
Student<T>::Student(std::string name_of_s, int ID, int age, Course* course, T* activities)
{
	this->name_of_s = name_of_s;
	this->ID = ID;
	this->course = course;
	this->activities = activities;
}
template<typename T>
std::string Student<T>::getNameOfS()
{
	return name_of_s;
}
template<typename T>
void Student<T>::setName(std::string name_of_s)
{
	this->name_of_s = name_of_s;
}
template<typename T>
 int Student<T>::getID()
{
	return ID;
}

 template<typename T>
 void Student<T>::setID(int ID)
 {
	 this->ID = ID;
 }

template<typename T>
 int Student<T>::getAge()
{
	return age;
}

 template<typename T>
 void Student<T>::setAge(int age)
 {
	 this->age = age;
 }

template<typename T>
T* Student<T>::getT()
{
	return this;
}
template<typename T>
bool Student<T>::operator==(const Student& other)
{
	if (this->getAge() == other.getAge())
	{
		return true;
	}
	return false;
}
template<typename T>
std::ostream& operator<<(std::ostream& os, const Student<T>& st)
{
	std::string str = "Name        ID           Age           Courses      Activity";
	std::string str2 = "____________________________________________________________________________________";
	os << str << std::endl << str2 << st.getNameOfS() << "        " << st.getAge();
	return os;
}
template<typename T>
std::istream& operator>>(std::istream& in, Student<T>& st)
{
	std::string name;
	in >> name;
	int id;
	in >> id;
	int agE;
	in >> agE;
	std::string cname;
	in >> cname;
	st.getNameOfS(name);
	st.setID(id);
	st.setAge(agE);
	st.course->getNameOfCourse(cname);
	return in;
}

