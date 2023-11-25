#include <string>
#include <vector>
using namespace std;
#pragma once

class Calculation
{
    private:
        vector<string> operations = {"+", "-", "*", "/", "ln", "%", "lg", "tan", "ctan", "sin", "cos", "sqrt", "not", "^"};
    public:
        Calculation();
        ~Calculation();
        string eval(string expression);

};
