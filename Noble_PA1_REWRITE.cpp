// File Name: Noble_PA1.cpp
// Author: Thaddeus Nathaniel L. Noble
// Email Address: tnoble@gbox.adnu.edu.ph
// ProgAss Number: 2
// Description: A command-line based calculator with arithmetic, exponentiation, logarithmic, trigonometric, and conversion functionalities.
// Last Changed: October 2, 2024

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <thread>
#include <vector>
using namespace std;

int numericScale;
const float PI = 3.14159;

// Basic arithmetic functions
void addition() {
    double firstAddend, secondAddend;
    cout << "Addition" << endl << "================" << endl;
    cout << "Enter the first addend: ";
    cin >> firstAddend;
    cout << "Enter the second addend: ";
    cin >> secondAddend;
    cout << "The sum is: " << fixed << setprecision(numericScale) << firstAddend + secondAddend << endl;
}
void subtraction() {
    double subtrahend, minuend;
    cout << "Subtraction" << endl << "================" << endl;
    cout << "Enter the minuend: ";
    cin >> minuend;
    cout << "Enter the subtrahend: ";
    cin >> subtrahend;
    cout << "The difference is: " << fixed << setprecision(numericScale) << minuend - subtrahend << endl;
}
void multiplication() {
    double multiplicand, multiplier;
    cout << "Multiplication" << endl << "================" << endl;
    cout << "Enter the multiplicand: ";
    cin >> multiplicand;
    cout << "Enter the multiplier: ";
    cin >> multiplier;
    cout << "The product is: " << fixed << setprecision(numericScale) << multiplicand * multiplier << endl;
}
void division() {
    double dividend, divisor;
    cout << "Division" << endl << "================" << endl;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;
    cout << "The quotient is: " << fixed << setprecision(numericScale) << dividend / divisor << endl;
}

// Powers functions
void power() {
    double base, exponent;
    cout << "Power" << endl << "================" << endl;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    cout << "The result is: " << fixed << setprecision(numericScale) << pow(base, exponent) << endl;
}
void squareRoot() {
    double squareRoot;
    cout << "Square Root" << endl << "================" << endl;
    cout << "Enter a number: ";
    cin >> squareRoot;
    cout << "The square root of " << squareRoot <<  " is: " << fixed << setprecision(numericScale) << sqrt(squareRoot) << endl;
}
void cubeRoot() {
    double cubeRoot;
    cout << "Square Root" << endl << "================" << endl;
    cout << "Enter a number: ";
    cin >> cubeRoot;
    cout << "The square root of " << cubeRoot <<  " is: " << fixed << setprecision(numericScale) << cbrt(cubeRoot) << endl;
}

// Logarithms functions
void base10() {
    double base10;
    cout << "Base 10 Logarithm" << endl << "================" << endl;
    cout << "Enter a number: ";
    cin >> base10;
    cout << "log10(" << base10 <<  ") is: " << fixed << setprecision(numericScale) << log10(base10) << endl;
}
void logN() {
    double natural;
    cout << "Natural Logarithms" << endl << "================"  << endl;
    cout << "Enter a number: ";
    cin >> natural;
    cout << "ln(" << natural << ") is : " << fixed << setprecision(numericScale) << log(natural) << endl;
}
void anyBase() {
    double baseNum, baseLog;
    cout << "Any Base Logarithm" << endl << "================" << endl;
    cout << "Enter a base: ";
    cin >> baseNum;
    cout << "Enter a number: ";
    cin >> baseLog;
    cout << "log" << baseNum << "(" << baseLog << ") is: " << fixed << setprecision(numericScale) << log(baseLog) / log(baseNum) << endl;
}

