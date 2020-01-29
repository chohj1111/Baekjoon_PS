#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int gcd(int a, int b){
	int r;
	while(b!=0)
	{
		r= a%b;
		a=b;
		b=r;
	}
	return a;
}
int lcm(int a, int b){
	return a*b/gcd(a,b);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin>>test;
	while(test--){
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		int lcm_nm = lcm(n,m);
		int ans;
		for(ans = x; ans<= lcm_nm; ans+=n){
			int temp = (ans%m==0)?m:(ans%m);
			if(temp == y) {
				cout<< ans<<'\n';
				break;
			}
		}
		if(ans> lcm_nm) cout<<-1<<'\n';
	}
	return 0;
}	