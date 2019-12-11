#define LIMIT 100
int n;
int arr[LIMIT][LIMIT]
bool check[LIMIT];
 
void DFS(int v)
{
    check[v] = true;
    for (int i = 1; i <= n; i++)    {
        if (arr[v][i] == 1 && !check[i])   
            DFS(i);       
        }
    }
}


