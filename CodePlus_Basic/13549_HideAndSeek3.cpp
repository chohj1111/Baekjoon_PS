#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <deque>
#include <cstring>
#include <algorithm>
#include <stack>
#define LIMIT 100001

using namespace std;
int dist[LIMIT];
int n, k;
void bfs(int a){
  	deque <int> dq; 
	dist[a] = 0;
  	dq.push_back(a);
	while(!dq.empty()) {
		int x =dq.front();
    	dq.pop_front();
		if(x+1<LIMIT&&dist[x+1] == -1) {
			dist[x+1]= dist[x] +1;
			dq.push_back(x+1);
		}
		if(x-1>=0&&dist[x-1] == -1) {
			dist[x-1] = dist[x] +1;
			dq.push_back(x-1);
		}
		if(x*2<LIMIT&&dist[x*2] == -1) {  // weight == 0, so push itself to the queue
			dist[x*2] = dist[x];
			dq.push_front(x);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>> n>>k;
	memset(dist,-1, sizeof(dist));
	bfs(n);
	cout<< dist[k]<<'\n';
	return 0;
}