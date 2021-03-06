#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#define LIMIT 100001

using namespace std;
int check[LIMIT];
int dist[LIMIT];
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
		}
		if(x-1>=0&&check[x-1] == false) {
			q.push(x-1);
			check[x-1] = true;
			dist[x-1] = dist[x] +1;
		}
		if(x*2<LIMIT&&check[x*2] == false) {
			q.push(x*2);
			check[x*2]= true;
			dist[x*2] = dist[x] +1;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>> n>>k;
	bfs(n);
	cout<< dist[k]<<'\n';
	return 0;
}