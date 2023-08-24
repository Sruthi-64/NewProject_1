#include<stdio.h>
void rotate(int(*p)[100],int rows,int cols)
{
    int i,j,temp;
    for(i=0;i<rows;i++)
    {
        for(j=i+1;j<cols;j++)
        {
            temp=*(*(p+i)+j);
            *(*(p+i)+j)=*(*(p+j)+i);
            *(*(p+j)+i)=temp;
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols/2;j++)
        {
            temp=*(*(p+i)+j);
            *(*(p+i)+j)=*(*(p+i)+(cols-j-1));
            *(*(p+i)+(cols-j-1))=temp;
        }
    }
}

int main()
{
    int arr[100][100],i,j,rows,cols,*p=arr;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    printf("enter the number of columns:");
    scanf("%d",&cols);
    printf("enter the elements of the array:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Given array:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    rotate(p,rows,cols);
    printf("the rotated array is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
