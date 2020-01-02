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
	int test;
	cin>>test;
	int dp[11];
	dp[0] = 1; dp[1]=1; dp[2]=2;
	for(int i=3;i<11;i++){
		dp[i] = dp[i-1]+dp[i-2]+dp[i-3];	
	}
	while(test--){
		int input;
		cin>>input;
		cout<< dp[input]<<'\n';
	}
	return 0;
}