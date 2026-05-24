#include<stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int a[], int lb, int ub)
{
    int i=lb, j=ub;
    int pivot=a[lb];
    while(i<=j)
    {
        while(i <= ub && a[i]<=pivot)
            i++;
        while(a[j]>pivot)
            j--;
        if(i<j)
            swap(&a[i],&a[j]);
    }
    swap(&a[j],&a[lb]);
    return j;
}

void quick(int a[], int lb, int ub)
{
    if(lb<ub)
    {
        int loc=partition(a,lb,ub);
        quick(a,lb,loc-1);
        quick(a,loc+1,ub);   
    }
}

int main()
{
    int a[10],n,i;
    printf("How many elements you want to enter? ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("The UNSORTED array: ");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    quick(a,0,n-1);
    printf("\nThe SORTED array: ");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    return 0;
}
