// File Name: Noble_PA1.cpp
// Author: Thaddeus Nathaniel L. Noble
// Email Address: tnoble@gbox.adnu.edu.ph
// ProgAss Number: 2
// Description: A command-line based calculator with arithmetic, exponentiation, logarithmic, trigonometric, and conversion functionalities.
// Last Changed: October 1, 2024

#include <iostream>
#include <iomanip>
#include <thread>
#include <cmath>
#include <vector>
using namespace std;

// Conversion and other functions
int binaryToDecimal(int num) {
    int decimalValue = 0, base = 1, tempNum = num;
    while (tempNum > 0) {
        int lastDigit = tempNum % 10;
        tempNum = tempNum / 10;
        decimalValue += lastDigit * base;
        base = base * 2;
    }
    return decimalValue;
}

int octalToDecimal(int num) {
    int n = num, decimalValue = 0, base = 1;
    int temp = n;
    while (temp) {
        // Gets the last digit
        int lastDigit = temp % 10;
        temp = temp / 10;
        // Multiplies the last digit with the correct base value and adds to decimalValue
        decimalValue += lastDigit * base;
        base = base * 8;
    }
    return decimalValue;
}

long long octalToBinary(int num) {
    int decimalNumber, i = 0;
    long long binaryNumber = 0;
    while (num != 0) {
        decimalNumber += (num % 10) * pow(8, i);
        ++i;
        num /= 10;
    }
    i = 1;
    while (decimalNumber != 0) {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
    return binaryNumber;
}

bool isPrime(int num) {
    if (num == 0 || num == 1) {
        return false;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
            break;
        }
    }
}

