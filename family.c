#include<stdio.h>
#include<string.h>

char family[][30] = {
		     "Joshua",
		     "Alana",
		     "MAry",
		     "Comfort",
		     "femi",
		     "Isaac",
		     "Hope",
		     "Irabor",
};

  void find_family(char search_for[])
  {

   int i;

   for(i = 0; i < 5; i++) {
     if(strstr(family[i], search_for))
       printf("Name of family: %i '%s'\n", i, family[i]);
	 }
  }

  int main()

  {
   char search_for[30];
   printf("Enter a family name:");
   fgets(search_for, 30, stdin);
   find_family(search_for);
   return 0;
  }
