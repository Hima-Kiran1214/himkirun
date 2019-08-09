#include<stdio.h>
int main()
{
  int x,p,t=0,s;
  scanf("%d %d",&x,&p);
  whlile(x>0)
  {
    t=t+x;
    s=x*(p/100);
    x=x-s;
  }
  printf("%d/n",t);
  return 0;
}

