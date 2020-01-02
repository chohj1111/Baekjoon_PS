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
	if(n<=1) return n;
	else{
		if(memo[n]>0) return[n];
		memo[n] = Fibo(n-1) + Fibo(n-2);
		return memo[n];
	}
}