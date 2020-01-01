#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;
int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, s, ans =0;
	cin>> n>>s;
	int arr[100001];	
	int d[100001];
	for(int i=0;i<n;i++){
		cin>> arr[i];
		d[i] = abs(arr[i]-s);
	}
	
	if(n==1) {
		cout<< d[0]<<'\n';
		return 0;
	}
	else {
		ans = gcd(d[0],d[1]);
		for(int i=2;i<n;i++){
			ans = gcd(ans, d[i]);
		}
		cout<<ans<<'\n';
		return 0;
	}
	return 0;
}