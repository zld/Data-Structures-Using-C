#include <stdio.h>
int main()
{
  char name[80];
  int i = 0;
  printf("Enter string: ");
  gets(name);
  while(name[i] != '\0')
  i++;
  printf("\nThe length of the string is %d", i);
  return 1;
}
