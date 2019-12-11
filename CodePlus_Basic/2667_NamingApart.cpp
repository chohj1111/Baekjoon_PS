#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;
 
bool check[30][30];

int size, arr[26][26],  num[1010], cnt;

int dirx[4] = { 0,0,-1,1 };
int diry[4] = { 1,-1,0,0 };

bool isInside(int a, int b)
{
	return (a>=0&&a<size) && (b>=0&&b<size);
}

void dfs(int x, int y)
{
	check[x][y]= true;
	num[cnt]++;
	for(int i=0;i<4;i++){
		int dx = x+dirx[i];
		int dy = y+diry[i];
	
		if(0 <= dx && dx < size && 0 <= dy && dy < size){
			if(!check[dx][dy] && arr[dx][dy]) dfs(dx,dy);
		}
	}
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	scanf(" %d",&size);
	for(int i=0;i<size;i++)
	{
			for(int j=0;j<size;j++)
				scanf(" %1d", &arr[i][j]);
	}
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++){
			if(!check[i][j]&&arr[i][j]) {
				dfs(i,j),cnt++;
			}		
		}
		
	}
	
	printf("%d\n", cnt);
	sort(num,num+cnt);
	
	for(int i=0;i<cnt;i++)
	{
		printf("%d\n",num[i]);
	}

}