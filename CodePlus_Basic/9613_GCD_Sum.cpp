	#include <cstdio>
	#include <iostream>
	
	using namespace std;

	int gcd(int a,int b){
		if(b==0) return a;
		else return gcd(b,a%b);
	}
	int arr[101];
	int main(){
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		int test;
		cin>>test;
		while(test--){
			int n;
			long long int ans=0;
			cin>>n;
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					ans+=gcd(arr[i],arr[j]);
				}
			}
			cout<< ans <<'\n';
		}
	
		return 0;
	}