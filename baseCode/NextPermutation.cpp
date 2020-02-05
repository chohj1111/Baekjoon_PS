bool next_permutation_(){
	int i, j;
	for(i=num-1;i>0;i--){
		if(arr[i-1]<arr[i]) 
			break;
		
	}
	if(i<=0) return false;
	//2.find j, which is arr[i-1]> arr[j]
	for(j=num-1;j>0;j--){
		if(arr[i-1]<arr[j]) break;
	}
	//3. swap i-1 with j 
	swap(arr[i-1],arr[j]);
	//4. reverse permutation starts with i
	int end =num-1;
	while(i<end){
		swap(arr[i],arr[end]);
		i++; end--;
	}
	return true;
}