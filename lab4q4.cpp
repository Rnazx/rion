//include the main function
#include<iostream>
#include<cstring>
using namespace std;
int main(){
string name;

cout<<"What is your name? "<<endl;
getline(cin,name);
cout<<" Hey!!!"<<name<<" WADUP!!?"<<endl;
float a,b,c;
cout<<" Enter the first angle in degrees "<<endl;
cin>>a;
cout<<" Enter the second angle in degrees "<<endl;
cin>>b;
c=180-a-b;
cout<<" The third angle of the triangle is "<<c<<endl;
return 0;
}
