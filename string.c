#include <stdio.h>

#newly added
size_t my_strlen(char *s)
{
   #todo 2
   char *p = s;

   while (*p)
      ++p;
	#for new test branch
   return (p - s);
}

size_t my_strlen2(char *s)
{
   #todo 2
   char *p = s;

   while (*p)
      ++p;
	#for new test branch
   return (p - s);
}

int main(void)
{
   int i;
   #for new test branch 2
	printf("string lenght1 of %s = %lu\n", s[i], my_strlen(s[i]));
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };
printf("string lenght2 of %s = %lu\n", s[i], my_strlen(s[i]));
   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));

   return 0;
}
