	#include <cstdio>
	#include <cstdlib>
	#include <iostream>
	#include <stack>
	#include <vector>
	#include <algorithm>
	#include <string>
	#define MAX 100001
	using namespace std;
	long long mod = 1000000009LL;
	long long dp[MAX][4];
	int main(){
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		int test;
		cin>> test;
		dp[1][1]= 1;
		dp[2][2]= 1;
		dp[3][3]= 1;

		for(int i=1;i<=MAX;i++){		
			if(i-1>0) dp[i][1] = dp[i-1][2] + dp[i-1][3];
			if(i-2>0) dp[i][2] = dp[i-2][3] + dp[i-2][1];
			if(i-3>0) dp[i][3] = dp[i-3][1] + dp[i-3][2];
			dp[i][1] %=mod;
			dp[i][2] %=mod;
			dp[i][3] %=mod;
		}
		while(test--){
			int input;
			cin>>input;
			cout<< (dp[input][1]+ dp[input][2]+ dp[input][3])%mod<<'\n';
		}
		return 0;
	}