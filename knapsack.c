#include <stdio.h>

int main() {
    int i,j,n;
    float m,p[20],w[20],r[20],x[20],tp=0.0;
    printf("Enter the knapsack capacity: ");
    scanf("%f",&m);
    printf("Enter the no. of items: ");
    scanf("%d",&n);
    printf("Enter the profit and weight for each item respectively: ");
    for(i=0;i<n;i++) {
        scanf("%f%f",&p[i],&w[i]);
        r[i]=p[i]/w[i];
    }
    printf("Arranging the profit, weight and ratio in descending order:\n");
    for(i=0;i<(n-1);i++) {
        for(j=0;j<(n-i-1);j++) {
            if(r[j]<r[j+1]) {
                float temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;

                temp=w[j];
                w[j]=w[j+1];
                w[j+1]=temp;
                
                temp=r[j];
                r[j]=r[j+1];
                r[j+1]=temp;
            }
        }
    }
    printf("PROFIT\t\tWEIGHT\t\tRATIO\n");
    for(i=0;i<n;i++)
        printf("%f\t%f\t%f\n",p[i],w[i],r[i]);
    for(i=0;i<n;i++)
        x[i]=0.0;
    for(i=0;i<n;i++) {
        if(w[i]>m)
            break;
        else {
            x[i]=1.0;
            tp+=p[i];
            m-=w[i];            
        }
    }
    if(i<n) {
        x[i]=m/w[i];
        tp+=(x[i]*p[i]);
    }
    printf("PORTION TAKEN OF EACH ITEM:\n");
    for(i=0;i<n;i++)
        printf("ITEM %d: %f\t\t",i+1,x[i]);
    printf("\nMaximum Profit: %f",tp);
    return 0;
}