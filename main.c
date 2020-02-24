#include <stdio.h>
#include <stdlib.h>

int factorial(int a)
{
  int b=1, i=0;
  for(i=a;i>0;i--){
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
