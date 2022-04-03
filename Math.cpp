// Omar Estietei

namespace MATH
{

    class math {
    private:
        double __MINIMUMVALUE = 2147483647;
        double __MAXIMUMVALUE = -2147483647;

    public:
        
        const double Pi        = 3.14159265358979;
        const double E         = 2.71828182845904;
        const double LN10      = 2.30258509299404;
        const double LN2       = 0.69314718055994;
        const double SQRT2     = 1.41421356237309;
        const double LOG2E     = 1.44269504088896;
        const double SQRT1_2   = 0.70710678118654;

        /**
         * @brief A method to return the module of 2 integers, works as number % number2.
         * 
         * @param __NUM The first integer
         * @param __NUMBER The second integer
         * @return int 
         */
        int Mod(int __NUM, int __NUMBER) {
            int result = __NUM % __NUMBER;
            return result;
        }

        /**
         * @brief A function that returns the absolute value of any number.
         * 
         * @param number 
         * @return long double 
         */
        long double Abs(long double number) {
            if (number < 0) {
                number = number * -1;
            }
            else {
                number = number * 1;
            }
            return number;
        }

        /**
         * @brief A function that returns the floor value of any number.
         * 
         * @param number 
         * @return int 
         */
        int Floor(double number) {
            int value;
            if (number < 0) {
                value = (int)number + (-1);
                return value;
            }
            else return number;
        }

        /**
         * @brief A function that returns the ceil value of any number.
         * 
         * @param number 
         * @return int 
         */
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

        /**
         * @brief A function that returns the square root of anu number.
         * 
         * @param number 
         * @return double 
         */
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

        /**
         * @brief A function that returns the value of the natural log of a number.
         * 
         * @param number 
         * @return double 
         */
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

        /**
         * @brief A function that returns the value of log10 of any number.
         * 
         * @param number 
         * @return double 
         */
        double Log10(double number) {
            return ln(number)/ LN10;
        }

        /**
         * @brief A function that returns the value of log2 of any number.
         * 
         * @param number 
         * @return double 
         */
        double Log2(double number) {
            return ln(number)/ LN2;
        }

        /**
         * @brief A function that returns the value of nth log of any number.
         * 
         * @param __NUM 
         * @param __NUMBER 
         * @return double 
         */
        double Logn(double __NUM, double __NUMBER) {
            return ln(__NUM) / ln(__NUMBER);
        }

