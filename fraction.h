
class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator);
	~Fraction();

	bool operator== (Fraction& r_arg);
};
