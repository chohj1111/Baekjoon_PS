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
	vector<int> dp(n);
	for(int i=0;i<n;i++){
		cin>> arr[i];
	}
	dp[0] = arr[0];
	ans = arr[0];
	for(int i=1;i<n;i++){
		dp[i] = max(dp[i-1]+arr[i], arr[i]);
		ans = max(ans, dp[i]);
	}
	cout<<ans<<'\n';
	return 0;
}	