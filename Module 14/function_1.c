#include<stdio.h>

int sum(int x,int y)
{
    int sum=x+y;
    return sum;
}
int main()
{
    //int s=sum(10,20);
   // printf("%d",s);
   printf("%d\n",sum(10,20));
   printf("%d\n",sum(100,200));
    return 0;
    //return + parameter
}