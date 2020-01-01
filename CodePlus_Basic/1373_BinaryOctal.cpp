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
	string str;
	getline(cin,str);
	int r = str.length()%3;
	if(r==1) cout<< str[0];
	else if(r==2) {
		cout << (str[0]-'0')*2 + str[1]-'0';
	}
	for(int i=r ;i< str.length();i+=3){
		cout<<(str[i]-'0')*4+(str[i+1]-'0')*2 + (str[i+2]-'0');
	}
	
    cout << '\n';
	return 0;
}