// Trigonometry functions
void sine() {
    double sine;
    cout << "Sine" << endl << "================" << endl;
    cout << "Enter an angle in degrees: ";
    cin >> sine;
    cout << "Degrees: " << fixed << setprecision(numericScale) << sin(sine * PI / 180) << endl;
    cout << "Radians: " << fixed << setprecision(numericScale) << sin(sine) << endl;
}
void cosine() {
    double cosine;
    cout << "Cosine" << endl << "================" << endl;
    cout << "Enter an angle in degrees: ";
    cin >> cosine;
    cout << "Degrees: " << fixed << setprecision(numericScale) << cos(cosine * PI / 180) << endl;
    cout << "Radians: " << fixed << setprecision(numericScale) << cos(cosine) << endl;
}
void tangent() {
    double tangent;
    cout << "Tangent" << endl << "================" << endl;
    cout << "Enter an angle in degrees: ";
    cin >> tangent;
    cout << "Degrees: " << fixed << setprecision(numericScale) << tan(tangent * PI / 180) << endl;
    cout << "Radians: " << fixed << setprecision(numericScale) << tan(tangent) << endl;
}
void inverseSine() {
    double inverseSine;
    cout << "Inverse Sine" << endl << "================" << endl;
    cout << "Enter an angle in degrees: ";
    cin >> inverseSine;
    cout << "Degrees: " << fixed << setprecision(numericScale) << asin(inverseSine * PI / 180) << endl;
    cout << "Radians: " << fixed << setprecision(numericScale) << asin(inverseSine) << endl;
}
void inverseCosine() {
    double inverseCosine;
    cout << "Inverse Cosine" << endl << "================" << endl;
    cout << "Enter an angle in degrees: ";
    cin >> inverseCosine;
    cout << "Degrees: " << fixed << setprecision(numericScale) << acos(inverseCosine * PI / 180) << endl;
    cout << "Radians: " << fixed << setprecision(numericScale) << acos(inverseCosine) << endl;
}
void inverseTangent() {
    double inverseTangent;
    cout << "Inverse Tangent" << endl << "================" << endl;
    cout << "Enter an angle in degrees: ";
    cin >> inverseTangent;
    cout << "Degrees: " << fixed << setprecision(numericScale) << atan(inverseTangent * PI / 180) << endl;
    cout << "Radians: " << fixed << setprecision(numericScale) << atan(inverseTangent) << endl;
}

// Number system conversion functions
// Decimal to other bases
void decimalToBinary() {
    unsigned long long decimalToBinaryValue;
    vector<int> bitVector;
    cout << "Decimal to Binary Conversion" "Decimal to Binary Conversion" << endl << "================" << endl;
    cout << "Enter a decimal number: ";
    cin >> decimalToBinaryValue;
    while(decimalToBinaryValue > 0) {
        bitVector.push_back(decimalToBinaryValue % 2);
        decimalToBinaryValue /= 2;
    }
    cout << "Result: ";
    for (int i = bitVector.size() - 1; i>= 0; i--) {
        cout << bitVector.at(i);
    }
    cout << endl;
}
void decimalToOctal() {
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
}
void decimalToHex() {
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
}
// Binary to other bases
void binaryToDecimal() {
    int binaryToDecimalValue;
    cout << "Binary to Decimal Conversion" << endl << "================" << endl;
    cout << "Enter a binary number: ";
    cin >> binaryToDecimalValue;
    // Checks if input is a binary number by checking if contains characters that are not 0 and 1
    if (to_string(binaryToDecimalValue).find_first_not_of("01") != string::npos) {
        cout << "Error: Invalid binary number." << endl;
    } else {
        int decimalValue = 0, base = 1, tempNum = binaryToDecimalValue;
        while (binaryToDecimalValue > 0) {
            int lastDigit = tempNum % 10;
            tempNum = tempNum / 10;
            decimalValue += lastDigit * base;
            base = base * 2;
        }
        cout << "Result: " << decimalValue << endl;
    }
}
void binaryToOctal() {
    int binaryToOctalValue;
    cout << "Binary to Octal Conversion" << endl << "================" << endl;
    cout << "Enter a binary number: ";
    cin >> binaryToOctalValue;
    if (to_string(binaryToOctalValue).find_first_not_of("01") != string::npos) {
        cout << "Error: Invalid binary number." << endl;
    } else {
        int decimalValue = 0, base = 1, tempNum = binaryToOctalValue;
        while (binaryToOctalValue > 0) {
            int lastDigit = tempNum % 10;
            tempNum = tempNum / 10;
            decimalValue += lastDigit * base;
            base = base * 2;
        }
        int i = 0;
        long long binaryNumber = 0;
        while (decimalValue != 0) {
            binaryNumber += (decimalValue % 8) * pow(10, i);
            ++i;
            decimalValue /= 8;
        }
        cout << "Result: " << binaryNumber << endl;
    }
}
void binaryToHex() {
    
}
// Octal to other bases

// Hexadecimal to other bases

