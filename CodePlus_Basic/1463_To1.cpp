#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
#define MAX 1000001

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int dp[MAX] = {-1,};
	dp[1] = 0;
	dp[2] = 1;
	int n;
	cin>>n;
	for(int i=3;i<=n;i++){	
		dp[i] = dp[i-1] + 1;
		if(i%3==0) dp[i] = min(dp[i],dp[i/3]+1);
		if(i%2 ==0) dp[i] =min(dp[i], dp[i/2]+1);
	}
	cout<< dp[n] <<'\n';
	return 0;
}