/* The strdup function in C is used to duplicate a string. Its typical declaration is:

   char *strdup(const char *str);
   str: Pointer to the string to be duplicated.

   The function creates a duplicate of the string pointed to by str, allocating memory to store the copy.
   The new string will have exactly the same content as the original.
   strdup is commonly used when you need to work with a copy of a string without modifying the original, 
   or when you need to manipulate the string in some way without affecting the original.

   It is important to remember that memory allocated by strdup must be manually freed using the free function
   when it is no longer needed. */

   char *ft_strdup(const char *str)
   {
      char *cpy;
      size_t i;

      if (str == NULL)
         return NULL;
      
      while(str[i])
         i++;
      cpy = malloc(i + 1); //+1 por la terminación nula
      i = 0;
      while(str[i])
      {
         cpy[i] = str[i];
         i++;
      }
      return cpy;
   }

   int main()