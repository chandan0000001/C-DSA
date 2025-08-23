#include <iostream>
#include <cmath>
using namespace std;
int decimalToBinary(int n){  
    int binaryNum = 0;
    int i =0;
// // division method

    // while (n>0){
    //     int bit = n%2;
    //     binaryNum = bit*pow(10, i++) + binaryNum;
    //     n = n/2;

    //biwisemethod
    int place = 1;
    while (n>0){
        int bit = (n & 1);
        binaryNum += bit * place;
        place *= 10;
        n = n >> 1;
    }
    return binaryNum;
}
 int main (){
      int n ;
      cin>>n;
      int binary = decimalToBinary(n);
      cout << binary;
 }