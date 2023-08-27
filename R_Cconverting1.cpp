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
    // vector<vector<int>> b(m,vector<int>(n));
    int b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==0){
                for(int t=0;t<m;t++) b[t][j] = 0 ;
                for(int p=0;p<n;p++) b[i][p] = 0 ;
            }
            else{
                if(b[i][j]==0) continue;
                else b[i][j]=v[i][j];
            }
        }
    }

    cout<<"After setting zeros : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;

    }

}