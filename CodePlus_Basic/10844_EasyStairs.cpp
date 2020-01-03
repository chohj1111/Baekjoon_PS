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
	dp[1][0] = 0;
	for(int i=1;i<=9;i++){
		dp[1][i] = 1;
	}
	
	for(int i=2;i<=input;i++){
		for(int j=0;j<=9;j++){
			if(j==0) dp[i][0] = dp[i-1][j];
			else if(j==9) dp[i][8] = dp[i-1][j];
		}
	}
	return 0;
}