#include<iostream>
using namespace std;
void printArray(int arr[] , int size){
    for(int i = 0 ; i < size ; i ++){
        cout<<arr[i]<<endl;
    }

}
void Array_Reverse(int arr[] , int size){
    int start =  0; 
    int end = size-1;
    while (start<=end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    
}
int main(){

    //for odd;
    int size_odd = 5;
    int arr_Odd[size_odd];
    cout<<"Enter the element you wnat to add in the odd array: ";
    for (int i =0 ; i< size_odd; i++){
        cin>>arr_Odd[i]; 
    }

    Array_Reverse(arr_Odd,size_odd);
    printArray(arr_Odd,size_odd);


    //for even
    int size_Even = 6;
    int arr_Even[size_Even];
    cout<<"Enter the element you wnat to add in the even array: ";
    for (int i =0 ; i< size_Even; i++){
        cin>>arr_Even[i]; 
    }
   Array_Reverse(arr_Even,size_Even);
   printArray(arr_Even,size_Even);
    
}