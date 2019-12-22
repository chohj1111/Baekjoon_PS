#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	getline(cin,str);
	int ans = 0;
	int cnt = 0; // to count sticks
	stack <char> s;
	for(int i=0;i<str.length();i++){
		char ch = str[i];
		if(ch =='('){
			if(str[i+1]==')') {//laser
				ans += cnt;
				i++;  // for skip to next "("
				continue;
			}
			else {
				s.push(ch);
				cnt++;
			}
		}
		else {
			s.pop();
			cnt--;
			ans++;
		}
	}
	cout<<ans<<'\n';
	return 0;
}