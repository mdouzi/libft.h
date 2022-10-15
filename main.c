#include "libft.h"

int main()
{
   int i;
   char *s = "olol                     ";
   //char *rx = "    cld,cdlc,dlc, ";
   char **r = ft_split(s, ' ');
   i = 0;
   while(r[i])
   {
      puts(r[i]);
      i++;
   }
}
