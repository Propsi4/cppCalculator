#include "Calculation.h"
#include <vector>
#include <string>
#include <iostream>
#include <valarray>


using namespace std;

Calculation::Calculation()
{
}

Calculation::~Calculation()
{
}

string Calculation::eval(string expression)
{
    int c_operations = 0;
    string operation;
    int operation_index;
    bool is_percent = false;
    for(int i = 0; i < operations.size(); i++) {
        // if operations[i] is in expression
        if(expression.find(operations[i]) != string::npos) {
            c_operations++;
            operation = operations[i];
            operation_index = expression.find(operations[i]);
            if (operations[i] == "%") {
                is_percent = true;
            }
        }
    }
    if(c_operations == 0) {
        return "Cannot solve this expression!";
    }

    if(operation == "not"){
        // like not232 => -232
        int first_number = stoi(expression.substr(3, expression.length() - 1));
        return to_string(-first_number);
    }
    else if(operation == "ln"){
        // like ln-232
        int first_number = stoi(expression.substr(2, expression.length() - 1));
        return to_string(log(first_number)); 
    }
    else if(operation == "lg"){
        // like log-232
        int first_number = stoi(expression.substr(2, expression.length() - 1));
        return to_string(log10(first_number)); 
    }
    else if(operation == "tan"){
        // like tan-232
        int first_number = stoi(expression.substr(3, expression.length() - 1));
        return to_string(tan(first_number)); 
    }
    else if(operation == "ctan"){
        // like ctan-232
        int first_number = stoi(expression.substr(4, expression.length() - 1));
        return to_string(1 / tan(first_number)); 
    }
    else if(operation == "sin"){
        // like sin-232
        int first_number = stoi(expression.substr(3, expression.length() - 1));
        return to_string(sin(first_number)); 
    }
    else if(operation == "cos"){
        // like cos-232
        int first_number = stoi(expression.substr(3, expression.length() - 1));
        return to_string(cos(first_number)); 
    }
    else if(operation == "sqrt"){
        // like sqrt-232
        int first_number = stoi(expression.substr(4, expression.length() - 1));
        return to_string(sqrt(first_number)); 
    }
    else if(operation == "^"){
        // like 2^3
        int first_number = stoi(expression.substr(0, operation_index));
        int second_number = stoi(expression.substr(operation_index + 1, expression.length() - 1));
        return to_string(static_cast<int>(pow(first_number, second_number))); 
    }
    else if(operation == "%"){
        // like 2%3
        int first_number = stoi(expression.substr(0, operation_index));
        int second_number = stoi(expression.substr(operation_index + 1, expression.length() - 1));
        return to_string(first_number % second_number); 
    }
    else if(operation == "+"){
        // like 2+3
        int first_number = stoi(expression.substr(0, operation_index));
        int second_number = stoi(expression.substr(operation_index + 1, expression.length() - 1));
        return to_string(first_number + second_number); 
    }
    else if(operation == "-"){
        // like 2-3
        int first_number = stoi(expression.substr(0, operation_index));
        int second_number = stoi(expression.substr(operation_index + 1, expression.length() - 1));
        return to_string(first_number - second_number); 
    }
    else if(operation == "*"){
        // like 2*3
        int first_number = stoi(expression.substr(0, operation_index));
        int second_number = stoi(expression.substr(operation_index + 1, expression.length() - 1));
        return to_string(first_number * second_number); 
    }
    else if(operation == "/"){
        // like 2/3
        int first_number = stoi(expression.substr(0, operation_index));
        int second_number = stoi(expression.substr(operation_index + 1, expression.length() - 1));
        return to_string(first_number / second_number); 
    }

    return "None";
}

