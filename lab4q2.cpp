//include the main function
#include<iostream>
#include<cstring>
using namespace std;
int main(){
string name;

cout<<"What is your name? "<<endl;
getline(cin,name);
cout<<" Hey!!!"<<name<<" Have a good day!!?"<<endl;
	float celsius,fahrenheit;                                                                                  //defining variables
	cout <<"Write your temperature in celsius  ";                          // assigning value of celsius for conversion
	cin >> celsius;
	fahrenheit =(celsius*9)/5+32;                                                                              // formula for conversion of temprature
        cout <<"Temperature conversion from celsius to fahrenheit is :"<<fahrenheit<<endl;

	return 0;
}
