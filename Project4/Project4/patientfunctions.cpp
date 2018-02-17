#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
#include<windows.h>
#include<limits>
#include"patient.h"

using namespace std;
//function to displaydeta of patient
void Patient:: displaydeta (int argc)
 {
    string line, csvItem;
    ifstream myfile ("patient.csv");
    int lineNumber = 0;
    int lineNumberSought =argc;  
    if (myfile.is_open()) {
        while (getline(myfile,line))
		 {
            lineNumber++;
            if(lineNumber == lineNumberSought) 
			{
                     istringstream myline(line);
                while(getline(myline, csvItem, ','))
			    {
                    cout << csvItem << endl;
                }
            }
        }
        myfile.close();
    }
}
//function to set billing for patient
void Patient::Billing()

{Patient *patptr;
	string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21;
	ifstream fin("patient.csv");
	vector<Patient*> mypatient;
	string kl;
	int count=-2;
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
	patptr->setId(s18);
	patptr->setName(s11);
	patptr->setF_name(s1);
	patptr->setAddress(s2);
	patptr->setNIC(s3);
	patptr->setContact(s4);
	patptr->setAge(s5);
	patptr->setGender(s6);
	patptr->setNationality(s7);
	patptr->setCity(s8);
	patptr->setEmail(s9);
	patptr->setMartialstatus(s10);
	patptr->setDob(s12);
	patptr->setDate(s13);
	patptr->setDate_2(s19);
	patptr->setB_group(s14);
	patptr->setDisease(s15);
	patptr->setDoctor(s16);
	patptr->setWard(s17);
	patptr->setDay(s20);
	patptr->setTotal(s21);
	patptr->details();
	cout<<endl;
	count++;
	}
	count++;
	fin.close();
	ofstream fout("patient.csv");
	cout<<count<<endl;
	int ID;
	cout <<"Enter patient id to calculate Bill"<<endl;
 	cin>>ID;
 	ID++;
 	char c;
 	int a=0,b=1,z=0;
		if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		{
			if(ID<=count)
			{					
			for(int i=0;i<count+2;i++)
		{ 
			mypatient[i]->ftotal=0;
				kl=mypatient[ID-1]->getDay();
				c=0;
				b=1;
				z=0;
				for(int j=kl.size()-1 ;j>=0;j-- )
                    	{
						
                    	c=kl[j];
  						a=c-48;
						a=a*b;
						b=b*10;
						mypatient[i]->ftotal=mypatient[i]->ftotal+a;                  
 		                   }
 		                   mypatient[i]->ftotal=mypatient[i]->ftotal*2500;
 		                   
 		             
	if(ID-1==i)
	{
		fout<<mypatient[i]->Id<<","<<mypatient[i]->name<<","<<mypatient[i]->fathername<<","<<mypatient[i]->address<<","<<mypatient[i]->cnic<<","
		<<mypatient[i]->contactnum<<","<<mypatient[i]->age<<","<<mypatient[i]->gender<<","<<mypatient[i]->nationality<<","
		<<mypatient[i]->city<<","<<mypatient[i]->emailaddress<<","<<mypatient[i]->martialstatus<<","<<mypatient[i]->dob<<","
		<<mypatient[i]->Date<<","<<mypatient[i]->Date_2<<","<<mypatient[i]->B_group<<","<<mypatient[i]->Disease<<","<<mypatient[i]->Doctor<<","
		<<mypatient[i]->Ward<<","<<mypatient[i]->Day<<","<<mypatient[i]->ftotal<<endl;
	}
	else
	{
	
			
		fout<<mypatient[i]->Id<<","<<mypatient[i]->name<<","<<mypatient[i]->fathername<<","<<mypatient[i]->address<<","<<mypatient[i]->cnic<<","
		<<mypatient[i]->contactnum<<","<<mypatient[i]->age<<","<<mypatient[i]->gender<<","<<mypatient[i]->nationality<<","
		<<mypatient[i]->city<<","<<mypatient[i]->emailaddress<<","<<mypatient[i]->martialstatus<<","<<mypatient[i]->dob<<","
		<<mypatient[i]->Date<<","<<mypatient[i]->Date_2<<","<<mypatient[i]->B_group<<","<<mypatient[i]->Disease<<","<<mypatient[i]->Doctor<<","
		<<mypatient[i]->Ward<<","<<mypatient[i]->Day<<","<<mypatient[i]->Total<<endl;
}
	}
	
		
			}
			
		}
