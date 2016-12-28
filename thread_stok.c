#include<stdio.h>
#include<string.h>
#include<pthread.h>

char str[] = {"a:b:c:d:e:f:g:h:i:j:k:l:m:n:o:p:q:r:s:t"};
char i[] = {"1,2,3,4,5,6,7,8,9,0"};
int tokens;

void *threadfunc(void *arg)
{
    if(str)
    {
        strtok(str,":");
        tokens ++;
        //printf("tokens incremented\n");
        while(strtok(NULL,":"))
        {
            //printf("inside while in threadfunc1");
            tokens ++;
        }
        pthread_exit(1);
    }
}

void *threadfunc2(void *arg)
{
    if(i)
    {
        strtok(i,",");
        tokens ++;
        //printf("tokens incremented\n");
        while(strtok(NULL,","))
        {
            //printf("inside while in threadfunc2");
            tokens ++;
        }

        pthread_exit(1);
    }
}

int main()
{
    pthread_t td1,td2;
    pthread_create(&td1,NULL,threadfunc,NULL);
    pthread_create(&td2,NULL,threadfunc2,NULL);
    pthread_join(td1,NULL);
    pthread_join(td2,NULL);

    printf("val of token is %d\n", tokens);
    return 0;
}
