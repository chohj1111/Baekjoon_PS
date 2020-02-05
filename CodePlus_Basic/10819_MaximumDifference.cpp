#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int arr[8];
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
		cin>> arr[i];
	}
	sort(arr,arr+num);
	int ans = 0;
	do{
		int temp= 0;
		for(int i=0;i<num-1;i++){
			temp += abs(arr[i]-arr[i+1]);
		}
		ans = max(ans, temp);
	}while(next_permutation_());
	cout<<ans<<'\n';
	return 0;
}	