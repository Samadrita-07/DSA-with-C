// MAX, MIN USING DIVIDE AND CONQUER METHOD

#include<stdio.h>

int max, min;

void max_min(int a[], int lb, int ub) {
    if(lb==ub)
        max=min=a[lb];
    else if(lb==(ub-1)) {
        if(a[lb]<a[ub]) {
            min=a[lb];
            max=a[ub];
        }
        else {
            min=a[ub];
            max=a[lb];
        }
    }
    else {
        int mid=(lb+ub)/2;
        max_min(a,lb,mid);
        int max1=max;
        int min1=min;
        max_min(a,mid+1,ub);
        int max2=max;
        int min2=min;
        if(max1>max2)
            max=max1;
        else
            max=max2;
        if(min1<min2)
            min=min1;
        else
            min=min2;
    }
}

int main() {
    int n,i,a[20];
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max_min(a,0,n-1);
    printf("Maximum element is %d",max);
    printf("\nMinimum element is %d",min);
    return 0;
}
