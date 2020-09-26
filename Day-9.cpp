// author: Ashish Kumar
// day: 9
// #thewireuschallenge2020
// c++

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int A[n];
    
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n/2;i++){
        int  temp=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=temp;
    }
    
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

	return 0;
}