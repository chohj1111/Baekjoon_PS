#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
int arr[501][501];
int dir[19][4][2] = {
	{{0,0},{0,1},{0,2},{0,3}},  // ㅡ
	{{0,0},{1,0},{2,0},{3,0}},
	{{0,0},{0,1},{1,0},{1,1}},   //ㅁ
	{{0,0},{1,0},{2,0},{2,1}},
	{{1.0},{1,1},{1,2},{0,2}},
	{{0,0},{0,1},{1,1},{2,1}},
	{{0,0},{0,1},{0,2},{1,0}},
	{{0,1},{1,1},{2,1},{2,0}},
	 
					 
using namespace std;
int tetromino(int x, int y){
	for(int i=0;i<19;i++)
}
int solve(){
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>> n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
	}
	return 0;
}	