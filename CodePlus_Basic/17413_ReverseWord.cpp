#include <cstdio>
#include <iostream>
#include <stack>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	getline(cin,str);
	bool tag = false;
	stack<char> s;
	for(int i=0;i<str.length();i++){
		char ch = str[i];
		if(ch=='<') {
			tag= true;
			while(!s.empty()){
				cout<< s.top();	
				s.pop();
			}
		}
		
		if(tag) cout<<ch;
		else{	
			if (ch== ' '){
				while(!s.empty()){
					cout<< s.top();	
					s.pop();
				}
				cout<< ' ';
			}
			else s.push(ch);
		}
		if (ch== '>') {
			tag=false;
		}
	}
	while(!s.empty()){
				cout<< s.top();	
				s.pop();
	}
	cout<< '\n';
	return 0;
}