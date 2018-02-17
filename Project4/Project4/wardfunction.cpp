#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<set>
#include"ward.h"
using namespace std;
//function to set ward details
void ward::setdetails()
{
	ward *wardptr;
	int i;
	string s1, s2, s3, s4, s5, s6, s7;
	ifstream fin("mydata(1).csv");

	vector<ward*> myward;
	string astring;
	string jk, kl, mit;
	cout << "enter number of lines ";
	int count = 0;
	while (!fin.eof())
	{
		s1 = s2 = s3 = s4 = s5 = s6 = "";
		wardptr = new ward;
		myward.push_back(wardptr);
		getline(fin, s7, ',');
		getline(fin, s1, ',');
		getline(fin, s2, ',');
		getline(fin, s3, ',');
		getline(fin, s4, ',');
		getline(fin, s5, ',');
		getline(fin, s6, '\n');
		wardptr->bedsfree(s5);
		wardptr->nodoc(s3);
		wardptr->setnobeds(s2);
		wardptr->setnobedsocc(s4);
		wardptr->setnopat(s1);
		wardptr->setstaff(s6);
		wardptr->setward(s7);
		wardptr->details();
		cout << endl;
		count++;
	}
	fin.close();
	ofstream fout("mydata(1).csv");
	cout << count << endl;
	char asd;
	cout << "enter\n1.To change details\n2.To view ward details\n";
	cin >> asd;
	cout << "input the name of ward you want to edit:";
	cin >> jk;
	for (int i = 0; i < count; i++)
	{
		kl = myward[i]->getward();
		if (jk == kl)
		{
			char key;
			cout << "Enter\n1.To change no of beds\n2.To change beds free\n3.To change beds occupied\n4.To change staff\n5.To change no of patients\n6.To change no of doc\n7.To change name of ward:";
			cin >> key;
			switch (key)
			{
			case '1':
			{
				cout << "Enter new value :";
				cin >> mit;
				myward[i]->setnobeds(mit);
				break;
			}
			case '2':
			{
				cout << "Enter new value :";
				cin >> mit;
				myward[i]->bedsfree(mit);
				break;
			}
			case '3':
			{
				cout << "Enter new value :";
				cin >> mit;
				myward[i]->setnobedsocc(mit);
				break;
			}
			case '4':
			{
				cout << "Enter new value :";
				cin >> mit;
				myward[i]->setstaff(mit);
				break;
			}
			case '5':
			{
				cout << "Enter new value :";
				cin >> mit;
				myward[i]->setnopat(mit);
				break;
			}
			case '6':
			{
				cout << "Enter new value :";
				cin >> mit;
				myward[i]->nodoc(mit);
				break;
			}
			case '7':
			{
				cout << "Enter new Name :";
				string mystring;
				cout << "enter the new value:";
				cin >> mystring;
				myward[i]->setward(mystring);
				break;
			}
			}

			myward[i]->details();

		}

		fout << myward[i]->getward() << "," << myward[i]->getnobeds() << "," << myward[i]->getnobedsocc() << "," << myward[i]->gedsfree() << "," << myward[i]->godoc() << "," << myward[i]->getnopat() << "," << myward[i]->getstaff();
		if (i < count - 1)
		{
			fout << endl;
		}

		system("PAUSE");

	}
}
//function to set ward data
void ward::datadet()
{
					
	ward *wardptr;
	int i;
	string s1,s2,s3,s4,s5,s6,s7;
	ifstream fin("mydata(1).csv");

	vector<ward*> myward;
	string astring;
	string jk,kl,mit;
	cout<<"enter number of lines ";
	int count=0;
	while(!fin.eof())
	{
		s1=s2=s3=s4=s5=s6="";
	wardptr=new ward;
	myward.push_back(wardptr);
	getline(fin,s7,',');
	getline(fin,s1,',');
	getline(fin,s2,',');
	getline(fin,s3,',');
	getline(fin,s4,',');
	getline(fin,s5,',');
	getline(fin,s6,'\n');
	wardptr->bedsfree(s5);
	wardptr->nodoc(s3);
	wardptr->setnobeds(s2);
	wardptr->setnobedsocc(s4);
	wardptr->setnopat(s1);
	wardptr->setstaff(s6);
	wardptr->setward(s7);
	wardptr->details();
	cout<<endl;
	count++;
	}
	fin.close();
	ofstream fout("mydata(1).csv");
						for( i=0;i<myward.size();i++)
					{
						myward[i]->details();
						cout<<"\n";
						fout<<myward[i]->getward()<<","<<myward[i]->getnobeds()<<","<<myward[i]->getnobedsocc()<<","<<myward[i]->gedsfree()<<","<<myward[i]->godoc()<<","<<myward[i]->getnopat()<<","<<myward[i]->getstaff();
						if(i<count-1)
						{
							fout<<endl;
						}
					}}
