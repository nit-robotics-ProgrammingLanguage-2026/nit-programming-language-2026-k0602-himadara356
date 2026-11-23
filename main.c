#include <stdio.h>

int main(void)
{
    long n,g;
    long i;
    g = 0;
    scanf("%ld", &n);
    /* TODO*/
if  (n>=0)
    {
    for (i=1;i<=n;i+=2)
      g = g + i;//
    
    
    }
else
    {
     printf("NG");   
    };
if (n>=0)
    {
  printf("%ld", g);
    }
    return 0;
};
