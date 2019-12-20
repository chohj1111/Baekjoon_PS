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
		string str;
		getline(cin,str);
		stack <char> s;
		for(int i=0;i<str.size();i++){
			if(str[i] != ' '){
				s.push(str[i]);
			}
			else {
				while(!s.empty()){
					cout<<s.top();
					s.pop();
				}
				cout << ' ';
			}
		}
		while(!s.empty()){
					cout<<s.top();
					s.pop();
		}
		cout<< '\n';
	}
	return 0;
}