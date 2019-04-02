#include <iostream>
using namespace std;


int digitSum(int num)
{
	int sum = 0;

	if (num == 0)
	{
		return num;
	}

	sum += (num % 10) + digitSum(num / 10);

	return sum;
}



int main()
{
	cout << digitSum(125) << endl;		//Should be 8
	cout << digitSum(64) << endl;		//Should be 10
	cout << digitSum(12345) << endl;	//Should be 15
	cout << digitSum(246) << endl;		//Should be 12
	cout << digitSum(888) << endl;		//Should be 24
	cout << digitSum(0) << endl;		//Should be 0

	cout << digitSum(-66) << endl;
}
