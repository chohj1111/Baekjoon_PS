#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int arr[9];
bool check[9];
void solve(int index, int n, int m){
	if(index==m) {
		for(int i=0;i<m;i++){
			cout<< arr[i] <<' ';
		}
		cout<<'\n';
		return;
	}
	for(int i=1;i<=n;i++){
		if(check[i]) continue;
		check[i] = true;
		arr[index] = i;
		solve(index+1,n,m);
		check[i] = false;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n_input, m_input;
	cin>> n_input>>m_input;
	solve(0,n_input,m_input);
	return 0;
}	