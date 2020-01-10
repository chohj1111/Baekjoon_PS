#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int arr[1001];
int dp[1001];
int n;

void LIS(){
	for(int i=1;i<=n;i++){
		dp[i] = 1;
		for(int j=1;j<i;j++){
			if(arr[j]<arr[i] && dp[j]+1 > dp[i]){
				dp[i] = dp[j]+1;
			}
		}
	}
}