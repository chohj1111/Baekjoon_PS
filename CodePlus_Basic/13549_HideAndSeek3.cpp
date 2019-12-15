#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <deque>
#include <cstring>
#include <algorithm>
#include <stack>
#define MAX 1000001

using namespace std;
int dist[MAX];
int n, k;
void bfs(int a);

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>> n>>k;
	memset(dist,-1,sizeof(int)* MAX);
	bfs(n);
	cout<< dist[k]<<'\n';
	return 0;
}

void bfs(int a){
	deque <int> dq; 
	dist[a] = 0;
  	dq.push_back(a);
	while(!dq.empty()) {
		int x =dq.front();
    	dq.pop_front();
		if(x*2<MAX&&dist[x*2] == -1) {  
			dq.push_front(x*2);
			dist[x*2] = dist[x];
		}
		if(x+1<MAX&&dist[x+1] == -1) {
			dq.push_back(x+1);
			dist[x+1]= dist[x] +1;	
		}
		if(x-1>=0&&dist[x-1] == -1) {
			dq.push_back(x-	1);
			dist[x-1] = dist[x] +1;
		}
		
	}
}