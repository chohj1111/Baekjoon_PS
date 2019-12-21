#include <cstdio>
#include <iostream>
#include <list>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	cin>> str;
	list<char> list_edit(str.begin(),str.end());
	list<char>::iterator iter = list_edit.end();
	
	int test;
	cin >>test;
	while(test--){
		char input;
		cin>> input;
		if(input == 'L') {
			if(iter!=list_edit.begin()) iter--;
		}
		else if(input == 'D') {
			if(iter!=list_edit.end()) iter++;
		}
		else if(input =='B'){
			if(iter!=list_edit.begin()) list_edit.erase(iter);
		}
		else if(input =='P'){
			char temp;
			cin>> temp;
			list_edit.insert(iter,temp);
		}
	}
	for(auto i = list_edit.begin();i!=list_edit.end();i++)
		cout<< *i;
	cout<< '\n';
	return 0;
}