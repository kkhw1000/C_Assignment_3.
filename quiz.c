#include <stdio.h>

int main()
{
float x=1,S=0,sum1=1,sum2=0;
float C=0;


while(1)
{
sum1 += S;
printf("%f ÀÏ¶§%f- %f =%f\n",x,sum1,sum2, sum1-sum2);
x=x/2;
S=x*x;
C=sum1-sum2;
sum2=sum1;

if( C <= 0.000001) break;
}







return 0;
}