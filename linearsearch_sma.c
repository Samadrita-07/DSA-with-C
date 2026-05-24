#include <stdio.h>

int main() 
{
    int n,i,a[20],key,flag=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elememts of the array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    /*printf("The array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);*/
    printf("Enter an element to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
	{
        if(key==a[i])
		{
            flag++;
            break;
        }
    }
    if(flag!=0)
        printf("%d found at index %d",key,i);
    else
        printf("%d not found!",key);
    return 0;
}
