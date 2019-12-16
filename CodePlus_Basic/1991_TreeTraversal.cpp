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
	int left, right;
};

node a[30];
void preorder(int x){
	if(x==-1) return;
	cout<< (char)(x+'A');
	preorder(a[x].left);
	preorder(a[x].right);
}
void inorder(int x){
	if(x==-1) return;
	inorder(a[x].left);
	cout<< (char)(x+'A');
	inorder(a[x].right);
}
void postorder(int x){
	if(x==-1) return;
	postorder(a[x].left);
	postorder(a[x].right);
	cout<< (char)(x+'A');
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		char x, y, z;
		cin>> x>> y>> z;
		x=x-'A';
		if(y!='.') a[x].left = y-'A';
		else a[x].left =-1;
		if(z!='.') a[x].right = z-'A';
		else a[x].right = -1;
	}
	preorder(0); cout<<'\n';
	inorder(0); cout<<'\n';
	postorder(0); cout<<'\n';
	return 0;
}