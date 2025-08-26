#include<iostream>
using namespace std; 
int main (){
    int row ; 
    int col ;
    int n;
    cout <<"Enter the value: ";
    cin>>n;
 

    for (row = 1 ; row<= n ; row++){
        for (col = 1 ; col<=n ; col++){
            cout <<"* " ; 
        }
         cout<<endl;
    }

    cout<<endl;
    cout<<endl;


    for (row = 1 ; row <= n ; row++){
        for (col = 1 ; col <=n ; col ++){
            cout<<"10";
        }
        cout<<endl;
    }

     cout<<endl;
    cout<<endl;


    for (row = 1 ; row <= n ; row++){
        for (col=1 ; col<=n ; col++){
            cout<<col <<" ";
        }
        cout <<endl;
    }

 cout<<endl;
    cout<<endl;

    for(row = 1 ; row <= n ; row++){
        for (col=n ; col >= 1 ; col--){
              cout <<col<<" ";
        }
        cout<<endl;
    }
 cout<<endl;
    cout<<endl;

    for (row = 1; row <=n ; row++){
        for (col = 1; col <=n ; col++){
            cout <<(col*col)<<" ";
        }
        cout<<endl;
    }
     cout<<endl;
    cout<<endl;

    for (row =1 ; row <=n ; row++){
        char name = 'a' +row-1;
        for (col = 1 ; col <n ; col++){
            cout<<name<<" ";

        }
        cout<<endl;
    }
 cout<<endl;
    cout<<endl;

    for (row= 1 ; row<=n ; row++){
        for(char col ='a' ; col <= 'e' ; col++){
            cout<< col <<" ";
        }
        cout<<endl;
    }
     cout<<endl;
    cout<<endl;


    for (row= 1 ; row<=n ; row++){
        for( col =1 ; col <= n ; col++){
            char name = 'a' + col-1;
            cout<< name <<" ";
        }
        cout<<endl;
    }

     cout<<endl;
    cout<<endl;


     int count = 1;
    for(row=1; row<=n ; row++){
        for (col=1 ; col<=n ; col++){
            cout<<count;
            count = count+1;
        }
        cout<<endl;
    }

     cout<<endl;
    cout<<endl;


}