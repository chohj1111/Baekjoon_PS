	#include <cstdio>
	#include <cstdlib>
	#include <iostream>
	#include <stack>
	#include <vector>
	#include <algorithm>
	#include <string>
	using namespace std;
	long long mod = 1000000000;
	long long dp[101][10];
	int main(){
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		int input;
		cin>> input;
		// initialize
		for(int i=1;i<=9;i++){
			dp[1][i] = 1;
		}
		for(int i=2;i<=input;i++){
			for(int j=0;j<=9;j++){
				dp[i][j]=0;
				if(j-1>=0) dp[i][j] = dp[i-1][j-1];
				if(j+1<=9) dp[i][j] = dp[i-1][j+1];
				dp[i][j]%=mod;
			}
		}
		long long ans = 0;
		for(int i=0;i<=9;i++){
			ans = (ans + dp[input][i]) %mod;
		}
		cout<<ans <<'\n';
		return 0;
	}