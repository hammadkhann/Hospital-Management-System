#ifndef PATIENT_H
#define PATIENT_H
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
#include<windows.h>
#include<limits>
#include "general.h"
using namespace std;
class Patient:virtual public general
{
  protected:
  string Date,Date_2,B_group,Disease,Doctor,Ward,Id,Day,Total,Appointment,Time;
  int ftotal;
  public:
  	Patient()
		{
			name,address,fathername,cnic,nationality,contactnum,city,gender,emailaddress,dob,martialstatus,age,Date,Date_2,B_group,Disease,Doctor,Ward,Id,Day,Total,Appointment,Time="";
		}
		void setTotal(string a)
		{
			Total=a;
			}	
		string getTotal()
		{
			return Total;
		}
		void setDay(string a)
		{
			Day=a;
			}	
		string getDay()
		{
			return Day;
		}
		void setId(string a)
		{
			Id=a;
			}	
		string getId()
		{
			return Id;
		}
		void setName(string a)
		{
			name=a;
			}	
		string getName()
		{
			return name;
		}
		void setF_name(string a)
		{
			fathername=a;
			}
		string getF_name()
		{
		return fathername;
		}
		void setAddress(string a)
		{
			address=a;
			}
		string getAddress()
		{
		return address;
		}
			
		void setNIC(string a)
		{
			cnic=a;
			}
		string getNIC()
		{
		return cnic;
		}	
		void setContact(string a)
		{
			contactnum=a;
			}
		string getContact()
		{
		return contactnum;
		}
		void setAge(string a)
		{
			age=a;
			}
		string getAge()
		{
		return age;
		}	
		void setGender(string a)
		{
			gender=a;
			}
		string getGender()
		{
		return gender;
		}	
		void setNationality(string a)
		{
			nationality=a;
			}
		string getNationality()
		{
		return nationality;
		}
		void setCity(string a)
		{
			city=a;
			}
		string getCity()
		{
		return city;
		}
		void setEmail(string a)
		{
			emailaddress=a;
			}
		string getEmail()
		{
		return emailaddress;
		}
		void setMartialstatus(string a)
		{
			martialstatus=a;
			}
		string getMartialstatus()
		{
		return martialstatus;
		}
		void setDob(string a)
		{
			dob=a;
			}
		string getDob()
		{
		return dob;
		}
		void setDate(string a)
		{
			Date=a;
			}
		string getDate()
		{
		return Date;
		}	
			void setDate_2(string a)
		{
			Date_2=a;
			}
		string getDate_2()
		{
		return Date_2;
		}	
		void setB_group(string a)
		{
			B_group=a;
			}
		string getB_group()
		{
		return B_group;
		}	
		void setDisease(string a)
		{
			Disease=a;
			}
		string getDisease()
		{
		return Disease;
		}
		void setDoctor(string a)
		{
			Doctor=a;
			}
		string getDoctor()
		{
		return Doctor;
		}
		void setWard(string a)
		{
			Ward=a;
			}
		string getWard()
		{
		return Ward;
		}
		void setAppointment(string a)
		{
			Appointment=a;
			}
		string getAppointment()
		{
		return Appointment;
		}
		void setTime(string a)
		{
			Time=a;
			}
		string getTime()
		{
		return Time;
		}
			void details()
		{
			cout<<"ID: "<<Id<<endl<<"Name: "<<name<<endl<<"Father Name: "<<fathername<<endl<<"Address :"<<address<<endl<<"NIC :"<<cnic<<endl<<"Conatct :"<<contactnum<<endl
			<<"Age: "<<age<<endl<<"Gender:"<<gender<<endl<<"Nationality:"<<nationality<<endl<<"City:"<<city<<endl<<"Email address:"<<emailaddress<<endl<<
			"Martial Status:"<<martialstatus<<endl<<"Date of Birth:"<<dob<<endl<<"Arrival Date: "<<Date<<endl<<"Departure Date: "<<Date_2<<endl<<"Blood Group: "<<B_group<<endl<<
			"Disease :"<<Disease<<endl<<"Doctor :"<<Doctor<<endl<<"Ward :"<<Ward<<endl<<"Days :"<<Day<<endl<<"Total Ammount :"<<Total<<endl<<"Appointment :"<<Appointment<<endl
			<<"Time :"<<Time<<endl;
																		}		
  void editdata();
  void displaydeta(int argc);
  void report(int argc2);
  void Billing();
  void password();
  void setappointment1();	
};
#endif