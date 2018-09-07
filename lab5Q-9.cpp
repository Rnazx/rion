#include <iostream>
using namespace std;                  //adding library
int main()
{
    int n, sum = 0;                   //declaring variable
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {      //conditions
    sum += i;
}
    cout << "Sum = " << sum;          //checks code
    return 0;
}