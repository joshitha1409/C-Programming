#include <stdio.h>
void bubble(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int binarySearch(int arr[], int n, int item) {
	int l=0;
	int r=n-1;
	while(l<=r)
		{
			int m=(l+r)/2;
			printf("%d\n",arr[m]);
			if(item==arr[m])
				return m;
			else if(item<arr[m])
				r=m-1;
			else
				l=m+1;
		}
	return -1;
}

int main() {
    int N, item;
    scanf("%d", &N); // Read the size of the list
int arr[N];
	for(int i=0;i<N;i++)
		{
			scanf("%d",&arr[i]);}
	bubble(arr,N);
	scanf("%d",&item);
    int index = binarySearch(arr, N, item); // Perform binary search
    printf("%d\n", index); // Print the index if the item is found
    return 0;
}
