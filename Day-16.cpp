// author: Ashish Kumar
// day: 16
// #thewireuschallenge2020
// c++
#include <bits/stdc++.h>
using namespace std;
void solve(string left, string right, int n, int diff){
	if (n > 9)
		return;
	if (n && (2 * abs(diff) <= n)){
		if (n == 1){
			solve(left, "0" + right, 0, diff);
			solve(left, "1" + right, 0, diff);
			return;
		}
		if (left != ""){
			solve(left + "0", right + "0", n - 2, diff);
			solve(left + "0", right + "1", n - 2, diff - 1);
		}
		solve(left + "1", right + "0", n - 2, diff + 1);
		solve(left + "1", right + "1", n - 2, diff);
	}
	else if (n == 0 && diff == 0) {
		cout << left + right << " ";
	}
}
int main(){
    int n;
    cin>>n;
	string left;
	string right; 
	int diff = 0;	
	solve(left, right, n, diff);
	return 0;
}  