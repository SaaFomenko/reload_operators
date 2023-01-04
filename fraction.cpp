#include "fraction.h"


Fraction::Fraction(int numerator, int denominator) :
	numerator_(numerator),
	denominator_(denominator)
{
	setValid();
}

Fraction::~Fraction(){}

int Fraction::getNumerator()
{
	return numerator_;
}

int Fraction::getDenominator()
{
	return denominator_;
}

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

Fraction Fraction::operator+(Fraction& r_arg)
{
	int numerator = 0;
	int denominator = 0;

	if (denominator_ == r_arg.denominator_)
	{
				numerator = numerator_ + r_arg.numerator_; 
		
		return Fraction(numerator, denominator_);
	}

	numerator = numerator_ * r_arg.denominator_ + r_arg.numerator_ * 
		denominator_;
	denominator = denominator_ * r_arg.denominator_;

	return Fraction(numerator, denominator);
}

Fraction Fraction::operator-(Fraction& r_arg)
{
	int numerator = 0;
	int denominator = 0;

	if (denominator_ == r_arg.denominator_)
	{
				numerator = numerator_ - r_arg.numerator_; 
		
		return Fraction(numerator, denominator_);
	}

	numerator = numerator_ * r_arg.denominator_ - r_arg.numerator_ * 
		denominator_;
	denominator = denominator_ * r_arg.denominator_;

	return Fraction(numerator, denominator);
}

Fraction Fraction::operator*(Fraction& r_arg)
{
	int numerator = 0;
	int denominator = 0;

	if (numerator_ == r_arg.denominator_)
	{
		return Fraction(r_arg.numerator_, denominator_);
	}

	if (denominator_ == r_arg.numerator_)
	{
		return Fraction(numerator_, r_arg.denominator_);
	}

	numerator = numerator_ * r_arg.numerator_;
	denominator = denominator_ * r_arg.denominator_;

	return Fraction(numerator, denominator);
}

Fraction Fraction::operator/(Fraction& r_arg)
{
	int numerator = 0;
	int denominator = 0;

	if (numerator_ == r_arg.numerator_)
	{
		return Fraction(r_arg.numerator_, denominator_);
	}

	if (denominator_ == r_arg.denominator_)
	{
		return Fraction(numerator_, r_arg.denominator_);
	}

	numerator = numerator_ * r_arg.denominator_;
	denominator =	denominator_* r_arg.numerator_;

	return Fraction(numerator, denominator);
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

	return temp;
}

Fraction& Fraction::operator-()
{
	numerator_ *= -1;
	
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
