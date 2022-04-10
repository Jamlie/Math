#include <iostream>

class Str {
private: 
    const double __HUGE_NUMBER  =      1e+308;
    const float Infinity        =      ((float)(__HUGE_NUMBER * __HUGE_NUMBER));
    const float NaN             =      ((float)Infinity * 0.0F);
    const double minInfinity    =      Infinity * -1;

    /**
     * @brief This function is used to get the length of an Array of Characters.
     * 
     * @param lenOfArrayofChar is an array of characters that needs to be put in the function.
     * @return countOfChar
     */
    int len(char lenOfArrayofChar[]) {
        int i, countOfChar = 0;
        for (int i = 0; lenOfArrayofChar[i]; i++)
        {
            countOfChar++;
        }
        return countOfChar;
    }

    /**
     * @brief This function is used to get the length of a string.
     * 
     * @param lenOfString is a string that is used in this function to get you its size
     * @return countOfStringChars 
     */
    int len(std::string lenOfString) {
        int i, countOfStringChars = 0;
        for (int i = 0; lenOfString[i]; i++)
        {
            countOfStringChars++;
        }
        return countOfStringChars;
    }
    
    /**
     * @brief A function that reads how many fractions are there after (.).
     * 
     * @param __STRTOFRAC A string.
     * @param start The start of reading fractions.
     * @param end The End of reading fractions.
     * @param DIVISION The division value.
     * @return double 
     */
    double readFractions(char __STRTOFRAC[], int start, int end, double &DIVISION) {
        double FRACTIONS = 0;
        int j, COUNT = 0;

        for (int k = start; __STRTOFRAC[k] != '\0'; k++) {
            if (__STRTOFRAC[start] == '0' && __STRTOFRAC[k] == '0') COUNT++;
            if (COUNT == (end - start)) return 0;
        }

        for (int j = start; __STRTOFRAC[j] != '\0'; j++) {
            if (__STRTOFRAC[j] > '9' || __STRTOFRAC[j] < '0') continue;
            DIVISION = DIVISION * 10;
            if(__STRTOFRAC[j] != '.') FRACTIONS = FRACTIONS * 10 + __STRTOFRAC[j] - '0';
            
        }
        DIVISION = FRACTIONS / DIVISION;
        return DIVISION;
    }

    /**
     * @brief A function that reads how many fractions are there after (.).
     * 
     * @param __STRTOFRAC A string.
     * @param start The start of reading fractions.
     * @param end The End of reading fractions.
     * @param DIVISION The division value.
     * @return float 
     */
    long double readLFractions(char __STRTOFRAC[], int start, int end, long double &DIVISION) {
        long double FRACTIONS = 0;
        int j, COUNT = 0;

        for (int k = start; __STRTOFRAC[k] != '\0'; k++) {
            if (__STRTOFRAC[start] == '0' && __STRTOFRAC[k] == '0') COUNT++;
            if (COUNT == (end - start)) return 0;
        }

        for (int j = start; __STRTOFRAC[j] != '\0'; j++) {
            if (__STRTOFRAC[j] > '9' || __STRTOFRAC[j] < '0') continue;
            DIVISION = DIVISION * 10;
            if(__STRTOFRAC[j] != '.') FRACTIONS = FRACTIONS * 10 + __STRTOFRAC[j] - '0';
            
        }
        DIVISION = FRACTIONS / DIVISION;
        return DIVISION;
    }

    /**
     * @brief A function that reads how many fractions are there after (.).
     * 
     * @param __STRTOFRAC A string.
     * @param start The start of reading fractions.
     * @param end The End of reading fractions.
     * @param DIVISION The division value.
     * @return double 
     */
    double readFractions(std::string __STRTOFRAC, int start, int end, double &DIVISION) {
        double FRACTIONS = 0;
        int j;
        int COUNT = 0;
        for (int k = start; __STRTOFRAC[k] != '\0'; k++) {
            if (__STRTOFRAC[start] == '0' && __STRTOFRAC[k] == '0') COUNT++;
            if (COUNT == (end - start)) return 0;
        }

        for (int j = start; __STRTOFRAC[j] != '\0'; j++) {
            if (__STRTOFRAC[j] > '9' || __STRTOFRAC[j] < '0') continue;
            DIVISION = DIVISION * 10;
            if(__STRTOFRAC[j] != '.') FRACTIONS = FRACTIONS * 10 + __STRTOFRAC[j] - '0';
            
        }
        DIVISION = FRACTIONS / DIVISION;
        return DIVISION;
    }

