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
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>dp[i][j];
		}
	}
	
	return 0;
}	