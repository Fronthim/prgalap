#include <stdio.h>
#include <stdlib.h>

int main( )
{
    int alsohatar, felsohatar, i, j;
    int_beolvas(&alsohatar);


    do {
            int_beolvas(&felsohatar);

        } while (felsohatar < alsohatar);
    for (i=alsohatar; i<=felsohatar; i++){
        for (j=i+1;j<=felsohatar;j++)
            {
                if (baratsagos(i, j)==1)
                    printf("(%d,%d)\n", i, j);
            }
    }
return 0;
}
