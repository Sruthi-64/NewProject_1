#include<stdio.h>
int j=0;
float average(int r,int c,float (*p)[c])
{
    int i,j;
    float sum,avg;
    while(j<c)
    {
        sum=0.0,avg=0.0;
        for(i=0;i<r;i++)
        {
            sum=sum+*(*(p+i)+j);
        }

        avg=sum/r;

        j++;
        return avg;
    }
}
int main()
{
    int r,c;
    float*ptr;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);
    float array[r][c];
    int (*p)[c],i,j;
    p=array;
    ptr = (float*) malloc(c * sizeof(float));
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%f",&array[i][j]);
        }
    }
    printf("\nGiven array:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%.1f\t",array[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<c;i++)
    {
        *(ptr+i)=average(r,c,p);

        printf("Average of column %d is %.1f\n",i+1,*(ptr+i));
    }

}
