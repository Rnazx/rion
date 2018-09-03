#include<iostream>//q4
#include<cstring>
#include<stdlib.h>
using namespace std;
int main(){
string name;

cout<<"What is your name? "<<endl;
getline(cin,name);
cout<<" Hey!"<<name<<" How are you doing!!?"<<endl;
int i,n;
i=0;
cout<<" Enter n \n";
cin>>n;

while (i<n){
cout<<i<<endl;
i++;}
return 0;
}

