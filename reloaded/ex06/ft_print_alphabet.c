/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:55:56 by shahn             #+#    #+#             */
/*   Updated: 2022/03/31 02:27:27 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	letra;
	int		i;

	i = 97;
	while (i <= 122)
	{
		letra = i;
		ft_putchar(letra);
		i++;
	}
}
