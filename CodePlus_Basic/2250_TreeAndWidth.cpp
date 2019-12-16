#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <deque>
#include <cstring>
#include <algorithm>
#include <stack>
using namespace std;
struct node {
	int _left, _right, order, depth;
};
node a[10001];
int cnt[10001]; // find root
int left_width[10001];
int right_width[10001]; // the very left and right node in level
int order = 0;
void inorder(int node, int depth){
	if(node==-1) return;
	inorder(a[node]._left,depth+1);
	a[node].order = ++order;
	a[node].depth = depth; 
	inorder(a[node]._right,depth+1);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>> n;
	for(int i=0;i<n;i++){
		int x,y,z;
		cin>> x>> y>> z;
		a[x]._left = y;
		a[x]._right = z;
		// root doesnt have parent
		if(y!= -1)  cnt[y]++; 
		if(z!= -1)  cnt[z]++;
	}
	int root = 0;
	for(int i=1;i<=n;i++){
		if(cnt[i]==0){
			root = i;
			break;
		}
	}
	inorder(root, 1);
	int height =0;  // height of tree
	for(int i=1;i<=n;i++){
		int depth = a[i].depth;
		int order = a[i].order;
		if( left_width[depth] == 0)  left_width[depth] = order;
		else  left_width[depth] =min( left_width[depth],order);
		right_width[depth] =max(right_width[depth],order);
		height = max(height, depth);
	}
	int ans = 0; 
	int ans_level =0;
	for(int i=1;i<=height;i++){
		int temp = right_width[i] -  left_width[i] +1;
		if(ans< temp){
			ans = temp;
			ans_level = i;
		}
	}
	cout<< ans_level << " "<<ans<<'\n';
	return 0;
}