#ifndef DOCTOR_H
#define DOCTOR_H
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include <cstdlib>
#include <iomanip>
#include<limits>
#include"general.h"
#include"patient.h"
using namespace std;
class doctor :virtual public general, public Patient
{
protected:
	string department, specialization, pass, date, time;
	int id, patid;
public:
	doctor()
	{
		name, address, fathername, cnic, nationality, contactnum, city, gender, emailaddress, dob, age = "";
	}
	string getdepartment()
	{
		return department;
	}
	string getspecialization()
	{
		return specialization;
	}
	void setdepartment(string a)
	{
		department = a;
	}
	void setspecialization(string a)
	{
		specialization = a;
	}
	void setappointment1(string a, string b)
	{
		date = a;
		time = b;
	}
	string getappointment()
	{
		return date, time;
	}
	string getName()
	{
		return name;
	}
	string getF_name()
	{
		return fathername;
	}
	string getcnic()
	{
		return cnic;
	}
	string getcontact()
	{
		return contactnum;
	}
	string getage()
	{
		return age;
	}
	string getgender()
	{
		return gender;
	}
	string getdob()
	{
		return dob;
	}
	string getaddress()
	{
		return address;
	}
	string getnationality()
	{
		return nationality;
	}
	string getcity()
	{
		return city;
	}
	string getemail()
	{
		return emailaddress;
	}
	void setName(string a)
	{
		name = a;
	}

	void setF_name(string a)
	{
		fathername = a;
	}
	void setAddress(string a)
	{
		address = a;
	}
	void setNIC(string a)
	{
		cnic = a;
	}
	void setContact(string a)
	{
		contactnum = a;
	}
	void setAge(string a)
	{
		age = a;
	}
	void setGender(string a)
	{
		gender = a;
	}
	void setcity(string a)
	{
		city = a;
	}
	void setemail(string a)
	{
		emailaddress = a;
	}
	void setnationality(string a)
	{
		nationality = a;
	}
	void setdob(string a)
	{
		dob = a;
	}
	void details()
	{
		cout << "Name: " << name << endl << "Father Name: " << fathername << endl << "Address :" << address << endl << "NIC :" << cnic << endl << "Conatact:" << contactnum << endl
			<< "Age: " << age << endl << "Gender:" << gender << endl << "DOB: " << dob << endl << "Nationality: " << nationality << endl << "city:" << city << endl
			<< "Email:" << emailaddress << endl << "Department:" << department << endl << "Specialization:" << specialization << endl;

	}


	void edit();
	void display(int argc);
	void patientdetail();
	void password();
	void setappointment();
};
#endif