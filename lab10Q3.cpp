/*Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.*/
#include<iostream>
using namespace std;
//Define a class rectangle

	class rectangle {

	int l,b;


	public :

	void assi (int, int);

	int area()
        {
	    return l*b;
	    }

	int peri()
        {
            return 2*(l+b);
        }


	};


	void rectangle :: assi (int x, int y) {


	l = x;

	b = y;

	}






	int main () {


	int l1, b1, l2, b2;

	cout<<"Enter the length of the first rectangle ";

	cin>>l1;

	cout<<endl;

	cout<<"Enter the breadth of the first rectangle ";

	cin>>b1;

	cout<<endl;

	rectangle r1, r2;

	r1.assi (l1, b1);

	cout<<"The area of the first rectangle is "<<r1.area()<<endl;

	cout<<"The perimeter of the first rectangle is "<<r1.peri()<<endl;



	cout<<"\n\n*******************************************************************************************\n\n\n";



	cout<<"Enter the length of the second rectangle ";

	cin>>l2;

	cout<<endl;

	cout<<"Enter the breadth of the second rectangle ";

	cin>>b2;

	cout<<endl;



	r2.assi (l2, b2);

	cout<<"The area of the second rectangle is "<<r2.area()<<endl;

	cout<<"The perimeter of the second rectangle is "<<r2.peri()<<endl;



	cout<<endl;



	if (r1.area() > r2.area())
        {

            cout<<"The first rectangle has a greater area. "<<endl;

        }
    else if(r1.area()==r2.area())
        {
            cout<<"The areas are equal "<<endl;

        }


	else
        {
            cout<<"The second rectangle has a greater area. "<<endl;
        }




	if (r1.peri() > r2.peri())
        {

            cout<<"The first rectangle has a greater perimeter. "<<endl;

        }
    else if(r1.peri()==r2.peri())
        {
            cout<<"The perimeters are equal "<<endl;

        }

	else {
            cout<<"The second rectangle has a greater perimeter. "<<endl;
        }







	}
