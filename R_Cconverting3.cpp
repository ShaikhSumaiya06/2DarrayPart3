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
    vector<vector<int>> matrix(m,vector<int>(n));
    cout<<"enter elements : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    cout<<"Given matrix : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;

    }
    int flag=0;
    for(int i=0;i<m;i++){
        if(matrix[i][0]==0) flag=1;
        for(int j=1;j<n;j++){
            if(matrix[i][j]==0) matrix[i][0]=matrix[0][j]=0;
    }
    }
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>0;j--){
            if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;                
        }
        if(flag==1) matrix[i][0]=0;
    }
    cout<<"After setting zeros : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;

    }

}