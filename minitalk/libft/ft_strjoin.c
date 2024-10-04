/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-mo <ddias-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 22:00:39 by ddias-mo          #+#    #+#             */
/*   Updated: 2024/10/04 16:11:55 by ddias-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char c)
{
	int		size;
	int		j;
	char	*str;

	if (s1)
		size = ft_strlen(s1);
	else
		size = 0;
	str = (char *)malloc(sizeof(char) * (size + 2));
	if (str == NULL)
		return (NULL);
	j = 0;
	while (s1 && s1[j])
	{
		str[j] = s1[j];
		j++;
	}
	str[j++] = c;
	str[j] = '\0';
	free(s1);
	return (str);
}
