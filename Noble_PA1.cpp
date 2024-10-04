// File Name: Noble_PA1.cpp
// Author: Thaddeus Nathaniel L. Noble
// Email Address: tnoble@gbox.adnu.edu.ph
// ProgAss Number: 2
// Description: A command-line based calculator with arithmetic, exponentiation, logarithmic, trigonometric, and conversion functionalities.
// Last Changed: October 3, 2024

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
    cout << "The sum is: " << firstAddend + secondAddend << endl;
}
void subtraction() {
    double subtrahend, minuend;
    cout << "Subtraction" << endl << "================" << endl;
    cout << "Enter the minuend: ";
    cin >> minuend;
    cout << "Enter the subtrahend: ";
    cin >> subtrahend;
    cout << "The difference is: " << minuend - subtrahend << endl;
}
void multiplication() {
    double multiplicand, multiplier;
    cout << "Multiplication" << endl << "================" << endl;
    cout << "Enter the multiplicand: ";
    cin >> multiplicand;
    cout << "Enter the multiplier: ";
    cin >> multiplier;
    cout << "The product is: " << multiplicand * multiplier << endl;
}
void division() {
    double dividend, divisor;
    cout << "Division" << endl << "================" << endl;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;
    cout << "The quotient is: " << dividend / divisor << endl;
}

// Powers functions
void power() {
    double base, exponent;
    cout << "Power" << endl << "================" << endl;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    cout << "The result is: " << pow(base, exponent) << endl;
}
void squareRoot() {
    double squareRoot;
    cout << "Square Root" << endl << "================" << endl;
    cout << "Enter a number: ";
    cin >> squareRoot;
    cout << "The square root of " << squareRoot <<  " is: " << sqrt(squareRoot) << endl;
}
void cubeRoot() {
    double cubeRoot;
    cout << "Cube Root" << endl << "================" << endl;
    cout << "Enter a number: ";
    cin >> cubeRoot;
    cout << "The cube root of " << cubeRoot <<  " is: " << cbrt(cubeRoot) << endl;
}

// Logarithms functions
void base10() {
    double base10;
    cout << "Base 10 Logarithm" << endl << "================" << endl;
    cout << "Enter a number: ";
    cin >> base10;
    cout << "log10(" << base10 <<  ") is: " << log10(base10) << endl;
}
void logN() {
    double natural;
    cout << "Natural Logarithms" << endl << "================"  << endl;
    cout << "Enter a number: ";
    cin >> natural;
    cout << "ln(" << natural << ") is : " << log(natural) << endl;
}
void anyBase() {
    double baseNum, baseLog;
    cout << "Any Base Logarithm" << endl << "================" << endl;
    cout << "Enter a base: ";
    cin >> baseNum;
    cout << "Enter a number: ";
    cin >> baseLog;
    cout << "log" << baseNum << "(" << baseLog << ") is: " << log(baseLog) / log(baseNum) << endl;
}

// Trigonometry functions
void sine() {
    double sine;
    cout << "Sine" << endl << "================" << endl;
    cout << "Enter an angle in degrees: ";
    cin >> sine;
    cout << "Degrees: " << sin(sine * (PI / 180)) << endl;
    cout << "Radians: " << sin(sine) << endl;
}
void cosine() {
    double cosine;
    cout << "Cosine" << endl << "================" << endl;
    cout << "Enter an angle in degrees: ";
    cin >> cosine;
    cout << "Degrees: " << cos(cosine * (PI / 180)) << endl;
    cout << "Radians: " << cos(cosine) << endl;
}
void tangent() {
    double tangent;
    cout << "Tangent" << endl << "================" << endl;
    cout << "Enter an angle in degrees: ";
    cin >> tangent;
    cout << "Degrees: " << tan(tangent * (PI / 180)) << endl;
    cout << "Radians: " << tan(tangent) << endl;
}
void inverseSine() {
    double inverseSine;
    cout << "Inverse Sine" << endl << "================" << endl;
    cout << "Enter an angle in degrees: ";
    cin >> inverseSine;
    cout << "Degrees: " << asin(inverseSine * (PI / 180)) << endl;
    cout << "Radians: " << asin(inverseSine) << endl;
}
void inverseCosine() {
    double inverseCosine;
    cout << "Inverse Cosine" << endl << "================" << endl;
    cout << "Enter an angle in degrees: ";
    cin >> inverseCosine;
    cout << "Degrees: " << acos(inverseCosine * (PI / 180)) << endl;
    cout << "Radians: " << acos(inverseCosine) << endl;
}
void inverseTangent() {
    double inverseTangent;
    cout << "Inverse Tangent" << endl << "================" << endl;
    cout << "Enter an angle in degrees: ";
    cin >> inverseTangent;
    cout << "Degrees: " << atan(inverseTangent * (PI / 180)) << endl;
    cout << "Radians: " << atan(inverseTangent) << endl;
}

