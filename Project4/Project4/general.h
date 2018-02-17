#ifndef GENERAL_H
#define GENERAL_H
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include <cstdlib>
#include <iomanip>
#include<limits>
using namespace std;
class general
{
 protected:
 string name,address,fathername,cnic,nationality,contactnum,city,gender,emailaddress,dob,martialstatus,age;
 public:
 general()
 {

}	
 general(string s1,string s2,string s3,string s4,string s5,string s6,string s7,string s8,string s9,string s10,string s11,string s12)
 {
 	name=s1;fathername=s2;address=s3;cnic=s4;nationality=s5;contactnum=s6;city=s7;gender=s8;emailaddress=s9;dob=s10;martialstatus=s11;age=s12;
 	
 }
	
};

#endif