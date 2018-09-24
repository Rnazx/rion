#include<iostream>
using namespace std;                                  //Including library.

	int func(int a, int b){                          //function that has two parameters.
		if(a>b){
		 return a;
      }
		else {
		return b;
      }
}

//Driver function
int main(){
	
	int c,d ;                                                //Declaring variables
	
		cout<< "Let the two numbers be ";                  //Ask the user for two numbers.
		cin >>c >>d ;
		cout<<"The larger of the two numbers "<<c<< " and " <<d<<" is "<<                       //Tell user the bigger number.
		 func(c,d) <<endl;                               //Call function for numbers as arguments.
		
return 0;
}
