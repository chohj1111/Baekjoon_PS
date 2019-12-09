#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#define LIMIT 100001
using namespace std;
int check[LIMIT];
vector <int> a[LIMIT];   // adj list 
vector <int> order_dfs; // after sorting a, and save the sequence of dfs 


void dfs(int x){
	if(check[x]) return;
	order_dfs.push_back(x);
	check[x] =true;
	for(int y:a[x]){
		dfs(y);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++){
		int u, v; 
		cin>> u>>v;
		u--; v--;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	vector <int> order(n);   // to sort a[] 

vector <int> input(n); // given order
	for(int i=0;i<n;i++){
		cin>> input[i];
		input[i]--;
		order[input[i]]= i;
	}
	
	for(int i=0;i<n;i++){
		sort(a[i].begin(),a[i].end(),[&](const int &u,const int &v){
			return order[u]<order[v];
		});
	}
	
	dfs(0);
	if(order_dfs== input) cout<<1<<'\n';
	else cout<<0<<'\n';

	return 0;
	
}
