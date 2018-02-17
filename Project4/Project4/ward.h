#ifndef WARD_H
#define WARD_H
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<set>

using namespace std;

class ward
{
	protected:
		string sward,NoofBeds,BedsOccupied,BedsFree,NoofDoctors,NoofPatients,StaffWorking;
	public:
		ward()
		{
			NoofBeds,BedsOccupied,BedsFree,NoofDoctors,NoofPatients,StaffWorking="";
		}
		string getward()
		{
			return sward;
		}
		void setward(string a)
		{
			sward=a;
			}	
			
		void setnobeds(string a)
		{
			NoofBeds=a;
			}
		void setnobedsocc(string a)
		{
			BedsOccupied=a;
			}
		void bedsfree(string a)
		{
			BedsFree=a;
			}
		void nodoc(string a)
		{
			NoofDoctors=a;
			}
		void setnopat(string a)
		{
			NoofPatients=a;
			}
		void setstaff(string a)
		{
			StaffWorking=a;
			}

			
		string getnobeds()
		{
			return NoofBeds;
			}
		string getnobedsocc()
		{
			return BedsOccupied;
			}
		string gedsfree()
		{
			return BedsFree;
			}
		string godoc()
		{
			return NoofDoctors;
			}
		string getnopat()
		{
			return NoofPatients;
			}
		string getstaff()
		{
			return StaffWorking;
			}
		void details()
		{
			cout<<"ward:"<<sward<<endl<<"staff:"<<StaffWorking<<endl<<"Pat:"<<NoofPatients<<endl<<"Doc:"<<NoofDoctors<<endl<<"Beds:"<<BedsFree<<endl<<"bedsoc:"<<BedsOccupied<<endl<<"nobeds:"<<NoofBeds<<endl;
		}																
	void setdetails();
	void datadet();
};
#endif
