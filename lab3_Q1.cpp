//	Include the appropriate directories
#include<iostream>
using namespace std;
int main(){						// 	Write the main fucntion

/*	Declare 5 variables of different data types
	Intialise the 5 variables */
int a ;
a=5;
float b;
b=3.14;
double c;
c=6.93875;
bool d;
d=0;
char e;
e='R';


//	Print the 5 variables and print the sizes
cout<<"The integer is "<<a<<" and the size of the integer is "<<sizeof(a) << endl;
cout<<"The float is "<<b<<" and the size of the float is "<<sizeof(b)<< endl;
cout<<"The double is "<<c<<" and the size of the double is "<<sizeof(c)<< endl;
cout<<"The bool is "<<d<<" and the size of the bool is "<<sizeof(d)<< endl;
cout<<"The character is "<<e<<" and the size of the character is "<<sizeof(d)<< endl;
return 0;
}



