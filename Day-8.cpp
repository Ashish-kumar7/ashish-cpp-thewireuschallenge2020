// author: Ashish Kumar
// day: 8
// #thewireuschallenge2020
// c++
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	string str;
	unordered_map<string,int>mp;
	for(int i=0;i<t;i++){
	    cin>>str;
	    mp[str]++;
	}
	int q;
	cin>>q;
	string str1;
	for(int i=0;i<q;i++){
	    cin>>str1;
	    if(mp.find(str1)==mp.end()){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<mp[str1]<<endl;
	    }
	}
	return 0;
}