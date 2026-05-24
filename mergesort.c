#include<stdio.h>

void merge(int a[], int lb, int mid, int ub) {
    int i=lb, j=mid+1, k=lb;
    int b[100];
    while(i<=mid && j<=ub) {
        if(a[i]<=a[j]) {
            b[k]=a[i];
            i++;
            k++;
    	}
        else {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>mid) {
        while(j<=ub) {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else {
        while(i<=mid) {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++)
        a[k]=b[k];
}

void mergesort(int a[], int lb, int ub) {
    int mid=(lb+ub)/2;
    if(lb<ub) {
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}

int main() {
    int a[10],n,i;
    printf("How many elements you want to enter? ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The UNSORTED array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    mergesort(a,0,n-1);
    printf("\nThe SORTED array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
