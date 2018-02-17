#include<iostream>
#include<fstream>
#include"doctor.h"
#include <string>
#include"department.h"
using namespace std;

int main()
{

		doctor *docptr;		
	string ss,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13;
	ifstream fin("mydata.csv");
	vector<doctor*> mydoctor;

	int count=0;
	while(!fin.eof())
	{
	ss=s2=s3=s4=s5=s6=s7=s8=s9=s10=s11=s12=s13="";
	docptr=new doctor;
	mydoctor.push_back(docptr);
	getline(fin,s13,',');
	getline(fin,ss,',');
	getline(fin,s2,',');
	getline(fin,s3,',');
	getline(fin,s4,',');
	getline(fin,s5,',');
	getline(fin,s6,',');
	getline(fin,s7,',');
	getline(fin,s8,',');
	getline(fin,s9,',');
	getline(fin,s10,',');
	getline(fin,s11,',');
	getline(fin,s12,'\n');
	docptr->setName(s13);
	docptr->setF_name(ss);
	docptr->setAddress(s2);
	docptr->setNIC(s3);
	docptr->setContact(s4);
	docptr->setAge(s5);
	docptr->setGender(s6);
	docptr->setdob(s7);
	docptr->setcity(s8);
	docptr->setnationality(s9);
	docptr->setemail(s10);
	docptr->setdepartment(s11);
	docptr->setspecialization(s12);
	docptr->details();
	cout<<endl;
	count++;
	}
	string depart;
	Department de;
	cout<<"Enter Department Name:";
	cin>>depart;
	de.setdepartname(depart);
	depart="";
	cout<<"The Doctors Working in "<<de.getdepartname()<<"are:\n";
for(int i=0;i<count;i++)
{
	depart=de.getdepartname();
	if(depart==docptr->getdepartment())
	{
		docptr->details();
	}
}
}
