#include<stdio.h>
#include <stdlib.h>

int main()
{
int r1=0,r2=0,r3=0,r4=0,r5=0,rt=0;
printf("Ingrese el valor de las 5 resistencias en serie\n");
scanf("%d %d %d %d %d",&r1,&r2,&r3,&r4,&r5);
rt=r1+r2+r3+r4+r5;
printf("Las 5 resistencia son: \nResistencia 1:\t%d\nResistencia 2:\t%d\nResistencia 3:\t%d\nResistencia 4:\t%d\nResistencia 5:\t%d",r1,r2,r3,r4,r5);
printf("\nLa resistencia total es: %d", rt);
return 0;
}
