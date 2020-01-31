#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int arr[8];
void solve(int index, int low, int n, int m){
	if(index ==m){
		for(int i=0;i<m;i++) cout<<arr[i]<<' ';
		cout<<'\n';
		return;
	}
	for(int i=low;i<=n;i++){
		arr[index] = i;
		solve(index+1,i, n, m);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	solve(0, 1, n, m);
	return 0;
}	