// author: Ashish Kumar
// day: 14
// #thewireuschallenge2020
// c++
#include<bits/stdc++.h> 
using namespace std; 

stack<char> st; 

char insert_at_bottom(char x) { 
	if(st.size() == 0) 
	st.push(x); 
	else{ 
		char a = st.top(); 
		st.pop(); 
		insert_at_bottom(x); 
		st.push(a); 
	} 
} 
char reverse() { 
	if(st.size()>0) {
		char x = st.top(); 
		st.pop(); 
		reverse(); 
		insert_at_bottom(x); 
	} 
} 
int main() { 
    cout<<"Enter the size of stack"<<endl;
    int n;
    cin>>n;
    cout<<"Input the elements of the stack"<<endl;
    //Note: the element enetered first is at the bottom of the stack and likewise
    for(int i=0;i<n;i++){
        char a;
        cin>>a;
        st.push(a);
    }
	reverse(); 
	cout<<"Reversed Stack"<<endl; 
	while(!st.empty()) { 
		char p=st.top(); 
		st.pop(); 
		cout<<p<<" ";
	} 
	return 0; 
}