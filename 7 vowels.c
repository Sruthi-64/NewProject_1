#include<Stdio.h>
void main()
{
    char str[100];
    printf("Enter a string:");
    gets(str);
    char *ptr=str;
    removevowels(ptr);
    printf("The string after removing vowels is:");
    puts(str);
}
void removevowels(char *ptr)
{
    int i,j;
    for(i=0;*(ptr+i)!='\0';i++)
        {
        if(*(ptr+i)=='a' || *(ptr+i)=='e' || *(ptr+i)=='i' || *(ptr+i)=='o' || *(ptr+i)=='u'
           ||*(ptr+i)=='A' || *(ptr+i)=='E' || *(ptr+i)=='I' || *(ptr+i)=='O' || *(ptr+i)=='U')
        {
            for(j=i;*(ptr+j)!='\0';j++)
            {
                *(ptr+j)=*(ptr+(j+1));
            }

        }
    }
}
