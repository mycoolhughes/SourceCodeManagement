#include <iostream>
#include <iomanip>

using namespace std;

float average(int i1, int i2, int i3);

int main()
{
	int num1 = 0 , num2 = 0, num3 = 0;
	cout << "\nThis program calculates the average of three numbers." << endl;
	cout << "\nFirst number: "; cin >> num1;
	cout << "\nSecond number: "; cin >> num2;
	cout << "\nThird number: "; cin >> num3;

	float a = average(num1, num2, num3);

	cout << setprecision(2) << fixed;
	cout << "\nThe average is " << a << endl;

	return 0;
}

float average(int num1, int num2, int num3)
{
	float average = ((num1 + num2 + num3) / 3.00f);
	return average;
}