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
	return 0;
}