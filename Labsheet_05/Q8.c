int swap(int n1,int n2){

    int a=pow(10,floor(log10(n2))+1)*n1+n2;
    int b=pow(10,floor(log10(n1))+1)*n2+n1;
    printf("%d/%d\n\n",a,b);

    if(a<b) return 1;

return 0;
}

int main()
{
        printf("Enter size of array :\n");
	    int n;
	    scanf("%d",&n);
        printf("Enter the elements into the array :\n");
	    int arr[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	    }

	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(arr[i]==0 || swap(arr[i],arr[j])==1){
	                int t;
	                t=arr[i];
	                arr[i]=arr[j];
	                arr[j]=t;
	            }
	        }
	    }
    printf("The largest formed number is ");
    for(int i=0;i<n;i++)
	        printf("%d",arr[i]);


	return 0;
}
