#include <cstdio>
#include <iostream>
#include <stack>
#include <vector>
#define MAX 1000001
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>> n;
	vector<int> arr(n);
	vector<int> cnt(MAX);
	vector<int> ans(n,-1);
	for(int i=0;i<n;i++){
		cin>> arr[i];
		cnt[arr[i]]++;
	}
	stack<int> s;
	s.push(0);
	for(int i=1;i<n;i++){
		while(!s.empty() && cnt[arr[s.top()]]< cnt[arr[i]]) {
			ans[s.top()] = arr[i];
			s.pop();
		}
		s.push(i);
	}
	
	for(int i=0;i<n;i++){
		cout<< ans[i] << ' ';
	}
	cout<<'\n';
	return 0;
}