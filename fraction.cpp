#include "fraction.h"


Fraction::Fraction(int numerator, int denominator) :
	numerator_(numerator),
	denominator_(denominator)
{}

Fraction::~Fraction(){}

bool Fraction::operator==(Fraction& r_arg)
{
	if (denominator_ == r_arg.denominator_)
	{
		return numerator_ == r_arg.numerator_;
	}
	
	return 
		(numerator_ * r_arg.denominator_) == (r_arg.numerator_ * denominator_);
}

bool Fraction::operator!=(Fraction& r_arg)
{
	return !(*this == r_arg);
}

bool Fraction::operator<(Fraction& r_arg)
{
	if (denominator_ == r_arg.denominator_)
	{
		return numerator_ < r_arg.numerator_;
	}

	return 
		(numerator_ * r_arg.denominator_) < (r_arg.numerator_ * denominator_);
}

bool Fraction::operator>(Fraction& r_arg)
{
	return r_arg < *this;
}

bool Fraction::operator>=(Fraction& r_arg)
{
	return *this < r_arg;
}

bool Fraction::operator<=(Fraction& r_arg)
{
	return *this > r_arg;
}
