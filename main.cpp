#include <iostream>
#include <conio.h>
#include <string>
#include "calculator.h"



using namespace std;
namespace calculator

std::string left_value;
std::string right_value;

int main() 
{




	char type;
	int x, y = 0;

	while (x != 0, x--);
	{
		cout << "Enter in your " << y << " operation.(First Number (+,-,*,/,^) Second Number)" << endl;
		cin >> left_value >> type >> right_value;

		switch(type)
		{
		case '+':
			total = add(left_value, right_value);
			cout << left_value << " + " << right_value << "= " << total << endl;
			break;
		case'-':
			total = subtract(left_value, right_value);
			cout << left_value << " - " << right_value << "= " << total << endl;
			break;
		case'/':
			total = divide(left_value, right_value);
			cout << left_value << " / " << right_value << "= " << total << endl;
			break;
		case'*':
			total = multiply(left_value, right_value);
			cout << left_value << " * " << right_value << "= " << total << endl;
			break;
		case'^':
			total = power(left_value, right_value);
			cout << left_value<< " ^ " << right_value << "= " << total << endl;
			break;

		}

	}












}