#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#define LIMIT 100
int n;
int arr[LIMIT][LIMIT];
bool check[LIMIT][LIMIT]; 
int group[LIMIT][LIMIT];
int dirx[] = {0,0,-1,1};
int diry[] = {-1,1,0,0};

void DFS(int x, int y)
{
	check[x][y] = true;
    for(int i=0;i<4;i++) { //dirx size에 따라 변경
		int nx= x+dirx[i];
		int ny= y+diry[i];
		if(nx>=0&& nx<LIMIT && ny>=0 && ny<LIMIT){
			if(check[nx][ny] = false && arr[nx][ny] == 1){
				dfs(nx,ny);
			}
		}
}

	
	