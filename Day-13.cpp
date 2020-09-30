// author: Ashish Kumar
// day: 13
// #thewireuschallenge2020
// c++
#include <bits/stdc++.h>
using namespace std;
void solve(int n,char start,char dest,char help){
    if(n==1){
        cout<<" Move "<<n<<   " from " << start <<" to " <<  dest <<endl;
        return;
    }
    solve(n-1,start,help,dest);
    cout<<" Move "<<n<<   " from " << start <<" to " <<  dest <<endl;
    solve(n-1,help,dest,start);
    return ;
}
int main(){
    int n;
    cin>>n;
    char start='A';
    char dest='C';
    char help='B';
    solve(n,start,help,dest);
        return 0;
}