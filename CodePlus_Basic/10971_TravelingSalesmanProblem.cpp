#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int w[11][11];
int arr[11];
int num;
bool next_permutation_(){
	int i, j;
	for(i=num-1;i>0;i--){
		if(arr[i-1]<arr[i]) 
			break;
		
	}
	if(i<=0) return false;
	//2.find j, which is arr[i-1]> arr[j]
	for(j=num-1;j>0;j--){
		if(arr[i-1]<arr[j]) break;
	}
	//3. swap i-1 with j 
	swap(arr[i-1],arr[j]);
	//4. reverse permutation starts with i
	int end =num-1;
	while(i<end){
		swap(arr[i],arr[end]);
		i++; end--;
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>num;
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			cin>>w[i][j];
		}
	}
	for(int i=0;i<num;i++){
		arr[i] = i;
	}
	int ans =10000000;
	do{
		int weight = 0;
		bool flag = true;
		for(int i=0;i<num-1;i++){
			int prev_point=arr[i]; 
			int next_point=arr[i+1];
			if(w[prev_point][next_point]==0)  flag =false;
			else	weight += w[prev_point][next_point];
		}
		if(flag&& w[arr[num-1]][arr[0]]!=0) {
			weight += w[arr[num-1]][arr[0]];
			ans = min(ans, weight);
		}
	}while(next_permutation_());
	cout<< ans<<'\n';
	return 0;
}	