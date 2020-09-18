// author: Ashish Kumar
// day: 1
// #thewireuschallenge2020
// c++

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Input size of matrix greater than 0"<<endl;
    cin>>n;
    
    int A[n][n];
    
    cout<<"Input the element of matrix"<<endl;
     
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
            if(i%2==0){
                 for(int j=0;j<n;j++){
                    cout<<A[j][i]<<",";
                 }
            }
            else if(i%2 !=0){
                for(int j=1;j<=n;j++){
                     cout<<A[n-j][i]<<",";
                }
            }
    }
    cout<<"END"<<endl;
    
    return 0;
}