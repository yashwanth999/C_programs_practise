#include<stdio.h>
#include<stdlib.h>

char* mystrcpy(char *d,const char* s)
{

    int i=0;
    while(s[i]!='\0')
    {
        d[i]=s[i];
        i++;
    }
    d[i]='\0';
    return(d);

}


int main()
{
    char s[]="sucess";
    char *d;

    d= (char *)malloc(sizeof(char *));

    mystrcpy(d,s);

    printf("string after copy is ..........%s\n",d);
    return 0;
}