        /**
         * @brief A function that returns the value of a power function.
         * 
         * @param base 
         * @param expo 
         * @return long double 
         */
        long double Pow(long double base, long double expo) {
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

        /**
         * @brief A function that returns the value of e^n.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Exp(double __NUM) {
            long double result = 1;
            if (__NUM < 0) {
                while (__NUM != 0)
                {
                    result = result * (1 / E);
                    __NUM++;
                }
                return result;			
            }
            else {
                while (__NUM != 0)
                {
                    result = result * E;
                    __NUM--;
                }
                return result;		
            }
        }

        /**
         * @brief A function that returns the value of cosx (in degrees), works like cos(30).
         * 
         * @param __NUMBER 
         * @return double 
         */
        double Cos(double __NUMBER) {
            double __NUM = __NUMBER * Pi / 180;
            double result = 1 - (Pow(__NUM, 2) / Fact(2)) + (Pow(__NUM, 4) / Fact(4)) - (Pow(__NUM, 6) / Fact(6)) + (Pow(__NUM, 8) / Fact(8)) - (Pow(__NUM, 10) / Fact(10)) + (Pow(__NUM, 12) / Fact(12)) - (Pow(__NUM, 14) / Fact(14)) + (Pow(__NUM, 16) / Fact(16)) - (Pow(__NUM, 18) / Fact(18)) + (Pow(__NUM, 20) / Fact(20));
            for (int i = 1; i < 12; i++)
            {
                if (i % 2 == 0) {
                    continue;
                }
                if (__NUM == (90 * i * Pi / 180))
                {
                    return 0;
                }
                
                else if (__NUM == (270 * i * Pi / 180)) {
                    return 0;
                }
            }
            
            for (int i = 0; i < 12; i++)
            {
                if (i % 2 != 0) {
                    continue;
                }
                if (__NUM == (360 * i * Pi / 180)) {
                    return 1;
                }

                else if (__NUM == (180 * i * Pi / 180)) {
                    return -1;
                }
            }
            

            if(result > 1 || result < -1) {
                return 0;
            }
            if(result < 1e-6 && result > 0) {
                return 0;
            }
            return result;
        }

        /**
         * @brief A function that returns the value of sinx (in degrees), works like sin(30).
         * 
         * @param __NUM 
         * @return double 
         */
        double Sin(double __NUM) {
            double cosSquared = Cos(__NUM) * Cos(__NUM);
            double resultSquared = 1 - cosSquared;
            double result = Sqrt(resultSquared);
            if (__NUM - (int) __NUM == 0) {
                if ((int) __NUM % 180 == 0) {
                    return 0;
                }

                if ((int) __NUM % 270 == 0) {
                    return -1;
                } 
            }
            if (__NUM > 180 && __NUM < 360) {
                return -1 * result;
            }
            return result; 
        }
        
        /**
         * @brief A function that returns the value of tanx (in degrees), works like tan(30).
         * 
         * @param __NUM 
         * @return double 
         */
        double Tan(double __NUM) {
            long double result = Sin(__NUM) / Cos(__NUM);

            return result;
        }

        /**
         * @brief A function that returns the value of secx (in degrees), works like sec(30).
         * 
         * @param __NUM 
         * @return double 
         */
        double Sec(double __NUM) {
            long double result = 1 / Cos(__NUM);

            return result;
        }

        /**
         * @brief A function that returns the value of cscx (in degrees), works like csc(30).
         * 
         * @param __NUM 
         * @return double 
         */
        double Csc(double __NUM) {
            long double result = 1 / Sin(__NUM);

            return result;
        }

        /**
         * @brief A function that returns the value of cot (in degrees), works like cot(30).
         * 
         * @param __NUM 
         * @return double 
         */
        double Cot(double __NUM) {
            long double result = 1 / Tan(__NUM);

            return result;
        }

        /**
         * @brief A function that returns the hyperbolic sinx.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Sinh(long double __NUM) {
            long double result = (Exp(__NUM) - Exp(-1 * __NUM)) / 2;
            return result;
        } 

        /**
         * @brief A function that returns the hyperbolic cosx.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Cosh(long double __NUM) {
            long double result = (Exp(__NUM) + Exp(-1 * __NUM)) / 2;
            return result;
        } 

        /**
         * @brief A function that returns the hyperbolic tanx.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Tanh(long double __NUM) {
            long double result = Sinh(__NUM) / Cosh(__NUM);
            return result;
        }

        /**
         * @brief A function that returns the hyperbolic sec.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Sech(long double __NUM) {
            long double result = 1 / Cosh(__NUM);
            return result;
        }

        /**
         * @brief A function that returns the hyperbolic cscx.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Csch(long double __NUM) {
            long double result = 1 / Sinh(__NUM);
            return result;
        }

        /**
         * @brief A function that returns the hyperbolic cotx.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Coth(long double __NUM) {
            long double result = 1 / Tanh(__NUM);
            return result;
        }

        /**
         * @brief A funciton that returns the value after rounding a number, if it was 0.5 then it would be rounded into 1, if it was 0.4 it would be rounded into 0.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Round(long double __NUM) {
            if (__NUM - (int) __NUM == 0) {
                return __NUM;
            }
            long double __NUMBER = __NUM - (int) __NUM;
            if (__NUM < 0) {
            long double __NEGATIVENUMBER = __NUM - (int) __NUM;
                if (__NEGATIVENUMBER <= -0.5 && __NEGATIVENUMBER > -1) {
                    long double result = Floor(__NUM);
                    return result;
                }

                else if (__NEGATIVENUMBER > -0.5 && __NEGATIVENUMBER < 0) {
                    long double result = Ceil(__NUM);
                    return result;
                }
            }
            if (__NUMBER >= 0.5 && __NUMBER < 1) {
                long double result = Ceil(__NUM);
                return result;
            }
            else if (__NUMBER < 0.5 && __NUMBER > 0) {
                long double result = Floor(__NUM);
                return result;
            }
        }

        /**
         * @brief A function that returns the minimum value in an array..
         * 
         * @param arrayOfInt 
         * @param sizeOfArray 
         * @return int 
         */
        int Min (int arrayOfInt[], int sizeOfArray) {
            int i;

            for (i = 0; i < sizeOfArray; i++) {
                if (__MINIMUMVALUE > arrayOfInt[i]) {
                    __MINIMUMVALUE = arrayOfInt[i];
                }
            }

            return __MINIMUMVALUE;
        }

        /**
         * @brief A function that returns the minimum value in an array.
         * 
         * @param arrayOfFloats 
         * @param sizeOfArray 
         * @return float 
         */
        float Min (float arrayOfFloats[], int sizeOfArray) {
            int i;

            for (i = 0; i < sizeOfArray; i++) {
                if (__MINIMUMVALUE > arrayOfFloats[i]) {
                    __MINIMUMVALUE = arrayOfFloats[i];
                }
            }

            return __MINIMUMVALUE;
        }

        /**
         * @brief A function that returns the minimum value in an array.
         * 
         * @param arrayOfDoubles 
         * @param sizeOfArray 
         * @return double 
         */
        double Min (double arrayOfDoubles[], int sizeOfArray) {
            int i;

            for (i = 0; i < sizeOfArray; i++) {
                if (__MINIMUMVALUE > arrayOfDoubles[i]) {
                    __MINIMUMVALUE = arrayOfDoubles[i];
                }
            }

            return __MINIMUMVALUE;
        }

        /**
         * @brief A function that returns the maximum value in an array.
         * 
         * @param arrayOfInt 
         * @param sizeOfArray 
         * @return int 
         */
        int Max (int arrayOfInt[], int sizeOfArray) {
            int i;

            for (i = 0; i < sizeOfArray; i++) {
                if (arrayOfInt[i] > __MAXIMUMVALUE) {
                    __MAXIMUMVALUE = arrayOfInt[i];
                }
            }

            return __MAXIMUMVALUE;
        }

        /**
         * @brief A function that returns the minimum value in an array.
         * 
         * @param arrayOfFloats 
         * @param sizeOfArray 
         * @return float 
         */
        float Max (float arrayOfFloats[], int sizeOfArray) {
            int i;

            for (i = 0; i < sizeOfArray; i++) {
                if (arrayOfFloats[i] > __MAXIMUMVALUE) {
                    __MAXIMUMVALUE = arrayOfFloats[i];
                }
            }

            return __MAXIMUMVALUE;
        }

        /**
         * @brief A function that returns the minimum value in an array.
         * 
         * @param arrayOfDoubles 
         * @param sizeOfArray 
         * @return double 
         */
        double Max (double arrayOfDoubles[], int sizeOfArray) {
            int i;

            for (i = 0; i < sizeOfArray; i++) {
                if (arrayOfDoubles[i] > __MAXIMUMVALUE) {
                    __MAXIMUMVALUE = arrayOfDoubles[i];
                }
            }

            return __MAXIMUMVALUE;
        }
    };

}
