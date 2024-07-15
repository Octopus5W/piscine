/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:45:14 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/28 22:14:28 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i])
	{
		while (base[i])
		{
			j = i + 1;
			if (!base[1] || base[i] == '+' || base[i] == '-' || base[i] == ' ')
				return (0);
			while (base[j])
			{
				if (base[i] == base[j])
					return (0);
				j++;
			}
			i++;
		}
	}
	return (i);
}

int	ft_strstr(char *str, char *to_find)
{
	int		cpt1;
	int		cpt2;

	cpt1 = 0;
	if (to_find[0] == '\0')
		return (-1);
	while (str[cpt1] != '\0')
	{
		if (str[cpt1] == to_find[0])
		{
			cpt2 = 0;
			while (to_find[cpt2] == str[cpt1 + cpt2] && \
					to_find[cpt2] && str[cpt1 + cpt2])
			{
				cpt2++;
			}
			if (to_find[cpt2] == '\0')
				return (cpt1);
		}
		cpt1++;
	}
	return (-1);
}

char	*ft_get_str_base(char *base, char str, int i)
{
	int 	count;
	char	*nb_char;

	count = 0;
	printf("test %d", ft_strstr(base, str[i]));
	if (ft_strstr(base, str[i]) == -1)
	{
		return (0);
	}
	while (str[i] && ft_strstr(base, str[i]) != -1)
	{
		nb_char[count] = str[i];
		count++;
		i++;
	}
	printf("str %s \n", str);
	return (nb_char);
}

int	ft_char_to_int_base(char *str, char *base, char base_lenght)
{
	int	lenght;
	int nb;
	int power;
	int total;

	lenght = 0;
	total = 0;
	printf("base %d \n", base_lenght);
	while (str[lenght + 1])
		lenght++;
	while (lenght >= 0)
	{
		power = lenght;
		printf("power %d \n", power);
		nb = base_lenght;
		while (power > 1)
		{
			nb *= base_lenght;
			power--;
		}
		if (lenght == 0)
			nb = 1;
		printf("nb %d \n", nb);
		total = total + (nb * ft_strstr(base, str[lenght]));
		printf("toal %d \n", total);
		lenght--;
	}
	return (total);
}

int ft_atoi_base(char *str, char *base)
{
	int	i;
	int nb;
	int	sign;
	char	*nb_char;

	nb = 0;
	i = 0;
	sign = 1;
	if (!ft_check_base(base))
		return (0);
	while (str[i] >= 9 && str[i] <= 13 && str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign =  -1;
		i++;
	}
	if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	nb_char = ft_get_str_base(base, str, i);
	i = 0;
//	while (nb_char[i])
//		i++;
	nb = ft_char_to_int_base(str, base, i);
	return (nb * sign);
}

int main()
{
    int nb = ft_atoi_base("    -fffJ", "0123456789abcdef");
	printf("%d", nb);
    return 0;
}*/
