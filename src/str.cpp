#include <iostream>
#include <sstream>

class Str {
private: 
    const double __HUGE_NUMBER  =      1e+308;
    const float Infinity        =      ((float)(__HUGE_NUMBER * __HUGE_NUMBER));
    const float NaN             =      ((float)Infinity * 0.0F);
    const double minInfinity    =      Infinity * -1;
public:
    /**
    * @brief Convert a number to a string.
    * 
    * @param numberToString The number that the user needs to turn into a string. 
    * @param convertedToString The name of a variable that will contain the new string value.
    * @return string
    */
    std::string toString(long double numberToString, std::string &convertedToString) {
    if (numberToString == NaN || numberToString == Infinity || numberToString == minInfinity) return "Invalid";
        std::stringstream convertToString;
        convertToString << numberToString;
        convertToString >> convertedToString;
        return convertedToString;
    }
};