#include <stdio.h>
#include <string.h>

#define MAX_AB 100

struct abonent
{
  char name[10];
  char second_name[10];
  char tel[10];
};

int
main ()
{
  struct abonent phonebook[MAX_AB];
  int count_ab = 0;
  int choice;

  while (1)
    {
      printf ("\nМеню:\n");
      printf ("1) Добавить абонента\n");
      printf ("2) Удалить абонента\n");
      printf ("3) Поиск абонентов по имени\n");
      printf ("4) Вывод всех записей\n");
      printf ("5) Выход\n");
      printf ("\n");

      printf ("Введите номер пункта: ");
      scanf ("%d", &choice);
      getchar ();

      switch (choice)
        {
        case 1:
          if (count_ab < MAX_AB)
            {
              printf ("\nВведите имя абонента: ");
              scanf ("%s", phonebook[count_ab].name);
              printf ("Введите фамилию абонента: ");
              scanf ("%s", phonebook[count_ab].second_name);
              printf ("Введите телефон абонента: ");
              scanf ("%s", phonebook[count_ab].tel);
              count_ab++;
            }
          else
            {
              printf ("\nСправочник полный, нельзя добавить больше абонентов.\n");
            }
          break;
        case 2:
          if (count_ab == 0)
            {
              printf ("\nСправочник пуст, нечего удалять.\n");
              break;
            }
          char name_to_delete[10];
          printf ("Введите имя абонента для удаления: ");
          scanf ("%s", name_to_delete);

          int found = 0;
          for (int i = 0; i < count_ab; i++)
            {
              if (strcmp (phonebook[i].name, name_to_delete) == 0)
                {
                  strcpy (phonebook[i].name, "0");
                  strcpy (phonebook[i].second_name, "0");
                  strcpy (phonebook[i].tel, "0");

                  // Сдвиг абонентов
                  // for (int j = i; j < count_ab - 1; j++)
                  //   {
                  //     phonebook[j] = phonebook[j + 1];
                  //   }
                  // count_ab--;

                  found = 1;
                  printf ("Абонент %s удален.\n", name_to_delete);
                  break;
                }
            }
          if (!found)
            {
              printf ("Абонент с таким именем не найден.\n");
            }
          break;
        case 3:
          if (count_ab == 0)
            {
              printf ("Справочник пуст.\n");
              break;
            }
          char search_name[10];
          printf ("Введите имя для поиска: ");
          scanf ("%s", search_name);

          found = 0;
          for (int i = 0; i < count_ab; i++)
            {
              if (strcmp (phonebook[i].name, search_name) == 0)
                {
                  printf ("Найден абонент: %s %s, Телефон: %s\n", phonebook[i].name, phonebook[i].second_name, phonebook[i].tel);
                  found = 1;
                }
            }
          if (!found)
            {
              printf ("Абонент с таким именем не найден.\n");
            }
          break;
        case 4:
          if (count_ab == 0)
            {
              printf ("\nСправочник пуст.\n");
            }
          else
            {
              printf ("\nСписок абонентов:\n");
              for (int i = 0; i < count_ab; i++)
                {
                  printf ("%s %s, Телефон: %s\n", phonebook[i].name, phonebook[i].second_name, phonebook[i].tel);
                }
            }
          break;
        case 5:
          return 0;
        default:
          printf ("\nНеверный выбор, попробуйте снова.\n");
        }
    }

  return 0;
}