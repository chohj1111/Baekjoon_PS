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

bool check[MAX];
int parent[MAX];
vector<int> a[MAX];
void bfs();
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>> n;
	for(int i=0;i<n-1;i++){
		int x,y;
		cin>> x>> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	bfs();
	for(int i=2;i<=n;i++){
		cout<< parent[i] <<	'\n';
	}
	return 0;
}
void bfs(){
	queue <int> q; 
	check[1] = true; 
	parent[1] = 0;
  	q.push(1);
  	while(!q.empty()) {
		int x =q.front();
    	q.pop();
    	for(int y: a[x]){
			if(check[y]== false){
				check[y] = true;
				parent[y] = x;
				q.push(y);
			}
		}
  	}
}