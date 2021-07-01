void swap_max(int arr[],int l,int n){
	int max_index=n;
	for (int i=n+1;i<l;i++){
		if(arr[i]>arr[max_index]){
			max_index=i;
		}
	}
	int temp=arr[n];
	arr[n]=arr[max_index];
	arr[max_index]=temp;
	return;
}

void ssort(int arr[],int l){
	for(int i=0;i<l;i++){
		swap_max(arr,l,i);
	}
	return;
}
