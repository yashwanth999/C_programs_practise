#include<stdio.h>
#include<string.h>

int main()
{
char *s ="abcdef";
int size = strlen(s);

    char s1[2];
    char s2[2];
    int i,j=(size/2),k=0;
    
    for(i=0;i<size/2;i++)
    {
        s1[i] = s[i];
    }

    for(j; j<=size; j++)
    {
        s2[k] = s[j];
	k++;
    }
printf("%s\n", s1);
printf("%s\n", s2);
}
