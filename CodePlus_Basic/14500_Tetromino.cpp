#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
int arr[501][501];
const int dir[19][4][2] = {
    { {0,0}, {0,1}, {1,0}, {1,1} }, // ㅁ
    { {0,0}, {0,1}, {0,2}, {0,3} }, // ㅡ
    { {0,0}, {1,0}, {2,0}, {3,0} },
    { {0,0}, {0,1}, {0,2}, {1,0} }, // ㄴ
    { {0,2}, {1,0}, {1,1}, {1,2} },
    { {0,0}, {1,0}, {1,1}, {1,2} },
    { {0,0}, {0,1}, {0,2}, {1,2} },
    { {0,0}, {1,0}, {2,0}, {2,1} },
    { {0,0}, {0,1}, {1,1}, {2,1} },
    { {0,0}, {0,1}, {1,0}, {2,0} },
    { {0,1}, {1,1}, {2,0}, {2,1} },
    { {0,0}, {1,0}, {1,1}, {2,1} }, // Z
    { {0,1}, {1,0}, {1,1}, {2,0} },
    { {0,1}, {0,2}, {1,0}, {1,1} },
    { {0,0}, {0,1}, {1,1}, {1,2} },
    { {0,0}, {0,1}, {0,2}, {1,1} }, // ㅗ
    { {0,1}, {1,0}, {1,1}, {1,2} },
    { {0,1}, {1,0}, {1,1}, {2,1} },
    { {0,0}, {1,0}, {1,1}, {2,0} }
};

int n,m;				 
using namespace std;
int tetromino(int x, int y){
	int sum = 0;
	for(int i=0;i<19;i++){
		int temp = 0;
		for(int j=0;j<4;j++){
			int nx= x+ dir[i][j][0];
			int ny= y+ dir[i][j][1];
			if(nx>=0&&nx<n &&ny>=0&&ny<m){
				temp+= arr[nx][ny];
			}
		}
		sum = max(sum,temp);
	}
	return sum;
}
int solve(){
	int ret =0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			ret = max(ret,tetromino(i,j));
		}
	}
	return ret;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>> n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
	}
	cout<< solve()<<'\n';
	
	return 0;
}	