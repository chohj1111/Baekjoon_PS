#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[1010];
	int dp[1010];
	int n, ans = 0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>> arr[i];
	}
			
	// o(n^2) -> n>100000 = it cant be solved	
	for(int i=0;i<n;i++){	
		dp[i] = 1;
		for(int j=0;j<i;j++){
			if(arr[j]<arr[i] && dp[i]<dp[j]+1)
				dp[i] = dp[j]+1;
		}
		ans =max(ans, dp[i]);
	}
	cout<<ans<<'\n';
	return 0;
}