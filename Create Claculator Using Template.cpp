#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Calculator
{
public:
    T Add(T a, T b) 
    {
        return a + b;
    }
    T Subtract(T a, T b) 
    {
        return a - b;
    }
    T Multiply(T a, T b) 
    {
        return a * b;
    }
    T Divide(T a, T b)
    {
        if (b == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main()
{
    Calculator <double> calc;
    double a, b;
    char operation;
    cin >> a >> operation >> b;
   switch (operation) 
    {
        case '+': cout << "Result: " << calc.Add(a, b) << endl; break;
        case '-': cout << "Result: " << calc.Subtract(a, b) << endl; break;
        case '*': cout << "Result: " << calc.Multiply(a, b) << endl; break;
        case '/': cout << "Result: " << calc.Divide(a, b) << endl; break;
        default: cout << "Invalid operation!" << endl; break;
    }
    return 0;
}
