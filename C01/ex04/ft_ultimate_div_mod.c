/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:26:07 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/13 15:56:29 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
int main(){
	int a; 
	int b; 
	
	a = 100;
	b = 10;
	
	ft_ultimate_div_mod(&a, &b);
	return 0;
}
*/
