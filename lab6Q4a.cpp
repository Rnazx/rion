 #include<iostream> 
using namespace std;      //Including library

	int func(int a, int b){           // function that has two parameters.
		if (a<b){
		return a;
		}
		else {
		return b;
		}
	}
//Driver function 
int main(){
	int c,d;         //Declaring variables
		cout << "Give the two numbers to get the lesser of them " ;         //Ask for the two numbers 
		 cin >>c >>d;
		cout << "The smaller of " <<c <<" and " <<d <<" is "             //Tell the user the smaller number is
		<< func (c,d) <<endl;                               //Call the functions for the numbers as arguments 

return 0;
}