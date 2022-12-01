int recursiveMaximum(int data[], int n)
{
     if(n==0)
    {
        return data[0];
    }
    else
    {
        return 	data[n]>recursiveMaximum(data, n-1)? 
				data[n]: recursiveMaximum(data, n-1);
    }
}




 
int main(void)
{
	int i, x, n;
	printf("陣列個數:");
	scanf("%d", &n);
	printf("\n");
////////////////////////////////////	
	int arr[n];
	printf("陣列元素:");
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	printf("\n");	
////////////////////////////////////
    int result = recursiveMaximum(arr, n-1);
    printf("%d", result);
    return 0;
}
