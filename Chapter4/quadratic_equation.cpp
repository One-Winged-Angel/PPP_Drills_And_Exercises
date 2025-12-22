#include "../std_lib_facilities.h"
#include "cmath"
using namespace std;

void quad_equation(double a, double b, double c)
{
	double x_1{ 0 };
	double x_2{ 0 };
	x_1 = ((-b + sqrt((b * b) - (4 * a * c))) / (2*a));
	x_2 = ((-b - sqrt((b * b) - (4 * a * c))) / (2 * a));
	cout << "x is " << -x_1 << " and x is " << -x_2 << endl;
}

int main()
{
	cout << "Consider your quadratic equation in the form \(ax^{2}+bx+c=0\)\n";
	double a, b, c;
	cout << "What is the coefficient of x squared?\n";
	cin >> a;
	cout << "What is the coefficient of x?\n";
	cin >> b;
	cout << "What is the constant?\n";
	cin >> c;

	quad_equation(a, b, c);






	return 0;
}