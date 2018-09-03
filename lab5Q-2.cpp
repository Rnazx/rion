/* 19 percentage calculation*/
//include the main function
#include<iostream>
#include<cstring>
using namespace std;
int main(){
string name;

	cout<<"What is your name? "<<endl;
	getline(cin,name);
	cout<<" Hey!!!"<<name<<" All the best!"<<endl;
	int m1,m2,m3,m4,m5,m6;
	float p;
	cout<<" Enter marks in english "<<endl;
	cin>>m1;
	cout<<" Enter marks in hindi "<<endl;
	cin>>m2;
	cout<<" Enter marks in physics "<<endl;
	cin>>m3;
	cout<<" Enter marks in chemistry "<<endl;
	cin>>m4;
	cout<<" Enter marks in mathematics "<<endl;
	cin>>m5;
	cout<<" Enter marks in biology "<<endl;
	cin>>m6;
	p=(m1+m2+m3+m4+m5+m6)/6;
	cout<<" Your percentage is "<<p<<endl;
	if(m1||m2||m3||m4||m5||m6>100){
	cout<<" ARE YOU DRUNK? "<<endl;
	}
	else if(p>=90){
	cout<<"Grade A"<<endl;
	}
	else if(p>=80 and p<90){
	cout<<"Grade B"<<endl;
	}
	else if(p>=70 and p<80){
	cout<<"Grade C"<<endl;
	}
	else if(p>=60 and p<70){
	cout<<"Grade D"<<endl;
	}
	else if(p>=40 and p<60){
	cout<<"Grade E"<<endl;
	}
	else{
	cout<<"Grade F"<<endl;
	}	
	return 0;
	}
