#include <cstdio>
#include <iostream>
using namespace std;
int gcd(int a,int b){
	whlie(b!=0){
		int r = a%b;
		a=b; 
		b=r;
	}
	return a;
}