#include<iostream>
using namespace std;
int main (){
    int num,  ans = 0 , rem = 0 , mul= 1 ;
    cout<<"ENter a number you want to convert binary to decimal: ";
    cin>>num;

    while (num > 0 )
    {
        rem = num % 10 ;
        num = num / 10 ;
        ans = rem * mul + ans ;
        mul = mul * 2; 
    }

       cout<<ans ;    

}