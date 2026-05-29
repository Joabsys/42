
# include "libft.h"

static char to_upper(unsigned int i, char c)
{
    (void)i;
    if( c>= 97 && c <= 122)
        c += -32;
    return (c);
}
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
//Ela serve para criar uma nova string modificando cada caractere de uma string original
{
    unsigned int    i;
    unsigned int    j;
    char            *str;
  
    j = 0;
    i = 0;
    
     while(s[j]!='\0')
        j++;
    str =  malloc(sizeof(char) * (j + 1));
    if (!s || !f || !str)
        return (NULL);
    i = 0;
    while (i < j)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i]= '\0';
    
    return (str);
}
#include <stdio.h>
int main(void)
{
    char name []= "joab";
    char *result;
    
    result = ft_strmapi(name,to_upper);
     unsigned int i;
    i = 0;
    while(result[i])
    {
        printf("%c",result[i]);
        i++;
    }

}