///////////
//Morgan Sherve
//June 2, 2014
//Assingment 3: Exercise 9.2
////////////////

#include <iostream>
using namespace std;

class Fan
{
public: 
	int Speed;
	bool On;
	double Radius;

	Fan();
	Fan (int Speed, bool On, double Radius)
	{}
	int getSpeed();
	bool getOn();
	double getRadius();

	void setSpeed();
	void setOn();
	void SetRadius(double);
};
	
	Fan::Fan()
		{Speed = 1;
		On = false;
		Radius = 5;}
	int Fan::getSpeed()
		{ return Speed;}
	bool Fan::getOn()
		{return On;}
	double Fan:: getRadius()
		{return Radius;}

	void setSpeed();
	void setOn();
	void setRadius(double);

	
int main()
{
	Fan fan1 (3, true, 10.0);
	Fan fan2 (2, false, 5.0);

	cout << "Speed is: " << fan1.getSpeed()<< endl;
	cout << "Fan is on: " << fan1.getOn() << endl;
	cout << "Radius of Fan is: " << fan1.getRadius()<< endl;

	cout << "Speed is: " << fan2.getSpeed() << endl;
	cout << "Fan is on: " << fan2.getOn() << endl;
	cout << "Radius of Fan is: " << fan2.getRadius() << endl;
	
	return 0;
}

	
