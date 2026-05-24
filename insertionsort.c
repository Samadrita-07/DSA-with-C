#include<stdio.h>

void insertion(int a[], int n) {
    int i,j,temp;
    for(i=1;i<n;i++) {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
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
    insertion(a,n);
    printf("\nThe SORTED array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
