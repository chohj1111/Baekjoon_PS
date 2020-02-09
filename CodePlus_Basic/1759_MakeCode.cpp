#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
bool check(string _passwords){
	int length = _passwords.length();
	int vowel = 0;
	int consonant =0;
	for(int i=0;i<length;i++){
		if(_passwords[i]== 'a'||_passwords[i]== 'e'||_passwords[i]== 'i' ||_passwords[i]== 'o'||_passwords[i]== 'u'){
			vowel++;
		}
		else consonant++;
	}
	return ((vowel>=1)&&(consonant>=2));
}
void solve(int _length, string _passwords, const vector<char>& _alphabet, int _index){
	//escape 
	if(_length==_passwords.length()) {
		if(check(_passwords)) cout<<_passwords<<endl;
		return;
	}
	// impossible case
	if(_index>= _alphabet.size()) return;
	solve(_length, _passwords+_alphabet[_index],_alphabet,_index+1);
	solve(_length, _passwords,_alphabet,_index+1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int code_length, alpha_num;
	cin>>code_length>>alpha_num;
	vector<char> alphabet(alpha_num);
	for(int i=0;i<alpha_num;i++){
		cin>> alphabet[i];
	}
	sort(alphabet.begin(),alphabet.end());
	string str = "";
	solve(code_length,str,alphabet,0);
	return 0;
}	