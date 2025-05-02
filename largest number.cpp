// Nesting of member function

#include<bits/stdc++.h>
using namespace std;
class Set
{
           int m, n;
public:
    void input(void);
    void display (void);
    void largest (void);
};

void Set :: largest()
{
    if (m>=n)
        cout << "Largest value = " << m;
    else
        cout << "Largest value = " << n;
}

void Set :: input (void)
{
    cout << "Input values of m and n : " << endl;
    cin >> m >> n;
}

void Set :: display()
{
    largest();
}

int main()
{
    Set A;
    A.input();
    A.display();
    return 0;
}
