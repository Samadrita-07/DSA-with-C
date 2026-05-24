#include<stdio.h>

void bubble(int a[], int n) {
    int i,j,temp,flag=0;
    for(i=0;i<n-1;i++) {
        for(j=0;j<n-i-1;j++) {
            if(a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}

int main() {
    int a[10],n;
    printf("How many elements you want to enter? ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The UNSORTED array: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    bubble(a,n);
    printf("\nThe SORTED array: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
        return 0;
}
