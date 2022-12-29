#include "fraction.h"


Fraction::Fraction(int numerator, int denominator) :
	numerator_(numerator),
	denominator_(denominator)
{
	setValid();
}

Fraction::~Fraction(){}

void Fraction::setValid()
{
	if (numerator_ == 0)
	{
		throw "Значение числителя не должно равняться 0.";
	}
	if (denominator_ == 0)
	{
		throw "Значение знаминателя не должно равняться 0";
	}
}

Fraction& Fraction::operator+(Fraction& r_arg)
{
	if (denominator_ == r_arg.denominator_)
	{
				numerator_ += r_arg.numerator_; 
		
		return *this;
	}

	numerator_ = numerator_ * r_arg.denominator_ + r_arg.numerator_ * 
		denominator_;
	denominator_ *= r_arg.denominator_;

	return *this;
}

Fraction& Fraction::operator-(Fraction& r_arg)
{
	if (denominator_ == r_arg.denominator_)
	{
				numerator_ -= r_arg.numerator_; 
		
		return *this;
	}

	numerator_ = numerator_ * r_arg.denominator_ - r_arg.numerator_ * 
		denominator_;
	denominator_ *= r_arg.denominator_;

	return *this;
}

Fraction& Fraction::operator*(Fraction& r_arg)
{
	numerator_ *= r_arg.numerator_;
	denominator_ *= r_arg.denominator_;

	return *this;
}

Fraction& Fraction::operator/(Fraction& r_arg)
{
			numerator_ *= r_arg.denominator_;
			denominator_*= r_arg.numerator_;
	return *this;
}

Fraction& Fraction::operator++()
{
	numerator_ += denominator_;
	
	return *this;
}

Fraction& Fraction::operator--()
{
	numerator_ -= denominator_;

	return *this;
}

Fraction Fraction::operator--(int)
{
	Fraction temp = *this;

	--(*this);

	return *this;
}

Fraction& Fraction::operator-()
{
	-numerator_;
	
	return *this;
}

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
	return !(*this < r_arg);
}

bool Fraction::operator<=(Fraction& r_arg)
{
	return !(*this > r_arg);
}
