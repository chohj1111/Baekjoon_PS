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
		//cout<< x<<" "<<dist[x]<<'\n';
		if(x+1<LIMIT&&check[x+1] == false && dist[x+1] ==-1) {
			q.push(x+1);
			dist[x+1]= dist[x] +1;
			//cout<< x+1<<" "<<dist[x+1]<<'\n';
		}
		if(x-1>=-0&&check[x-1] == false && dist[x-1] ==-1) {
			q.push(x-1);
			dist[x-1] = dist[x] +1;
			//cout<< x-1<<" "<<dist[x-1]<<'\n';

		}
		if(x*2<LIMIT&&check[x*2] == false && dist[x*2] ==-1) {
			q.push(x*2);
			dist[x*2] = dist[x] +1;
				//		cout<<x*2<< " "<<dist[x*2]<<'\n';

		}
		//if(x+1==k ||x-1==k ||x*2==k) break;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for(int i=0;i< LIMIT;i++){
		dist[i] = -1;
	}
	cin>> n>>k;
	bfs(n);
	cout<< dist[k]<<'\n';
	return 0;
}