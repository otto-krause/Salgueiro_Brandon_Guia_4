#include<stdio.h>
#include <stdlib.h>

int main()
{
float Pre=0,Su=0,Fu=0;
printf("Ingrese la Superficie\n");
scanf("%f",&Su);
printf("Ingrese la Fuerza\n");
scanf("%f",&Fu);
Pre=Fu/Su;
printf("La presion es %f\n",Pre);
return 0;
}
