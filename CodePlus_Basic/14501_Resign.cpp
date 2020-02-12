#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int ans = 0;
int term[16];
int price[16];
void solve(int _day, int _sum, const int& n){
	// if correct
	if(_day == n+1)	{
		ans = max(ans, _sum); 
		return;
	}
	else if(_day>=n+1) return;
	solve(_day+term[_day],_sum+price[_day],n);
	solve(_day+1,_sum,n);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin>> num;
	for(int i=1;i<=num;i++){
		cin>>term[i]>> price[i];
	}
	solve(1,0,num);
	cout<<ans<<endl;
	return 0;
}	