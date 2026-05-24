#include<stdio.h>

void selection(int a[], int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}

int main()
{
    int a[10],n,i;
    printf("How many elements you want to enter? ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The UNSORTED array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    selection(a,n);
    printf("\nThe SORTED array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
        return 0;
}
