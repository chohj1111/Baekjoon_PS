#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int arr[10001];
int dp[10001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>> arr[i];
	dp[0] = 0;
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	for(int i=3;i<=n;i++) {
		dp[i] = max({dp[i-2]+ arr[i],dp[i-1],dp[i-3] +arr[i-1]+arr[i]});
	}
	cout<< dp[n]<<'\n';
	return 0;
}