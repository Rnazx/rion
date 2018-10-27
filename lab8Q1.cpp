// Write a program to find sum of all elements of an array. (Use functions)


#include<iostream>
using namespace std;

//find sum of all array elements
int sum(int arr[]){
	int add;
	for (int i=0;i<5;i++){
		add+=arr[i];
	}
	return add;
}
         //main function

int main(){
	int arr[5]={2, 4, 6, 8, 10};
	cout <<"Sum of all the elements in the array is";
	cout <<sum(arr)<<endl;
	return 1;
}