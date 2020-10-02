// author: Ashish Kumar
// day: 15
// #thewireuschallenge2020
// c++

#include<bits/stdc++.h> 
using namespace std; 

int convert(string str) { 
    if (str.length() == 1) {
        return (str[0] - '0');
    }
    double y = convert(str.substr(1)); 
    double x = str[0] - '0';  
    x = x * pow(10, str.length() - 1) + y; 
    return int(x); 
}

int main() { 
    string str;
    cin>>str;
    cout<<convert(str);
	return 0; 
}