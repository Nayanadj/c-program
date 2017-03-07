#include<stdio.h>

int add_num(int first, int second){
  return first + second;
}

int main()
{
int a,b,res;
printf("the value of a=");
scanf("%d",&a);
printf("the value of b=");
scanf("%d",&b);
printf("result=%d",add_num(a, b));
return 0;
}
