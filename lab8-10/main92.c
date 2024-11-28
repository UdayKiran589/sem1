#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements :");
    scanf("%d", &n);
    int a[n];
    int *P = a;
    printf("enter the elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", P + i);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
        {
            a[i]=a[j]+a[i];
            a[j]=a[i]-a[j];
            a[i]=a[i]-a[j];
        }
        }
    }
    printf("the greatest entered element=%d \n", a[0]);
    printf("the least entered element=%d", a[n-1]);
}
