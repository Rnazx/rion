//q21
#include<iostream>
#include<cstring>
using namespace std;
int main(){
string name;

cout<<"What is your name? "<<endl;
getline(cin,name);
cout<<" Hey!!!"<<name<<" How are you doing!!?"<<endl;
int u;
float a1,a2,a3,a4;//dclare the variables
                                            //write the conditions 
cout<<" Enter the number of units\n";
cin>>u;
a1=u*0.5;
a2=(u-50)*0.75+25;
a3=(u-150)*1.2+100;
a4=(u-250)*1.5+220+0.2*((u-250)*1.5+220);


if(u<=50){
cout<<"The net electricity bill is "<<a1<<endl;
}
else if(u>50&&u<=150){
cout<<"The net electricity bill is "<<a2<<endl;
}
else if(u>150&&u<=250){
cout<<"The net electricity bill is "<<a3<<endl;
}
else {
cout<<"The net electricity bill is "<<a4<<endl;
}
return 0;
}







