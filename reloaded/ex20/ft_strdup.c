/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:47:06 by shahn             #+#    #+#             */
/*   Updated: 2022/03/31 02:33:29 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*result;

	len = 0;
	while (src[len])
		len++;
	result = malloc (sizeof(char) * len + 1);
	len = 0;
	while (src[len] != '\0')
	{
		result[len] = src[len];
		len++;
	}
	result[len] = '\0';
	return (result);
}
