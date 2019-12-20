#include <cstdio>
#include <iostream>
#include <stack>
#include <string>
using namespace std; 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin>> test;
	cin.ignore();
	while(test--){
		bool flag = true;
		string str;
		getline(cin,str);
		stack<char> s;
		for(int i=0;i<str.size();i++){
			if(str[i]=='('){
				s.push('(');
			}
			else{
				if(!s.empty()) s.pop();
				else {
					flag = false;
					break;
				}
			} 
		}
		if(!s.empty()) flag=false;
		if(flag ==false) cout << "NO"<<'\n';
		else cout<< "YES"<<'\n';
	}
	return 0;
}