// Driver code
int main() {
    int mainMenuChoice, numericScale;
    // Splash and main menu
    cout << "Welcome to Calculator for Engineers!" << endl;
    // Delays showing the selections for 1 second
    this_thread::sleep_for(chrono::seconds(1));
    while (true) {
        cout << "========MENU========" << endl;
        cout << "(1) Basic Arithmetic" << endl;
        cout << "(2) Powers" << endl;
        cout << "(3) Logarithm" << endl;
        cout << "(4) Trigonometry (with DRG)" << endl;
        cout << "(5) Number System Conversion" << endl;
        cout << "(6) Others" << endl;
        cout << "Press 0 to EXIT." << endl;
        cin >> mainMenuChoice;
        switch(mainMenuChoice) {
            // Basic Arithmetic
            case 1:
            {
                int basicArithmeticChoice;
                cout << "Basic Arithmetic" << endl;
                cout << "========MENU========" << endl;
                cout << "(1) Addition" << endl;
                cout << "(2) Subtraction" << endl;
                cout << "(3) Multiplication" << endl;
                cout << "(4) Division" << endl;
                cin >> basicArithmeticChoice;
                switch(basicArithmeticChoice) {
                    case 1:
                        double firstAddend, secondAddend;
                        cout << "Addition" << endl << "================" << endl;
                        cout << "Enter the first addend: ";
                        cin >> firstAddend;
                        cout << "Enter the second addend: ";
                        cin >> secondAddend;
                        cout << "The sum is: " << fixed << setprecision(numericScale) << firstAddend + secondAddend << endl;
                        break;
                    case 2:
                        double subtrahend, minuend;
                        cout << "Subtraction" << endl << "================" << endl;
                        cout << "Enter the minuend: ";
                        cin >> minuend;
                        cout << "Enter the subtrahend: ";
                        cin >> subtrahend;
                        cout << "The difference is: " << fixed << setprecision(numericScale) << minuend - subtrahend << endl;
                        break;
                    case 3:
                        double multiplicand, multiplier;
                        cout << "Multiplication" << endl << "================" << endl;
                        cout << "Enter the multiplicand: ";
                        cin >> multiplicand;
                        cout << "Enter the multiplier: ";
                        cin >> multiplier;
                        cout << "The product is: " << fixed << setprecision(numericScale) << multiplicand * multiplier << endl;
                        break;
                    case 4:
                        double dividend, divisor;
                        cout << "Division" << endl << "================" << endl;
                        cout << "Enter the dividend: ";
                        cin >> dividend;
                        cout << "Enter the divisor: ";
                        cin >> divisor;
                        cout << "The quotient is: " << fixed << setprecision(numericScale) << dividend / divisor << endl;
                        break;
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                }
                break;
            }
            // Powers    
            case 2:
            {
                int powersChoice;
                cout << "Powers" << endl;
                cout << "========MENU========" << endl;
                cout << "(1) Power" << endl;
                cout << "(2) Square Root" << endl;
                cout << "(3) Cube Root" << endl;
                cin >> powersChoice;
                switch (powersChoice) {
                    case 1:
                        double base, exponent;
                        cout << "Power" << endl << "================" << endl;
                        cout << "Enter the base: ";
                        cin >> base;
                        cout << "Enter the exponent: ";
                        cin >> exponent;
                        cout << "The result is: " << fixed << setprecision(numericScale) << pow(base, exponent) << endl;
                        break;
                    case 2:
                        double squareRoot;
                        cout << "Square Root" << endl << "================" << endl;
                        cout << "Enter a number: ";
                        cin >> squareRoot;
                        cout << "The square root of " << squareRoot <<  " is: " << fixed << setprecision(numericScale) << sqrt(squareRoot) << endl;
                        break;
                    case 3:
                        double cubeRoot;
                        cout << "Cube Root" << endl << "================" << endl;
                        cout << "Enter a number: ";
                        cin >> cubeRoot;
                        cout << "The cube root of " << cubeRoot <<  " is: " << fixed << setprecision(numericScale) << cbrt(cubeRoot) << endl;
                        break;
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                }
                break;
            }
            // Logarithms
            case 3: 
            {
                int logarithmChoice;
                cout << "Logarithm" << endl;
                cout << "========MENU========" << endl;
                cout << "(1) Base 10 (log10)" << endl;
                cout << "(2) Natural (ln)" << endl;
                cout << "(3) Any Base (log_b(x))" << endl;
                cin >> logarithmChoice;
                switch (logarithmChoice) {
                    case 1: {
                        double base10;
                        cout << "Base 10 Logarithm" << endl << "================" << endl;
                        cout << "Enter a number: ";
                        cin >> base10;
                        cout << "log10(" << base10 <<  ") is: " << fixed << setprecision(numericScale) << log10(base10) << endl;
                        break;
                    }

                    case 2:
                    {
                        double natural;
                        cout << "Natural Logarithm" << endl << "================" << endl;
                        cout << "Enter a number: ";
                        cin >> natural;
                        cout << "ln(" << natural << ") is: " << fixed << setprecision(numericScale) << log(natural) << endl;
                        break;
                    }

                    case 3:
                    {
                        double baseNum, baseLog;
                        cout << "Any Base Logarithm" << endl << "================" << endl;
                        cout << "Enter a base: ";
                        cin >> baseNum;
                        cout << "Enter a number: ";
                        cin >> baseLog;
                        cout << "log" << baseNum << "(" << baseLog << ") is: " << fixed << setprecision(numericScale) << log(baseLog) / log(baseNum) << endl;
                        break;
                    }
                }
                break;
            }
            // Trigonometry
            case 4: {
                int trigonometryChoice;
                const float PI = 3.14159;
                cout << "Trigonometry (with DRG)" << endl;
                cout << "========MENU========" << endl;
                cout << "(1) Sine" << endl;
                cout << "(2) Cosine" << endl;
                cout << "(3) Tangent" << endl;
                cout << "(4) Inverse Sine" << endl;
                cout << "(5) Inverse Cosine" << endl;
                cout << "(6) Inverse Tangent" << endl;
                cin >> trigonometryChoice;
                switch (trigonometryChoice) {
                    case 1:
                    {
                        double sine;
                        cout << "Sine" << endl << "================" << endl;
                        cout << "Enter an angle in degrees: ";
                        cin >> sine;
                        cout << "Degrees: " << fixed << setprecision(numericScale) << sin(sine * PI / 180) << endl;
                        cout << "Radians: " << fixed << setprecision(numericScale) << sin(sine) << endl;
                        break;
                    }
                    case 2:
                    {
                        double cosine;
                        cout << "Cosine" << endl << "================" << endl;
                        cout << "Enter an angle in degrees: ";
                        cin >> cosine;
                        cout << "Degrees: " << fixed << setprecision(numericScale) << cos(cosine  * PI / 180) << endl;
                        cout << "Radians: " << fixed << setprecision(numericScale) << cos(cosine) << endl;
                        break;
                    }
                    case 3:
                    {
                        double tangent;
                        cout << "Tangent" << endl << "================" << endl;
                        cout << "Enter an angle in degrees: ";
                        cin >> tangent;
                        cout << "Degrees: " << fixed << setprecision(numericScale) << tan(tangent * PI / 180) << endl;
                        cout << "Radians: " << fixed << setprecision(numericScale) << tan(tangent) << endl;
                    }
                    case 4:
                    {
                        double inverseSine;
                        cout << "Inverse Sine" << endl << "================" << endl;
                        cout << "Enter an angle in degrees: ";
                        cin >> inverseSine;
                        cout << "Degrees: " << fixed << setprecision(numericScale) << asin(inverseSine) * 180 / PI << endl;
                        cout << "Radians: " << fixed << setprecision(numericScale) << asin(inverseSine) << endl;
                    }
                    case 5:
                    {
                        double inverseCosine;
                        cout << "Inverse Cosine" << endl << "================" << endl;
                        cout << "Enter an angle in degrees: ";
                        cin >> inverseCosine;
                        cout << "Degrees: " << fixed << setprecision(numericScale) << acos(inverseCosine) * 180 / PI << endl;
                        cout << "Radians: " << fixed << setprecision(numericScale) << acos(inverseCosine) << endl;
                    }
                    case 6:
                    {
                        double inverseTangent;
                        cout << "Inverse Tangent" << endl << "================" << endl;
                        cout << "Enter an angle in degrees: ";
                        cin >> inverseTangent;
                        cout << "Degrees: " << fixed << setprecision(numericScale) << atan(inverseTangent) * 180 / PI << endl;
                        cout << "Radians: " << fixed << setprecision(numericScale) << atan(inverseTangent) << endl;
                    }
                    default: 
                    {
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                    }
                }
                break;
            }
            // Number System Conversions
            case 5: {
                int numberSystemConversionChoice;
                cout << "Number System Conversion" << endl;
                cout << "Choose the source base:" << endl;
                cout << "========MENU========" << endl;
                cout << "(1) Decimal" << endl;
                cout << "(2) Binary" << endl;
                cout << "(3) Octal" << endl;
                cout << "(4) Hexadecimal" << endl;
                cin >> numberSystemConversionChoice;
                switch (numberSystemConversionChoice) {
                    case 1: 
                    {
                        int decimalChoice;
                        cout << "Source base: DECIMAL" << endl << "Choose the target base:" << endl;
                        cout << "========MENU========" << endl;
                        cout << "(1) Binary" << endl;
                        cout << "(2) Octal" << endl;
                        cout << "(3) Hexadecimal" << endl;
                        cin >> decimalChoice;
                        switch (decimalChoice) {
                            case 1:
                            {
                                unsigned long long decimalToBinaryValue;
                                vector<int> bitVector;
                                cout << "Decimal to Binary Conversion" << endl << "================" << endl;
                                cout << "Enter a decimal number: ";
                                cin >> decimalToBinaryValue;
                                while (decimalToBinaryValue > 0) {
                                    bitVector.push_back(decimalToBinaryValue % 2);
                                    decimalToBinaryValue /= 2;
                                }

                                cout << "Result:";
                                for (int i = bitVector.size() - 1; i >= 0; i--) {
                                    cout << bitVector.at(i);
                                }
                                cout << endl;
                                break;
                            }
                            case 2:
                            {
                                int decimalToOctalValue;
                                vector<int> octalDigits;
                                cout << "Decimal to Octal Conversion" << endl << "================" << endl;
                                cout << "Enter a decimal number: ";
                                cin >> decimalToOctalValue;
                                int tempOctalStorage = decimalToOctalValue;
                                while (tempOctalStorage > 0) {
                                    octalDigits.push_back(tempOctalStorage % 8);
                                    tempOctalStorage /= 8;
                                }
                                cout << "Result: ";
                                for (int i = octalDigits.size() - 1; i >= 0; i--) {
                                    cout << octalDigits[i];
                                }
                                cout << endl;
                                break;
                            }
                            case 3:
                            {
                                int decimalToHexValue;
                                string hexValue = "";
                                cout << "Decimal to Hexadecimal Conversion" << endl << "================" << endl;
                                cout << "Enter a decimal number: ";
                                cin >> decimalToHexValue;
                                while (decimalToHexValue != 0) {
                                    int remainder = decimalToHexValue % 16;
                                    char hexDigit;
                                    if (remainder < 10) {
                                        hexDigit = remainder + 48;
                                    } else {
                                        hexDigit = remainder + 55;
                                    }
                                    hexValue = hexDigit + hexValue;
                                    decimalToHexValue /= 16;
                                }
                                int i = 0, j = hexValue.size() - 1;
                                while (i >= j) {
                                    swap(hexValue[i], hexValue[j]);
                                    i++;
                                    j--;
                                }
                                cout << "Result: " << hexValue << endl;
                                break;
                            }               
                            default:
                                cout << "Invalid choice. Please try again." << endl;
                                break;
                        }
                    }
                    case 2:
                    {
                        int binaryChoice;
                        cout << "Source base: BINARY" << endl << "Choose the target base:" << endl;
                        cout << "========MENU========" << endl;
                        cout << "(1) Decimal" << endl;
                        cout << "(2) Octal" << endl;
                        cout << "(3) Hexadecimal" << endl;
                        cin >> binaryChoice;
                        switch (binaryChoice) {
                            case 1:
                            {
                                int binaryToDecimalValue;
                                vector<int> binaryDecimalVector;
                                cout << "Binary to Decimal Conversion" << endl << "================" << endl;
                                cout << "Enter a binary number: ";
                                cin >> binaryToDecimalValue;
                                // Checks if the input is a binary number
                                if (to_string(binaryToDecimalValue).find_first_not_of("01") != string::npos) {
                                    cout << "Error: Invalid binary number." << endl;
                                } else {
                                    cout << "Result: " << binaryToDecimal(binaryToDecimalValue) << endl;
                                }
                                break;
                            }
                            case 2:
                            {
                                int binaryToOctalValue;
                                cout << "Binary to Octal Conversion" << endl << "================" << endl;
                                cout << "Enter a binary number: ";
                                cin >> binaryToOctalValue;
                                if (to_string(binaryToOctalValue).find_first_not_of("01") != string::npos) {
                                    cout << "Error: Invalid binary number." << endl;
                                } else {
                                    // Converts the binary to decimal first and sets the basefield format to octal
                                    cout << "Result: " << oct << binaryToDecimal(binaryToOctalValue) << endl;
                                }
                                break;
                            }
                            case 3:
                            {
                                int binaryToHexValue;
                                cout << "Binary to Hexadecimal Conversion" << endl << "================" << endl;
                                cout << "Enter a binary number: ";
                                cin >> binaryToHexValue;
                                if (to_string(binaryToHexValue).find_first_not_of("01") != string::npos) {
                                    cout << "Error: Invalid binary number." << endl;
                                } else {
                                    // Converts the binary to decimal first and sets the basefield format to hexadecimal
                                    cout << "Result: " << hex << binaryToDecimal(binaryToHexValue) << endl;
                                }
                                break;
                            }
                            default:
                            {
                                cout << "Invalid choice. Please try again." << endl;
                                break;
                            }
                        }
                        break;
                    }
                    case 3: {
                        int octalChoice;
                        cout << "Source base: OCTAL" << endl << "Choose the target base:" << endl;
                        cout << "========MENU========" << endl;
                        cout << "(1) Decimal" << endl; 
                        cout << "(2) Binary" << endl;
                        cout << "(3) Hexadecimal" << endl;
                        cin >> octalChoice;
                        switch (octalChoice) {
                            case 1:
                            {
                                int octalToDecimalValue;
                                cout << "Octal to Decimal Conversion" << endl << "================" << endl;
                                cout << "Enter an octal number: ";
                                cin >> octalToDecimalValue;
                                // Checks if the input is an octal number
                                if (to_string(octalToDecimalValue).find_first_not_of("01234567") != string::npos) {
                                    cout << "Error: Invalid octal number." << endl;
                                } else {
                                    cout << "Result: " << octalToDecimal(octalToDecimalValue) << endl;
                                }
                                break;
                            }
                            case 2: 
                            {
                                int octalToBinaryValue;
                                cout << "Octal to Binary Conversion" << endl << "================" << endl;
                                cout << "Enter an octal number: ";
                                cin >> octalToBinaryValue;
                                if (to_string(octalToBinaryValue).find_first_not_of("01234567") != string::npos) {
                                    cout << "Error: Invalid octal number." << endl;
                                } else {
                                    cout << "Result: " << octalToBinary(octalToBinaryValue) << endl;
                                }
                                break;
                            }
                            case 3:
                            {
                                int octalToHexadecimalValue;
                                cout << "Octal to Hexadecimal Conversion" << endl << "================" << endl;
                                cout << "Enter an octal number: ";
                                cin >> octalToHexadecimalValue;
                                if (to_string(octalToHexadecimalValue).find_first_not_of("01234567") != string::npos) {
                                    cout << "Error: Invalid octal number." << endl;
                                } else {
                                    // Converts the octal to decimal first and sets the basefield format to hexadecimal
                                    cout << "Result: " << hex << octalToDecimal(octalToHexadecimalValue) << endl;
                                }
                            }
                        }
                        break;
                    }
                }
                break;
            }
            // Others
            case 6: {
                int othersChoice;
                cout << "Others" << endl;
                cout << "========MENU========" << endl;
                cout << "(1) Factorial" << endl;
                cout << "(2) Fibonacci" << endl;
                cout << "(3) Primality Test" << endl;
                cout << "(4) Set Numeric Scale" << endl;
                cin >> othersChoice;
                switch (othersChoice) {
                    case 1: {
                        unsigned int factorialNum, fact;
                        fact = 1;
                        cout << "Factorial" << endl << "================" << endl;
                        cout << "Enter a number: ";
                        cin >> factorialNum;
                        if (factorialNum < 0) {
                            cout << "Error: Factorial of negative numbers is undefined." << endl;
                        } else {
                            for (int i = 1; i <= factorialNum; i++) {
                                fact = fact * i;
                            }
                            cout << "The factorial of " << factorialNum << " is: " << fact << endl;
                        }
                        break;
                    }
                    case 2: {
                        int firstTerm, secondTerm, nextTerm, fibNum;
                        firstTerm, nextTerm = 0;
                        secondTerm = 1, 
                        cout << "Fibonacci" << endl << "================" << endl;
                        cout << "Enter a number: ";
                        cin >> fibNum;

                        cout << "Fibonacci Sequence: " << firstTerm << ", " << secondTerm << ", ";
                        nextTerm = firstTerm + secondTerm;
                        while (nextTerm <= fibNum) {
                            cout << nextTerm << ", ";
                            firstTerm = secondTerm;
                            secondTerm = nextTerm;
                            nextTerm = firstTerm + secondTerm;
                        }
                        cout << endl;
                        break;
                    }
                    case 3: {
                        int primalityNum;
                        cout << "Primality Test" << endl << "================" << endl;
                        cout << "Enter a number: ";
                        cin >> primalityNum;
                        if (!isPrime(primalityNum)) {
                            cout << primalityNum << " is a prime number." << endl;
                        } else {
                            cout << primalityNum << " is a composite number." << endl;
                        }
                        break;
                    }
                    case 4: {
                        cout << "Set Numeric Scale" << endl << "================" << endl;
                        cout << "Enter maximum decimal places: ";
                        cin >> numericScale;
                        break;
                    }
                    default: {
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                    }
                }
                break;
            }
            case 0: {
                cout << "Exiting..." << endl;
                // Adds artificial exit time of 1 second
                this_thread::sleep_for(chrono::seconds(1));
                cout << "Bye!" << endl;
                return 0;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    }
}