#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int check(const vector<string>& v){
	int n= v.size();
	int ans = 1;
	for(int i=0;i<n;i++){
		int cnt = 1;
		for(int j=1;j<n;j++){
			if(v[i][j]==v[i][j-1]) cnt++;
			else {
				cnt = 1;
				ans = max(ans, cnt);
			}
			ans = max(ans, cnt);
		}
		cnt = 1;
		for(int j=1;j<n;j++){
			if(v[j][i] == v[j-1][i]) cnt++;
			else {
				cnt = 1;
				ans = max(ans, cnt);
			}
			ans = max(ans,cnt);
		}
	}
	return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin>> num;
	vector<string> arr(num);
	for(int i=0;i<num;i++) cin>> arr[i];
	int temp,ans =0;
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if(j+1<num) {
				swap(arr[i][j], arr[i][j+1]);
				temp = check(arr);
				ans = max(temp,ans);
				swap(arr[i][j], arr[i][j+1]);
			}
			if(i+1<num){
				swap(arr[i][j], arr[i+1][j]);
				temp = check(arr);
				ans = max(temp,ans);
				swap(arr[i][j], arr[i+1][j]);
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}	