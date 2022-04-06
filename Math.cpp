// Omar Estietie

#include <iostream>
using std::string;
using std::stringstream;
#include <math.h>

namespace MATH
{

    class math {
    private:
        const double __HUGE_NUMBER = 1e+300;
        double __MINIMUMVALUE = 2147483647;
        double __MAXIMUMVALUE = -2147483647;
        double convertToString;

        /**
         * @brief A function to get the nth-root of a number.
         * 
         * @param __NUMBER 
         * @param __BASE 
         * @return long double 
         */
        long double NTH_ROOT(long double __NUMBER_UNDER_ROOT__, long double __BASE) {
            if (__BASE - (int)__BASE == 0 && (int)__BASE % 2 == 0 && __NUMBER_UNDER_ROOT__ < 0) return NaN;
            if (__BASE - (int)__BASE == 0 && (int)__BASE % 2 != 0 && __NUMBER_UNDER_ROOT__ < 0) {
                double __ANSWER = Exp(ln(-1 * __NUMBER_UNDER_ROOT__) / __BASE);
                return -__ANSWER;
            }
            double __ANSWER = Exp(ln(__NUMBER_UNDER_ROOT__) / __BASE);
            return __ANSWER;
        }

        /**
         * @brief A function that reverses the work of the NTH-ROOT function.
         * 
         * @param __BASE 
         * @param __POWER 
         * @return long double 
         */
        long double REVERSE__NTHROOT(long double __BASE, long double __POWER) {
            long double __SEMIRESULT = __POWER * ln(__BASE);
            long double __RESULT = Exp(__SEMIRESULT);
            return __RESULT;
        }
        

    public:

        const double Infinity       =      ((float)(__HUGE_NUMBER * __HUGE_NUMBER));
        const double NaN            =      ((float)Infinity * 0.0F);
        const double minInfinity    =      Infinity * -1;
        const double Pi             =      3.14159265358979;
        const double E              =      2.71828182845904;
        const double LN10           =      2.30258509299404;
        const double LN2            =      0.69314718055994;
        const double SQRT2          =      1.41421356237309;
        const double LOG2E          =      1.44269504088896;
        const double SQRT1_2        =      0.70710678118654;

        /**
         * @brief Convert a number to a string.
         * 
         * @param numberToString The number that the user needs to turn into a string. 
         * @param convertedToString The name of a variable that will contain the new string value.
         * @return string
         */
        string toString(long double numberToString, string &convertedToString) {
            stringstream convertToString;
            convertToString << numberToString;
            convertToString >> convertedToString;
            return convertedToString;
        }


        /**
         * @brief A function that determines if something is not a number/ 
         * 
         * @param __NUMBER 
         * @return int 
         */
        int isNaN(long double __NUMBER) {
            if (__NUMBER != NaN) return 0;
            return 1;
        }

        /**
         * @brief A method to return the module of 2 integers, works as number % number2.
         * 
         * @param __NUM The first integer
         * @param __NUMBER The second integer
         * @return int 
         */
        int Mod(int __NUM, int __NUMBER) {
            int __RESULT = __NUM % __NUMBER;
            return __RESULT;
        }

        /**
         * @brief A function that returns the absolute value of any number.
         * 
         * @param __TO_POSITIVE 
         * @return long double 
         */
        long double Abs(long double __TO_POSITIVE) {
            if (__TO_POSITIVE < 0) {
                __TO_POSITIVE = __TO_POSITIVE * -1;
            }
            else {
                __TO_POSITIVE = __TO_POSITIVE * 1;
            }
            return __TO_POSITIVE;
        }

        /**
         * @brief A function that returns the floor value of any number.
         * 
         * @param __FLOOR 
         * @return int 
         */
        int Floor(double __FLOOR) {
            int __VALUE;
            if (__FLOOR < 0) {
                __VALUE = (int)__FLOOR + (-1);
                return __VALUE;
            }
            else return __FLOOR;
        }

        /**
         * @brief A function that returns the ceil value of any number.
         * 
         * @param __CEIL 
         * @return int 
         */
        int Ceil(double __CEIL) {
            if (__CEIL - (int)__CEIL == 0) {
                return __CEIL;
            }
            else return Floor(__CEIL) + 1;
        }

