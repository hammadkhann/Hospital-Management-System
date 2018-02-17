#include"Header.h"
using namespace std;
//function to add a doctor in db
void management::adddoctor()
{
	management manager;
	string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11;
	ifstream fin("doctor.csv");
	vector<doctor*> mydoctor;
	doctor *doc;
	int count = 0;
	while (!fin.eof())
	{
		s1 = s2 = s3 = s4 = s5 = s6 = s7 = s8 = s9 = s10 = s11 = "";
		doc = new doctor;
		mydoctor.push_back(doc);
		getline(fin, s11, ',');
		getline(fin, s1, ',');
		getline(fin, s2, ',');
		getline(fin, s3, ',');
		getline(fin, s4, ',');
		getline(fin, s5, ',');
		getline(fin, s6, ',');
		getline(fin, s7, ',');
		getline(fin, s8, ',');
		getline(fin, s9, ',');
		getline(fin, s10, '\n');
		doc->setName(s11);
		doc->setF_name(s1);
		doc->setAddress(s2);
		doc->setNIC(s3);
		doc->setContact(s4);
		doc->setAge(s5);
		doc->setGender(s6);
		doc->setdob(s7);
		doc->setcity(s8);
		doc->setnationality(s9);
		doc->setemail(s10);
		doc->details();
		cout << endl;
		count++;
	}
	fin.close();
		ofstream fout("doctor.csv", ios::app);
		doctor *doc1;
		doc1= manager.addnewdoc();
		mydoctor.push_back(doc1);
		fout << endl;
		fout << doc1->getName() << "," << doc1->getF_name() << "," << doc1->getaddress() << "," << doc1->getcnic() << "," << doc1->getcontact() << "," << doc1->getage() << "," << doc1->getgender() << "," << doc1->getdob() << endl;
		
}
