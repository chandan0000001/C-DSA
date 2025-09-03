#include<iostream>
using namespace std;
//void Swap(int s , int t)    pass by value
void Swap(int &s , int &t){  //pass by referance 
    int r;
    r = s ;
    s = t;
    t = r;
}

void Swap(float &s , float &t){  //pass by referance 
    int r;
    r = s ;
    s = t;
    t = r;
}
int main() 
{
 int a ,b;
 cout<<"Enter the value for a: ";
 cin>>a;
 cout<<"Enter the value for b: ";
 cin>>b;
 Swap(a,b);
 cout<<a<<endl<<b;

cout<<endl;

 float f1 ,f2;
 cout<<"Enter the value for f1: ";
 cin>>f1;
 cout<<"Enter the value for f2: ";
 cin>>f2;
 Swap(f1,f2);
 cout<<f1<<endl<<f2;

}
