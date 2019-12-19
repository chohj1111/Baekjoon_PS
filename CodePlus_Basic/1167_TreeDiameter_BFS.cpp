#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <deque>
#include <cstring>
#include <algorithm>
#include <stack>
#define MAX 100001
using namespace std;
struct Edge{
	int to, cost;
	Edge(int to,int cost) : to(to),cost(cost){
		
	}
};
int dist[MAX];
int check[MAX];
vector<Edge> a[MAX];
void bfs(int v){
	memset(dist,0,sizeof(dist));
	memset(check,false,sizeof(check));
	queue<int> q;
	q.push(v);
	check[v]= true;
	//dist[v] = 0;
	while(!q.empty()){
		int x= q.front();
		q.pop();
		for(int i=0;i<a[x].size();i++){
			Edge temp = a[x][i];
			if(check[temp.to] == false) {
				dist[temp.to] = dist[x] + temp.cost;
				q.push(temp.to);
				check[temp.to] =true;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>> x; 
		while(true){
			int y, d;
			cin>> y;
			if(y==-1)  break;
			cin>> d;
			a[x].push_back(Edge(y,d));
		}	
	}
	bfs(1);
	int start = 1;
	for(int i=2;i<=n;i++){
		if(dist[i] >dist[start]){
			start= i;
		}
	}
	bfs(start);
	int ans = dist[1];
	for(int i=2;i<=n;i++){
		if(ans<dist[i]){
			ans = dist[i];
		}
	}
	cout<< ans <<'\n';
	return 0;
}