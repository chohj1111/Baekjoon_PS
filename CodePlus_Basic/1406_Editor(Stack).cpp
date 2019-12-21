#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	cin>> str;
	stack<char> s1; // left side of cursor
	stack<char> s2; // right side of cursor
	for(int i=0;i<str.length();i++){
		char temp = str[i];
		s1.push(temp);
	}

	int test;
	cin >>test;
	while(test--){
		char input,temp;
		cin>> input;
		if(input == 'L') {
			if(!s1.empty()){
				temp =s1.top();
				s1.pop();
				s2.push(temp);
			}
		}
		else if(input == 'D') {
			if(!s2.empty()){
				temp =s2.top();
				s2.pop();
				s1.push(temp);
			}
		}
		else if(input =='B'){
			if(!s1.empty())  s1.pop();
		}
		else if(input =='P'){
			cin>> temp;
			s1.push(temp);
		}
	}
	while(!s1.empty()){
		s2.push(s1.top());
		s1.pop();
	}
	while(!s2.empty()){
		cout<< s2.top();
		s2.pop();
	}
	
	return 0;
}