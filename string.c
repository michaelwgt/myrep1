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

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));

   return 0;
}
