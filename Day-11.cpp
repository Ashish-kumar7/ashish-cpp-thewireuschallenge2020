// author: Ashish Kumar
// day: 11
// #thewireuschallenge2020
// c++

#include <bits/stdc++.h>

using namespace std;
int main()
{
    string str;
    cin>>str;
    if(str[8]=='P' && str[1]=='2' && str[0]=='1'){
        string ans = str.substr(0,8);
        cout<<ans<<endl;
    }
    else if(str[8]=='P'){
        string s=str.substr(0,2);
        int s1=stoi(s);
        int xs1=s1+12;
        string s12=to_string(xs1);
        string ans =s12 + str.substr(2,6);
        cout<<ans<<endl;
    }
    else if(str[8]=='A' && str[0]=='1' && str[1]=='2'){
     string s1="00";
        string ans =s1 + str.substr(2,6);
        cout<<ans<<endl;

    }
    else if(str[8]=='A'){
        string ans = str.substr(0,8);
        cout<<ans<<endl;
    }
    return 0;
}
