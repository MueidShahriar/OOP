#include<bits/stdc++.h>
using namespace std;

class student
{
public :
    char name[30];
    float cgpa;
    int id;
    void getdata(void);
    void putdata(void);

};

void student :: getdata(void)
{
    cout<<"Enter Student name : ";
    cin>> name;
    cout<< "Enter Id : ";
    cin>> id;
    cout<< "Enter CGPA : ";
    cin>> cgpa;
}

void student :: putdata(void)
{
    cout<<"Name : "<<name<<endl;
    cout<<"ID : "<<id<<endl;
    cout<<"CGPA : "<<cgpa<<endl;
}

int main()
{
    student p,q,r;
    p.getdata();
    p.putdata();

    q.getdata();
    q.putdata();

    r.getdata();
    r.putdata();

    if(p.cgpa>=q.cgpa && p.cgpa>=r.cgpa)
        cout<< "Highest CGPA : "<<p.cgpa<<endl;
    else if(q.cgpa>=p.cgpa && q.cgpa>=r.cgpa)
        cout<< "Highest CGPA : "<<q.cgpa<<endl;
    else if(r.cgpa>=p.cgpa && r.cgpa>=q.cgpa)
        cout<< "Highest CGPA : "<<r.cgpa<<endl;
}
