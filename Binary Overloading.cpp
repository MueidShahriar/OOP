#include <bits/stdc++.h>
using namespace std;

class overloading 
{
public:
int num;
    overloading operator+(overloading b) 
    {
        overloading C;
        C.num = num + b.num;
        return C;
    }
};

int main() 
{
    overloading A, B, Sum;
    cin >> A.num;
    cin >> B.num;
    Sum = A + B;
    cout << "Sum: " << Sum.num << "\n";
    return 0;
}