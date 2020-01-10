#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int arr[1001];
int dp_up[1001]; 	// LIS end with arr[i]
int dp_down[1001];  // LDS START with arr[i]
int n;

void LIS(){
	for(int i=1;i<=n;i++){
		dp_up[i] = 1;
		for(int j=1;j<i;j++){
			if(arr[j]<arr[i] && dp_up[j]+1 > dp_up[i]){
				dp_up[i] = dp_up[j]+1;
			}
		}
	}
}
void LDS(){
	for(int i=n;i>=1;i--){
		dp_down[i] = 1;
		for(int j=i+1;j<=n;j++){
			if(arr[j]<arr[i] && dp_down[j]+1 > dp_down[i]){
				dp_down[i]= dp_down[j]+1;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;i++) cin>> arr[i];
	LIS();
	LDS();
	int ans =0;
	for(int i=1;i<=n;i++){
		int temp = dp_up[i]+ dp_down[i]-1;
		ans = max(ans, temp);
	}
	cout<< ans<<'\n';
	return 0;
}