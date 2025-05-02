#include<bits/stdc++.h>
using namespace std;

template<typename T>
T sum(T a,T b)
{
    return a+b;
}

int main()
{
    int n1;
    float n2;
    n1 = sum<int> (5, 3);
    n2 = sum<float> (5.5, 10.5);
    cout <<n1<< endl;
    cout <<n2;
    return 0;
}
