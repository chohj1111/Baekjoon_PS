#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
void function(int n){
	if(n==0) return;
	if(n%2==0){
		function(-(n/2));
		cout<<'0';
	}
	else {
		if(n>0)	function(-(n/2));
		else function((-n+1)/2);
		cout<<'1';
	}	

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	if(n==0) cout<<'0'<<'\n';
	else {
		function(n);
		cout<<'\n';
	}
	return 0;
}