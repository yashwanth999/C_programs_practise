#include<stdio.h>

char* mystrcat(char* dest,char *src)
{
    int i,j;
    for(i=0;dest[i]!='\0';i++)
       ;
        for(j=0;src[j]!='\0';j++)
        {
            dest[i+j] = src[j];
        }
    //dest[i+j] = '\0';
    return dest;
}

int main()
{
    char *src = "kumar";
    char dest[100] = "yashwanth ";
    char *res=mystrcat(dest,src);
    printf("final string is %s\n",res);

    return 0;
}
