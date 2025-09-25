#include<iostream>
using namespace std;
bool linearSearch (int arr[] , int size  , int key){
    for (int i =0 ; i < size ; i++){
        if (arr[i] == key){
            return 1;
        }
   }
   return 0;

}
int main(){
    // int size;
    // cout<<"Enter the size of an element: ";
    // cin>>size;
    // int array[size];
    int array[10] = {5,4,78,5,4,-45,78,45,-1};
    //find aearch 1 is present or not
        int key;
    cout<<"Enter the key you want to search in this element: ";
    cin>>key;
    
    bool found = linearSearch(array,10,key);
     if ( found ){
        cout<<"Key is present"<<endl;
     }
     else 
     {
        cout<<"Key is absent "<<endl;
     }
    
    return 0;
}