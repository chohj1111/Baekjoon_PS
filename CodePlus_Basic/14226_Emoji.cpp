#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#include <stack>
#include <string.h>
#define LIMIT 1001

using namespace std;
int dist[LIMIT][LIMIT];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>> n;
	memset(dist, -1, sizeof(dist));
	queue <pair<int,int>> q;
	q.push(make_pair(1,0));  // first state : start with 1, nothing in clip board
	dist[1][0] = 0;
	while(!q.empty()){
		int s, c;
		s = q.front().first;
		c = q.front().second;
		q.pop();
		if(dist[s][s] == -1){  // copy
			dist[s][s] = dist[s][c] + 1;
			q.push(make_pair(s,s));
		} 
		if(s+c<=n && dist[s+c][c] == -1){ //paste
			dist[s+c][c] = dist[s][c] + 1; 
			q.push(make_pair(s+c,c));			
		}
		if(s-1>=0 && dist[s-1][c] == -1) { //delete
			dist[s-1][c] = dist[s][c] + 1; 
			q.push(make_pair(s-1,c));
		}
	}
	int ans = -1;
	for(int i=0;i<=n;i++){
		if(dist[n][i] != -1){
			if(ans == -1 || ans > dist[n][i]) ans = dist[n][i];
		}
	}
	cout<< ans <<'\n';
	return 0;
}