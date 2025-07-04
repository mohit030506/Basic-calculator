#include "calculator.h"
#include <iostream>
#include<string>

int main()
{
    Calculator calc;
    std::string input;
    std::cout << "Enter the mathematical equation : ";
    std::getline(std::cin, input);
    double result = calc.CalculatorFromString(input);
    calc.displayResult(result);
    return 0;
}