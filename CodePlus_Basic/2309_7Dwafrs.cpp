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
	int arr[9];
	int sum = 0;
	for(int i=0;i<9;i++) {
		cin>> arr[i];
		sum+=arr[i];
	}
	sort(arr, arr+9);
	for(int i=0;i<9;i++){
		for(int j=i+1;j<9;j++) {
			if(sum - arr[i] - arr[j] == 100) {
				for(int k=0;k<9;k++) {
					if(k==i || k==j) continue;
					cout<< arr[k] << '\n';
				}
				return 0;
			}
		}
	}
	return 0;
}	