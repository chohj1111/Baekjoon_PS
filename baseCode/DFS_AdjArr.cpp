#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <deque>
#include <cstring>
#include <algorithm>
#include <stack>
#define LIMIT 100
int n;
int arr[LIMIT][LIMIT]
bool check[LIMIT];
using namespace std;
void DFS(int v)
{
    check[v] = true;
    for (int i = 1; i <= n; i++)    {
        if (arr[v][i] == 1 && !check[i])   
            DFS(i);       
        }
    }
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}