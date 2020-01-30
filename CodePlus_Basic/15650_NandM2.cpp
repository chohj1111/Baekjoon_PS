#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int arr[9];
void solve(int index, int selected, int n, int m){
	if(selected ==m) {
		//출력
		for(int i=0;i<m;i++){
			cout<< arr[i]<<' ';
		}
		cout<< '\n'; 
		return;
	}
	if(index>n) return;
	// selected+1 번째의 수 == index
	arr[selected] = index; 
	solve(index+1, selected+1,n,m);
	solve(index+1,selected, n, m);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m; 
	cin>> n>> m;
	solve(1, 0, n,m);
	return 0;
}	