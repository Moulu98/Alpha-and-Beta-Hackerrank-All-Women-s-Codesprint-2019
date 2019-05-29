#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    long int i,j,n,a[100002],count[100002]={0};
    long int first,second;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        count[a[i]]++;
    }
    first = second = 0;
    for (i = 0; i < n; i++)
    {
        if(a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if(a[i] > second && a[i] < first)
        {
            second = a[i];
        }
        else if(a[i]==first && a[i]==second)
        {
            second=0;
        }
    }
    if(n!=1)
    {
        printf("%ld", second);
    }
    else 
    {
        printf("0");
    }
        
    return 0;
}

