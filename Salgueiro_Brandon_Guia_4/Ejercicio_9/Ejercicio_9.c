    #include<stdio.h>
#include <stdlib.h>

int main()
{
float sueldo=0,horas=0;
char cate;
printf("Ingrese su categoria\n");
scanf("%c",&cate);
printf("Ingrese las horas trabajadas\n");
scanf("%f",&horas);

if (cate=='a'){
sueldo=horas*200;
}
else if (cate=='b')
    {
        sueldo=horas*180;
    }
    else if (cate=='c')
    {
        sueldo=horas*150;
    }
    else
        sueldo=0;

printf("Su sueldo es %f\n", sueldo);
return 0;
}

