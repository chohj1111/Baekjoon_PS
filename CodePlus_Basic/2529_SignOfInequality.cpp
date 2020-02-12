#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
bool check[i];
string arr;
char inequal[10];
string max_ans = "";
string min_ans = "999999999";  // 10자리 9
void solve(int index){
	if(index == n+1) {
		//부등호 조건 만족하는지 확인 
		for(int i=0;i<=n;i++){
			if(inequl[i]=='<'){
				if(arr[i]>arr[i+1]) return;
			}
			else if(inequl[i]=='>'){
				if(arr[i]<arr[i+1]) return;
			}
		}
		// max_ans , min_ans 비교 
	}
	for(int i=0;i<=9;i++){
		if(check[i]) continue;
		check[i] = true; 
		string+=i;
		solve(index+1);
		arr.pop_back();
		check[i] = false;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin>>num;

	for(int i=0;i<num;i++) cin>> inequal[i];
	
	return 0;
}	