#include<iostream>
using namespace std;

//     pattern questions 

//printing numbers in n*n matrix
/*  
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<< endl;
        i=i+1;   
    }
}
*/
//reverse pint of previous code output
/*
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j=j+1;
        }
        cout<< endl;
        i=i+1;
    }      
}
*/

/*
int main(){
    int n;
    cin>>n;

    int i=1;
    int count = 1;
    while(i<=n){
        int j =1;
        while(j<=n){
            cout<<count<<"";
            count = count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
int main(){
    int n;
    cin>>n;
    int row=1;

    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
*/
/*//print no's in increasing order.
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        cout<<i<<","<<" ";
        i++;
    }
}
*/
//print no's in decreasing order.
/*
int main(){
    int n;
    cin>>n;
    int i=1;
    while(n>=1){
        cout<<n<<","<<" ";
        n-=1;
    }
}
*/
/*
int main(){
    int n;
    cin>>n;
    int row=1;

    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
*/
/*
*************************
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<col;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
        
        
    }
}
*/
//print AA BB CC DD .. ...
/*
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch= 'A'+row-1;
            cout<<ch<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
*/
//print ABC ABC ABC ... ....
/*
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch= 'A'+col-1;
            cout<<ch<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
*/