// Number system conversion functions
// Decimal to other bases
void decimalToBinary() {
    unsigned long long decimalToBinaryValue;
    vector<int> bitVector;
    cout << "Decimal to Binary Conversion" << endl << "================" << endl;
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
// Moved conversion logic to a helper function so it can be reused
int binaryToDecimalHelper(int n) {
    int convertedBinary = 0, base = 1;
    while (n > 0) {
        int lastDigit = n % 10;
        n = n / 10;
        convertedBinary += lastDigit * base;
        base = base * 2;
    }
    return convertedBinary;
}
void binaryToDecimal() {
    int binaryToDecimalValue;
    cout << "Binary to Decimal Conversion" << endl << "================" << endl;
    cout << "Enter a binary number: ";
    cin >> binaryToDecimalValue;
    // Checks if input is a binary number by checking if contains characters that are not 0 and 1
    if (to_string(binaryToDecimalValue).find_first_not_of("01") != string::npos) {
        cout << "Error: Invalid binary number." << endl;
    } else {
        cout << "Result: " << binaryToDecimalHelper(binaryToDecimalValue) << endl;
    }
}
void binaryToOctal() {
    string binaryToOctalValue;
    cout << "Binary to Octal Conversion" << endl << "================" << endl;
    cout << "Enter a binary number: ";
    cin >> binaryToOctalValue;
    if (binaryToOctalValue.find_first_not_of("01") != string::npos) {
        cout << "Error: Invalid binary number." << endl;
    } else {
        // Converts binary to decimal first
        int decimalValue = 0, base = 1;
        for (int i = binaryToOctalValue.length() - 1; i >= 0; --i) {
            if (binaryToOctalValue[i] == '1') {
                decimalValue += base;
            }
            base *= 2;
        }
        // Converts decimal to octal
        string octalNumber;
        do {
            // Converts the remainder to string and adds it to the octal number
            octalNumber = to_string(decimalValue % 8) + octalNumber;
            decimalValue /= 8;
        } while (decimalValue != 0);
        cout << "Result: " << octalNumber << endl;
    }
}
void binaryToHex() {
    int binaryToHexValue;
    cout << "Binary to Hexadecimal Conversion" << endl << "================" << endl;
    cout << "Enter a binary number: ";
    cin >> binaryToHexValue;
    if (to_string(binaryToHexValue).find_first_not_of("01") != string::npos) {
        cout << "Error: Invalid binary number." << endl;
    } else {
        // Converts binary to decimal first and sets ostream format to hex
        cout << "Result: " << hex << binaryToDecimalHelper(binaryToHexValue) << endl;
    }
}
// Octal to other bases
int octalToDecimalHelper(int n) {
    int decimalValue = 0, base = 1;
    while (n > 0) {
        int lastDigit = n % 10;
        n = n / 10;
        decimalValue += lastDigit * base;
        base = base * 8;
    }
    return decimalValue;
}
void octalToDecimal() {
    int octalToDecimalValue;
    cout << "Octal to Decimal Conversion" << endl << "================" << endl;
    cout << "Enter an octal number: ";
    cin >> octalToDecimalValue;
    // Checks if input has digits not in the octal base
    if (to_string(octalToDecimalValue).find_first_not_of("01234567") != string::npos) {
        cout << "Error: Invalid octal number." << endl;
    } else {
        octalToDecimalValue = octalToDecimalHelper(octalToDecimalValue);
        cout << "Result: " << octalToDecimalHelper(octalToDecimalValue) << endl;
    }
}
void octalToBinary() {
    int octalToBinaryValue;
    cout << "Octal to Binary Conversion" << endl << "================" << endl;
    cout << "Enter an octal number: ";
    cin >> octalToBinaryValue;
    if (to_string(octalToBinaryValue).find_first_not_of("01234567") != string::npos) {
        cout << "Error: Invalid octal number." << endl;
    } else {
        int decimalValue = octalToDecimalHelper(octalToBinaryValue);
        vector<int> bitVector;
        while(decimalValue > 0) {
            bitVector.push_back(decimalValue % 2);
            decimalValue /= 2;
        }
        cout << "Result: ";
        for (int i = bitVector.size() - 1; i>= 0; i--) {
            cout << bitVector.at(i);
        }
        cout << endl;
    }
}
void octalToHex() {
    int octalToHexValue;
    cout << "Octal to Hexadecimal Conversion" << endl << "================" << endl;
    cout << "Enter an octal number: ";
    cin >> octalToHexValue;
    if (to_string(octalToHexValue).find_first_not_of("01234567") != string::npos) {
        cout << "Error: Invalid octal number." << endl;
    } else {
        cout << "Result: " << hex << octalToDecimalHelper(octalToHexValue) << endl;
    }
}
// Hexadecimal to other bases
int hexToDecimalHelper(string n) {
    int decimalValue = 0, base = 1;
    // Iterates through the hexadecimal number from right to left
    for (int i = n.size() - 1; i >= 0; i--) {
        // Converts the hexadecimal character to decimal
        if (n[i] >= '0' && n[i] <= '9') {
            decimalValue += (n[i] - 48) * base;
            base *= 16;
        } else if (n[i] >= 'A' && n[i] <= 'F') {
            decimalValue += (n[i] - 55) * base;
            base *= 16;
        } else if (n[i] >= 'a' && n[i] <= 'f') {
            decimalValue += (n[i] - 87) * base;
            base *= 16;
        }
    }
    return decimalValue;
}
void hexToDecimal() {
    string hexToDecimalValue;
    cout << "Hexadecimal to Decimal Conversion" << endl << "================" << endl;
    cout << "Enter a hexadecimal number: ";
    cin >> hexToDecimalValue;
    // Checks if input has characters not in the hexadecimal base
    if (hexToDecimalValue.find_first_not_of("0123456789ABCDEFabcdef") != string::npos) {
        cout << "Error: Invalid hexadecimal number." << endl;
    } else {
        cout << "Result: " <<  hexToDecimalHelper(hexToDecimalValue) << endl;
    }
}
void hexToBinary() {
    string hexToBinaryValue;
    cout << "Hexadecimal to Binary Conversion" << endl << "================" << endl;
    cout << "Enter a hexadecimal number: ";
    cin >> hexToBinaryValue;
    if (hexToBinaryValue.find_first_not_of("0123456789ABCDEFabcdef") != string::npos) {
        cout << "Error: Invalid hexadecimal number." << endl;
    } else {
        // Converts hexadecimal to decimal first and sets ostream format to binary
        cout << "Result: " << bitset<8>(hexToDecimalHelper(hexToBinaryValue)) << endl;
    }
}
void hexToOctal() {
    string hexToOctalValue;
    cout << "Hexadecimal to Octal Conversion" << endl << "================" << endl;
    cout << "Enter a hexadecimal number: ";
    cin >> hexToOctalValue;
    if (hexToOctalValue.find_first_not_of("0123456789ABCDEFabcdef") != string::npos) {
        cout << "Error: Invalid hexadecimal number." << endl;
    } else {
        // Converts hexadecimal to decimal first and sets ostream format to octal
        cout << "Result: " << oct << hexToDecimalHelper(hexToOctalValue) << endl;
    }
}

// Other functions
void factorial() {
    int factorialNum;
    long long factorial = 1;
    cout << "Factorial" << endl << "================" << endl;
    cout << "Enter a number: ";
    cin >> factorialNum;
    for (int i = 1; i <= factorialNum; i++) {
        factorial *= i;
    }
    cout << "The factorial of " << factorialNum << " is: " << factorial << endl;
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
    // Sets the numeric scale to the inputted value
    cout << fixed << setprecision(numericScale);
}
void invalidChoiceError() {
    // Outputs error message when no valid choice is selected
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
                                binaryToOctal();
                                break;
                            }
                            case 3:
                            {
                                binaryToHex();
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
                                octalToDecimal();
                                break;
                            }
                            case 2: 
                            {
                                octalToBinary();
                                break;
                            }
                            case 3:
                            {
                                octalToHex();
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
                                hexToDecimal();
                                break;
                            }
                            case 2:
                            {
                                hexToBinary();
                                break;
                            }
                            case 3:
                            {
                                hexToOctal();
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