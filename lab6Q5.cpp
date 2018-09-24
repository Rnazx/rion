#include<iostream>
using namespace std;             //Including library.

	int func(int a, int b, int&c){         //Write a function that has two parameters and a reference.
		if(c==1){
		//Give their sum.
		int sum = a + b;
		return sum;
		}
		if(c==2){
		     //Give maximum.
		if(a>b){
		return a;
		}
		else {
		return b;}
		}
 		if(c==3){
           //Give minimum.
		if (a<b){
		return a;
		}
		else {
		return b;}
		}
	}

//Driver function.
int main(){
	int x,y,operation;
		cout<< "Let the two numbers be ";    //Ask the user for two numbers.
		cin >>x >>y;
        cout<<"Which operation do you want to perform?"<<endl            //Ask the user for the operation of choice.
		<<"For sum type 1"<<endl
		<<"For maximum between two numbers type 2" <<endl
		<<"For minimum between two numbers type 3"<<endl;
		cin>>operation;
		cout<<"The value of opertation choosen on the numbers " 		<<x<< " and " <<y<<" is "<<          //Tell user the desired value
        func(x,y,operation) <<endl;             //Call function for numbers as arguments.
		
return 0;
}
