#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#define LIMIT 100001
using namespace std;
int check[LIMIT];// 1: visted 2: visited and included in cycle
vector <int> a[LIMIT];
int input[LIMIT];
int parent[LIMIT]; 

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
	for(int i=0;i<n;i++){
		cin>> input[i];
		input[i]--;
	}
	
	queue <int> q; 
	check[0] = true;
  	q.push(0);
	int m = 1; //current node
	for(int i=0;i<n;i++){
		if(q.empty()) {
			cout<< 0<< '\n'; 
			return 0;
		}
		int x= q.front(); q.pop();
		if(x!=input[i]){
			cout<< 0<< '\n'; 
			return 0;
		}
		int cnt = 0; // how many nodes connected to x
		for(int y: a[x]) {
			if(check[y]==false) {
				parent[y] = x; 
				cnt++;
			}
		}
		for(int j=0;j<cnt;j++){
			if(m+j>=n||parent[input[m+j]] !=x ) {
				cout<< 0<< '\n'; 
				return 0;
			}
			
			q.push(input[m+j]);
			check[input[m+j]] = true;
		}
		m+= cnt;
	}
	cout<<1<<'\n';
	return 0;
	
}
