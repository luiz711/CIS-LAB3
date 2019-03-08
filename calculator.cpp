#include "calculator.h"
#include <conio.h>
#include <cmath>

using namespace std;
double answers;



	double calculator::add(double left_value, double right_value)
	{
	return left_value + right_value;
	}

	double calculator::subtract(double left_value, double right_value)
	{
		return left_value - right_value;
	}

	double calculator::multiply(double left_value, double right_value)
	{
		return left_value * right_value;
	}

	double calculator::divide(double left_value, double right_value)
	{
		return left_value / right_value;
	}

	double calculator::power(double left_value, double right_value)

	{
		return power(right_value, left_value);
	}



