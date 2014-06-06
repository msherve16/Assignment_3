///////////////////////////////
//Morgan Sherve
//Assignment 3 #10.10
/////////////////////////////

#include <iostream>
using namespace std;

class myInteger
{
public:
	int value;
	bool even, odd, prime;

	myInteger()
	{ value = 2;}

	myInteger(int newValue)
	{
		value = newValue;
	}

	const int getValue()
		{ return value;}

	const bool isEven()
	{	if (value% 2 == 0);
		{even = true;}
		
		return even;}

	const bool isOdd()
	{
		if (value % 2 != 0)
			odd = true;
		return odd;
	}
	const bool isPrime()
	{
		for (int num=0; num < value; num--){ 
		if (value%num==0) 
			{ prime = false;}
		else 
			{ prime = true;}
		return prime;
	}

	static bool isEven(int)
	{	if (value% 2 == 0);
		{even = true;}
		
		return even;}

	static bool isOdd(int)
	{
		if (value % 2 != 0)
			odd = true;
		return odd;
	}
	
	static bool isPrime(int)
	{
		for (int num=0; num < value; num--){ 
		if (value%num==0) 
			{ prime = false;}
		else 
			{ prime = true;}
		return prime;
	}
		
	static bool isEven(const myInteger&)
	{	if (value% 2 == 0);
		{even = true;}
		
		return even;}

	static bool isOdd(const myInteger&)
	{
		if (value % 2 != 0)
			odd = true;
		return odd;
	}
	
	static bool isPrime(const myInteger&)
	{
		for (int num=0; num < value; num--){ 
		if (value%num==0) 
			{ prime = false;}
		else 
			{ prime = true;}
		return prime;
	}

	const bool equals (int)
	{
		if (value == 2)
			equals = true;
		return equals;
	}
	const bool equals (const myInteger&)
	{
		if (value == 2)
			equals = true;
		return equals;
	}

	static int parseInt (const string&)
	{
		 ostringstream m;
		 m << Number;
		 return m.str();
	}

};


int main()
{
	const int getValue();

	const bool isEven();
	const bool isOdd();
	const bool isPrime();
	
	static bool isPrime();
	static bool isEven();
	static bool isOdd();
	static bool isPrime();

	const bool equals();
	static int parseInt();

	return 0;
}