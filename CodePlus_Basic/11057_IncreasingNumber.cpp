#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int dp[1001][10];
int mod = 10007;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<=9;i++)
		dp[1][i] = 1;
	for(int i=2;i<=n;i++){
		for(int j=0;j<=9;j++){
			for(int k=j;k<=9;k++){
			dp[i][k] = (dp[i][k] + dp[i-1][j]) %mod;
			}
		}
	}
	int ans =0;
	for(int i=0;i<=9;i++)
		ans = (ans+ dp[n][i])%mod;
	cout<<ans<<'\n';
	
	return 0;
}