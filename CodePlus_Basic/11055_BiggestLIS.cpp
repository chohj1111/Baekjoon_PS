#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int arr[1001];
int dp[1001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, ans = 0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		dp[i] = arr[i];
		for(int j=0;j<i;j++){
			if(arr[j]<arr[i]) 
				dp[i] = max(dp[j]+arr[i],dp[i]);
		}
		ans = max(ans, dp[i]);
	}
	cout<< ans<<'\n';
	return 0;
}