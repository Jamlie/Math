# Math



## Author

__Omar Estietie__

__Twitter:__ OmarEstietie977



## Constants

* **Infinity**

* **minInfinity**: minus Infinity

* **NaN**: Not a Number

* **Pi**

* **E**

* **LN10**

* **Ln2**

* **SQRT2**

* **LOGE2**

* **SQRT1_2**



## Methods in Math.cpp

To access this kind of methods, it's enough to do

```cpp
Math.TheMethod();
```

### isNaN()

Determines if it's not a number of not.



### Mod()

Takes 2 integer parameters and brings their mod

* __NUM: the first number

* __NUMBER: the second number

* __NUM % ___NUMBER



### Math.Abs()

Accepts up to long double number, returns whatever the data type is.



### Math.Floor()

Accepts up to long double and returns a long long number.

The number gets floored

e.g. 2.9 -> 2

e.g. 2.1 -> 2



### Math.Ceil()

Accepts up to long double and returns a long long number.

The number gets ceiled

e.g. 2.9 -> 3

e.g. 2.1 -> 3



### Math.Fact()

Takes 1 parameter that is a long double and returns a long double.

Gets the factorial of a number.



### Math.Sqrt()

Takes 1 parameter that is a long double and returns a long double.

Gets the square root of a number.



### Math.Cbrt()

Takes 1 parameter that is a long double and returns a long double.

Gets the cube root of a number.



### Math.ln()

Takes 1 parameter.

The natural logarithm $ln(x)$ where $ln(e) = 1$



### Math.Log10()

Takes 1 parameter.

Gets the log with the base of 10 $log10(x)$ where $log10(10) = 1$



### Math.Log2()

Takes 1 parameter.

Gets the log with the base of 2 $log2(x)$ where $log2(2) = 1$



### Math.Logn()

Takes 2 parameters.

* __NUM: works like $n$

* __NUMBER: works like $a$

Gets the $loga(n)$ where $loga(a) = 1$



### Math.Pow()

Takes 2 parameters.

* __BASE: The Base, let it be x

* __EXPO: the exponent, let it be n

Gets the power function which is like $x^n$



### Math.Exp()

Takes 1 parameter.

* __EXPO: the exponent, let it be n

Gets the exponential function $exp(n)$ where it works as $e^n$



### Math.Cos()

Takes 1 parameter

Gets the cosine of a number which is $cos(x)$



### Math.Sin()

Takes 1 parameter

Gets the sine of a number which is $sin(x)$



### Math.Tan()

Takes 1 parameter

Gets the tangent of a number which is $tan(x)$



### Math.Sec()

Takes 1 parameter

Gets the secant of a number which is $sec(x)$ which is $1 / cos(x)$



### Math.Csc()

Takes 1 parameter

Gets the cosecant of a number which is $csc(x)$ which is $1/sin(x)$



### Math.Cot()

Takes 1 parameter

Gets the cotan of a number which is $cot(x)$ which is $1/tan(x)$



### Math.Asin()

Takes 1 parameter

Gets the inverse sin which is $arcsin(x)$



### Math.Acos()

Takes 1 parameter

Gets the inverse cos which is $arccos(x)$



### Math.Atan()

Takes 1 parameter

Gets the inverse tan which is $arctan(x)$



### Math.Sinh()

Takes 1 parameter

Gets the hyperbolic sin which is $sinh(x)$



### Math.Cosh()

Takes 1 parameter

Gets the hyperbolic cos which is $cosh(x)$



### Math.Tanh()

Takes 1 parameter

Gets the hyperbolic tan which is $tanh(x)$



### Math.Sech()

Takes 1 parameter

Gets the hyperbolic sec which is $sech(x)$



### Math.Csc()

Takes 1 parameter

Gets the hyperbolic csc which is $csc(x)$



### Math.Coth()

Takes 1 parameter

Gets the hyperbolic csc which is $coth(x)$





### Math.Asinh()

Takes 1 parameter

Gets the inverse hyperbolic sin which is $arcsinh(x)$



### Math.Acosh()

Takes 1 parameter

Gets the inverse hyperbolic cos which is $arccosh(x)$



### Math.Atanh()

Takes 1 parameter

Gets the inverse hyperbolic tan which is $arctanh(x)$



### Math.Round()

Takes 1 parameter

Round a number thus if the fractions were or more than $x.5$ it would ceil it, else it would floor it



### Math.Min()

Takes 2 parameters, an array of numbers and its size

This function would get the minimum value of the array



### Math.Max()

Takes 2 parameters, an array of numbers and its size

This function would get the maximum value of the array



### Math.isPrime()

Takes 1 parameter

This function determines if an unsigned integer is prime or not



### Math.isEven()

Takes 1 parameter

This function determines if a number is even or not, if it was even it would return 1, else it would return 0



### Math.isOdd()

Takes 1 parameter

This function determines if a number is odd or not, if it was odd it would return 1, else it would return 0



### Math.Digits()

Takes 1 parameter

Returns the number of digits an integer has



### Math.Modf()

Takes 2 parameters

* Number: must have a value

* FRAC: doesn't have a value

Splits a number into an int which goes in Number and its fraction which goes to FRAC





## Methods in str.cpp

To acess these methods, you should do:

```cpp
Math.STRING.TheMethodYouWant();
```

### Math.STRING.toInt()

Takes 1 parameter

Converts from a string to an integer



### Math.STRING.toSInt()

Takes 1 parameter

Converts from a string to a short integer



### Math.STRING.toLInt()

Takes 1 parameter

Converts from a string to a long long integer



### Math.STRING.toFloat()

Takes 1 parameter

Converts from a string to a float



### Math.STRING.toDouble()

Takes 1 parameter

Converts from a string to a double



### Math.STRING.toLDouble()

Takes 1 parameter

Converts from a string to a long double
