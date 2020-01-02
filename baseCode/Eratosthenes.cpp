#include <cstdio>
#include <iostream>
#define MAX 1001
using namespace std;
int arr[MAX];
bool check[MAX];
int prime[MAX];
int cnt_prime = 0;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for(int i=2;i<=MAX;i++){
		if(check[i] == false){
			prime[++cnt_prime] = i;
			for(int j=i*i;j<=MAX;j+=i) // if max> 1000000, replace j with i*2 (because of overflow)
				check[j] = true;
		}
	}
	return 0;
}