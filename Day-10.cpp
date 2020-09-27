// author: Ashish Kumar
// day: 10
// #thewireuschallenge2020
// c++

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int d;
    cin>>d;
    d=d%n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int  B[d];
    for(int i=0;i<d;i++){
        B[i]=A[i];
    }
    for(int i=0;i<n-d;i++){
        A[i]=A[d+i];
    }
    int j=0;
    for(int i=n-d;i<n;i++){
        A[i]=B[j];
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
	return 0;
}