    /**
     * @brief A function that reads how many fractions are there after (.).
     * 
     * @param __STRTOFRAC A string.
     * @param start The start of reading fractions.
     * @param end The End of reading fractions.
     * @param DIVISION The division value.
     * @return float 
     */
    long double readLFractions(std::string __STRTOFRAC, int start, int end, long double &DIVISION) {
        long double FRACTIONS = 0;
        int j;
        int COUNT = 0;
        for (int k = start; __STRTOFRAC[k] != '\0'; k++) {
            if (__STRTOFRAC[start] == '0' && __STRTOFRAC[k] == '0') COUNT++;
            if (COUNT == (end - start)) return 0;
        }

        for (int j = start; __STRTOFRAC[j] != '\0'; j++) {
            if (__STRTOFRAC[j] > '9' || __STRTOFRAC[j] < '0') continue;
            DIVISION = DIVISION * 10;
            if(__STRTOFRAC[j] != '.') FRACTIONS = FRACTIONS * 10 + __STRTOFRAC[j] - '0';
            
        }
        DIVISION = FRACTIONS / DIVISION;
        return DIVISION;
    }

    /**
     * @brief A function that reads how many fractions are there after (.).
     * 
     * @param __STRTOFRAC A string.
     * @param start The start of reading fractions.
     * @param end The End of reading fractions.
     * @param DIVISION The division value.
     * @return float 
     */
    float readFractions(std::string __STRTOFRAC, int start, int end, float &DIVISION) {
        double FRACTIONS = 0;
        int j, COUNT = 0;

        for (int k = start; __STRTOFRAC[k] != '\0'; k++) {
            if (__STRTOFRAC[start] == '0' && __STRTOFRAC[k] == '0') COUNT++;
            if (COUNT == (end - start)) return 0;
        }

        for (int j = start; __STRTOFRAC[j] != '\0'; j++) {
            if (__STRTOFRAC[j] > '9' || __STRTOFRAC[j] < '0') continue;
            DIVISION = DIVISION * 10;
            if(__STRTOFRAC[j] != '.') FRACTIONS = FRACTIONS * 10 + __STRTOFRAC[j] - '0';
            
        }
        DIVISION = FRACTIONS / DIVISION;
        return DIVISION;
    }

    /**
     * @brief A function that reads how many fractions are there after (.).
     * 
     * @param __STRTOFRAC A string.
     * @param start The start of reading fractions.
     * @param end The End of reading fractions.
     * @param DIVISION The division value.
     * @return float 
     */
    float readFractions(char __STRTOFRAC[], int start, int end, float &DIVISION) {
        float FRACTIONS = 0;
        int j, COUNT = 0;

        for (int k = start; __STRTOFRAC[k] != '\0'; k++) {
            if (__STRTOFRAC[start] == '0' && __STRTOFRAC[k] == '0') COUNT++;
            if (COUNT == (end - start)) return 0;
        }

        for (int j = start; __STRTOFRAC[j] != '\0'; j++) {
            if (__STRTOFRAC[j] > '9' || __STRTOFRAC[j] < '0') continue;
            DIVISION = DIVISION * 10;
            if(__STRTOFRAC[j] != '.') FRACTIONS = FRACTIONS * 10 + __STRTOFRAC[j] - '0';
            
        }
        DIVISION = FRACTIONS / DIVISION;
        return DIVISION;
    }

public:

    /**
     * @brief A function that receives a string and converts it to int.
     * 
     * @param __STRTOINT 
     * @return int 
     */
    int toInt(std::string __STRTOINT) {
        int TOINT = 0;

        for (int i = 0; __STRTOINT[i] != '\0'; i++) {
            if (i == 0 && __STRTOINT[i] == '.') continue;
            else if(__STRTOINT[i] == '.') break;
            if (__STRTOINT[i] > '9' || __STRTOINT[i] < '0') continue;
            TOINT = TOINT * 10 + __STRTOINT[i] - '0';
        }

        if (__STRTOINT[0] == '-') return -TOINT;
        return TOINT;
    }

    /**
     * @brief A function that receives a string and converts it to long long int.
     * 
     * @param __STRTOINT 
     * @return long long int 
     */
    long long toLInt(std::string __STRTOINT) {
        long long TOINT = 0;

        for (int i = 0; __STRTOINT[i] != '\0'; i++) {
            if (i == 0 && __STRTOINT[i] == '.') continue;
            else if(__STRTOINT[i] == '.') break;
            if (__STRTOINT[i] > '9' || __STRTOINT[i] < '0') continue;
            TOINT = TOINT * 10 + __STRTOINT[i] - '0';
        }

        if (__STRTOINT[0] == '-') return -TOINT;
        return TOINT;
    }

