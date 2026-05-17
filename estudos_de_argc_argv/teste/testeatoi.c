// #include <unistd.h>
// int ft_strlen(char *str)
// {
//     int i = 0;
//     while (str[i])
//         i++;
//     return (i);
// }
// int valid_base(char *base)
// {
//     int i;
//     int j;
//     if (ft_strlen(base) < 2)
//         return (0);
//     i = 0;
//     while (base[i])
//     {
//         if (base[i] == '+' || base[i] == '-')
//             return (0);
//         j = i + 1;
//         while (base[j])
//         {
//             if (base[i] == base[j])
//                 return (0);
//             j++;
//         }
//         i++;
//     }
//     return (1);
// }
// void ft_putnbr_base(int nbr, char *base)
// {
//     long n;
//     int len;
//     if (!valid_base(base))
//         return ;
//     len = ft_strlen(base);
//     n = nbr;
//     if (n < 0)
//     {
//         write(1, "-", 1);
//         n = -n;
//     }
//     if (n >= len)
//         ft_putnbr_base(n / len, base);
//     write(1, &base[n % len], 1);
// }
