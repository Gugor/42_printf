/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:33:31 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/24 15:28:04 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int main(void)
{
	//Test 3: percent is not correct
	printf("........................................................\n");
	int t3_num = 2;
	char *t3_description = "flag is a incorrect flag";
	printf("\33[1;34mTest %i : %s\33[1;0m\n ",t3_num, t3_description);	
	char t3_percent	= '%';
	char t3_flag		= 'j';
	int t3_condition = ft_is_strformat(t3_percent, t3_flag);
	printf("%c%c (is:%i)\n", t3_percent, t3_flag, t3_condition == 1);
	//Test 2: flag is not correct
	printf("........................................................\n");
	int t2_num = 2;
	char *t2_description = "flag is a incorrect flag";
	printf("\33[1;34mTest %i : %s\33[1;0m\n ",t2_num, t2_description);	
	char t2_percent	= '%';
	char t2_flag		= 'j';
	int t2_condition = ft_is_strformat(t2_percent, t2_flag);
	printf("%c%c (is:%i)\n", t2_percent, t2_flag, t2_condition == 1);
	//Test1: ft_is_format
	printf("........................................................\n");
	int t1_num = 1;
	char *t1_description = "try \'c\' flag";
	printf("\33[1;34mTest %i : %s\33[1;0m\n ",t1_num, t1_description);	
	char t1_percent	= '%';
	char t1_flag		= 'c';
	int t1_condition = ft_is_strformat(t1_percent, t1_flag);
	printf("%c%c (is:%i)\n", t1_percent, t1_flag, t1_condition == 1);
}
