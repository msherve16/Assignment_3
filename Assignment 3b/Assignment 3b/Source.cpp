///////////////////////////////
//Morgan Sherve
//Assignment 3: Exercise 9.6
//////////////////////////////

#include <iostream>
#include "QuadraticEquation.h"
using namespace std;

class QuadraticEquation
{
public:
	double a, b, c, a1, b1, c1;
	double discriminant, root1, root2;

	QuadraticEquation ()
		{a = 2;
		 b = 3;
		 c = 4;}

	double getA()
		{return a1;}
	double getB()
		{return b1;}
	double getC()
		{return c1;}

	void setA(double a1)
	{		;
		a = a1;}

	void setB(double b1)
	{		cout << "Please enter a value for b: " << endl;
		cin >> b;
		b = b1;}

	void setC(double c1)
	{		cout << "Please enter a value for c: " << endl;
		cin >> c;
		c = c1;}


	double getDiscriminant()
	{  const int newDiscriminant = 0;
		discriminant = b1*b1 - 4*a1*c1;
		if (discriminant < 0)
			{discriminant = newDiscriminant;}
		else 
			{discriminant = discriminant;}
		return discriminant;
	}

		

	double getRoot1()
	{
		if (discriminant > 0)
		{
			root1 = ((-1*b1) + sqrt (b1*b1 - 4*a1*c1))/(2*a1);
				return root1;
		}

		else if (discriminant = 0)
		{
			root1 = ((-1*b1) + sqrt (b1*b1 - 4*a1*c1))/(2*a1);
				return root1;
		}
		else
		{
			cout << "The equation has no real roots." << endl;
			return 0;
		}


	}

	double getRoot2()
	{
		if (discriminant > 0)
		{
			root2 = ((-1*b1) - sqrt (b1*b1 - 4*a1*c1))/(2*a1);
				return root2;
		}
		else
		{
			cout << "The equation has no real roots." << endl;
			return 0;
		}
	}
};

int main()
{
	double a, b, c;
	cout << "Please enter a value for a: " << endl;
	cin >> a;
	void setA();
	cout << "Please enter a value for b: " << endl;
	cin >> b;
	void setB();
	cout << "Please enter a value for c: " << endl;
	cin >> c;
	void setC();

	double getA();
	double getB();
	double getC();
	
	double getDiscriminant();
	double getRoot2();
	double getRoot1();

	return 0;

}