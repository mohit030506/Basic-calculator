#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>

class Calculator
{
private:
    double num1, num2;

public:
    Calculator(); // constructor

    void setNumbers(double n1, double n2);

    void displayResult(double result);

    double CalculatorFromString(const std::string& expression);
};

#endif