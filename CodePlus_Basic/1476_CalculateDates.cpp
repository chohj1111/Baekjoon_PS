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
	int e_target,s_target,m_target, ans = 1; // 15 28 19
	cin>> e_target>> s_target>> m_target;
	int e,s,m;
	e=1; s=1; m=1;
	while(true){
		if(e==e_target && s==s_target && m==m_target) break;
		e++; s++; m++;
		if(e== 16) e=1;
		if(s== 29) s=1;
		if(m== 20) m=1;
		ans++;
	}
	cout<< ans<<'\n';
	return 0;
}	