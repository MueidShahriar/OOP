#include <bits/stdc++.h>
using namespace std;
class Bank_employee; 
class Bank; 
class custumer  
{
    int ID; string name; float balance;
    public:
    float deposite_funds = 0, withdraw_funds = 0;  
    custumer()
    {
        cout << "Enter ID : "; cin >> ID;
        cout << "Enter Name : "; getline(cin>>ws,name);
        cout << "Initial Balance : "; cin >> balance;
    }
    void deposite_fund()
    {
        cout << "Enter Depposite funds : ";
        cin >> deposite_funds;
        cout << "After deposit funds : " << balance + deposite_funds - withdraw_funds << endl << endl;
    }
    void withdraw_fund()
    {
        cout << "Enter Withdraw Funds : ";
        cin >> withdraw_funds;
        cout << endl << endl;

    }
    friend void display(custumer, Bank_employee);
    friend custumer add(custumer, Bank);
    friend custumer withdraw(custumer,Bank);
};
class Bank
{
    public:
    friend custumer add(custumer, Bank);
    friend custumer withdraw(custumer, Bank);
    friend class Bank_employee;
};
class Bank_employee
{
    public:
    friend void display(custumer, Bank_employee);
};
custumer add(custumer obj,Bank obj1)
{
    obj.balance = obj.deposite_funds + obj.balance;
    return obj;
    }
custumer withdraw(custumer obj, Bank obj2)
{
    if(obj.balance >= obj.withdraw_funds)
    {
            obj.balance = obj.balance - obj.withdraw_funds;
    return obj;
    }
    else cout << "Invalid Transaction\n";
}
void display(custumer obj1, Bank_employee obj2){
    cout << "ID : " << obj1.ID << endl;
    cout << "Name : " << obj1.name << endl;
    cout << "Current Balance : " << obj1.balance << endl;
}

int main(){
    custumer obj1;
    obj1.deposite_fund();
    obj1.withdraw_fund();

    Bank obj2;
    obj1 = add(obj1,obj2);
    obj1 = withdraw(obj1,obj2);

    Bank_employee obj3;
    display(obj1,obj3);
return 0;
}