
class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator);
	~Fraction();

	void setValid();

	bool operator==(Fraction& r_arg);
	bool operator!=(Fraction& r_arg);
	bool operator<(Fraction& r_arg);
	bool operator>=(Fraction& r_arg);
	bool operator>(Fraction& r_arg);
	bool operator<=(Fraction& r_arg);
	Fraction& operator+(Fraction& r_arg);
	Fraction& operator-(Fraction& r_arg);
	Fraction& operator*(Fraction& r_arg);
	Fraction& operator/(Fraction& r_arg);
	Fraction& operator-();
	Fraction& operator++();
	Fraction& operator--();
	Fraction operator--(int);
};
