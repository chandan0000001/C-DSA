#include<iostream>
using namespace std;
//void Swap(int s , int t)    pass by value
void Swap(int &s , int &t){  //pass by referance 
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

}
