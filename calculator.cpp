#include "calculator.h"
#include <iostream>
#include<sstream>

Calculator::Calculator() {
    num1 = 0;
    num2 = 0;
}

double Calculator::CalculatorFromString(const std::string& expression)
{

    std::stringstream ss(expression);
    double n1,n2;
    char op;
    ss >> n1 >> op >> n2;

    num1 = n1;
    num2 = n2;
double result;
    switch (op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
        if(num2!=0){
            result = num1 / num2;
            break;
        } else{
            std::cerr << "Error: Division by zero is not allowed.\n";
            return -1;
        }
        default:
            std::cerr << "Error: Unknown operation '" << op << "'\n";
            return -1;
    }

    return result;
}

void Calculator::displayResult(double result) {
    std::cout << "Result: " << result << std::endl;
}