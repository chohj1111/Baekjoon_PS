#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
bool broken[10];
int check(int input){ // 0 == impossible , 1~ == how many buttons you have to click
	if(input == 0) return(broken[0] ? 0 : 1);
	int len = 0;
	while(input>0){
		if(broken[input%10]) return 0;
		input/= 10;
		len++;
	}
	return len;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int target,m;
	cin>>target;
	cin>>m;
	for(int i=0;i<m;i++) {
		int a;
		cin>> a;
		broken[a] = true;
	}
	int ans = abs(target-100); // initial value
	int temp;
	for(int i=0;i<=1000000;i++) {// because maximum channel == 500000
		temp = i;
		int length = check(temp);
		if(length != 0) {
			int _plus = abs(target-temp);
			ans = min(ans,length+ _plus);
		}
	}
	cout<<ans<< '\n';
	
	return 0;
}	