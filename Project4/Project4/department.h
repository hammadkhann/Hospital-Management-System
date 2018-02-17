#include<iostream>
#include<string>
#include<array>
#include<vector>
#include"doctor.h"
#include"Patient.h"
#include"general.h"
#include"ward.h"
using namespace std;
class Department
{
private:
		
		string Noofwards,DepartName;
		
public:
	
	ward *wardd;
	doctor *docptr;
	Patient *patptr;
	void setnoward(string s1)
	{
		Noofwards = s1;
	}
	void setdepartname(string s2)
	{
		DepartName = s2;
	}
	string getdepartname()
	{
	return DepartName;}
	void patientdet();
	void doctordet();
	void warddet();
	void departmentdetails()
{	
	cout<<"Department Name:"<<DepartName<<"No of Wards:"<<Noofwards;
	cout<<"\nNOW PATIENT DETAILS ......";
	patientdet();
	cout<<"\nNOW DOCTOR DETAILS.......";
	doctordet();
	cout<<"\nNOW WARD DETAILS........";
	warddet();
	
}
};
