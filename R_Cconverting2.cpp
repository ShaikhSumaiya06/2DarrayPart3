/*
given an mXn integer matrix , if an element is 0 , set its entire row and coulmn to 0`s
i/p:
1 1 1 
1 0 1
1 1 1 
o/p:
1 0 1
0 0 0 
1 0 1
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m , n;
    cout<<"enter no. of rows : ";
    cin>>m;
    cout<<"enter no. of cols : ";
    cin>>n;
    vector<vector<int>> v(m,vector<int>(n));
    cout<<"enter elements : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    cout<<endl;
    cout<<"Given matrix : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;

    }
    vector<int> row(m,0);// if m=3 then row vector --> 0 0 0
    vector<int> col(n,0); // if n=4 then col vector --> 0 0 0 0
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==0){// if i=0 , j=2
                row[i]=1; //  1 0 0 ( considering m=3)
                col[j]=1; // 0 0 1 0 ( considering n=4)
            }
        }
    }
    // changing the value of ith & jth row/col
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row[i] || col[j]) v[i][j]=0;
        }
    }
    cout<<"After setting zeros : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;

    }

}