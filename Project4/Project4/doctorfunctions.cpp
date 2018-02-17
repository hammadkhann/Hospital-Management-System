#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include <cstdlib>
#include <iomanip>
#include<limits>
#include"doctor.h"
#include"patient.h"
using namespace std;
//function to display doctor details
void doctor::display (int argc)
 {
    string line1, csvItem1;
    ifstream myfile1 ("doctor.csv");
    int lineNumber1 = 0;
    int lineNumberSought1 = argc;  
    if (myfile1.is_open()) 
	{
        while (getline(myfile1,line1))
		 {
            lineNumber1++;
            if(lineNumber1 == lineNumberSought1) 
			{
                istringstream myline1(line1);
                while(getline(myline1, csvItem1, ','))
			    {
                    cout << csvItem1<< endl;
                }
            }
        }
        myfile1.close();
    }
}
//function to edit doctor details
void doctor::edit()

{
	doctor *docptr;		
	string ss,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13;
	ifstream fin("doctor.csv");
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
 
 fin.close();
 ofstream fout("doctor.csv");

     int y;
	cout << "1.Name"<<endl<<"2.Fathername"<<endl<<"3.Cnic"<<endl<<"4.Conctactnum:"<<endl<<"5.Age"<<endl<<"6.city"<<endl
    <<"7.Nationality"<<endl<<"8.Address"<<endl<<"9.DOB"<<endl<<"10.Email"<<endl<<"11.Gender"<<endl<<"12.Department"<<endl<<"13.Specialization:"<<endl;
	cout<<"select option:";
	cin>>y;
	string jk,kl;
    int idd;
    int number = 0;
		switch(y)
	{
		   case 1:
		cout << "Enter id:";
		cin>>idd;
			 	
		if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else 
			{    
			    if(idd<=count)
			    {
			    	
			    cout<<"Input the name of doctor you want to edit:";
			    cin>>jk;
			    kl=mydoctor[idd-1]->getName();
			    if(jk==kl)
			    {
				string mystring;
				cout<<"Enter new name:";
				cin>>mystring;
				mydoctor[idd-1]->setName(mystring);
				mydoctor[idd-1]->details();
			    }
	         	}
			   else 
			   break;
			   
			
			cin.ignore();
	        cin.get();
			}
		   break;

			
				case 2:
			
				cout << "Enter id:";
				cin>>idd;
		if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		{   
		  if(idd<=count)
		  {
		  	cout<<"Input f.name you want to edit:";
			cin>>jk;
		
			kl=mydoctor[idd-1]->getF_name();
			if(jk==kl)
			{
				string mystring;
				cout<<"Enter new name:";
				cin>>mystring;
				mydoctor[idd-1]->setF_name(mystring);
				mydoctor[idd-1]->details();
			}
		
		  }
		  	else
			break;
		  	cin.ignore();
	        cin.get();
		
		}
		break;
		
	        case 3:
	
			cout << "Enter id:";
			cin>>idd;	
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		 {
		 	if(idd<=count)
		  {
		 			cout<<"Input CNIC you want to edit:";
			cin>>jk;
		
			kl=mydoctor[idd-1]->getcnic();
			if(jk==kl)
			{
				string mystring;
				cout<<"Enter new number:";
				cin>>mystring;
				mydoctor[idd-1]->setNIC(mystring);
				mydoctor[idd-1]->details();
	    	
			}
			 
		  }
		   else
		   break;
		  	cin.ignore();
	        cin.get();
		
			 
		 }
		
		   break;
	
		case 4:  
	      	
		cout << "Enter id:";
		cin>>idd;	
		if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		{
			if(idd<=count)
			{
			cout<<"Input Contactnumber you want to edit:";
			cin>>jk;
		
			kl=mydoctor[idd-1]->getcontact();
			if(jk==kl)
			{
				string mystring;
				cout<<"Enter new number:";
				cin>>mystring;
				mydoctor[idd-1]->setContact(mystring);
				mydoctor[idd-1]->details();
			}
			
			}
			else 
			break;
			cin.ignore();
	        cin.get();
		
		}	
		
			break;
		
			case 5:
			
		cout << "Enter id:";
		cin>>idd;
		if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		{
			if(idd<=count)
			{
			cout<<"Input age you want to edit:";
			cin>>jk;
		
			kl=mydoctor[idd-1]->getage();
			if(jk==kl)
			{
				string mystring;
				cout<<"Enter new Age:";
				cin>>mystring;
				mydoctor[idd-1]->setAge(mystring);
				mydoctor[idd-1]->details();
			}
		
			}
			else
			break;
			cin.ignore();
	        cin.get();
		
			
		}
	   	break;
		
		     case 6:
		   
			   	
				cout << "Enter id:";
				cin>>idd;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
			else
			{
				if(idd<=count)
	{
				cout<<"Input gender you want to edit:";
			    cin>>jk;
		        kl=mydoctor[idd-1]->getgender();
		       	if(jk==kl)
			    {
				string mystring;
				cout<<"Enter new Gender:";
				cin>>mystring;
				mydoctor[idd-1]->setGender(mystring);
				mydoctor[idd-1]->details();
		        }
	}
	           else
	           break;
	        cin.ignore();
	        cin.get();
	           
			}
			
		
			break;
		
				case 7:
		        cout << "Enter id:";
				cin>>idd;
		if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		{
			if(idd<=count)
			{
					cout<<"Input DOB you want to edit:";
			    cin>>jk;
			
			kl=mydoctor[idd-1]->getdob();
			if(jk==kl)
			{
				string mystring;
				cout<<"Enter new DOB:";
				cin>>mystring;
				mydoctor[idd-1]->setdob(mystring);
				mydoctor[idd-1]->details();
		
			}
			}
			  else
	           break;
	        cin.ignore();
	        cin.get();
			
		}
				
			
		    break;
		
			case 8:
				cout << "Enter id:";
				cin>>idd;
				if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		{
			if(idd<=count)
			{
					cout<<"Input nationality you want to edit:";
			cin>>jk;
		
			kl=mydoctor[idd-1]->getnationality();
			if(jk==kl)
			{
				string mystring;
				cout<<"Enter new Nationlity:";
				cin>>mystring;
				mydoctor[idd-1]->setnationality(mystring);
				mydoctor[idd-1]->details();
	           
			} 
			}
			  else
	          break;
	        cin.ignore();
	        cin.get();
			
			
		}
			break;
		
				case 9:
			cout << "Enter id:";
			cin>>idd;
		if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		{
			if(idd<=count)
			{
				cout << "Enter id:";
				cin>>idd;
			
			cout<<"Input city you want to edit:";
			cin>>jk;
		
			kl=mydoctor[idd-1]->getcity();
			if(jk==kl)
			{
				string mystring;
				cout<<"Enter new city:";
				cin>>mystring;
				mydoctor[idd-1]->setcity(mystring);
				mydoctor[idd-1]->details();
			
			}
			}
			else
			break;
			cin.ignore();
	        cin.get();
			
		}
			break;
		
				case 10:
			    cout << "Enter id:";
				cin>>idd;
		if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		{
			if(idd<=count)
			{
					cout<<"Input email you want to edit:";
			    cin>>jk;
		
			kl=mydoctor[idd-1]->getemail();
			if(jk==kl)
			{
				string mystring;
				cout<<"Enter new email:";
				cin>>mystring;
				mydoctor[idd-1]->setemail(mystring);
			    mydoctor[idd-1]->details();
		
	     }
			}
			else
			break;
			cin.ignore();
	        cin.get();
			
		}
			
			break;
		
				case 11:
				cout << "Enter id:";
				cin>>idd;
		if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		{
			if(idd<=count)
			{
				cout<<"Input address  you want to edit:";
			    cin>>jk;
		
			kl=mydoctor[idd-1]->getaddress();
			if(jk==kl)
			{
				string mystring;
				cout<<"Enter new Address:";
				cin>>mystring;
				mydoctor[idd-1]->setAddress(mystring);
				mydoctor[idd-1]->details();
			}
			}
			else
			break;
			cin.ignore();
	        cin.get();
			
		}
			   	break;
		case 12:
				cout << "Enter id:";
				cin>>idd;
		if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		{
			if(idd<=count)
			{
			cout<<"Input Department you want to edit:";
			cin>>jk;
		
			kl=mydoctor[idd-1]->getdepartment();
			if(jk==kl)
			{
				string mystring;
				cout<<"Enter new department:";
				cin>>mystring;
				mydoctor[idd-1]->setdepartment(mystring);
				mydoctor[idd-1]->details();
		    
			}	
			}
			else
			break;
			cin.ignore();
	        cin.get();
			
		}
			break;
		
		case 13:
	    cout << "Enter id:";
		cin>>idd;
		if(!cin.good())
		{
			cout<<"wrong id."<<endl;
			cin.clear();
			 
		}
		else
		{
			if(idd<=count)
			{
			cout<<"Input specialization  you want to edit:";
			cin>>jk;
		
			kl=mydoctor[idd-1]->getspecialization();
			if(jk==kl)
			{
				string mystring;
				cout<<"Enter new specialization:";
				cin>>mystring;
				mydoctor[idd-1]->setspecialization(mystring);
				mydoctor[idd-1]->details();
			
	        }
			}
			else
			break;
			cin.ignore();
	        cin.get();
			
		}		
		break;
		  	
    }
    for(int i=0;i<count;i++)
    {
    fout<<mydoctor[i]->name<<","<<mydoctor[i]->fathername<<","<<mydoctor[i]->cnic<<","<<mydoctor[i]->contactnum<<","<<mydoctor[i]->age<<","<<mydoctor[i]->gender<<","<<mydoctor[i]->dob<<","<<mydoctor[i]->nationality<<","<<mydoctor[i]->city<<","<<mydoctor[i]->emailaddress<<","<<mydoctor[i]->address<<","<<mydoctor[i]->department<<","<<mydoctor[i]->specialization;
	if(i<count-1)
	{
		fout<<endl;
	}
	}
}

	//function to view patient details
