#include<bits/stdc++.h>
using namespace std;
class room
{
  double length;
  double breadth;
  double height;
  double area;
  double volumn;
  
  public:
      void getdata(void);
      void putdata(void);
};

void room :: getdata(void)
{
    cout<<"Enter length : ";
    cin>> length;
    cout<< "Enter breadth : ";
    cin>> breadth;
    cout<< "Enter height : ";
    cin>> height;
}

void room :: putdata(void)
{
    area = length*breadth;
    volumn = length*breadth*height;
    cout<<endl<<"Area = "<<area<<endl;
    cout<<"Volume = "<<volumn<<endl;
}

int main()
{
    room p;
    p.getdata();
    p.putdata();
}
