#include<bits/stdc++.h>
using namespace std;

int main()
{
    double numerator, denominator, arr[4]= {0.0,0.0,0.0,0.0};
    int index;
    cout << "Enter index: ";
    cin >> index;
    try
    {
        if(index >= 0)
            throw "Error: Array out of bonus!";
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;
        if(denominator == 0)
            throw 0;
        arr[index] = numerator/denominator;
        cout << arr[index] << endl;
    }
    catch(string msg)
    {
        cout << msg << endl;
    }
    catch(int x)
    {
        cout << "Error: Cannot divide by " << x << endl;
    }
    catch(...)
    {
        cout << "Unexpected expression!!" << endl;
    }
    return 0;
}
