#include<stdio.h>
int main()
{
int num,num1;
printf("Enter first number");
scanf("%d",&num);
printf("Enter the second number");
scanf("%d",&num1);
printf("LCM=%d",lcm(num,num1));
}
int lcm(int a, int b)
{
static int m=0;
m=m+b;
if(m%a==0 && m%b==0)
return m;
return lcm(a,b);
}
