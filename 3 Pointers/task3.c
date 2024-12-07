#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main ()
{
  int arr[10];
  int *ptr = arr;

  srand (time (NULL));

  for (int i = 0; i < 10; i++)
    {
      *(ptr + i) = rand () % 100;
    }

  printf ("Элементы массива: \n");

  for (int i = 0; i < 10; i++)
    {
      printf ("%d ", *(ptr + i));
    }

  printf ("\n");

  return 0;
}
