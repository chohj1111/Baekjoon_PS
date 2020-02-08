#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int k;
int arr[13];
int ans[6];
void solve(int index, int cnt){
	if(cnt == 6){
		for(int i=0;i<6;i++) cout<< ans[i]<<' ';
		cout<< '\n';
		return;
	}
	for(int i=index;i<k;i++){
		ans[cnt] = arr[i];
		solve(i+1,cnt+1);
	}
}
int main(){
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL);
	while(true){
		cin>>k;
		if(k==0) break;
		for(int i=0;i<k;i++) cin>> arr[i];
		solve(0, 0);
		cout<<'\n';
	}
	return 0;
}	