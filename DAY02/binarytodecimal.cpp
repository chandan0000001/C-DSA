#include <iostream>
#include <cmath>
using namespace std;
int binarytoDecimal(int n ){
    //division methid 
    // int decimal = 0 ;
    // int i= 0 ;
    // while (n){
    //     int bit = n % 10 ;
    //     decimal= decimal + bit * pow(2,i++);
    //     n =n /10;
    // }
    // return decimal;
    // bitwisemethod
    int decimal = 0 ;
    int i= 0 ;
    while (n){
        int bit = n & 1;              
        decimal = decimal | (bit << i); 
        n = n >> 1;                    
        i++;
    }
    return decimal;
}
 int main (){
      int n ;
      cin>>n;
      int decimal = binarytoDecimal(n);
      cout << decimal;
 }      
