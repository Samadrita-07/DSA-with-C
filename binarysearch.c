#include <stdio.h>

//program 1
void binarysearch(int arr[],int key,int n) {
    int l=0,u=n-1,mid,flag=0;
    while(l<=u) {
        mid=(l+u)/2;
        if(arr[mid]==key) {
        	printf("%d element found at index %d",key,mid);
        	flag++;
            break;
		}
        if(arr[mid]<key)
            l=mid+1;
        else
            u=mid-1;  
    }
    if(flag==0)
        printf("%d not found!",key);
}

int main() {
    int n, i, arr[20], key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elememts in sorted manner:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("\nThe array: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\nEnter an element to search: ");
    scanf("%d", &key);
    binarysearch(arr,key,n);
    return 0;
}*/

//recursive way
int binarysearch(int arr[], int key, int n, int l, int u) {
	int mid=(l+u)/2;
	if(l<=u)
	{
		if(arr[mid]==key)
			return mid;
		else if (arr[mid]<key)
			binarysearch(arr,key,n,mid+1,n-1);
		else
			binarysearch(arr,key,n,0,mid-1);
	}
	else
		return -1;
}

int main() {
    int n, i, arr[20], key, flag=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elememts in sorted manner:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("\nThe array: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\nEnter an element to search: ");
    scanf("%d", &key);
    flag=binarysearch(arr,key,n,0,n-1);
	if(flag!=-1)
		printf("%d element found at index %d",key,flag);
	else
		printf("%d not found!",key);
	return 0;
}

