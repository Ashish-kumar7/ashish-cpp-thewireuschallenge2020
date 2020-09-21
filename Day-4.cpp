// author: Ashish Kumar
// day: 4
// #thewireuschallenge2020
// c++

#include<bits/stdc++.h>

using namespace std;
int main(){
	string str;
	cin>>str;
	string ans="";
	for(int i=0;i<str.length()-1;i++){
	    ans+=str[i];
	    int x=(str[i+1]-str[i]);
	    cout<<x<<endl;
	    ans+=to_string(x);
	}
	ans+=str[str.length()-1];
	cout<<ans<<endl;
	return 0;
}