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
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	// o(n^2) : n<=1000 
	
	for(int i=0;i<n;i++){
		dp[i] = 1;
		for(int j=0;j<i;j++){
			if (arr[i] < arr[j] && dp[j] + 1 > dp[i])
				dp[i] = dp[j]+ 1; 
		}
	}
	/*  if dp[i] means the length of LDS  which is START with arr[i]
	
		for(int i=n;i>=1;i--){
		dp_down[i] = 1;
		for(int j=i+1;j<=n;j++){
			if(arr[j]<arr[i] && dp_down[j]+1 > dp_down[i]){
				dp_down[i]= dp_down[j]+1;
			}
		}
	}
	*/
	for(int i=0;i<n;i++){
		ans = max(ans ,dp[i]);
	}
	cout<<ans<<'\n';
	
	return 0;
}