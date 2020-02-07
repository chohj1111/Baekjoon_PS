#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
void solve(const vector<int>&arr, int index, int cnt){
	int ret[6];
	if(cnt == 6){
		for(int i=0;i<6;i++) cout<< ret[i]<<' ';
		cout<< '\n';
		return;
	}
	ret[cnt] = arr[index];
	solve(arr, index+1, cnt+1);
	ret[cnt] = 0;
	solve(arr, index+1, cnt);
}
int main(){
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL);
	while(true){
		int k;
		cin>>k;
		if(k==0) break;
		vector<int> arr(k);
		solve(arr, 0, 0);
		cout<<'\n';
	}
	return 0;
}	