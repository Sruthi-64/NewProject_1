#include<stdio.h>
#include<stdlib.h>
void print(int n,int* p)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\t%d",*(p+i));
    }
}
int* merge(int n1,int n2,int* p1,int* p2)
{
    int i,j=0;
    int* p3;
    p3=(int*)malloc((n1+n2)*sizeof(int));
    for(i=0;i<n1;i++)
    {
        *(p3+i)=*(p1+i);
    }
    for(i=n1;i<(n1+n2);i++)
    {
        *(p3+i)=*(p2+j);
        j++;
    }
    printf("Merged array:\n");
    print((n1+n2),p3);
    for(i=0;i<(n1+n2);i++)
    {
        for(j=0;j<(n1+n2-1);j++)
        {
            int a=*(p3+j);
            int b=*(p3+(j+1));
            if(a>b)
               {
                   *(p3+j)=b;
                   *(p3+j+1)=a;
               }
        }
    }
    free(p1);
    free(p2);
    return p3;
}
int main()
{
    int i,n1,n2,*p1,*p2;
    printf("Enter no of elements of 1st array:");
    scanf("%d",&n1);
    printf("Enter no of elements of 2nd array:");
    scanf("%d",&n2);
    p1=(int*)malloc(n1*sizeof(int));
    p2=(int*)malloc(n2*sizeof(int));
    printf("Enter elements of 1st array:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",(p1+i));
    }
    printf("Enter elements of 2nd array:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",(p2+i));
    }
    int* p3=merge(n1,n2,p1,p2);
    printf("\nMerged sorted array:\n");
    print((n1+n2),p3);
}
