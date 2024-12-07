#include <stdio.h>

int
main ()
{
  int num, new_byte;
  unsigned char *ptr;

  printf ("Введите целое положительное число: ");
  scanf ("%d", &num);

  printf ("Введите значение изменённого третьего байта(0-255): ");
  scanf ("%d", &new_byte);

  ptr = (unsigned char *)&num;

  ptr[2] = new_byte;

  printf ("\nИзмененное число: %d\n", num);

  return 0;
}