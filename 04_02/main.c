#include <stdio.h>
#include <stdlib.h>

int main()
{
    int evszam = 0;
    printf("Kerem az evszamot: \n");
    scanf("%d",&evszam);


if ( ((evszam % 4 == 0) && (evszam % 100 !=0)) || (evszam % 400==0) )
    printf("Sz�ko�v \n");
else
    printf("Nem szokoev \n");
}
