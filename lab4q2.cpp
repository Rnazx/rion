#include <iostream>                                                                                                 //including library
using namespace std;
int main()
{
	float celsius,fahrenheit;                                                                                  //defining variables
	cout <<"Write your temperature in celsius  ";                          // assigning value of celsius for conversion
	cin >> celsius;
	fahrenheit =(celsius*9)/5+32;                                                                              // formula for conversion of temprature
        cout <<"Temperature conversion from celsius to fahrenheit is :"<<fahrenheit<<endl;

	return 0;
}
