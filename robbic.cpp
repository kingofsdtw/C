#include <stdio.h>
#include <stdlib.h>
int main (void)
{
        int a;//-----------------這裡造成錯誤的樣子...
      //  int x,y,z,x1,y1,z1,a;//------a放在裡面就沒問題，不懂為何冏
        //x=2;y=1;z=3;
        printf("type in the days rabbits live : ");
        scanf("%d",&a);
        printf("a == %d\n",a);
        printf("DEBUG\n");
//      for(i=0;i<=a;i++)
//      {
        //printf("a == %d\n",a);
        //x1=x;y1=y;z1=z;
        //x=z1;y=x1;z=z1+y1;//think the order
//      }
//printf("%d %d %d\n",x1,y1,z1);
//printf("%d %d %d\n",x ,y ,z );
//printf("after %d days, there are %d rabbits\n",n,x+y+z);
getchar();
return 0;
}
