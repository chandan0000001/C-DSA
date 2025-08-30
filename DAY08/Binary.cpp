#include<iostream>
using namespace std;
int main (){
    int num,  ans = 0 , rem = 0 , mul= 1 ;
    cout<<"ENter a number you want to convert decimal to binary: ";
    cin>>num;

    while (num > 0 )
    {
        rem = num % 2 ;
        num = num / 2 ;
        ans = rem * mul + ans ;
        mul = mul * 10; 
    }

       cout<<ans ;    

}