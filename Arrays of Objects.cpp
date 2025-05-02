#include<bits/stdc++.h>
using namespace std;

class Employee
{
    char name[30];
    float age;
public:
    void getData(void);
    void putData (void);
};
void Employee :: getData (void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
}
void Employee :: putData (void)
{
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
}
const int size = 2;

int main ()
{
    Employee manager[size];
    for(int i=0; i<size; i++)
    {
        cout << "\nDetails of manager: " << i+1 << "\n";
        manager[i].getData();
    }
    cout << "\n";
    for(int i=0; i<size; i++)
    {
        cout <<"\nManager: " << i+1 << "\n";
        manager[i].putData();
    }
    return 0;
}
