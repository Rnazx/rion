//include the main function
#include<iostream>
#include<cstring>
using namespace std;
int main(){
string name;

	cout<<"What is your name? "<<endl;
	getline(cin,name);
	cout<<" Hey!!!"<<name<<" WADUP!!?"<<endl;//
	int a1,a2;//declare the two variables
	cout<<"Enter the two numbers"<<endl;
	cin>>a1>>a2;

	if(a1>a2){ //write the condition
	cout<<"The first number "<<a1<<" is greater"<<endl;
	}
	else if(a1<a2){
	cout<<"The second number "<<a2<<" is greater"<<endl;
	}
	else{
	cout<<"The numbers are equal"<<endl;
	}
return 0;
}
