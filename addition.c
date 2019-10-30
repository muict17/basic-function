#include <stdio.h>
int add(int,int);
int miun(int,int);
int mul(int,int);
int div(int,int);

int add(int a, int b){
  int c = a + b;
  return c;
}
int miun(int a,int b){
  int  c = a-b;
  return c;
}
int mul(int a,int b){
  int c=a*b;
  return c;
}
int div(int a,int b){
  int c=a/b;
  return c;
}
int main()
{
  int a,b;
  char x;
  scanf("%d %c %d",&a,&x,&b);

  if(x=='+') printf("%d",add(a,b));
  else if(x=='-') printf("%d",miun(a,b));
  else if(x=='*') printf("%d",mul(a,b));
  else if(x=='/') printf("%d",div(a,b));
  printf("\n");
  return 0;
}