// Other functions
void factorial() {
    unsigned int factorialValue, factorialBase;
    factorialBase = 1;
    cout << "Factorial" << endl << "================" << endl;
    cout << "Enter a number: ";
    cin >> factorialValue;
    if (factorialValue < 0) {
        cout << "Error: Factorial of negative numbers is undefined." << endl;
    } else {
        for (int i = 1; i <= factorialValue; i++) {
            factorialBase = factorialBase * 1;
        }
        cout << "The factorial of " << factorialValue << " is: " << factorialBase << endl;
    }
}
void fibonacci() {
    int firstTerm, secondTerm, nextTerm, fibNum;
    firstTerm, nextTerm = 0;
    secondTerm = 1;
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
}
void primalityTest() {
    int primalityNum;
    bool isPrime;
    cout << "Primality Test" << endl << "================" << endl;
    cout << "Enter a number: ";
    cin >> primalityNum;
    // Returns false if primalityNum is 0 or 1
    if (primalityNum == 0 || primalityNum == 1) {
        isPrime = false;
    }
    // Returns false if primalityNum is divisible by any number from 2 to primalityNum / 2
    for (int i = 2; i <= primalityNum / 2; i++) {
        if (primalityNum % i == 0) {
            isPrime = false;
            break;
        }
    }
    // Outputs the result
    if (isPrime) {
        cout << primalityNum << " is a prime number." << endl;
    } else {
        cout << primalityNum << " is not a prime number." << endl;
    }
}
void setNumericScale() {
    cout << "Set Numeric Scale" << endl << "================" << endl;
    cout << "Enter maximum decimal places: ";
    cin >> numericScale;
    cout << fixed << setprecision(numericScale);
}
void invalidChoiceError() {
    cout << "Invalid choice. Please try again." << endl;
}

