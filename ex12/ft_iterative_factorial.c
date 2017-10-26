/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamerlin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 17:11:01 by jamerlin          #+#    #+#             */
/*   Updated: 2016/11/03 11:35:27 by jamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	i = nb;
	if (nb >= 2 && nb <= 12)
	{
		while (i > 1)
		{
			nb = nb * (i - 1);
			i--;
		}
	}
	else if (i == 0 || i == 1)
		return (1);
	else
		return (0);
	return (nb);
}
