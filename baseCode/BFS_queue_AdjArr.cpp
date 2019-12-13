#define LIMIT 100
int check[LIMIT];
int arr[LIMIT];

void bfs(){
	queue <int> q; 
	check[1] = true;
  	q.push(1);
  	while(!q.empty()) {
		int x =q.front();
    	q.pop();
    	for(int i=1;i<=n;i++){
	      if(arr[x][i] ==1 && check[i] = false) {
        	check[i] = true;
        	q.push[i];
        	}
    	}
  	}
}
