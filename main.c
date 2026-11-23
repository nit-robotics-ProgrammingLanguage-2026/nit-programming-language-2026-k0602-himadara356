#include <stdio.h>

int main(void)
{
    long n,g;
    long i;
    g = 0;
    scanf("%ld", &n);
    /* TODO: n が負なら NG、そうでなければ 1+2+...+n を for 文で計算して表示 */
if  (n>=0)
    {
    for (i=1;i<=n;i++)
      g = g + loop;//
    
    
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