void doctor::patientdetail()
 {   
 int s1;
 	Patient pat;
 	cout <<"Enter Patient id";
    cin>>s1;
 	pat.displaydeta(s1);
 }
 

//function to setappointment
 void doctor::setappointment()
 {
	 doctor *patptr;
	 string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19, s20, s21, s22, s23;
	 ifstream fin("patient.csv");
	 vector<doctor*> mydoctor;
	 int count = -2;
	 while (!fin.eof())
	 {
		 s1 = s2 = s3 = s4 = s5 = s6 = s7 = s8 = s9 = s10 = s11 = s12 = s13 = s14 = s15 = s16 = s17 = s18 = s19 = s20 = s21 = s22 = s23 = "";
		 patptr = new doctor;
		 mydoctor.push_back(patptr);
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
		 patptr->setappointment1(s22, s23);
		 patptr->details();
		 cout << endl;
		 count++;
	 }
	 count++;
	 fin.close();
	 ofstream fout("patient.csv");

	 cout << "Enter patient id to set appointment" << endl;
	 cin >> patid;
	 string kl;
	 if (!cin.good())
	 {
		 cout << "wrong id." << endl;
		 cin.clear();
		
	 }
	 else
	 {
		 if (patid <= count)
		 {
			 cout << "Enter date:" << endl;
			 cin >> date;
			 cout << "Enter time:" << endl;
			 cin >> time;
			 kl = mydoctor[patid - 1]->getappointment();
			 string mystring;
			 mydoctor[patid - 1]->setappointment1(date, time);
			 mydoctor[patid - 1]->details();
		 }
		 else
			 cin.ignore();
		 cin.get();

	 }
	 for (int i = 0; i<count + 2; i++)
	 {

		 fout << mydoctor[i]->Id << "," << mydoctor[i]->name << "," << mydoctor[i]->fathername << "," << mydoctor[i]->address << "," << mydoctor[i]->cnic << ","
			 << mydoctor[i]->contactnum << "," << mydoctor[i]->age << "," << mydoctor[i]->gender << "," << mydoctor[i]->nationality << ","
			 << mydoctor[i]->city << "," << mydoctor[i]->emailaddress << "," << mydoctor[i]->martialstatus << "," << mydoctor[i]->dob << ","
			 << mydoctor[i]->Date << "," << mydoctor[i]->Date_2 << "," << mydoctor[i]->B_group << "," << mydoctor[i]->Disease << "," << mydoctor[i]->Doctor << ","
			 << mydoctor[i]->Ward << "," << mydoctor[i]->Day << "," << mydoctor[i]->Total << "," << mydoctor[i]->date << "," << mydoctor[i]->time << "," << endl;


	 }

	 cout << "Patient ID:" << patid << endl;
	 cout << "Date:" << date << endl;
	 cout << "Time" << time << endl;
	 cout << "Appointment seccucesfully done." << endl;

 }


