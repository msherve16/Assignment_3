//////////////////
//Morgan Sherve
//Assignment 3 # 9.11
/////////////////////

#include <iostream>
using namespace std;

class EvenNumber
{
public:
	int value, newValue;
	EvenNumber()
	{
		value = 0;
	}
	EvenNumber(int newValue)
	{
		value = newValue;
	}

	int getValue()
	{
		return value;
	}

	int getNext()
	{
		return value += 2;
	}

	int getPrevious ()
	{
		return value -= 2;
	}

};


int main()
{
	EvenNumber number1(16);

	cout << "The next even number is: " << number1.getNext() << endl;
	cout << "The previous even number is: " << number1.getPrevious() << endl;

	return 0;
}
