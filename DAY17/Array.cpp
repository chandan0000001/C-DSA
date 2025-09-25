#include<iostream>
using namespace std;

void printArray(int arr[] , int size){
// void printArray(int arr[43] ){>>It is apceted but bad writing style
  cout<<"Printing array"<<endl;
  for
   (int i = 0 ; i<size ; i++)
   {
      cout<<arr[i]<<endl;
    
  }
}

int main(){
    int fouth[12]={1,2,3,4,5,6,723,54,645,76,87,4};
      printArray(fouth,12);
cout<<endl;
      // int fourthSize = sizeof(fouth);
      // cout<<fourthSize;

      char ch[5] ={'a','b','v'};
      cout<<ch;
      

     return 0;
}