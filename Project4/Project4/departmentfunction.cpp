#include<iostream>
#include<string>
#include<array>
#include<vector>
#include"doctor.h"
#include"Patient.h"
#include"general.h"
#include"ward.h"
#include"department.h"
using namespace std;
//function to view ward details
void Department::warddet()
{
	Department depart;
string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11;
	fstream fin("mydata.csv", ios::in);

	vector<ward*> myward;
	string astring;
	for (int i = 0; i < 1; i++)
		fin >> astring;
	cout << "enter number of lines ";
	int count = 0;
	while (!fin.eof())
	{
		s1 = s2 = s3 = s4 = s5 = s6 = "";
		depart.wardd = new ward;
		myward.push_back(depart.wardd);
		getline(fin, s7, ',');
		getline(fin, s1, ',');
		getline(fin, s2, ',');
		getline(fin, s3, ',');
		getline(fin, s4, ',');
		getline(fin, s5, ',');
		getline(fin, s6, '\n');
		depart.wardd->bedsfree(s5);
		depart.wardd->nodoc(s3);
		depart.wardd->setnobeds(s2);
		depart.wardd->setnobedsocc(s4);
		depart.wardd->setnopat(s1);
		depart.wardd->setstaff(s6);
		depart.wardd->setward(s7);
		depart.wardd->details();
		cout << endl;
		count++;
}}
//function to view doctor details
void Department::doctordet()
	{
		Department depart1;
		string ss,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13;
		ifstream fin("mydata.csv");
		vector<doctor*> mydoctor;
		int count = 0;
	while(!fin.eof())
	{
	ss=s2=s3=s4=s5=s6=s7=s8=s9=s10=s11=s12=s13="";
	depart1.docptr=new doctor;
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
	depart1.docptr->setName(s13);
	depart1.docptr->setF_name(ss);
	depart1.docptr->setAddress(s2);
	depart1.docptr->setNIC(s3);
	depart1.docptr->setContact(s4);
	depart1.docptr->setAge(s5);
	depart1.docptr->setGender(s6);
	depart1.docptr->setdob(s7);
	depart1.docptr->setcity(s8);
	depart1.docptr->setnationality(s9);
	depart1.docptr->setemail(s10);
	depart1.docptr->setdepartment(s11);
	depart1.docptr->setspecialization(s12);
	depart1.docptr->details();
	cout<<endl;
	count++;
	}


	}
	//function to view patient details
void Department::patientdet()		
{
	Department depart;
	string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21;
	ifstream fin("mydata.csv");
	vector<Patient*> mypatient;
	int count=0;
	while(!fin.eof())
	{
		s1=s2=s3=s4=s5=s6=s7=s8=s9=s10=s11=s12=s13=s14=s15=s16=s17=s18=s19=s20=s21="";
	patptr=new Patient;
	mypatient.push_back(patptr);
	getline(fin,s18,',');
	getline(fin,s11,',');
	getline(fin,s1,',');
	getline(fin,s2,',');
	getline(fin,s3,',');
	getline(fin,s4,',');
	getline(fin,s5,',');
	getline(fin,s6,',');
	getline(fin,s7,',');
	getline(fin,s8,',');
	getline(fin,s9,',');
	getline(fin,s10,',');
	getline(fin,s12,',');
	getline(fin,s13,',');
	getline(fin,s19,',');
	getline(fin,s14,',');
	getline(fin,s15,',');
	getline(fin,s16,',');
	getline(fin,s17,',');
	getline(fin,s20,',');
	getline(fin,s21,'\n');
	if(s11=="")
	break;
	depart.patptr->setId(s18);
	depart.patptr->setName(s11);
	depart.patptr->setF_name(s1);
	depart.patptr->setAddress(s2);
	depart.patptr->setNIC(s3);
	depart.patptr->setContact(s4);
	depart.patptr->setAge(s5);
	depart.patptr->setGender(s6);
	depart.patptr->setNationality(s7);
	depart.patptr->setCity(s8);
	depart.patptr->setEmail(s9);
	depart.patptr->setMartialstatus(s10);
	depart.patptr->setDob(s12);
	depart.patptr->setDate(s13);
	depart.patptr->setDate_2(s19);
	depart.patptr->setB_group(s14);
	depart.patptr->setDisease(s15);
	depart.patptr->setDoctor(s16);
	depart.patptr->setWard(s17);
	depart.patptr->setDay(s20);
	depart.patptr->setTotal(s21);
	depart.patptr->details();
	cout<<endl;
	count++;
	}}
	
	
