/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:52:05 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/19 20:54:05 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cpt;

	cpt = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0' && cpt < n - 1)
	{
		s1++;
		s2++;
		cpt++;
	}
	return (*s1 - *s2);
}
/*
int main ()
{
	char a[] = "loll";
	char b[] = "lol";
	int c = ft_strncmp(a, b, 4);
	return 0;
}*/
