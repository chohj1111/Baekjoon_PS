#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
int dp[100001];
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int input;
	cin>>input;
	dp[0] = 0;
	for(int i=1;i<=input;i++){
		dp[i] = -1;
		for(int j=1;j*j<=i;j++){
			if(dp[i] ==-1) dp[i] = dp[i-j*j] + 1;
			else dp[i] = min(dp[i],dp[i-j*j]+1);
		}
	}
	cout<< dp[input]<<'\n';
	return 0;
}