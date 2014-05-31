/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/01 10:10:23 by exam              #+#    #+#             */
/*   Updated: 2014/05/31 16:52:57 by thoraffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_union(char *str)
{
	int			i;
	int			k;
	int			l;
	static int	j = -1;
	static char	tab[500];

	i = -1;
	l = 0;
	while (str[++i] != '\0')
	{
		k = 0;
		while (k <= j)
		{
			if (str[i] != tab[k])
				k++;
			else
			{
				l = 1;
				break ;
			}
		}
		if (l == 0)
		{
			write(1, &str[i], 1);
			tab[++j] = str[i];
		}
		else
			l = 0;
	}
}

int				main(int argc, char **argv)
{
	if (argc != 3)
		return (write(1, "\n", 1) - 1);
	ft_union(argv[1]);
	ft_union(argv[2]);
	return (write(1, "\n", 1) - 1);
}
