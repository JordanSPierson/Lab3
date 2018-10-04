
//Lab3COSC2030.cpp 
//Jordan Pierson
// Lab 3 COSC2030
// October 3rd, 2018
// Numeric Errors Program

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int segmentOne(void);
int segmentTwo(void);
int segmentThree(void);
int segmentFour(void);
int segmentFive(void);
int segmentSevenEight(void);

int main()
{
	//segmentOne();
	//segmentTwo();
	//segmentThree();
	//segmentFour();
	//segmentFive();
	segmentSevenEight();
	system("pause");
}


//Segment One: Uses a 'short' to find overflow resulting from the sum 
//of consecutive integers from 1 to n
int segmentOne()
{
	short sum(0),
		prevSum(0),
		numI(0);
	 int n(0);
	cout << "Give a value for n:" << endl;
	cin >> n;
for (short i(0); i<=n; i++)
{
	prevSum = sum;
	sum = sum + i;
	numI = i;
	if (sum < prevSum)
	{
		//Overflow occurs
		break;
	}
}
cout << "The overflow occured at an n value of " << numI << ", and a sum of " 
<< prevSum << endl;
return 0;
}

// Segment Two: Same as Segment One but uses a 'long' to store the consecutive integers and the sum
int segmentTwo()
{
	long sum(0),
		prevSum(0),
		prevI(0);
	int n(0);
	cout << "Give a value for n:" << endl;
	cin >> n;
	for (long i(0); i <= n; i++)
	{
		prevSum = sum;
		sum = sum + i;
		if (sum < prevSum || prevI > i)
		{
			//Overflow occurs
			break;
		}
		prevI = i;
	}
	cout << "The overflow occured at an n value of " << prevI << ", and a sum of "
		<< prevSum << endl;
	return 0;
}

//Segment Three: Finds overflow using a 'long' in n factorial (n!)
int segmentThree()
{
	long product(0),
		prevProduct(0),
		prevI(0);
	int n(0);
	cout << "Give a value for n:" << endl;
	cin >> n;
	prevProduct = 1;
	for (long i = 1; i < n; i++)
	{
		product = prevProduct * i;
		if (prevProduct > product)
		{
			//overflow
			break;
		}
		prevProduct = product;
		prevI = i;
	}
	
	cout << "The overflow occured at an n value of " << prevI << ", and a product of "
		<< prevProduct << endl;
	return 0;
}

//Segment Four: Same as Segment Three but using a double to store the result
int segmentFour()
{
	double product(0),
		prevProduct(0),
		prevI(0);
	double n(0.0);
	cout << "Give a value for n:" << endl;
	cin >> n;
	prevProduct = 1;
	for (double i = 1; i < n; i++)
	{
		product = prevProduct * i;
		if (prevProduct > product)
		{
			//overflow
			break;
		}
		prevProduct = product;
		prevI = i;
	}

	cout << "The overflow occured at an n value of " << prevI << ", and a product of "
		<< prevProduct << endl;
	return 0;
}

//Demonstrates strange floating point behavior
int segmentFive()
{
	float n(0);
	cout << "Give a value for n:" << endl;
	cin >> n;
	float ratio;
	ratio = 1 / n;
	float copies;
	copies = ratio * n;
	cout << "The ratio of 1 / " << n << " is: " << ratio <<
		"\nThis ratio multiplied by " << n << " is: " << copies << endl;
	return 0;
}

//Same as Segment Five but with doubles instead of floats
int segmentSix()
{
	double n(0);
	cout << "Give a value for n:" << endl;
	cin >> n;
	double ratio;
	ratio = 1 / n;
	double copies;
	copies = ratio * n;
	cout << "The ratio of 1 / " << n << " is: " << ratio <<
		"\nThis ratio multiplied by " << n << " is: " << copies << endl;
	return n;
}

//Part 7. and 8. of the lab assigment
int segmentSevenEight()
{
	cout << "For an 'i' of type 'float':" << endl;
	for (float i = 3.4; i < 4.4; i += 0.2) 
	{ cout << "i = " << i << endl; }
	cout << "\nFor an 'i' of type 'double'" << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{ cout << "i = " << i << endl; }
	return 0;
}