#include <unistd.h>

int ft_check(char *str, char c,int k)
{
 int j;

 j = -1;
 while (++j < k)
  if (str[j] == c)
   return (0);
 return (1);
}

void ft_union(char *str1, char *str2)
{
 int i = -1;
 int j = -1;

 while (str1[++i])
  if (ft_check(str1, str1[i], i))
   write(1, &str1[i], 1);
 while (str2[++j])
  if (ft_check(str1, str2[j], i) && ft_check(str2, str2[j], j))
   write(1, &str2[j], 1);
}

int main(int argc, char **argv)
{
 if (argc == 3)
  ft_union(argv[1], argv[2]);
 write(1, "\n", 1);
 return (0);
}