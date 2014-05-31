/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 12:05:24 by exam              #+#    #+#             */
/*   Updated: 2014/05/31 16:03:59 by thoraffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DEBUG
*/

#include <stdio.h>

/*
** !DEBUG
*/

void				sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				swap;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] <= tab[i + 1])
			i++;
		else
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
	}
}

 /*
 ** DEBUG
 */
 
int			main(void)
{
	int		tab[2];
	int		i;

	i = -1;
	tab[0] = 42;
	tab[1] = 21;
	printf("Before:\n");
	while (++i != 2)
		printf("tab[%d]: %d\n", i, tab[i]);
	i = -1;
	sort_int_tab(tab, 2);
	printf("\nAfter:\n");
	while (++i != 2)
		printf("tab[%d]: %d\n", i, tab[i]);
	return (0);
}

/*
** !DEBUG
*/
