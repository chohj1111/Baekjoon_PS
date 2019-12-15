#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <deque>
#include <cstring>
#include <algorithm>
#include <stack>
#define LIMIT 100
int check[LIMIT];
int arr[LIMIT];
using namespace std;
void bfs(){
	queue <int> q; 
	check[1] = true;
  	q.push(1);
  	while(!q.empty()) {
		int x =q.front();
    	q.pop();
    	for(int i=1;i<=n;i++){
	      if(arr[x][i] ==1 && check[i] = false) {
        	check[i] = true;
        	q.push[i];
        	}
    	}
  	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}
