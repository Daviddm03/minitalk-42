/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-mo <ddias-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 19:42:17 by ddias-mo          #+#    #+#             */
/*   Updated: 2024/10/04 16:48:56 by ddias-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_manipulation(int signal)
{
	static int	bit;
	static int	i;
	static char	*str;
	char		*temp;

	if (!str)
		str = ft_calloc(1, 1);
	if (signal == SIGUSR1)
		i |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		temp = ft_strjoin(str, (char)i);
		str = temp;
		if (i == 0)
		{
			ft_printf("%s\n", str);
			free(str);
			str = NULL;
		}
		bit = 0;
		i = 0;
	}
}

int	main(int ac, char **av)
{
	int	pid;

	(void)av;
	if (ac != 1)
	{
		ft_printf("\033[91mError: wrong format.\033[0m\n]]");
		ft_printf("\033[33mTry: ./server\033[0m\n]]");
		return (0);
	}
	pid = getpid();
	ft_printf("\033[94mPID\033[0m \033[96m->\033[0m %d\n", pid);
	while (1)
	{
		signal(SIGUSR1, ft_manipulation);
		signal(SIGUSR2, ft_manipulation);
		pause ();
	}
	return (0);
}
