/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 03:58:07 by shahn             #+#    #+#             */
/*   Updated: 2022/04/04 03:58:09 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liebe.h"

int	ft_display_file(char *filename)
{
	int		fdes;
	int		r;
	char	buffer[BUFFER_SIZE];

	fdes = open(filename, O_RDONLY);
	if (fdes == -1)
	{
		ft_putstr("ERROR, no file found!\n");
		close(fdes);
		return (1);
	}
	while (fdes)
	{
		r = read(fdes, buffer, BUFFER_SIZE);
		if (r == 0)
			break ;
		if (r == -1)
			ft_putstr("Failed to read file\n");
		buffer[r] = 0;
		ft_putstr(buffer);
	}
	close(fdes);
	return (0);
}