        long double Fact(long long __CEIL) {
            if (__CEIL > 1) {
                return __CEIL * Fact(__CEIL - 1);
            }
            else return 1;
        }

        /**
         * @brief A function that returns the square root of anu number.
         * 
         * @param __BASE 
         * @return double 
         */
        long double Sqrt(long double __BASE) {
            if (__BASE < 0) return NaN;
            if (__BASE == Infinity) return Infinity;

            long double __RESULT = NTH_ROOT(__BASE, 2);
            return __RESULT;
        }

        long double Cbrt(long double __BASE) {
            if (__BASE == Infinity) return Infinity;
            if (__BASE == minInfinity) return minInfinity;

            long double __RESULT = NTH_ROOT(__BASE, 3);
            return __RESULT;
        }

        /**
         * @brief A function that returns the value of the natural log of a number.
         * 
         * @param __NUMBER 
         * @return double 
         */
        double ln(double number) {
            if (number < 0) return NaN;
            if (number == 0) return minInfinity;
            if (number == Infinity) return Infinity;
        
            double __SUM = 0.0;
            double ONE_OVER_ONE = (number - 1) / (number + 1);
            double __ONE_OVER_ONE_2 = ONE_OVER_ONE * ONE_OVER_ONE;
            double __DENOMINATOR = 1.0;
            double __FRACTION = ONE_OVER_ONE;
            double __TERM = __FRACTION;
            double __NEW_SUM = __TERM;

            while (__NEW_SUM != __SUM)
            {
                __SUM = __NEW_SUM;
                __DENOMINATOR += 2.0;
                __FRACTION *= __ONE_OVER_ONE_2;
                __NEW_SUM += __FRACTION / __DENOMINATOR;
            }
            return 2.0 * __NEW_SUM;
        }  

        /**
         * @brief A function that returns the value of log10 of any number.
         * 
         * @param __LOG_10_NUMBER 
         * @return double 
         */
        double Log10(double __LOG_10_NUMBER) {
            return ln(__LOG_10_NUMBER) / LN10;
        }

