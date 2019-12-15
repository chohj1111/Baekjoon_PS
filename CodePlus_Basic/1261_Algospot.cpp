#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <deque>
#include <cstring>
#include <algorithm>
#include <stack>
#define LIMIT 101
int arr[LIMIT][LIMIT];
int dist[LIMIT][LIMIT];
int dirx[] = {0,0,-1,1};
int diry[] = {-1,1,0,0};
int n,m;
using namespace std;

bool isInside(int x, int y){
	return (x>=0 && x<n && y>=0 && y<m);
}
void bfs();
int main(){
	scanf("%d %d",&m,&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%1d",&arr[i][j]); 
			dist[i][j]= -1;
		}
	}
	bfs();
	printf("%d\n",dist[n-1][m-1]);
	return 0;
}

void bfs(){	
	deque <pair<int,int>> q; 
	q.push_back(make_pair(0,0));
	dist[0][0] = 0;
  	while(!q.empty()) {
		int x =q.front().first;
		int y =q.front().second;
    	q.pop_front();
		for(int i=0;i<4;i++){
			int nx = x + dirx[i];
			int ny = y + diry[i];
			if(isInside(nx,ny)&&dist[nx][ny] == -1){
				if(arr[nx][ny] == 0) {    // empty room, weight ==0
					dist[nx][ny] = dist[x][y];
					q.push_front(make_pair(nx,ny));
				}
				else{                     // room with wall
					dist[nx][ny] = dist[x][y] + 1; 
					q.push_back(make_pair(nx,ny));	
				}
			}
		}
  	}
}