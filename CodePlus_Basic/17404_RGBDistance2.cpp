#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int arr[1001][3];
int dp[1001][3];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	int ans = 1000*1000+1;
	for(int j=0;j<3;j++){
		for(int k=0;k<3;k++){
			if(j==k) dp[1][j] = arr[1][j];
			else dp[1][k] = 1000*1000+1;
		}		
		for(int i=2;i<=n;i++){
			dp[i][0] = min(dp[i-1][1],dp[i-1][2]) + arr[i][0];
			dp[i][1] = min(dp[i-1][0],dp[i-1][2]) + arr[i][1];
			dp[i][2] = min(dp[i-1][1],dp[i-1][0]) + arr[i][2];
		}
		for(int k=0;k<3;k++){
			if(j==k) continue;
			ans = min(ans, dp[n][k]);
		}
		
	}
	cout << ans << '\n';
	return 0;
}	