#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"Enter the value: ";
    cin>>n;


    for(row = 1 ; row <=n ; row++){
        for (col=1; col<=n-(row-1); col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
cout<<endl;
cout<<endl;

    for (row=1;row<=n;row++){
        for(col=1;col<=n-(row-1);col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
cout<<endl;


    for(row = 1 ; row <+ n ; row++){
        for(col=5;col<=n-(row+1);col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }


    cout<<endl;
cout<<endl;
   
   for(row = 1; row<= n ; row++){
    for (col = 1; col<=(n-row); col++){
        cout<<" ";
    }
    for(col=1 ; col <=row;col++){

        cout<<"*";
    }
    cout<<endl;
   }
cout<<endl;
   cout<<endl;

   for(row = 1; row<= n ; row++){
    for (col = 1; col<=(n-row); col++){
        cout<<" ";
    }
    for(col=1 ; col <=row;col++){

        cout<<row;
    }
    cout<<endl;
   }
   cout<<endl;
   cout<<endl;
   for(row = 1; row<= n ; row++){
    for (col = 1; col<=(n-row); col++){
        cout<<" ";
    }
    for(col=1 ; col <=row;col++){

        cout<<col;
    }
    cout<<endl;
   }

       for (row =1 ; row <=n ; row++){
        for (col=1 ; col<= (n-row);col++){
            cout<<" ";
        }
        for(char name = 'A' ; name <= 'A'+(row-1); name++){
                cout<<name<<"";
            }
        cout<<endl;
       }


    cout<<endl;
   cout<<endl;

       for (row = 1 ; row <= n ; row++){
        for (col=1; col <= (n-row); col++){
            cout<<" ";
        }
        for (col= row ; col>=1 ; col--){
            cout<<col;
        }
        cout<<endl;
       }
    

   cout<<endl;
   cout<<endl;


   for (row = 1 ; row<=n ; row++){
    for (col =1 ; col <=(n-row) ; col++){
        cout<<" ";
    }
    for(col=1; col <= (2*row)-1; col++){
        cout<<"*";
    }
    cout<<endl;
   }


for(row = 1; row <= n ; row++ ){
    for (col = 1 ; col <= n-row ; col++){
        cout<<"  ";
    }
    for (col = 1 ; col <= row ; col++){
        cout<<col<<" ";
    }
    for (col = row-1 ; col >=1 ; col--){
        cout<<col<<" ";
    }

    cout<<endl;
}


cout<<endl;
   cout<<endl;



for (row = n ; row >= 1 ; row --){
    for (col =1 ; col<=n-row ; col++){
        cout<<"  ";
    }
    for (col =1 ; col <= (2*row)-1 ; col++){
        cout<<"x"<<" ";
    }
    cout<<endl;
}


for (row = n ; row>=1 ; row -- ){
    for (col=1 ; col<= row ; col++){
        cout<<"*";
    }
    for(col=1 ; col<= 2*n-2*row ; col++){
        cout<<" ";
    }
    for (col=1 ; col<= row ; col++){
        cout<<"*";
    }

    cout<<endl;
}

for (row = 1 ; row<=n ; row ++ ){
    for (col=1 ; col<= row ; col++){
        cout<<"*";
    }
    for(col=1 ; col<= 2*n-2*row ; col++){
        cout<<" ";
    }
    for (col=1 ; col<= row ; col++){
        cout<<"*";
    }

    cout<<endl;

}


for (row =1 ; row <=n ; row ++){
    for (col =1 ; col<=row ; col++){
        cout<<"*";
    }
    for (col =1 ; col <= 2*n-2*row; col++){
        cout<<" ";
    }

    for (col =1 ; col<=row ; col++){
        cout<<"*";
    }

    cout<<endl;

    
}


for (row =n ; row >=1 ; row --){
    for (col =1 ; col<=row ; col++){
        cout<<"*";
    }
    for (col =1 ; col <= 2*n-2*row; col++){
        cout<<" ";
    }

    for (col =1 ; col<=row ; col++){
        cout<<"*";
    }

    cout<<endl;

    
}



}