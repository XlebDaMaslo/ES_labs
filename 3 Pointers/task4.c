#include <stdio.h>
#include <string.h>

int
main ()
{
  char str[128], substr[128];
  char *ptr;

  printf ("Введите строку: ");
  fgets (str, sizeof (str), stdin);

  str[strcspn (str, "\n")] = '\0';

  printf ("Введите подстроку: ");
  fgets (substr, sizeof (substr), stdin);

  substr[strcspn (substr, "\n")] = '\0';

  ptr = strstr (str, substr);

  if (ptr != NULL)
    {
      printf ("\nУказатель: %p\n", ptr);
    }
  else
    {
      printf ("\nУказатель: NULL\n");
    }

  return 0;
}
