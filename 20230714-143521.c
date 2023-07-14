#include<stdio.h>

int main()
{
int n;

    while(n!=520)
    {
    printf("请输入密码：");
   scanf("%d",&n);
    if(n!=520)
    printf("出错了\n");
    else
    printf("恭喜\n");
    
  
   }
    return 0;
}