cout<<"Bill Calculated";
	
} 
//function to view patient reports
void Patient::report(int argc2)
{string line2, csvItem2;
    ifstream myfile2 ("patient.csv");
    int lineNumber2 = 0;
    int lineNumberSought2 =argc2; 
	cout<<"1- Patient Name\n";
	cout<<"2- Test Name\n";
	cout<<"3- Test Result\n"; 
    if (myfile2.is_open()) {
        while (getline(myfile2,line2))
		 {
            lineNumber2++;
            if(lineNumber2 == lineNumberSought2) 
			{
                     istringstream myline2(line2);
                while(getline(myline2, csvItem2, ','))
			    {
                    cout << csvItem2 << endl;
                }
            }
        }
        myfile2.close();
    }
	
}
//function to editdata of patient
void Patient:: editdata ()
{	Patient *patptr;
	string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21;
	ifstream fin("patient.csv");
	vector<Patient*> mypatient;
	int count=-2;
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
	patptr->setId(s18);
	patptr->setName(s11);
	patptr->setF_name(s1);
	patptr->setAddress(s2);
	patptr->setNIC(s3);
	patptr->setContact(s4);
	patptr->setAge(s5);
	patptr->setGender(s6);
	patptr->setNationality(s7);
	patptr->setCity(s8);
	patptr->setEmail(s9);
	patptr->setMartialstatus(s10);
	patptr->setDob(s12);
	patptr->setDate(s13);
	patptr->setDate_2(s19);
	patptr->setB_group(s14);
	patptr->setDisease(s15);
	patptr->setDoctor(s16);
	patptr->setWard(s17);
	patptr->setDay(s20);
	patptr->setTotal(s21);
	patptr->details();
	cout<<endl;
	count++;
	}
	count++;
	fin.close();
	ofstream fout("patient.csv");
	int asd;
	cout << "1.Name\n2.Fathername\n3.Address\n4.Nic\n5.Contact\n6.Age\n7.Gender\n8.Nationality\n9.City\n10.Email\n11.MartialStatus\n12.Dob\n13.Arrival Date\n14.Discharge Date\n15.Blood Group\n16.Dieases\n17.Doctor\n18.Ward\n19.Daysadmitted\n20.Total Amount\n";
	cout << "select option:";
	cin>>asd;
		string jk,kl;
		int iid;
		int number = 0;
	switch(asd)
	{
		case 1:
		
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
			if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the name of Patient you want to edit:";
			cin>>jk;
			
			kl=mypatient[iid-1]->getName();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setName(mystring);
				mypatient[iid-1]->details();
				 }
			}
			else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
	         	
		    
			break;
			case 2:
		    	cout <<"Enter ID:";
			cin>>iid;
			iid++;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		{
			 if(iid<=count)
			    {
		
			cout<<"input the Father name of Patient you want to edit:";
			cin>>jk;
		
			kl=mypatient[iid-1]->getF_name();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setF_name(mystring);
				mypatient[iid-1]->details();
			}
		}
			else
			break;
			
			
			
			cin.ignore();
	        cin.get();
			}
		
			break;	
			case 3:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		{
		if(iid<=count)
			{
		
			cout<<"input the Address you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getAddress();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setAddress(mystring);
				mypatient[iid-1]->details();
			} 
			}
			else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			
			}
			break;
			case 4:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		{
			if(iid<=count)
			    {
			cout<<"input the NIC you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getNIC();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setNIC(mystring);
				mypatient[iid-1]->details();
			}
		}
		else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			break;
			case 5:
		    cout <<"Enter ID:";
			cin>>iid;
			iid++;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the contact number you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getContact();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setContact(mystring);
				mypatient[iid-1]->details();
			}
			}
			else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			break;
			case 6:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the Age you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getAge();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setAge(mystring);
				mypatient[iid-1]->details();
			}
			}
			else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			break;
			case 7:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the Gender you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getGender();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setGender(mystring);
				mypatient[iid-1]->details();
			}
			}
			else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			break;
			case 8:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the Nationality you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getNationality();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setNationality(mystring);
				mypatient[iid-1]->details();
			}
			}
			else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			break;
			case 9:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the City you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getCity();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setCity(mystring);
				mypatient[iid-1]->details();
		}
			}
			else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			
			break;
		
			case 10:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the Email Address you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getEmail();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setEmail(mystring);
				mypatient[iid-1]->details();
			}
			}
				else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			break;
			case 11:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
			if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the Martial Status you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getMartialstatus();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setMartialstatus(mystring);
				mypatient[iid-1]->details();
			}
			}
				else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			break;
			case 12:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
			if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the Date of Birth you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getDob();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setDob(mystring);
				mypatient[iid-1]->details();
			}
			}
				else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			
			break;
			
			case 13:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
			if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the Arrival Date you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getDate();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setDate(mystring);
				mypatient[iid-1]->details();
			}
			}
				else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			break;	
				case 14:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
			if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the Discharge Date you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getDate_2();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setDate_2(mystring);
				mypatient[iid-1]->details();
			}
			}
				else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			break;		
			
			case 15:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
			if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the Blood Group you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getB_group();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setB_group(mystring);
				mypatient[iid-1]->details();
			}
			}
				else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			break;
			case 16:
		    	cout <<"Enter ID:";
			cin>>iid;
			iid++;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the Disease you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getDisease();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setDisease(mystring);
				mypatient[iid-1]->details();
			}
			}
				else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			
			break;
			case 17:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the Doctor you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getDoctor();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setDoctor(mystring);
				mypatient[iid-1]->details();
			}
			}
				else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			break;		
			case 18:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the Ward you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getWard();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setWard(mystring);
				mypatient[iid-1]->details();
			}
			}
				else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			break;				
		case 19:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the Days you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getDay();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setDay(mystring);
				mypatient[iid-1]->details();
			}
			}
				else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			break;
				case 20:
			cout <<"Enter ID:";
			cin>>iid;
			iid++;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else 
			{    
			    if(iid<=count)
			    {
			cout<<"input the Total Ammount you want to Edit:";
			cin>>jk;
			kl=mypatient[iid-1]->getTotal();
			if(jk==kl)
			{
				string mystring;
				cout<<"enter the new value:";
				cin>>mystring;
				mypatient[iid-1]->setTotal(mystring);
				mypatient[iid-1]->details();
			}
			}
				else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
			break;					
	}
		for(int i=0;i<count+2;i++)
	{
			
		fout<<mypatient[i]->getId()<<","<<mypatient[i]->getName()<<","<<mypatient[i]->getF_name()<<","<<mypatient[i]->getAddress()<<","<<mypatient[i]->getNIC()<<","<<mypatient[i]->getContact()<<","<<mypatient[i]->getAge()<<","<<mypatient[i]->getGender()<<","<<mypatient[i]->getNationality()<<","<<mypatient[i]->getCity()<<","<<mypatient[i]->getEmail()<<","<<mypatient[i]->getMartialstatus()<<","<<mypatient[i]->getDob()<<","<<mypatient[i]->getDate()<<","<<mypatient[i]->getDate_2()<<","<<mypatient[i]->getB_group()<<","<<mypatient[i]->getDisease()<<","<<mypatient[i]->getDoctor()<<","<<mypatient[i]->getWard()<<","<<mypatient[i]->getDay()<<","<<mypatient[i]->getTotal()<<endl;

	
	}

	
}
//function to set appointment with doctor
void Patient::setappointment1()
{
	Patient *patptr;
	string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19, s20, s21, s22, s23;
	ifstream fin("patient.csv");
	vector<Patient*> mypatient;
	string kl;
	int count = -2;
	while (!fin.eof())
	{
		s1 = s2 = s3 = s4 = s5 = s6 = s7 = s8 = s9 = s10 = s11 = s12 = s13 = s14 = s15 = s16 = s17 = s18 = s19 = s20 = s21 = "";
		patptr = new Patient;
		mypatient.push_back(patptr);
		getline(fin, s18, ',');
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
		getline(fin, s10, ',');
		getline(fin, s12, ',');
		getline(fin, s13, ',');
		getline(fin, s19, ',');
		getline(fin, s14, ',');
		getline(fin, s15, ',');
		getline(fin, s16, ',');
		getline(fin, s17, ',');
		getline(fin, s20, ',');
		getline(fin, s21, ',');
		getline(fin, s22, ',');
		getline(fin, s23, '\n');
		if (s11 == "")
			break;
		patptr->setId(s18);
		patptr->setName(s11);
		patptr->setF_name(s1);
		patptr->setAddress(s2);
		patptr->setNIC(s3);
		patptr->setContact(s4);
		patptr->setAge(s5);
		patptr->setGender(s6);
		patptr->setNationality(s7);
		patptr->setCity(s8);
		patptr->setEmail(s9);
		patptr->setMartialstatus(s10);
		patptr->setDob(s12);
		patptr->setDate(s13);
		patptr->setDate_2(s19);
		patptr->setB_group(s14);
		patptr->setDisease(s15);
		patptr->setDoctor(s16);
		patptr->setWard(s17);
		patptr->setDay(s20);
		patptr->setTotal(s21);
		patptr->setAppointment(s22);
		patptr->setTime(s23);
		patptr->details();
		cout << endl;
		count++;
	}
	count++;
	fin.close();
	int iid; string jk;
	cout << "Enter ID:";
	cin >> iid;
	iid++;

	if (iid <= count)
	{
		cout << "input the Appointment you want to Edit:";
		cin >> jk;
		kl = mypatient[iid - 1]->getAppointment();
		if (jk == kl)
		{
			string mystring;
			cout << "enter the new value:";
			cin >> mystring;
			mypatient[iid - 1]->setAppointment(mystring);
			mypatient[iid - 1]->details();
		}
	}
}
