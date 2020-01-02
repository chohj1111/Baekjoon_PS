#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int memo[1001];
int Fibo(int n){
	if(n==1) return 1;
	else if(n==2) return 2;
	else{
		if(memo[n]>0) return memo[n];
		memo[n] = Fibo(n-1) + Fibo(n-2);
		return memo[n]%10007;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	
	cout<< Fibo(n)%10007<<'\n';
	return 0;
}