// Driver function
int main() {
    int mainMenuChoice;
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
            case 1: {
                int basicArithmeticChoice;
                cout << "Basic Arithmetic" << endl;
                cout << "========MENU========" << endl;
                cout << "(1) Addition" << endl;
                cout << "(2) Subtraction" << endl;
                cout << "(3) Multiplication" << endl;
                cout << "(4) Division" << endl;
                cin >> basicArithmeticChoice;
                switch(basicArithmeticChoice) {
                    case 1: {
                        addition();
                        break;
                    }
                    case 2: {
                        subtraction();
                        break;
                    }
                    case 3: {
                        multiplication();
                        break;
                    }
                    case 4: {
                        division();
                        break;
                    }
                    default: {
                        invalidChoiceError();
                        break;
                    }
                }
                break;
            }
            case 2: {
                int powersChoice;
                cout << "Powers" << endl;
                cout << "========MENU========" << endl;
                cout << "(1) Power" << endl;
                cout << "(2) Square Root" << endl;
                cout << "(3) Cube Root" << endl;
                cin >> powersChoice;
                switch(powersChoice) {
                    case 1: {
                        power();
                        break;
                    }
                    case 2: {
                        squareRoot();
                        break;
                    }
                    case 3: {
                        cubeRoot();
                        break;
                    }
                    default: {
                        invalidChoiceError();
                        break;
                    }
                }
                break;
            }
            case 3: {
                int logarithmsChoice;
                cout << "Logarithms" << endl;
                cout << "========MENU========" << endl;
                cout << "(1) Base 10" << endl;
                cout << "(2) Natural" << endl;
                cout << "(3) Any Base" << endl;
                cin >> logarithmsChoice;
                switch(logarithmsChoice) {
                    case 1: {
                        base10();
                        break;
                    }
                    case 2: {
                        logN();
                        break;
                    }
                    case 3: {
                        anyBase();
                        break;
                    }
                    default: {
                        invalidChoiceError();
                        break;
                    }
                }
                break;
            }
            case 4: {
                int trigonometryChoice;
                cout << "Trigonometry (with DRG)" << endl;
                cout << "========MENU========" << endl;
                cout << "(1) Sine" << endl;
                cout << "(2) Cosine" << endl;
                cout << "(3) Tangent" << endl;
                cout << "(4) Inverse Sine" << endl;
                cout << "(5) Inverse Cosine" << endl;
                cout << "(6) Inverse Tangent" << endl;
                cin >> trigonometryChoice;
                switch(trigonometryChoice) {
                    case 1: {
                        sine();
                        break;
                    }
                    case 2: {
                        cosine();
                        break;
                    }
                    case 3: {
                        tangent();
                        break;
                    }
                    case 4: {
                        inverseSine();
                        break;
                    }
                    case 5: {
                        inverseCosine();
                        break;
                    }
                    case 6: {
                        inverseTangent();
                        break;
                    }
                    default: {
                        invalidChoiceError();
                        break;
                    }
                }
                break;
            }
            case 5: {
                int conversionChoice;
                cout << "Number System Conversion" << endl;
                cout << "Choose the source base:" << endl;
                cout << "========MENU========" << endl;
                cout << "(1) Decimal" << endl;
                cout << "(2) Binary" << endl;
                cout << "(3) Octal" << endl;
                cout << "(4) Hexadecimal" << endl;
                cin >> conversionChoice;
                switch(conversionChoice){
                    case 1:
                    {
                        int decimalConversionChoice;
                        cout << "Source base: DECIMAL" << endl << "Choose the target base:" << endl;
                        cout << "========MENU========" << endl;
                        cout << "(1) Binary" << endl;
                        cout << "(2) Octal" << endl;
                        cout << "(3) Hexadecimal" << endl;
                        cin >> decimalConversionChoice;
                        switch(decimalConversionChoice) {
                            case 1:
                            {
                                decimalToBinary();
                                break;
                            }
                            case 2:
                            {
                                decimalToOctal();
                                break;
                            }
                            case 3:
                            {
                                decimalToHex();
                                break;
                            }
                            default:
                            {
                                invalidChoiceError();
                                break;
                            }
                        }
                        break;
                    }
                    case 2: {
                        int binaryConversionChoice;
                        cout << "Source base: BINARY" << endl << "Choose the target base:" << endl;
                        cout << "========MENU========" << endl;
                        cout << "(1) Decimal" << endl;
                        cout << "(2) Octal" << endl;
                        cout << "(3) Hexadecimal" << endl;
                        cin >> binaryConversionChoice;
                        switch(binaryConversionChoice) {
                            case 1:
                            {
                                binaryToDecimal();
                                break;
                            }
                            case 2:
                            {
                                // binaryToOctal();
                                break;
                            }
                            case 3:
                            {
                                // binaryToHex();
                                break;
                            }
                            default:
                            {
                                invalidChoiceError();
                                break;
                            }
                        }
                        break;
                    }
                    case 3: {
                        int octalConversionChoice;
                        cout << "Source base: OCTAL" << endl << "Choose the target base:" << endl;
                        cout << "========MENU========" << endl;
                        cout << "(1) Decimal" << endl; 
                        cout << "(2) Binary" << endl;
                        cout << "(3) Hexadecimal" << endl;
                        cin >> octalConversionChoice;
                        switch(octalConversionChoice) {
                            case 1:
                            {
                                // octalToDecimal();
                                break;
                            }
                            case 2: 
                            {
                                // octalToBinary();
                                break;
                            }
                            case 3:
                            {
                                // octalToHex();
                                break;
                            }
                            default:
                            {
                                invalidChoiceError();
                                break;
                            }
                        }
                        break;
                    }
                    case 4: {
                        int hexConversionChoice;
                        cout << "Source base: HEXADECIMAL" << endl << "Choose the target base:" << endl;
                        cout << "========MENU========" << endl;
                        cout << "(1) Decimal" << endl;
                        cout << "(2) Binary" << endl;
                        cout << "(3) Octal" << endl;
                        cin >> hexConversionChoice;
                        switch(hexConversionChoice) {
                            case 1:
                            {
                                // hexToDecimal();
                                break;
                            }
                            case 2:
                            {
                                // hexToBinary();
                                break;
                            }
                            case 3:
                            {
                                // hexToOctal();
                                break;
                            }
                            default:
                            {
                                invalidChoiceError();
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
            }
            case 6: {
                int othersChoice;
                cout << "Others" << endl;
                cout << "========MENU========" << endl;
                cout << "(1) Factorial" << endl;
                cout << "(2) Fibonacci" << endl;
                cout << "(3) Primality Test" << endl;
                cout << "(4) Set Numeric Scale" << endl;
                cin >> othersChoice;
                switch(othersChoice) {
                    case 1: {
                        factorial();
                        break;
                    }
                    case 2: {
                        fibonacci();
                        break;
                    }
                    case 3: {
                        primalityTest();
                        break;
                    }
                    case 4: {
                        setNumericScale();
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
                invalidChoiceError();
                break;
            }
        }
    }
}