    /**
     * @brief A function that receives a string and converts it to int.
     * 
     * @param __STRTOINT 
     * @return int 
     */
    int toInt(char __STRTOINT[]) {
        int TOINT = 0;

        for (int i = 0; __STRTOINT[i] != '\0'; i++) {
            if (i == 0 && __STRTOINT[i] == '.') continue;
            else if(__STRTOINT[i] == '.') break;
            if (__STRTOINT[i] > '9' || __STRTOINT[i] < '0') continue;
            TOINT = TOINT * 10 + __STRTOINT[i] - '0';
        }

        if (__STRTOINT[0] == '-') return -TOINT;
        
        return TOINT;
    }

    long long toLInt(char __STRTOINT[]) {
        long long TOINT = 0;

        for (int i = 0; __STRTOINT[i] != '\0'; i++) {
            if (i == 0 && __STRTOINT[i] == '.') continue;
            else if(__STRTOINT[i] == '.') break;
            if (__STRTOINT[i] > '9' || __STRTOINT[i] < '0') continue;
            TOINT = TOINT * 10 + __STRTOINT[i] - '0';
        }

        if (__STRTOINT[0] == '-') return -TOINT;
        
        return TOINT;
    }

    /**
     * @brief A function that receives a string and converts it to float.
     * 
     * @param __STRTOREAL 
     * @return float 
     */
    float toFloat(char __STRTOREAL[]) {
        float TOFLOAT = 0, DIVISION = 1;
        int i;
        int LENGTH = len(__STRTOREAL);
        for (i = 0; __STRTOREAL[i] != '\0'; i++) {
            if (i == 0 && __STRTOREAL[i] == '.') continue;
            if (i != 0 && __STRTOREAL[i] == '.') break;
            if (__STRTOREAL[i] > '9' || __STRTOREAL[i] < '0') continue;
            TOFLOAT = TOFLOAT * 10 + __STRTOREAL[i] - '0';
        }
    
        if (__STRTOREAL[i] == '.') {
            readFractions(__STRTOREAL, i + 1, LENGTH, DIVISION);
        }

        TOFLOAT = TOFLOAT + DIVISION;

        if (__STRTOREAL[0] == '-') {
            if (TOFLOAT - (int)TOFLOAT == 0) return -1 * (TOFLOAT - 1);
            return -TOFLOAT;
        }

        if (TOFLOAT - (int)TOFLOAT == 0) return TOFLOAT - 1;
        return TOFLOAT;
    }

    /**
     * @brief A function that receives a string and converts it to float.
     * 
     * @param __STRTOREAL 
     * @return float 
     */
    float toFloat(std::string __STRTOREAL) {
        float TOFLOAT = 0, DIVISION = 1;
        int i;
        int LENGTH = len(__STRTOREAL);
        for (i = 0; __STRTOREAL[i] != '\0'; i++) {
            if (i == 0 && __STRTOREAL[i] == '.') continue;
            if (i != 0 && __STRTOREAL[i] == '.') break;
            if (__STRTOREAL[i] > '9' || __STRTOREAL[i] < '0') continue;
            TOFLOAT = TOFLOAT * 10 + __STRTOREAL[i] - '0';
        }
    
        if (__STRTOREAL[i] == '.') {
            readFractions(__STRTOREAL, i + 1, LENGTH, DIVISION);
        }

        if (__STRTOREAL[0] == '-') {
            if (TOFLOAT - (int)TOFLOAT == 0) return -1 * (TOFLOAT - 1);
            return -TOFLOAT;
        }

        TOFLOAT = TOFLOAT + DIVISION;
        if (TOFLOAT - (int)TOFLOAT == 0) return TOFLOAT - 1;
        return TOFLOAT;
    }

