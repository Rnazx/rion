#include <iostream>
using namespace std;              //Including library.

/*Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.*/
	char toUpper (char x){
		char y = char (int (x)-32);
		return y;
	}

/*Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.*/

	char toLower (char z){
		char v= char (int (z)+32);
		return v;
	}

/*Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value. */

int main (){
	char input;
	cout<<"Type a letter "<< endl;
 	cin>>input;
		if (int(input)>=65 && int(input)<=90){
			char a=toLower(input); 
				cout<<"This is an upper case letter"<< endl;
				cout<<"This letter in lower case is: "<<a<<endl;
		}

		else if (int(input)>=97 && int(input)<=122) {
			char b= toUpper(input); 
				cout<<"This is an lower case letter"<< endl;
				cout<<"This letter in UPPER case is: "<<b<<endl;
			}
		

return 0;
}
