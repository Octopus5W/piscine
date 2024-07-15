/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:35:29 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/19 18:01:52 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		cpt1;
	int		cpt2;
	char	*pointer;

	cpt1 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[cpt1] != '\0')
	{
		if (str[cpt1] == to_find[0])
		{
			cpt2 = 0;
			pointer = &str[cpt1];
			while (to_find[cpt2] == str[cpt1 + cpt2] && \
					to_find[cpt2] && str[cpt1 + cpt2])
			{
				cpt2++;
			}
			if (to_find[cpt2] == '\0')
				return (pointer);
		}
		cpt1++;
	}
	return (0);
}
/*
int main ()
{
    char *a = "hel";
    char *b = "el";
    char *c = ft_strstr(a, b);   
   	return 0;
}*/
