#include<bits/stdc++.h>
using namespace std;
class Sample
{
    int a, b;
    public:
    void setValue()
    {
        a=25;
        b=40;
    }
    friend float mean(Sample S);
};
float mean(Sample S)
{
    return float(S.a+S.b)/2.0;
}
int main()
{
    Sample X;
    X.setValue();
    cout << "Mean value= " << mean (X) << "\n";
    return 0;
}
