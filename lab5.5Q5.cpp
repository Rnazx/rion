
#include <iostream>				// Pyramid Star Pattern								
using namespace std;                                                                //to print hollow sphere
       int main(){

             int n;                                                              //initalizing variable
                  cout<<"Enter the size of the pattern -"<<endl;                   //Entering size of pattern
                  cin>>n;

         
//print the number of rows
for(int i=1;i<=n;i++){
    //write a loop for printing spaces
	for(int j=1;j<=n-i;j++){
	cout<<" ";
	}
//print stars and write the condition
	for(int k=1;k<=2*i-1;k++){
	cout<<"*";
	}
	cout<<endl;
	}

return 0;
}