        /**
         * @brief A function that returns the value of log2 of any number.
         * 
         * @param __LOG_2_NUMBER 
         * @return double 
         */
        double Log2(double __LOG_2_NUMBER) {
            return ln(__LOG_2_NUMBER) / LN2;
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
         * @brief A function that returns the value of a Power function.
         * 
         * @param __BASE 
         * @param __EXPO
         * @return long double 
         */
        long double Pow(long double __BASE, long double __EXPO){
            if (__EXPO - (int)__EXPO != 0) {
                if (__BASE < 0) {
                    long double __SEMIRESULT = __EXPO * ln(-1 * __BASE);
                    long double __RESULT = Exp(__SEMIRESULT);
                    // if (Ceil(__RESULT) - __RESULT < 9e-4 && Ceil(__RESULT) - __RESULT > 0) return Floor(__RESULT); 
                    return -__RESULT;
                }
                
                if (__BASE - (int)__BASE == 0) {
                    __BASE = (int)__BASE;
                    long double __SEMIRESULT = __EXPO * ln(__BASE);
                    long double __RESULT = Exp(__SEMIRESULT);
                    // if (Ceil(__RESULT) - __RESULT < 9e-4 && Ceil(__RESULT) - __RESULT > 0) return Ceil(__RESULT); 
                    return __RESULT;
                }

                long double __SEMIRESULT = __EXPO * ln(__BASE);
                long double __RESULT = Exp(__SEMIRESULT);
                // if (Ceil(__RESULT) - __RESULT < 9e-4 && Ceil(__RESULT) - __RESULT > 0) return Ceil(__RESULT); 
                return __RESULT;
                
            }
            long double __RESULT= 1;
            if (__BASE == 0) return 0;
            if (__BASE == 1) return 1;

            if (__EXPO < 0) {
                while (__EXPO != 0)
                {
                    __RESULT = __RESULT * (1 / __BASE);
                    __EXPO++;
                }
                return (long double)__RESULT;
            }

            
            while (__EXPO != 0)
            {
                __RESULT = __RESULT * __BASE;
                __EXPO--;
            }
            return (long double)__RESULT;
            
        }

        /**
         * @brief A function that returns the value of e^n.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Exp(double __NUM) {
            long double __SEMIRESULT = 0;
            for (int i = 1; i <= 35; i++) {
                long double POWER = Pow(__NUM, i);
                long double FACT = Fact(i);
                __SEMIRESULT += (POWER / FACT);
            }
            long double __RESULT = __SEMIRESULT + 1;
            return __RESULT;
        }

        /**
         * @brief A function that returns the value of cosx (in degrees), works like cos(30).
         * 
         * @param __NUMBER 
         * @return double 
         */
        double Cos(double __NUMBER) {
            for (int i = 0; i < __MINIMUMVALUE && __NUMBER > 360; i++) {
                if (__NUMBER > 360) {
                    __NUMBER = __NUMBER - 360;
                } 
            }
            double __NUM = __NUMBER * Pi / 180;
            
            long double SEMIRESULT = 1;
            for (int i = 2; i <= 34; i += 2) {
                if (i == 4 || i == 8 || i == 12 || i == 16 || i == 20 || i == 24 || i == 28 || i == 32) SEMIRESULT = SEMIRESULT + ((Pow(__NUM, i)) / Fact(i));
                else SEMIRESULT = SEMIRESULT - ((Pow(__NUM, i)) / Fact(i));
            }
            long double __RESULT = SEMIRESULT;

            if (__NUMBER - (int)__NUMBER == 0) {
                if ((int)__NUMBER % 180 == 0 && (int)__NUMBER % 270 != 0 && (int)__NUMBER % 360 != 0 && (int)__NUMBER > 0) {
                    return -1;
                }
                if ((int)__NUMBER % 270 == 0) {
                    return 0;
                }
                if((int)__NUMBER % -180 == 0 && (int)__NUMBER < 0 && (int)__NUMBER % 360 != 0) {
                    return 1;
                }
                if((int)__NUMBER % 360 == 0) {
                    return 1;
                }
            }
            if (__RESULT < 1e-4 && __RESULT > 0) {
                return 0;
            }

            else if (__RESULT > -1e-4 && __RESULT < 0) {
                return 0;
            }

            return __RESULT;
        }

        /**
         * @brief A function that returns the value of sinx (in degrees), works like sin(30).
         * 
         * @param __NUMBER 
         * @return double 
         */
        double Sin(double __NUMBER) {
            for (int i = 0; i < __MINIMUMVALUE && __NUMBER > 360; i++) {
                if (__NUMBER > 360) {
                    __NUMBER = __NUMBER - 360;
                } 
            }

            double __NUM = __NUMBER * Pi / 180;
            
            long double SEMIRESULT = __NUM;
            for (int i = 3; i <= 35; i += 2) {
                if (i == 5 || i == 9 || i == 13 || i == 17 || i == 21 || i == 25 || i == 29 || i == 33) SEMIRESULT = SEMIRESULT + ((Pow(__NUM, i)) / Fact(i));
                else SEMIRESULT = SEMIRESULT - ((Pow(__NUM, i)) / Fact(i));
            }
            long double __RESULT = SEMIRESULT;

            if (__NUMBER - (int)__NUMBER == 0) {
                if ((int)__NUMBER % 180 == 0 && (int)__NUMBER % 270 != 0) {
                    return 0;
                }

                if ((int)__NUMBER % 270 == 0 && (int)__NUMBER > 0 ) {
                    return -1;
                }

                if ((int)__NUMBER % -270 == 0 && (int)__NUMBER < 0) {
                    return 1;
                }
            }

            if (__RESULT < 1e-4 && __RESULT > 0) {
                return 0;
            }

            else if (__RESULT > -1e-4 && __RESULT < 0) {
                return 0;
            }

            return __RESULT;
        }

        /**
         * @brief A function that returns the value of tanx (in degrees), works like tan(30).
         * 
         * @param __NUM 
         * @return double 
         */
        long double Tan(long double __NUM) {
            long double __RESULT = Sin(__NUM) / Cos(__NUM);

            return __RESULT;
        }

        /**
         * @brief A function that returns the value of secx (in degrees), works like sec(30).
         * 
         * @param __NUM 
         * @return double 
         */
        double Sec(double __NUM) {
            long double __RESULT = 1 / Cos(__NUM);

            return __RESULT;
        }

        /**
         * @brief A function that returns the value of cscx (in degrees), works like csc(30).
         * 
         * @param __NUM 
         * @return double 
         */
        double Csc(double __NUM) {
            long double __RESULT = 1 / Sin(__NUM);

            return __RESULT;
        }

        /**
         * @brief A function that returns the value of cot (in degrees), works like cot(30).
         * 
         * @param __NUM 
         * @return double 
         */
        double Cot(double __NUM) {
            long double __RESULT = 1 / Tan(__NUM);

            return __RESULT;
        }

        /**
         * @brief A function that returns the value of sin inverse.
         * 
         * @param __NUMBER A number between -1 and 1.
         * @return double 
         */
        double Asin(double __NUMBER) {
            if (__NUMBER > 1 || __NUMBER < -1) return NaN;
            if (__NUMBER == 1) return 90;
            if (__NUMBER == -1) return -90;
            if (__NUMBER == 0) return 0;

            int i;
            double __RESULT;
            double __SEMIRESULT = 0;
            for (i = 0; i < 300; i++) {
                long double FACT_1 = Fact((2 * i));
                long double DENOM_1 = Pow(4, i);
                long double DENOM_2 = Pow(Fact(i), 2);
                long double DENOM_3 = (2 * i + 1);
                long double NUMERATOR = Pow(__NUMBER, (2 * i + 1));
                __SEMIRESULT += (FACT_1 * NUMERATOR) / (DENOM_1 * DENOM_2 * DENOM_3);
            }
            __RESULT = __SEMIRESULT * 180 / Pi;
            return __RESULT;
        }

        /**
         * @brief A function that returns the cos inverse value.
         * 
         * @param __NUMBER A number between -1 and .
         * @return double 
         */
        double Acos(double __NUMBER) {
            return 90 - Asin(__NUMBER);
        }

        /**
         * @brief A function that returns the tan inverse value.
         * 
         * @param __NUMBER
         * @return long double 
         */
        long double Atan(double __NUMBER) {
            if (__NUMBER == Infinity) return 90;
            if (__NUMBER == minInfinity) return -90;
            if (__NUMBER == 1) return 45;

            int i;
            long double __RESULT;
            long double __SEMIRESULT = 0;
            for (i = 0; i < 700; i++) {
                long double __NUMER_1 = Pow(-1, i);
                long double __NUMER_2 = Pow(__NUMBER, 2 * i + 1);
                long double __DENOM__ = 2 * i + 1;
                __SEMIRESULT += ((__NUMER_1 * __NUMER_2) / __DENOM__);
            }
            __RESULT = __SEMIRESULT * 180 / Pi;
            return __RESULT;            
        }
       
        /**
         * @brief A function that returns the hyperbolic sinx.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Sinh(long double __NUM) {
            long double __RESULT = (Exp(__NUM) - Exp(-1 * __NUM)) / 2;
            return __RESULT;
        } 

        /**
         * @brief A function that returns the hyperbolic cosx.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Cosh(long double __NUM) {
            long double __RESULT = (Exp(__NUM) + Exp(-1 * __NUM)) / 2;
            return __RESULT;
        } 

        /**
         * @brief A function that returns the hyperbolic tanx.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Tanh(long double __NUM) {
            long double __RESULT = Sinh(__NUM) / Cosh(__NUM);
            return __RESULT;
        }

        /**
         * @brief A function that returns the hyperbolic sec.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Sech(long double __NUM) {
            long double __RESULT = 1 / Cosh(__NUM);
            return __RESULT;
        }

        /**
         * @brief A function that returns the hyperbolic cscx.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Csch(long double __NUM) {
            long double __RESULT = 1 / Sinh(__NUM);
            return __RESULT;
        }

        /**
         * @brief A function that returns the hyperbolic cotx.
         * 
         * @param __NUM 
         * @return long double 
         */
        long double Coth(long double __NUM) {
            long double __RESULT = 1 / Tanh(__NUM);
            return __RESULT;
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
                    long double __RESULT = Floor(__NUM);
                    return __RESULT;
                }

                else if (__NEGATIVENUMBER > -0.5 && __NEGATIVENUMBER < 0) {
                    long double __RESULT = Ceil(__NUM);
                    return __RESULT;
                }
            }
            if (__NUMBER >= 0.5 && __NUMBER < 1) {
                long double __RESULT = Ceil(__NUM);
                return __RESULT;
            }
            else if (__NUMBER < 0.5 && __NUMBER > 0) {
                long double __RESULT = Floor(__NUM);
                return __RESULT;
            }
        }

