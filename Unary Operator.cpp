#include<bits/stdc++.h>
using namespace std;

class overloading
{
    int num;
public:
    void input(int value)
    {
        num = value;
    }
    void operator + ()
    {
        num = ++num;
    }
    void output()
    {
        cout << num;
    }
};

int main()
{
    overloading A;
    A.input(1);
    A.output();
    +A;
    cout << endl;
    A.output();
    return 0;
}