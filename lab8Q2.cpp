//Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)

//include the library
#include<iostream>
using namespace std;

//write the function which finds the max of the array

int maxf(int arr[]){
	int max=arr[0];
	for (int i=0;i<7;i++){
		if (arr[i]>=max)
			max=arr[i];
	}
	return max;
}

//write a function to find the minimum of the array elements

int minf(int arr[]){
	int min=arr[0];
	for (int i=0;i<7;i++){
		if (arr[i]<=min)
			min=arr[i];
	}
	return min;
}

//write a function to find the mean of the array

float meanf(int arr[]){
	float sum=0;
	for (int i=0;i<7;i++){
		sum+=arr[i];
	}
	return sum/7;
}

//to find the median of arr
//we have to sort array
int meadf(int arr[]){
	cout <<"Sorted array: [";
	int sortarr[7];
	int big=maxf(arr), min=minf(arr);
	for (int j=0; j<7; j++){
		if (j==0){                                 //first element of sorted array is always minimum
			sortarr[j]=min;
			cout<<min;
			}
		else{
			for (int i=0;i<7;i++){
				if (arr[i]<big && arr[i]>sortarr[j-1])        //this condition makes sure that the element is greater than jth smallest value
					big=arr[i];
			}
			min=big;
			big=maxf(arr);
			sortarr[j]=min;
			cout <<","<<min;
		}
	}
	cout <<"]"<<endl;;
	return sortarr[3];
}

//to find the frequency of an element in array

void modf(int arr[]){
	int count, n;
	for (n=0;n<7;n++){
		count=0;
		for (int i=0;i<7;i++){
			if (arr[i]==arr[n])
				count++;
		}
		cout<<"The frequency of "<<arr[n]<<" in the array is: "<<count<<endl;
	}
}

//dewfine the main function
int main(){
	int arr[7]={6,27,8,19,35,40,7};
	cout <<"Array: [6,27,8,19,35,40,7]"<<endl;
	cout <<"Max: "<<maxf(arr)<<endl;
	cout <<"Min: "<<minf(arr)<<endl;
	cout <<"Mean: "<<meanf(arr)<<endl;
	cout <<"Median: "<<meadf(arr)<<endl;
	cout <<"Frequency table: "<<endl;
	modf(arr);
	return 1;
}