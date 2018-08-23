//include the main function
#include<iostream>
#include<cstring>
using namespace std;
int main(){
string name;

cout<<"What is your name? "<<endl;
getline(cin,name);
cout<<" Hey!!!"<<name<<" WADUP!!?"<<endl;
float cml;
double ml=cml/100,kml=cml/100000; //declare the variables//initialize the variables


//print to enter the variables
cout<<" Enter the length in centimeters "<<endl;
cin>>cml;
cout<<" The length in meters is "<<ml<<"meters"<<endl;
cout<<" The length in kilometers is "<<kml<<"kilometers"<<endl;
return 0;
}

