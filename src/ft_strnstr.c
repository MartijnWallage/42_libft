/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallage <mwallage@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:07:26 by mwallage          #+#    #+#             */
/*   Updated: 2023/11/17 21:38:51 by mwallage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int	match(const char *big, const char *little, size_t len)
{
	while (len && *big == *little)
	{
		if (*big == '\0')
			return (1);
		big++;
		little++;
		len--;
	}
	return (*little == '\0');
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little == 0)
		return ((char *) big);
	while (len && *big)
	{
		if (match(big, little, len))
			return ((char *) big);
		big++;
		len--;
	}
	return (NULL);
}

char	*ft_grep(char **tab, char *word)
{
	if (!tab || !word)
		return (NULL);
	if (*word == 0)
		return (tab[0]);
	while (*tab)
	{
		if (match(*tab, word, ft_strlen(*tab)))
			return ((char *)*tab);
		tab++;
	}
	return (NULL);
}