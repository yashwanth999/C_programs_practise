#include<stdio.h>

int mystrcmp(const char *s1,const char*s2)
{
    while(*s1==*s2)
    {
        if(*s1=='\0')
        {
            break;
        }

        s1++;
        s2++;
    }
    return(*s1-*s2);
}

int main()
{
    int result;
    char *s1="hello";
    char *s2="hello";

    result =mystrcmp(s1,s2);

    if(result<0)
    {
        printf("strings are less \n");
    } else if(result==0){
        printf("strings are equal \n");
    }else if(result >1){

        printf("strings are greater\n");
    }

    return 0;
}
