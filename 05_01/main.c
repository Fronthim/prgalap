#include <stdio.h>
#include <stdlib.h>         // rand(), srand() f�ggv�nyh�v�shoz
#include <time.h>           // time() f�ggv�nyh�v�shoz
#define MERET 5
int main()
{
     int i, j;
     int lotto[MERET], jelolt;

     srand(time(0));            // v�letlensz�m gener�tor inicializ�l�sa

     for (i=0; i<MERET; )
        {
        jelolt = rand()%90+1;      // rand()%x : [0...x) intervallumb�l ad vissza egy eg�sz sz�mot

         for(j=0; j<i; j++)
            {
            if (lotto[j] == jelolt)    // ism�tl�d�s elker�l�se
                break;
            }

         if (j==i)
            {
            lotto[i] = jelolt;
            i++;
            }
         }
                                    //t�mb ki�r�sa
     for(i=0; i<MERET; i++) {
     printf("%d. sz�m: %d\n", i+1, lotto[i]);
     }
     return 0;
}
