#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int stat[21][21];
int num;
int ans = 4000;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>> num;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=num;j++){
			cin>> stat[i][j];
		}
	}
	for(int i=2;i<(2<<num);i++){
		vector<int> first,second;
		for(int j=1;j<=num;j++){ // 각 비트 검사
			if(i&(1<<j)) first.push_back(j);
			else second.push_back(j);
		}
		if(first.size()!= second.size()) continue;
		if(first.size() ==  num/2 &&second.size()==  num/2) {
		int start_sum= 0;
		int link_sum=0;
		for(int i=0;i<num/2;i++){
			for(int j=i+1;j<first.size();j++){
				if(i==j) continue;
				start_sum+= stat[first[i]][first[j]]+stat[first[j]][first[i]];		
				link_sum+= stat[second[i]][second[j]]+stat[second[j]][second[i]];	
			}			
		}
		ans = min(ans,abs(start_sum-link_sum));
		}
	}
	
	cout<< ans<< endl;
	return 0;
}	