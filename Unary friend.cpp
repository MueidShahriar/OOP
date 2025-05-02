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
friend void operator+(overloading&);   
    void output()
    {
        cout << num;
    }
};
void operator+(overloading &a)
    {
        a.num= ++a.num;

    }

int main()
{
    overloading A;
    A.input(5);
    A.output();
    +A;
    cout << endl;
    A.output();
    return 0;
}