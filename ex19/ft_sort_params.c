/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamerlin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:26:35 by jamerlin          #+#    #+#             */
/*   Updated: 2016/11/04 15:33:42 by jamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*buff;

	i = argc - 1;
	j = 1;
	k = 0;
	while (i >= 1 && argc >= 2)
	{
		while (++j <= i)
		{
			if (ft_strcmp(argv[j - 1], argv[j]) > 0)
			{
				buff = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = buff;
			}
		}
		j = 1;
		i--;
	}
	while (++k < argc)
		ft_putstr(argv[k]);
	return (0);
}
