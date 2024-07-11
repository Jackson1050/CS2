//Jackson Hill
//CS2Mod2Classwork
//7/11/2024

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
private:

	int year;
	int month;
	int day;

public:

	int getYear() const;
	int getMonth() const;
	int getDay() const;

	void setYear(int y);
	void setMonth(int m);
	void setDay(int d);
};

int Date::getYear() const
{
	return year;
}

int Date::getMonth() const
{
	return month;
}

int Date::getDay() const
{
	return day;
}

void Date::setYear(int y)
{
	year = y;
}

void Date::setMonth(int m)
{
	month = m;
}

void Date::setDay(int d)
{
	day = d;
}

class Assignment
{

private:

	string name;
	string dueDate;
	int pointsPossible;
	int pointsEarned;

public:

	string getName() const;
	string getDueDate() const;
	int getPointsPossible() const;
	int getPointsEarned() const;

	void setName(string n);
	void setDueDate(string dd);
	void setPointsPossible(int pp);
	void setPointsEarned(int pe);

};

string Assignment::getName() const
{
	return name;
}

string Assignment::getDueDate() const
{
	return dueDate;
}

int Assignment::getPointsPossible() const
{
	return pointsPossible;
}

int Assignment::getPointsEarned() const
{
	return pointsEarned;
}

void Assignment::setName(string n)
{
	name = n;
}

void Assignment::setDueDate(string dd)
{
	dueDate = dd;
}

void Assignment::setPointsPossible(int pp)
{
	pointsPossible = pp;
}

void Assignment::setPointsEarned(int pe)
{
	pointsEarned = pe;
}

class Student
{
	
private:

	string firstName;
	string lastName;
	string emailAddress;
	string address;
	int idNumber;
	int phoneNumber;
	vector <Assignment> assignments;

public:

	string getFirstName() const;
	string getLastName() const;
	string getEmail() const;
	int getIDNo() const;

	void setFirstName(string fn);
	void setLastName(string ln);
	void setEmail(string em);
	void setIDNo(int idn);

	string getSummaryString(string firstName, string lastName, string emailAddress, int idNumber) const;
	int calculateGrade();


};

string Student::getFirstName() const
{
	return firstName;
}

string Student::getLastName() const
{
	return lastName;
}

string Student::getEmail() const
{
	return emailAddress;
}

int Student::getIDNo() const
{
	return idNumber;
}

void Student::setFirstName(string fn)
{
	firstName = fn;
}

void Student::setLastName(string ln)
{
	lastName = ln;
}

void Student::setEmail(string em)
{

	emailAddress = em;
}

void Student::setIDNo(int idn)
{

	idNumber = idn;
}

string Student::getSummaryString(string firstName, string lastName, string emailAddress, int idNumber) const
{
	string temp = to_string(idNumber);
	string summaryString = firstName + " " + lastName + " " + emailAddress + " " + temp;
	return summaryString;
	
}




int main()
{
	return 0;
}