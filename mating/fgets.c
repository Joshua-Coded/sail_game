#include <stdio.h>

int main()
{
  char name[40];

  printf("Enter your full name\t");
  fgets(name, sizeof(name), stdin);
  printf("Your full name is: %s\n", name);
  return 0;
  
}
