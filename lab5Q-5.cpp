#include<iostream>//q4
#include<cstring>
using namespace std;
int main(){
string name;

cout<<"What is your name? "<<endl;
getline(cin,name);
cout<<" Hey!"<<name<<" How are you doing!!?"<<endl;
int a;
cout<<" Enter the number \n";
cin>>a;
 if(a%5==0&&a%11==0){
cout<<" The number is divisible by both 5 and by 11 \n";}
else if(a%5==0){
cout<<" The number is divisible by 5 \n";}
else if(a%11==0){
cout<<" The number is divisible by 11\n";}

else{
cout<<" The number is divisible neither by 5 nor by 11 \n";
}
return 0;
}
