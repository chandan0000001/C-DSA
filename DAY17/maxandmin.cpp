#include<iostream>
#include <climits>   // for INT_MIN and INT_MAX
using namespace std;

 int getMax(int arr[] , int size){
    
   int max = INT_MIN;
   for(int i =0; i <size ;i++){
    if(arr[i] > max){
        max = arr[i];
    }
    
   }
   return max;

 }
 int getMin(int arr[] , int size){
    
   int min = INT_MAX;
   for(int i =0; i <size ;i++){
    if(arr[i] < min){
        min = arr[i];
    }
    
   }
   return min;

 }

int main(){
    int size ;
    cin>>size;
    int num[100] ;

    //taking input
    for(int i = 0 ; i <size ; i++){

        cin>>num[i];
    }
   

    cout<<"MAximum is "<<getMax(num,size)<<endl;
    cout<<"Minimum is "<<getMin(num,size)<<endl;

    return 0;
}