#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,i;
  long int eredmeny = 1;
  printf("\n K�rem a hatv�ny alapot �s a kitev�t vessz�vel elv�lasztva: ");
  scanf("%d, %d",&a, &b);
  for(i=1;i<b;i++)
  {
      eredmeny *= a;
  }
  printf("\n%d %d. hatvanya: %ld\n", a, b, eredmeny);

return 0;
}
