/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:45:14 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/20 15:35:11 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	pri_check(char *str, int *sign, int *i)
{
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == ' ')
		*i = *i + 1;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			*sign *= -1;
		*i = *i + 1;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	return_nb;

	return_nb = 0;
	sign = 1;
	i = 0;
	pri_check(str, &sign, &i);
	while (str[i] <= '9' && str[i] >= '0')
	{
		return_nb = return_nb * 10 + str[i] - 48;
		i++;
		if (str[i] > '9' || str[i] < '0')
		{
			return_nb *= sign;
			return (return_nb);
		}
	}
	return (0);
}
/*
int main()
{
    int nb = ft_atoi("    --+--+44kl");
    return 0;
}*/
