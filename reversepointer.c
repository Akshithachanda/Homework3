#include<stdio.h>
#include<string.h>
 
int string_length(char*);
void reverse(char*);
 
int main() 
{
   char string[100];
 
   printf("Enter a string\n");
   gets(string);
 
   reverse(string);
 
   printf("Reverse of entered string is %s.\n", string);
 
   return 0;
}
 
void reverse(char *str) 
{
   int length, c;
   char *end, temp;
 
   length = strlen(str);
   end= str;

  for (c = 0; c < length - 1; c++)
      end++;

   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *str;
      *str = temp;
 
      str++;
      end--;
   }
}
 
int string_length(char *str)
{
   int c = 0;
 
   while( *(str + c) != '\0' )
      c++;
 
   return c;
}