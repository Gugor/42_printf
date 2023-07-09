/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_writef.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:21:47 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/09 17:00:39 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

int main(void)
{
	//%c Tests
	printf("\n=====================================\n");
	printf("+++ Tests %%c                       \n");
	printf("=====================================\n\n");
	//Test1
	int t1_len = 0;
	int t1_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 1);
	t1_len = ft_printf("%c", 'n');
	printf("\n");
	t1_lenp = printf("%c", 'n');
	printf("\nLength ft: %i\nLength:    %i", t1_len, t1_lenp);
	printf("\n");
	printf("\n");
	//Test2
	int t2_len = 0;
	int t2_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 2);
	t2_len = ft_printf("This is a char %c", 'n');
	printf("\n");
	t2_lenp = printf("This is a char %c", 'n');
	printf("\nLength ft: %i\nLength:    %i", t2_len, t2_lenp);
	printf("\n");
	printf("\n");
	//Test3
	int t3_len = 0;
	int t3_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 3);
	t3_len = ft_printf("This is a char %c, and %c is also a char", 'n', 'f');
	printf("\n");
	t3_lenp = printf("This is a char %c, and %c is also a char", 'n', 'f');
	printf("\nLength ft: %i\nLength:    %i", t3_len, t3_lenp);
	printf("\n");
	printf("\n");
	//Test4
	int t4_len = 0;
	int t4_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 4);
	t4_len = ft_printf("This is a char \'%c\', and \'%c\' is also a char", 'n', 'f');
	printf("\n");
	t4_lenp = ft_printf("This is a char \'%c\', and \'%c\' is also a char", 'n', 'f');
	printf("\nLength ft: %i\nLength:    %i", t4_len, t4_lenp);
	printf("\n");
	printf("\n");
	//Test5
	int t5_len = 0;
	int t5_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 5);
	t5_len = ft_printf("  %c %c %c", '1', 0, '0');
	printf("\n");
	t5_lenp = ft_printf("  %c %c %c", '1', 0, '0');
	printf("\nLength ft: %i\nLength:    %i", t5_len, t5_lenp);
	printf("\n");
	printf("\n");
	//%s Tests
	printf("\n=====================================\n");
	printf("+++ Tests %%s                          \n");
	printf("=====================================\n\n");
	//Test6
	int t6_len = 0;
	int t6_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 6);
	t6_len = ft_printf("This is a string: \"%s\"", "I'm a string");
	printf("\n");
	t6_lenp = printf("This is a string: \"%s\"", "I'm a string");
	printf("\nLength ft: %i\nLength:    %i", t6_len, t6_lenp);
	printf("\n");
	printf("\n");
	//Test7
	int t7_len = 0;
	int t7_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 7);
	t7_len = ft_printf("This is a empty string: \"%s\"", "");
	printf("\n");
	t7_lenp = printf("This is a empty string: \"%s\"", "");
	printf("\nLength ft: %i\nLength:    %i", t7_len, t7_lenp);
	printf("\n");
	printf("\n");
	//Test8
	int t8_len = 0;
	int t8_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 8);
	t8_len = ft_printf("This is a empty string: \"%s\"", NULL);
	printf("\n");
	t8_lenp = printf("This is a empty string: \"%s\"", NULL);
	printf("\nLength ft: %i\nLength:    %i", t8_len, t8_lenp);
	printf("\n");
	printf("\n");
	//Test9
	int t9_len = 0;
	int t9_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 8);
	t9_len = ft_printf("This is a\0 empty string: \"%s\"", NULL);
	printf("\n");
	//t9_lenp = printf("This is a\0 string: \"%s\"", "I'm a string");
	printf("\nLength ft: %i\nLength:    %i", t9_len, t9_lenp);
	printf("\n");
	printf("\n");
	//%s Tests
	printf("\n=====================================\n");
	printf("+++ Tests %%d                          \n");
	printf("=====================================\n\n");
	//Test10
	int t10_len = 0;
	int t10_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 9);
	t10_len = ft_printf("This is a digit:  \"%d\"", 123);
	printf("\n");
	t10_lenp = printf("This is a digit:  \"%d\"", 123);
	printf("\nLength ft: %i\nLength:    %i", t10_len, t10_lenp);
	printf("\n");
	printf("\n");
	//Test11
	int t11_len = 0;
	int t11_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 9);
	t11_len = ft_printf("This is a digit:  \"%d\", and %d this is a digit too", 123, 11);
	printf("\n");
	t11_lenp = printf("This is a digit:  \"%d\", and %d this is a digit too", 123, 11);
	printf("\nLength ft: %i\nLength:    %i", t11_len, t11_lenp);
	printf("\n");
	printf("\n");
	//Test12
	int t12_len = 0;
	int t12_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 9);
	t12_len = ft_printf("This is a digit:  \"%d\", and this is %d (zero) and  %d this is a digit too", 123, 0, 11);
	printf("\n");
	t12_lenp = printf("This is a digit:  \"%d\", and this is %d (zero) and  %d this is a digit too", 123, 0, 11);
	printf("\nLength ft: %i\nLength:    %i", t12_len, t12_lenp);
	printf("\n");
	printf("\n");

}