        /**
         * @brief A function that returns the minimum value in an array..
         * 
         * @param __MIN_OF_ARRAY 
         * @param __SIZE 
         * @return int 
         */
        int Min (int __MIN_OF_ARRAY[], int __SIZE) {
            int i;

            for (i = 0; i < __SIZE; i++) {
                if (__MINIMUMVALUE > __MIN_OF_ARRAY[i]) {
                    __MINIMUMVALUE = __MIN_OF_ARRAY[i];
                }
            }

            return __MINIMUMVALUE;
        }

        /**
         * @brief A function that returns the minimum value in an array.
         * 
         * @param __MIN_OF_ARRAY 
         * @param __SIZE 
         * @return float 
         */
        float Min (float __MIN_OF_ARRAY[], int __SIZE) {
            int i;

            for (i = 0; i < __SIZE; i++) {
                if (__MINIMUMVALUE > __MIN_OF_ARRAY[i]) {
                    __MINIMUMVALUE = __MIN_OF_ARRAY[i];
                }
            }

            return __MINIMUMVALUE;
        }

        /**
         * @brief A function that returns the minimum value in an array.
         * 
         * @param __MIN_OF_ARRAY 
         * @param __SIZE 
         * @return double 
         */
        double Min (double __MIN_OF_ARRAY[], int __SIZE) {
            int i;

            for (i = 0; i < __SIZE; i++) {
                if (__MINIMUMVALUE > __MIN_OF_ARRAY[i]) {
                    __MINIMUMVALUE = __MIN_OF_ARRAY[i];
                }
            }

            return __MINIMUMVALUE;
        }

