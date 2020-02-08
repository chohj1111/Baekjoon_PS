#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int ans = 0;
void solve(int _sum,int _goal){
	if(_sum> _goal) return;
	else if(_sum== _goal) ans++;
	else{
		for(int i=1;i<=3;i++){
			solve(_sum+i,_goal);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin>>test;
	while(test--){
		int num;
		cin>>num;
		solve(0,num);
		cout<< ans<<endl;
		ans =0;
	}
	return 0;
}	