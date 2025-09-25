#include<iostream>
using namespace std;
int sUm(int arr[] , int size){
    int sum = 0;
    for (int i =0 ; i < size ; i ++){
        sum = sum + arr[i];
    }
    return  sum;
}

int main(){
    int size;
    cin>>size;
    int elements[100];
    for(int i =0 ; i < size;i++){
        cin>>elements[i];
    }
    int ansdwerofSum = sUm(elements,size);
    cout<<ansdwerofSum;
}
