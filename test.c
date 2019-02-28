/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 09:48:55 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/28 12:27:17 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashcode.h"

int main(int argc, char **argv)
{
	int fd;
	char *temp = "";
	char **s_array;
	char buff[BUFF_SIZE + 1];

	if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	while (read(fd, buff, BUFF_SIZE))
	{
		temp = ft_strjoin(temp, buff);
	}
	printf("temp[0]: |%c|\n", temp[0]);
	s_array = ft_strsplit(temp, '\n');
	printf("s_array[0]: |%s|\n", s_array[0]);
	return (0);
}
