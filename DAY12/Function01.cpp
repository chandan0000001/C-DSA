#include<iostream>
using namespace std;
bool Prime(int n )
{
   if (n<2) return 0;
   for(int i=2;i<n;i++)
   {
    if (n%i==0)
    {
        return 0;
    }
   }
   return 1;
}
int Fact(int n=3) //Defult parameter 
{
   int ans = 1 ;
   for (int i = 1 ; i <= n ; i++)
   {
    ans = ans * i;
   }
   return ans;
}
int main()
{
   int a , b ;
   cout<<"Enter the value for a : ";
   cin>>a;
   cout<<"Enter the value for b : ";
   cin>>b;
   cout<<Fact();//default parametet
   cout<<Prime(a);
    cout<<endl;
   cout<<Prime(b);
    cout<<endl;
    cout<<Prime(b-a);
   cout<<endl;
   cout<<"Factorial time : ";
   cout<<endl;
    cout<<Fact(a);
    cout<<endl;
    cout<<Fact(b);
    cout<<endl;
    cout<<Fact(b-a);
   
}