#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#define LIMIT 100
int n;
int arr[LIMIT][LIMIT];
int group[LIMIT][LIMIT];
int dist[LIMIT][LIMIT] = {-1,};
int dirx[] = {0,0,-1,1};
int diry[] = {-1,1,0,0};
int cnt = 0;

using namespace std;

void DFS(int x, int y)
{
	group[x][y] = cnt;
    for(int i=0;i<4;i++) { //dirx size에 따라 변경
		int nx= x+dirx[i];
		int ny= y+diry[i];
		if(nx>=0&& nx<n && ny>=0 && ny<n){
			if(group[nx][ny] == 0 && arr[nx][ny] == 1){
				DFS(nx,ny);
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}

  
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			 if (arr[i][j] == 1 && group[i][j] == 0) {
				 cnt++;
				 DFS(i,j);
			 }
		}
	}

	queue<pair<int,int>> q;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			dist[i][j] = -1;
			if(arr[i][j] ==1){
				dist[i][j] = 0;
				q.push(make_pair(i,j));
			}
		}
	}
	// expand islands with BFS
	while(!q.empty()){
		pair<int,int> temp = q.front();
		int x= temp.first;
		int y = temp.second;
		q.pop();
		for(int i=0;i<4;i++){
			int nx = x+dirx[i];
			int ny = y+diry[i];
			if(nx>=0&& nx<n && ny>=0 && ny<n){
				if(dist[nx][ny] == -1) {
					dist[nx][ny] = dist[x][y]+1;
					group[nx][ny]= group[x][y];
					q.push(make_pair(nx,ny));
				}
			}
		}
	}
	
	int ans = 200; // maximum of ans = 200 (limit + limit)
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<4;k++){
				int nx= i+dirx[k];
				int ny= j+diry[k];
				if(nx>=0&& nx<n && ny>=0 && ny<n){
					if(group[nx][ny]!=group[i][j]){
						if(ans>dist[nx][ny]+dist[i][j])
							ans = dist[nx][ny]+dist[i][j];
					}
				}
			}	
		}
	}
	cout<< ans <<'\n';
	return 0;
}

	
	