#include "Human.h"

void Human::set()
{
	cout << "enter surname: " << endl;
	cin >> surname;
	cout << "enter name: " << endl;
	cin >> name;
	cout << "enter second name: " << endl;
	cin >> name2;
	cout << "enter age: " << endl;
	cin >> age;
}

void Human::PrintName()
{
	cout << "My name is " << name << " " << name2 << " " << surname << endl;
	cout << "I am " << age << " years old" << endl;
	cout << "I am Human";
}


Human::Human(const Human& a)
{
	this->age = a.age;
	this->name = a.name;
	this->name2 = a.name2;
	this->surname = a.surname;
}

void Boss::PrintName()
{
	Human::PrintName();
	cout << " and I am Boss" << endl;;
	cout << "I have " << number_of_workers << " number of workers";
}

void Boss::set()
{
	Human::set();
	cout << "how many do u have workers?" << endl;
	cin >> number_of_workers;

}

void Student::PrintName()
{
	Human::PrintName();
	cout << " and I am Student" << endl;
	if (on_lesson) {
		cout << "I am on lesson";
	}
	else {
		cout << "I am not on lesson";
	}
	cout << endl;

}

void Student::set()
{
	Human::set();
	cout << "enter 1 if u are on lesson and 0 if no " << endl;;
	cin >> on_lesson;
}