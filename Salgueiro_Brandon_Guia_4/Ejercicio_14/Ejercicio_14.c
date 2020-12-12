#include<stdio.h>
#include <stdlib.h>

int main()
{
float cuent=0;
int hs=0,min=0,seg=0,uni=0;
printf("Ingrese hora, minuto y segundos\n");
scanf("%d %d %d",&hs,&min,&seg);
printf("Ingrese una unidad final\n");
scanf("%d",&uni);
if (uni==1)
{
cuent=seg+(hs*60*60)+(min*60);
printf("segundos=%f\n",cuent);
}
else if (uni==2)
    {
        cuent=min+(hs*60)+(seg/60);
        printf("minutos= %f\n",cuent);
    }
else if (uni==3)
    {
        cuent=hs+(min/60)+(seg/3600);
        printf("horas= %f\n",cuent);
    }
else
    printf("Unidad final invalida");

return 0;
}
