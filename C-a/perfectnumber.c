#include <stdio.h>

int main()
{
   int n, m;
   scanf("%d", &m);
   for( n = 1 ; n <= m ; n++)
   {
      int fac , sum ;
      for( sum = 0 , fac = 1 ; fac < n ; fac++)  //求真因子和
         if( n % fac == 0 )
            sum += fac ;

      if( sum == n ) //真因子和与整数相等
      {
         printf("%d ",n);
      }
   }

   return 0;
}
