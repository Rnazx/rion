//include the main function
#include<iostream>
#include<cstring>
using namespace std;
int main(){
string name;

cout<<"What is your name? "<<endl;
getline(cin,name);
cout<<" Hey!!!"<<name<<" Have a good day!!?"<<endl;
float b,h,A;//declare the variables
cout<<"Enter the base of the triangle : "<<endl;
cin>>b;
cout<<"Enter the height of the triangle: "<<endl;
cin>>h;
A=b*h/2;
cout<<" The area of the triangle is : "<<A<<" square units"<<endl;//display the output
return 0;
}


