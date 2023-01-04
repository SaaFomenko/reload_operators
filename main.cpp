#include <iostream>
#include "fraction.h"
#include "userin.h"

int main()
{
	const int num_fraction = 2;
	int numerator = 0;
	int denominator = 0;

	std::string msg_numerator = "Введите числитель дроби ";
	std::string msg_denominator = "Введите знаменатель дроби ";
	std::string msg_numerator1 = msg_numerator + "1: ";
	std::string msg_denominator1 = msg_denominator + "1: ";

	userIn(numerator, msg_numerator1);
	userIn(denominator, msg_denominator1);

	try
	{
		Fraction fraction1(numerator, denominator);

		std::string msg_numerator2 = msg_numerator + "2: ";
		std::string msg_denominator2 = msg_denominator + "2: ";
  
		userIn(numerator, msg_numerator2);
		userIn(denominator, msg_denominator2);

		Fraction fraction2(numerator, denominator);

		std::cout << fraction1.getNumerator() << "/" <<
			fraction1.getDenominator() << " + " << 
			fraction2.getNumerator() << "/" << fraction2.getDenominator();
			Fraction result = fraction1 + fraction2;
			std::cout << " = " << result.getNumerator() << "/" << 
			result.getDenominator() << std::endl;

		std::cout << fraction1.getNumerator() << "/" <<
			fraction1.getDenominator() << " - " << 
			fraction2.getNumerator() << "/" << fraction2.getDenominator();
			result = fraction1 - fraction2;
			std::cout << " = " << result.getNumerator() << "/" << 
			result.getDenominator() << std::endl;

		std::cout << fraction1.getNumerator() << "/" <<
			fraction1.getDenominator() << " * " << 
			fraction2.getNumerator() << "/" << fraction2.getDenominator();
			result = fraction1 * fraction2;
			std::cout << " = " << result.getNumerator() << "/" << 
			result.getDenominator() << std::endl;

		std::cout << fraction1.getNumerator() << "/" <<
			fraction1.getDenominator() << " / " << 
			fraction2.getNumerator() << "/" << fraction2.getDenominator();
			result = fraction1 / fraction2;
			std::cout << " = " << result.getNumerator() << "/" << 
			result.getDenominator() << std::endl;

		std::cout << "++" << fraction1.getNumerator() << "/" <<
			fraction1.getDenominator() << " * " << 
			fraction2.getNumerator() << "/" << fraction2.getDenominator();
			result = ++fraction1 * fraction2;
			std::cout << " = " << result.getNumerator() << "/" << 
			result.getDenominator() << std::endl;

		std::cout << "Значение дроби 1: " << fraction1.getNumerator() <<
			"/" << fraction1.getDenominator() << std::endl;

		std::cout << fraction1.getNumerator() << "/" <<
			fraction1.getDenominator() << "-- * " << 
			fraction2.getNumerator() << "/" << fraction2.getDenominator();
			result = fraction1-- * fraction2;
			std::cout << " = " << result.getNumerator() << "/" << 
			result.getDenominator() << std::endl;

		std::cout << "Значение дроби 1: " << fraction1.getNumerator() <<
			"/" << fraction1.getDenominator() << std::endl;
	}
	catch (std::string err)
	{
		std::cout << err << std::endl;
	}

	return 0;
}
