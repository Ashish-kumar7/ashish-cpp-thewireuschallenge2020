// author: Ashish Kumar
// day: 6
// #thewireuschallenge2020
// c++

#include<bits/stdc++.h>

using namespace std;
int main(){
	    string str;
	    cin>>str;
	    string ans;
	    ans+=str[0];
	    for(int i=1;i<str.length();){
	        char a=str[i-1];
	        if(str[i]==a){
	            ans+='*';
	        }
	        else{
	            ans+=str[i];
	        }
	        i++;
	    }
	cout<<ans<<endl;
	return 0;
}