#include<iostream>
using namespace std;
void reverse(int arr[] , int size){
    int start = 0;;
    int end = size -1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
void printArr (int arr[],int n){
    for(int i =0 ; i < n ; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}
int main(){
   int arr1[6] = {73,5,-76,3,-8,-96};
   int arr2[5] = {4,3,89,-96,-7};
   reverse(arr1 , 6);
   reverse(arr2 , 5);

   printArr(arr1 ,6);
   printArr(arr2 ,5);
    return 0;
}