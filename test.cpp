#include<stdio.h>

int main(int argc,char*argv[]){

  int num;
  int xnum=0;
  int ynum=0;
  scanf("%d",&num);
  while(num){
    xnum=xnum+num%10;
    num=num/10;
    ynum=ynum+num%10;
    num=num/10;
  }
  printf("%d",xnum-ynum);


return 0;

}
