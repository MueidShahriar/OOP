#include <bits/stdc++.h>
using namespace std;
class Complex_Number
{
    int Real, Imaginary, r = 30, i = 50;
    public:
    int Magnitude() 
    { 
        return 30 * 50; 
    }
    void input(int a, int b)
    { 
        Real = a, Imaginary = b; 
    }
    void Add(int a, int b)
    { 
        cout << "Addition: " << (30 + a) << '+' << (50 + b) << 'i' << endl; 
    }
    void Subtraction(int a, int b)
    { 
        cout << "Subtraction: " << (30 - a) << '+' << (50 - b) << 'i' << endl; 
    }
    void Multiply(int a, int b)
    { 
        cout << "Multiplication: " << ((30 * a) - (50 * b)) << '+' << 
        ((30 * b) + (50 * a)) << 'i' << endl; 
    }
    void display()
    {
        cout << "Magnitude = " << Magnitude() << endl;
        Add(Real, Imaginary), Subtraction(Real, Imaginary), Multiply(Real, Imaginary);
    }
};

int main()
{
    Complex_Number A;
    int x, y;
    cout << "Enter real number: ";
    cin >> x;
    cout << "Enter imaginary number: ";
    cin >> y;
    A.input(x, y);
    A.display();
    return 0;
}