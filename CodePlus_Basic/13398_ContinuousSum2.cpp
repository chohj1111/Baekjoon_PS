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
	int n, ans;
	cin>>n;
	vector<int> arr(n);
	vector<int> dp(n);  // end with i 
	vector<int> dp2(n);	// start with i
	for(int i=0;i<n;i++){
		cin>> arr[i];
	}
	dp[0] = arr[0];
	dp2[n-1] = arr[n-1];
	ans = arr[0];
	for(int i=1;i<n;i++){
		dp[i] = max(dp[i-1]+arr[i], arr[i]);
		ans = max(ans, dp[i]);
	}
	for(int i=n-2;i>=0;i--) {
		dp2[i] = max(dp2[i+1] + arr[i], arr[i]);
	}
	for(int i=1;i<n-1;i++){
		ans = max(ans, dp[i-1]+dp2[i+1]);
	}
	cout<< ans<<'\n';	
	return 0;
}	