#include <stdio.h>
#include <string.h>
int Palindrome( char* str, int start, int end)
{
	while (start < end)
    {
		if (str[start] != str[end])
        {
            return 0;
        }
		start=start+1;
		end=end-1;
	}
	return 1;
}
int substring(char* str)
{
	int i,j;
	char longest[1000] = "";
	int n = strlen(str);
	int maxLength = 1;
	for (i = 0; i < n; i++)
    {
		for (j = i; j < n; j++)
        {
			if (Palindrome(str, i, j))
            {
				int length = j - i + 1;
				if (length > maxLength)
                {
					maxLength = length;
					strncpy(longest, str + i, maxLength);
				}
			}
		}
    }
    if(maxLength==1)
    {
        printf("No palindrome\n");
    }
    else
    {
        printf("Longest palindrome substring is: %s\n",longest);
    }

	return maxLength;
}
int main()
{
    char s[1000];
    printf("Enter a string:");
    scanf("%s",&s);
    //char *str=s;
	printf("Length of the longest palindrome substring: %d\n", substring(s));
	return 0;
}
