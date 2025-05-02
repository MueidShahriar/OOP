#include<bits/stdc++.h>
using namespace std;
class item
{
    int x, y, sum, rem;
public:
    void getdata(int a, int b);
    void putdata(void)
    {
        cout << "Sum : " << sum << "\n";
        if (rem == 0)
            cout << "Even" << "\n";
        else
            cout << "Odd" << "\n";
    }
};

void item :: getdata(int a, int b)
{
    x = a;
    y = b;
    sum = x + y;
    rem = sum%2;
}

int main()
{
    item p;
    int m, n;
    cin >> m >> n;
    p.getdata (m,n);
    p.putdata();
}
