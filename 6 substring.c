#include<stdio.h>
int largesub(int r,int c,int a[r][c])
{
    int i,j,s=0,m=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==1)
            {
                s=1;
                while(a[i][j+s]==1&& a[i+s][j]==1&& a[i+s][j+s]==1)
                    s++;
                if(s>m)
                    m=s;
            }
        }
    }
    return m;
}
int main(){
    int r,c,i,j;
    printf("Enter no.of rows:");
    scanf("%d",&r);
    printf("Enter no.of columns:");
    scanf("%d",&c);
    int array[r][c];
    printf("Enter the elements:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("Array:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",array[i][j]);
        }
        printf("\n");
    }
    int sub1=largesub(r,c,array);
    printf("Largest Square Submatrix:%d",sub1);
}
