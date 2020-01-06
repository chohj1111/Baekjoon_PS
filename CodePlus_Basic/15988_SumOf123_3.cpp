#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int mod = 1000000009;
long long dp[1000001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin>>test;
	dp[1] = 1; dp[2] = 2; dp[3] = 4;
	for(int i=4;i<=1000000;i++){
		dp[i] = (dp[i-1] + dp[i-2]+dp[i-3]) %mod;	
	}
	while(test--){	
		int input;
		cin>>input;
		cout<<dp[input]<<'\n';
	}
	return 0;
}