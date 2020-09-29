// author: Ashish Kumar
// day: 12
// #thewireuschallenge2020
// c++

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    stack<int>S;
    S.push(0);
    int ans[n];
    ans[0]=1;
    for(int i=1;i<n;i++){
        while(!S.empty() && A[S.top()]<A[i]){
            S.pop();
        }
        if(S.empty()){
            ans[i]=i+1;
        }
        else{
            ans[i]=i-S.top();
        }
        S.push(i);
        ans[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"END"<<endl;
        return 0;
}