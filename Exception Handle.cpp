#include<bits/stdc++.h>
using namespace std;

int main()
{
    double numerator, denominator, divide;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
    try
    {
        if(denominator == 0)
            throw 0;
        divide = numerator / denominator;
        cout << numerator << "/" << denominator << " = " <<divide;
    }
    catch(int x)
    {
        cout << "Error: Cannot divide by " << x << endl;
    }
    return 0;
}
