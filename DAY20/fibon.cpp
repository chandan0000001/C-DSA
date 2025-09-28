// array fibonaci series 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the you want to know that comes in fibonacai series of an array: ";
    cin>>n;
    int arr[100];
    arr[0]= 0;
    arr[1]= 1;
    for (int i = 2 ; i <=n-1 ; i++){
        arr[i] =  arr[i-1]+arr[i-2];
    }
    cout<<arr[n-1];
}