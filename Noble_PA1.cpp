// File Name: Noble_PA1.cpp
// Author: Thaddeus Nathaniel L. Noble
// Email Address: tnoble@gbox.adnu.edu.ph
// ProgAss Number: 2
// Description: A command-line based calculator with arithmetic, exponentiation, logarithmic, trigonometric, and conversion functionalities.
// Last Changed: September 25, 2024

#include <iostream>
#include <iomanip>
#include <thread>
#include <cmath>
using namespace std;

// Basic Arithmetic functions
double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    return num1 / num2;
}

// Logarithmic functions

// Trigonometric functions

// Number System Conversion functions

// Others
int factorial(int num) {
    for (int i = 1; i <= num; i++) {
       num *= i;
       return num;
    }
}

/* void fibonacciSequence(int num) {
    int term1 = 0, term2 = 1, nextTerm = term1 + term2;
    cout << "Fibonacci Sequence: " << term1 << ", " << term2 << ", ";
} */

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

int main() {
    // Splash and main menu
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
            case 1:
                // Basic Arithmetic
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
                            cout << "The sum is: " << add(firstAddend, secondAddend) << endl;
                            break;
                        case 2:
                            double subtrahend, minuend;
                            cout << "Subtraction" << endl << "================" << endl;
                            cout << "Enter the minuend: ";
                            cin >> minuend;
                            cout << "Enter the subtrahend: ";
                            cin >> subtrahend;
                            cout << "The difference is: " << subtract(minuend, subtrahend) << endl;
                            break;
                        case 3:
                            double multiplicand, multiplier;
                            cout << "Multiplication" << endl << "================" << endl;
                            cout << "Enter the multiplicand: ";
                            cin >> multiplicand;
                            cout << "Enter the multiplier: ";
                            cin >> multiplier;
                            cout << "The product is: " << multiply(multiplicand, multiplier) << endl;
                            break;
                        case 4:
                            double dividend, divisor;
                            cout << "Division" << endl << "================" << endl;
                            cout << "Enter the dividend: ";
                            cin >> dividend;
                            cout << "Enter the divisor: ";
                            cin >> divisor;
                            cout << "The quotient is: " << fixed << setprecision(3) << divide(dividend, divisor) << endl;
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                break;
                
            case 2:
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
                        cout << "The result is: " << pow(base, exponent) << endl;
                        break;
                    case 2:
                        double squareRoot;
                        cout << "Square Root" << endl << "================" << endl;
                        cout << "Enter a number: ";
                        cin >> squareRoot;
                        cout << "The square root of " << squareRoot <<  " is: " << sqrt(squareRoot) << endl;
                        break;
                    case 3:
                        double cubeRoot;
                        cout << "Cube Root" << endl << "================" << endl;
                        cout << "Enter a number: ";
                        cin >> cubeRoot;
                        cout << "The cube root of " << cubeRoot <<  " is: " << cbrt(cubeRoot) << endl;
                        break;
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                }
                break;

            case 3:
                int logarithmChoice;
                cout << "Logarithm" << endl;
                cout << "========MENU========" << endl;
                cout << "(1) Base 10" << endl;
                cout << "(2) Natural" << endl;
                cout << "(3) Any Base" << endl;
                cin >> logarithmChoice;
                switch (logarithmChoice) {
                    case 1:
                        double base10;
                        cout << "Base 10 Logarithm" << endl << "================" << endl;
                        cout << "Enter a number: ";
                        cin >> base10;
                        cout << "log10(" << base10 <<  " is: " << log10(base10) << endl;
                        break;
                }
                break;

            case 4:
                int trigonometryChoice;
                break;

            case 5:
                int numberSystemConversionChoice;
                break;

            case 6:
                int othersChoice;
                cout << "Others" << endl;
                cout << "========MENU========" << endl;
                cout << "(1) Factorial" << endl;
                cout << "(2) Fibonacci" << endl;
                cout << "(3) Primality Test" << endl;
                cout << "(4) Set Numeric Scale" << endl;
                cin >> othersChoice;
                switch (othersChoice) {
                    case 1:
                        unsigned int factorialNum;
                        cout << "Factorial" << endl << "================" << endl;
                        cout << "Enter a number: ";
                        cin >> factorialNum;
                        if (factorialNum < 0) {
                            cout << "Error: Factorial of negative numbers is undefined." << endl;
                        } else {
                            cout << "The factorial of " << factorialNum << " is: " << factorial(factorialNum) << endl;
                        }
                        break;

                    case 3:
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
                break;

            case 0:
                cout << "Exiting..." << endl;
                // Adds artificial exit time of 1 second
                this_thread::sleep_for(chrono::seconds(1));
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
}