        /**
         * @brief A function that returns the maximum value in an array.
         * 
         * @param __MAX_OF_ARRAY 
         * @param __SIZE 
         * @return int 
         */
        int Max (int __MAX_OF_ARRAY[], int __SIZE) {
            int i;

            for (i = 0; i < __SIZE; i++) {
                if (__MAX_OF_ARRAY[i] > __MAXIMUMVALUE) {
                    __MAXIMUMVALUE = __MAX_OF_ARRAY[i];
                }
            }

            return __MAXIMUMVALUE;
        }

        /**
         * @brief A function that returns the minimum value in an array.
         * 
         * @param __MAX_OF_ARRAY 
         * @param __SIZE 
         * @return float 
         */
        float Max (float __MAX_OF_ARRAY[], int __SIZE) {
            int i;

            for (i = 0; i < __SIZE; i++) {
                if (__MAX_OF_ARRAY[i] > __MAXIMUMVALUE) {
                    __MAXIMUMVALUE = __MAX_OF_ARRAY[i];
                }
            }

            return __MAXIMUMVALUE;
        }

        /**
         * @brief A function that returns the minimum value in an array.
         * 
         * @param __MAX_OF_ARRAY 
         * @param __SIZE 
         * @return double 
         */
        double Max (double __MAX_OF_ARRAY[], int __SIZE) {
            int i;

            for (i = 0; i < __SIZE; i++) {
                if (__MAX_OF_ARRAY[i] > __MAXIMUMVALUE) {
                    __MAXIMUMVALUE = __MAX_OF_ARRAY[i];
                }
            }

            return __MAXIMUMVALUE;
        }

        /**
         * @brief A function to determine if an integer is prime.
         * 
         * @param isPrimeInt  
         */
        bool isPrime(int __IS_PRIME_INT) {
            if (__IS_PRIME_INT == 0) return 0;
            if (__IS_PRIME_INT == 1) return 0;
            int i;
            for (i = 2; i <= __IS_PRIME_INT / 2; i++) {if (__IS_PRIME_INT % i == 0) return false;}
            return true;
        }
    };

}
