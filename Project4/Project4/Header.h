#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include"doctor.h"
#include "general.h"
#include<string>
class management:virtual public general
{
public:
	doctor *doc;
	doctor* addnewdoc()
	{
		string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11;
		doc = new doctor;
		cout << "Fill the form below:" << endl;
		cout << "NAME:" << endl;
		cin >> s1;
		doc->setName(s1);
		cout << "FATHER NAME:" << endl;
		cin >> s2;
		doc->setF_name(s2);
		cout << "ADDRESS:" << endl;
		cin >> s3;
		doc->setAddress(s3);
		cout << "CNIC:" << endl;
		cin >> s4;
		doc->setNIC(s4);
		cout << "NATIONALITY:" << endl;
		cin >> s5;
		doc->setnationality(s5);
		cout << "DATE OF BIRTH";
		cin >> s6;
		doc->setdob(s6);
		cout << "GENDER:" << endl;
		cin >> s7;
		doc->setGender(s7);

		cout << "CITY:" << endl;
		cin >> s8;
		doc->setcity(s8);
		cout << "AGE:" << endl;
		cin >> s9;
		doc->setAge(s9);
		cout << "EMAIL ADDRESS:" << endl;
		cin >> s10;
		doc->setemail(s10);

		cout << "CONTACT NUMBER:" << endl;
		cin >> s11;
		doc->setContact(s11);
		return doc;

	}
	void adddoctor();

};
#endif