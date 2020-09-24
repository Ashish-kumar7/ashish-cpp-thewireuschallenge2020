// author: Ashish Kumar
// day: 7
// #thewireuschallenge2020
// c++

#include <bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin>>str;
	string ans ="";
	for(int i=0;i<str.length();){
	    char x=str[i];
	    int count=0;
	    i++;
	    while(str[i]==x){
	        count++;
	        i++;
	    }
	    ans+=x;
	    if(count>0){
	        ans+=to_string(count+1);
	    }
	}
    cout<<ans<<endl;
	return 0;
}