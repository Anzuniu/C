/* Duplicates a dynamic string.*/

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