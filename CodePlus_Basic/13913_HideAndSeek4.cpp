#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#include <stack>
#define LIMIT 100001

using namespace std;
int check[LIMIT];
int dist[LIMIT];
int from[LIMIT];
int n, k;
void bfs(int a){
  	queue <int> q; 
  	check[a] = true;
	dist[a] = 0;
  	q.push(a);
	while(!q.empty()) {
		int x =q.front();
    	q.pop();
		if(x+1<LIMIT&&check[x+1] == false) {
			q.push(x+1);
			check[x+1] = true;
			dist[x+1]= dist[x] +1;
			from[x+1] = x;
		}
		if(x-1>=0&&check[x-1] == false) {
			q.push(x-1);
			check[x-1] = true;
			dist[x-1] = dist[x] +1;
			from[x-1] = x;
		}
		if(x*2<LIMIT&&check[x*2] == false) {
			q.push(x*2);
			check[x*2]= true;
			dist[x*2] = dist[x] +1;
			from[x*2] = x;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>> n>>k;
	bfs(n);
	cout<< dist[k]<<'\n';
	int last = k;
	stack<int> ans;
	while(last != n){
		ans.push(last);
		last = from[last];
	}
	ans.push(n);
	while(!ans.empty()){
		cout<<ans.top()<<" ";
		ans.pop();
	}
	cout<<'\n';
	return 0;
}