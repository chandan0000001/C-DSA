#include<iostream>
using namespace std;
int Sum(int n ,int m)//Function declare 
{
    int ans = m+n;   //Function define 
    return ans;
}
int Mul(int r ,int t)//Function declare 
{
    int ans = r*t;   //Function define 
    return ans;
}
void Display (){
    cout<<"Chandan";
}
int main()
{
   int a , b;
   cout<<"Enter two number : ";
   cin>>a>>b;


   //Function call 
   cout<<"Sum is ";
   cout<<Sum(a,b);
   cout<<endl;

   int ans = Mul(a,b);
   cout<<"Multipication is : "<<ans;
 cout<<endl;
   Display();
}