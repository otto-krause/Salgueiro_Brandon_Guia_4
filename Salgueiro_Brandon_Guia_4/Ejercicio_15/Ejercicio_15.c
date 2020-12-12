#include<stdio.h>
#include <stdlib.h>

int main()
{
int num1=0,num2=0,num3=0;
printf("Ingresa 3 numeros\n");
scanf("%d %d %d",&num1,&num2,&num3);
if (num1<num2&&num1<num3&&num2<num3)
{
printf("Ascendente\n");
}
return 0;
}
