#include <cstdio>
#include <iostream>
#define MAX 1001
using namespace std;
int arr[MAX];
bool check[MAX];
int ans[MAX];
int cnt = 0;
int n,k;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>n>>k;
	for(int i=2;i<=n;i++){
		if(check[i]==false){
			check[i] = true;
			ans[++cnt]=i;	
			for(int j=i*i;j<=n;j+=i){ // if max> 1000000, replace j with i*2 (because of overflow)
			 	if(check[j] == false) {
					ans[++cnt]=j;	
					check[j] = true;
				}
			}
		}
	}
	
	cout<< ans[k]<<'\n';
	return 0;
}