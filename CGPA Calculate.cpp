#include<bits/stdc++.h>
using namespace std;

class student3;
class student2;

class student1
{
    float CSE,EEE,MATH,sum,cgpa;
    int credit=3,totalCredit=9;
public:
    void input()
    {
        cout<<"Student 1"<<"\n";
        cout<<"CSE: ";
        cin>>CSE;
        cout<<"EEE: ";
        cin>>EEE;
        cout<<"MATH: ";
        cin >> MATH;
        sum=(EEE*credit+CSE*credit+MATH*credit);
        cgpa=(sum/totalCredit);
        cout<<"CGPA of Student 1: "<<cgpa<< endl << endl;
    }
    friend void output(student1,student2,student3);
};

class student2
{
    float CSE,EEE,MATH,sum,cgpa;
    int credit=3,totalCredit=9;
public:
    void input()
    {
        cout<<"Student 2"<<"\n";
        cout<<"CSE: ";
        cin>>CSE;
        cout<<"EEE: ";
        cin>>EEE;
        cout<<"MATH: ";
        cin >> MATH;
        sum = (EEE*credit+CSE*credit+MATH*credit);
        cgpa = (sum/totalCredit);
        cout<<"CGPA of Student 2: "<<cgpa<< endl << endl;
    }
    friend void output(student1,student2,student3);
};

class student3
{
    float CSE,EEE,MATH,sum,cgpa;
    int credit=3,totalCredit=9;
public:
    void input()
    {
        cout<<"Student 3"<< endl;
        cout<<"CSE: ";
        cin>>CSE;
        cout<<"EEE: ";
        cin>>EEE;
        cout<<"MATH: ";
        cin >> MATH;
        sum = (EEE*credit+CSE*credit+MATH*credit);
        cgpa = (sum/totalCredit);
        cout<< "CGPA of Student 3: " << cgpa << endl << endl;
    }
    friend void output(student1,student2,student3);
};

void output(student1 a, student2 b, student3 c)
{
    float x = max(b.cgpa, c.cgpa),cgpa = max(x,a.cgpa);
    cout << "Highest CGPA: "<< cgpa << endl;
}

int main()
{
    student1 X;
    X.input();
    student2 Y;
    Y.input();
    student3 Z;
    Z.input();
    output(X,Y,Z);
    return 0;
}
