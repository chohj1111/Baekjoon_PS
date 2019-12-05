int n;
int arr[30][30], check[30];
 
void DFS(int v)
{
    check[v] = 1;
    for (int i = 1; i <= n; i++)    {
        if (arr[v][i] == 1 && !visit[i])   
            DFS(i);       
        }
    }
}


