#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
#define MAX 1000001
using namespace std;
vector<int> prime;
bool check[MAX];
	int cnt = 0;
void eratos(){
	for(int i=2;i<=MAX;i++){
		if(check[i]==false){
			prime.push_back(i);
			for(int j=i*2;j<=MAX;j+=i){
				check[j] = true;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin>> test;
	eratos();
	
	while(test--){
		int n;
		int ans=0;
		cin>> n;
		for(int i=0;i<prime.size();i++){	
			if(n-prime[i] >= prime[i]){
				if(check[n-prime[i]] ==false)
					ans++;
			}
			else break;
		}
		cout<< ans<<'\n';
	}
	return 0;
}