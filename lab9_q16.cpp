#include<iostream>



using namespace std;




	int main () {

	int j;
	
	char str[20];

	char *p = str;

	
	cout << "Input about 10 characters of string\n";
	
	cin >> str;

	for (j = 0; *(p+j) != '\0'; j++) {}

	

	
	for (int i = 0; i<j; i++) {

	cout<<p+(j-i)<<endl;

	}


	}

	


