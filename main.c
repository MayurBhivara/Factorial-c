#include <stdio.h>
#include <stdlib.h>

int factorial(int a)
{
  int b=1, i=0;
  for(i=1;i<=a;i++){
  b=b*i;
  }
 return b;

}
int main(){
    int c, d;
    printf("enter the number for it's factorial:");
    scanf("%d",&c);
    d=factorial(c);
    printf("factorial of number is %d",d);
 return 0;
}
