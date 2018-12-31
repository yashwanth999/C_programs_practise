#include <stdio.h>

int main()
{
int n;
scanf("%d",&n);
 int i;
int a[n],b[n],num,c[n];

for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
{
    int c = 0,rem;
    num = a[i];
    
    while(num!=0)
    {
        rem = num&1;
        if(rem==1)
        c++;
        
        num = num>>1;
    }
    b[i] = c;
}

int large,pos,k=0,temp,j;
for( i=0;i<n;i++)
{
    large = b[i];
    pos = i;
    for(j=i+1;j<n;j++)
    {
        if(b[j]>=large)
        {
            large = b[j];
            pos = j;
        }
    }
    
    temp = b[i];
    b[i] = b[pos];
    b[pos] = temp;
    
    c[k++] = a[pos];
    
    temp = a[i];
    a[i] = a[pos];
    a[pos] = temp;
}

for(i=0;i<n;i++)
printf("\n %d",c[i]);
}

