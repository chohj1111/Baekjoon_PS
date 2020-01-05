#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int arr[1010];
	int dp[1010];
	int v[1010];
	int ans_index =0;
	int n, ans = 0;
void go(int n){
	if( n==-1) return; 
	go(v[n]);
	cout<< arr[n]<<' ';
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>> arr[i];
		dp[i] = 1;
		v[i] = -1;
	}
			
	// o(n^2) -> n>100000 = it cant be solved	
	for(int i=0;i<n;i++){	
	
		for(int j=0;j<i;j++){
			if(arr[j]<arr[i] && dp[i]<dp[j]+1){
				dp[i] = dp[j]+1;
				v[i] = j;
			}
		}
		if(ans<dp[i]) {
			ans=  dp[i];
			ans_index= i;
		}
	}
	cout<<ans<<'\n';
	go(ans_index);
	return 0;
}