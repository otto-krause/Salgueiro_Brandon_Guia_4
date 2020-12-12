    #include <stdio.h>
#include <stdlib.h>

    int main()
{
    int edad, tiempo, psd, precio, pci;

    printf("ingrese la cantidad de horas\t");
    scanf("%d",&tiempo);
    printf("ingrese la edad\t");
    scanf("%d",&edad);
    psd=tiempo*50;

    if (tiempo<20)
        printf("no apto para promoción");
    else if (edad>70)
    {
        precio=(psd/2);
        pci=precio+(precio/3);
        printf("El importe de impuestos es : %d\n",pci);
        printf(" Y el sin impuestos es : %d\n",precio);
        }
    else if (edad>60)
    {
        precio=psd-(psd/5);
        pci=precio+(precio/3);
        printf("El importe sin impuesto es : %d\n",precio);
        printf(" y con impuestos es : %d\n",pci);
    }
    else
    {
        precio=psd;
        pci=precio+(precio/3);
        printf("el importe sin impuesto es : %d\n",precio);
        printf(" y con impuesto es : %d\n",pci);

    }

return 0;

}
