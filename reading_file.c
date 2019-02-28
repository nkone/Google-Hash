/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:10:48 by mbutt             #+#    #+#             */
/*   Updated: 2019/02/28 12:36:36 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashcode.h"

int main (void)
{
	FILE *fPointer;

	fPointer = fopen("a_exmple.txt", "r");
	
	char singleLine[80];

	while(!feof(fPointer))
	{
		fgets(singleLine, 80, fPointer);
		puts(singleLine);
	}
	
	fclose(fPointer);

	return(0);
}
