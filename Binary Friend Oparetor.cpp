#include <bits/stdc++.h>
using namespace std;

class overloading 
{ 
public:
int num;
void input(int value)
{
    num = value;
}
    overloading friend operator+(overloading A, overloading B) 
    {
        overloading C;
        C.num = A.num + B.num;
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