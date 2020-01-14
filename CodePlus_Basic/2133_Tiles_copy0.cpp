#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

	int dp[31]; 
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	dp[0]= 1;
	dp[2] = 3;
	for(int i=4;i<=n;i+=2){  // dp[i] = dp[i-2]* 3(3*2) + dp[i-4]* 2(3*4) + 2개 늘어날 때마다 2가지 경우 추가
		dp[i] += dp[i-2]* 3;
		for(int j=4;j>i;j+=2)
		dp[j] += dp[j-i] *2; // 
	}
	cout<< dp[n]<<'\n';
	return 0;
}		