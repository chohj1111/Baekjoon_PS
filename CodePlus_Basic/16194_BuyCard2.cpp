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
	int n;
	cin>>n;
	vector<int> price(n+1);
	vector<int> dp(n+1);
	for(int i=1;i<=n;i++)
		cin>>price[i];
	dp[0] = 0;
	for(int i=1;i<=n;i++)
		dp[i] = 10000000;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++)
			dp[i] = min(dp[i], dp[i-j]+price[j]);
	}
	cout<<dp[n]<<'\n';
	return 0;
}