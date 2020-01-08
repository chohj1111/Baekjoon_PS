#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int arr[1001][3];
int dp[1001][3];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=2;j++){
			cin>> arr[i][j];
		}
	}
	for(int i=0;i<=2;i++)
		dp[1][i] = arr[1][i];
	for(int i=2;i<=n;i++){
		dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + arr[i][0];
		dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + arr[i][1];
		dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + arr[i][2];
	} 
	cout<< min({dp[n][0],dp[n][1],dp[n][2]}) <<'\n';
	return 0;
}