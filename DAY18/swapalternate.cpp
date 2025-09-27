#include<iostream>
using namespace std;
void printArray(int arr[] , int size){
    for (int i = 0; i < size ; i ++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int arr[] , int size){
    for (int i =0 ; i <size ; i +=2){
        if (i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }

}
int main(){
 int size = 6;
int arrEven[size]= {45,89,23,56,90,0};
int sizex = 5;
int arrOdd[sizex]= {23,34,89,56,22};


    swapAlternate(arrEven , size);
    printArray(arrEven , size);
    
    swapAlternate(arrOdd, sizex);
     printArray(arrOdd, sizex);

    return 0;
}