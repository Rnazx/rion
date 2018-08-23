//include the main function
#include<iostream>
#include<cstring>
using namespace std;
int main(){
string name;

cout<<"What is your name? "<<endl;
getline(cin,name);
cout<<" Hey!!!"<<name<<" How are you doing!!?"<<endl;
//define the variables
float days,weeks,years;
//display the output
cout<<"Enter the number of days to be converted into weeks and years: "<<endl;
cin>>days;
weeks=days/7;
years=days/365;
cout<<"The number of weeks in "<<days<<" days is "<<weeks<<endl;
cout<<"The number of years in "<<days<<" days is "<<years<<endl;
return 0;
}

//end
