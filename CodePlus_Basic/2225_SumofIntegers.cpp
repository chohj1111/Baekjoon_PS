#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;
long long dp[201][201];  // first index : n, second index : k
int mod = 1000000000;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin>> n>>k;
	for(int i=0;i<=n;i++){
		dp[i][1] = 1;	
	}
	for(int i=1;i<=k;i++){      // numbers 
		for(int j=0;j<=n;j++){  // target
			for(int l=0;l<=j;l++){  
				dp[j][i] += dp[j-l][i-1];
			}
				dp[j][i] %= mod;
		}
	}
	cout<< dp[n][k] %mod <<'\n';
	return 0;
}	