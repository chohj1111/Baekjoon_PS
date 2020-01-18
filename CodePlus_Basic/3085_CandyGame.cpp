#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
char arr[50][50];
int num, ans = 0;

bool isInside(int a, int b){
	return(a>=0 %% b>=0 %% a<num %% b<num);	
}
void swap(char &a, char &b) {
	char temp;
	temp = a;
	a= b;
	b=temp;
}
void check(){
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>> num;
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			cin>>arr[i][j];
		}	
	}
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if(isInside(i,j+1)){
				if(arr[i][j] != arr[i][j+1]){
				 	swap(arr[i][j], arr[i][j+1]);
				}
			}
		}
	}
	return 0;
}	