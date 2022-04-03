#include <iostream>
using namespace std;

class math {

public:

	double Pi = 3.14159265358979;
	double E = 2.718281828459045;
	long double Abs(long double number) {
		if (number < 0) {
			number = number * -1;
		}
		else {
			number = number * 1;
		}
		return number;
	}

	int Floor(double number) {
		int value;
		if (number < 0) {
			value = (int)number + (-1);
			return value;
		}
		else return number;
	}

	int Ceil(double number) {
		if (number - (int)number == 0) {
			return number;
		}
		else return Floor(number) + 1;
	}

	long long Fact(long long number) {
		if (number > 1) {
			return number * Fact(number - 1);
		}
		else return 1;
	}

	long double Pow(long double base, long long expo) {
		long double result = 1;
		if (expo < 0) {
			while (expo != 0)
			{
				result = result * (1 / base);
				expo++;
			}
			return result;
		}

		else {
			while (expo != 0)
			{
				result = result * base;
				expo--;
			}
			return result;
		}
	}


	double Sqrt(double number) {
		if (number <= 0)
			return 0;
		int exp = 0;
		number = frexp(number, &exp);
		if (exp & 1) {
			exp--;
			number *= 2;
		}
		double anotherNumber = (1 + number)/2; 
		double anAnotherNumber = 0;
		while (anotherNumber != anAnotherNumber) {
			anAnotherNumber = anotherNumber;
			anotherNumber = (anotherNumber + number / anotherNumber) / 2;
		}
		return ldexp(anotherNumber, exp / 2); 
	}

	double ln(double number) {
		double oldSum = 0.0;
		double xmlxpl = (number - 1) / (number + 1);
		double xmlxpl2 = xmlxpl * xmlxpl;
		double denom = 1.0;
		double frac = xmlxpl;
		double term = frac;
		double sum = term;

		while (sum != oldSum)
		{
			oldSum = sum;
			denom += 2.0;
			frac *= xmlxpl2;
			sum += frac / denom;
		}
		return 2.0 * sum;
	}

	double Log10(double number) {
		double LN10 = 2.30258509299;
		return ln(number)/ LN10;
	}
};
