/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   G_read.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 10:38:17 by jchiang-          #+#    #+#             */
/*   Updated: 2019/02/28 11:45:30 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashcode.h"

int		main(int argc, char **argv)
{
	FILE	*G;
	char	*str = NULL;
	size_t	len = 0;
	ssize_t	read;

	if (argc == 2)
	{
		if (!(G = fopen(argv[1], "r")))
		{
			perror("Error opening file");
			return (-1);
		}
		while ((read = getline(&str, &len, G)) != -1)
			data_input(char *str);
	}
	free(str);
	fclose(G);
	exit(EXIT_SUCCESS);
}		
