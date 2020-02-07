#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(true){
		int k;
		cin>>k;
		if(k==0) break;
		vector<int> arr(k);
		vector<int> permutation(k);
		for(int i=0;i<k;i++){
			cin>>arr[i];
		}
		for(int i=0;i<6;i++) permutation[i] = 1;
		for(int i=6;i<k;i++) permutation[i] = 0;
		do{
			for(int i=0;i<k;i++){
				if(permutation[i]==1) {
					cout<<arr[i]<<' ';
				}
			}
			cout<<'\n';
		}while(prev_permutation(permutation.begin(),permutation.end()));
		cout<<'\n';
	}
	return 0;
}	