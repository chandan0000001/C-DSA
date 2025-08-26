#include<iostream>
using namespace std;
int main (){
    int row , col , n;
    cout<<"Enter the value: ";
    cin>>n;

    for (row = 1 ; row <= n ; row++){
        for (col =1 ; col <=row ; col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }



     cout<<endl;
    cout<<endl;


    for (row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }

     cout<<endl;
    cout<<endl;


    for (row = 1 ; row <= n ; row++){
        for(col= 1 ; col <= row ; col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }

     cout<<endl;
    cout<<endl;
      
    for(row=1 ; row<=n ; row++){
        for(col=row ; col>=1 ; col--){
            cout<<col<<" ";
        }
        cout<<endl;

    }
 cout<<endl;
    cout<<endl;

    for (row = 1 ; row<=5 ; row++){
         char name = 'a'+(row-1);
        for (col = 1 ;col <= row ; col++){
           
            cout<<name<<" ";
        }
        cout<<endl;
    }

 cout<<endl;
    cout<<endl;



}