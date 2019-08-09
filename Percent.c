#include<stdio.h>
int main()
{
  int p;
  long long int x;
  scanf("%lld%d",&x,&p);
  long long int t=x;
  while(x)
  {
    x=((x*100)-(x*p))/100;
    t+=x;
  }
  printf("%lld",t);
  return 0;
}
