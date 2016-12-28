#include<stdio.h>


int mystrlen(char* string)
{
    int l =0;

    for(l=0;*string!='\0';string ++)
    {

        l ++;
    }
    return(l);
}

int main()
{
    char* string = "india";
    int length = mystrlen(string);

    printf("length of string is %d\n",length);

    return 0;
}