    /**
     * @brief A function that receives a string and converts it to double.
     * 
     * @param __STRTOREAL 
     * @return double 
     */
    double toDouble(char __STRTOREAL[]) {
        double TODOUBLE = 0, DIVISION = 1;
        int i;
        int LENGTH = len(__STRTOREAL);
        for (i = 0; __STRTOREAL[i] != '\0'; i++) {
            if (i == 0 && __STRTOREAL[i] == '.') continue;
            if (i != 0 && __STRTOREAL[i] == '.') break;
            if (__STRTOREAL[i] > '9' || __STRTOREAL[i] < '0') continue;
            TODOUBLE = TODOUBLE * 10 + __STRTOREAL[i] - '0';
        }
    
        if (__STRTOREAL[i] == '.') {
            readFractions(__STRTOREAL, i + 1, LENGTH, DIVISION);
        }

        TODOUBLE = TODOUBLE + DIVISION;

        if (__STRTOREAL[0] == '-') {
            if (TODOUBLE - (int)TODOUBLE == 0) return -1 * (TODOUBLE - 1);
            return -TODOUBLE;
        }

        if (TODOUBLE - (int)TODOUBLE == 0) return TODOUBLE - 1;
        return TODOUBLE;
    }

    /**
     * @brief A function that receives a string and converts it to long double.
     * 
     * @param __STRTOREAL 
     * @return long double 
     */
    long double toLDouble(char __STRTOREAL[]) {
        long double TODOUBLE = 0, DIVISION = 1;
        int i;
        int LENGTH = len(__STRTOREAL);
        for (i = 0; __STRTOREAL[i] != '\0'; i++) {
            if (i == 0 && __STRTOREAL[i] == '.') continue;
            if (i != 0 && __STRTOREAL[i] == '.') break;
            if (__STRTOREAL[i] > '9' || __STRTOREAL[i] < '0') continue;
            TODOUBLE = TODOUBLE * 10 + __STRTOREAL[i] - '0';
        }
    
        if (__STRTOREAL[i] == '.') {
            readLFractions(__STRTOREAL, i + 1, LENGTH, DIVISION);
        }

        TODOUBLE = TODOUBLE + DIVISION;

        if (__STRTOREAL[0] == '-') {
            if (TODOUBLE - (int)TODOUBLE == 0) return -1 * (TODOUBLE - 1);
            return -TODOUBLE;
        }

        if (TODOUBLE - (int)TODOUBLE == 0) return TODOUBLE - 1;
        return TODOUBLE;
    }

    /**
     * @brief A function that receives a string and converts it to double.
     * 
     * @param __STRTOREAL 
     * @return double 
     */
    double toDouble(std::string __STRTOREAL) {
        double TODOUBLE = 0, DIVISION = 1;
        int LENGTH = len(__STRTOREAL);
        int i = 0, j;

        for (i = 0; __STRTOREAL[i] != '\0'; i++) {
            if (i == 0 && __STRTOREAL[i] == '.') continue;
            if (i != 0 && __STRTOREAL[i] == '.') break;
            if (__STRTOREAL[i] > '9' || __STRTOREAL[i] < '0') continue;
            TODOUBLE = TODOUBLE * 10 + __STRTOREAL[i] - '0';
        }

        if (__STRTOREAL[i] == '.') {
            readFractions(__STRTOREAL, i + 1, LENGTH, DIVISION);
        }

        TODOUBLE = TODOUBLE + DIVISION;
        if (__STRTOREAL[0] == '-') {
            if (TODOUBLE - (int)TODOUBLE == 0) return -1 * (TODOUBLE - 1);
            return -TODOUBLE;
        }

        if (TODOUBLE - (int)TODOUBLE == 0) return TODOUBLE - 1;
        return TODOUBLE;
    }

    /**
     * @brief A function that receives a string and converts it to long double.
     * 
     * @param __STRTOREAL 
     * @return long double 
     */
    long double toLDouble(std::string __STRTOREAL) {
        long double TODOUBLE = 0, DIVISION = 1;
        int LENGTH = len(__STRTOREAL);
        int i = 0, j;

        for (i = 0; __STRTOREAL[i] != '\0'; i++) {
            if (i == 0 && __STRTOREAL[i] == '.') continue;
            if (i != 0 && __STRTOREAL[i] == '.') break;
            if (__STRTOREAL[i] > '9' || __STRTOREAL[i] < '0') continue;
            TODOUBLE = TODOUBLE * 10 + __STRTOREAL[i] - '0';
        }

        if (__STRTOREAL[i] == '.') {
            readLFractions(__STRTOREAL, i + 1, LENGTH, DIVISION);
        }

        TODOUBLE = TODOUBLE + DIVISION;
        if (__STRTOREAL[0] == '-') {
            if (TODOUBLE - (int)TODOUBLE == 0) return -1 * (TODOUBLE - 1);
            return -TODOUBLE;
        }

        if (TODOUBLE - (int)TODOUBLE == 0) return TODOUBLE - 1;
        return TODOUBLE;
    }
};