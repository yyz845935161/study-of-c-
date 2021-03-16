#include"Person.h"

Person::Person(int age, string name)
{
	this->name = name;
	this->age = age;
}

void Person::show()
{
	cout << "ÐÕÃû" << this->name << "\tÄêÁä" << this->age << endl;
}