/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_writef.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:21:47 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/16 17:35:31 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

long	LONG_MAX = 9223372036854775807;
long	LINT_MAX  = 2147483647;
int		INT_MAX  = 2147483647;
int		INT_MIN  = -2147483648;

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
	printf("\33[1;34mTest %d \33[1;0m\n", 9);
	t9_len = ft_printf("This is a\0 empty string: \"%s\"", NULL);
	printf("\n");
	//t9_lenp = printf("This is a\0 string: \"%s\"", "I'm a string");
	printf("\nLength ft: %i\nLength:    %i", t9_len, t9_lenp);
	printf("\n");
	printf("\n");
	//Test9_1
	int t9_1_len = 0;
	int t9_1_lenp = 0;
	printf("\33[1;34mTest %s \33[1;0m\n", "9_1");
	t9_1_len = ft_printf(" %s", "");
	printf("\n");
	t9_1_lenp = ft_printf(" %s", "");
	printf("\nLength ft: %i\nLength:    %i", t9_1_len, t9_1_lenp);
	printf("\n");
	printf("\n");
	//%s Tests
	printf("\n=====================================\n");
	printf("+++ Tests %%d                          \n");
	printf("=====================================\n\n");
	//Test10
	int t10_len = 0;
	int t10_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 10);
	t10_len = ft_printf("This is a digit:  \"%d\"", 123);
	printf("\n");
	t10_lenp = printf("This is a digit:  \"%d\"", 123);
	printf("\nLength ft: %i\nLength:    %i", t10_len, t10_lenp);
	printf("\n");
	printf("\n");
	//Test11
	int t11_len = 0;
	int t11_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 11);
	t11_len = ft_printf("This is a digit:  \"%d\", and %d this is a digit too", 123, 11);
	printf("\n");
	t11_lenp = printf("This is a digit:  \"%d\", and %d this is a digit too", 123, 11);
	printf("\nLength ft: %i\nLength:    %i", t11_len, t11_lenp);
	printf("\n");
	printf("\n");
	//Test12
	int t12_len = 0;
	int t12_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 12);
	t12_len = ft_printf("This is a digit:  \"%d\", and this is %d (zero) and  %d this is a digit too", 123, 0, 11);
	printf("\n");
	t12_lenp = printf("This is a digit:  \"%d\", and this is %d (zero) and  %d this is a digit too", 123, 0, 11);
	printf("\nLength ft: %i\nLength:    %i", t12_len, t12_lenp);
	printf("\n");
	printf("\n");
	//Test12_1
	int t12_1_len = 0;
	int t12_1_lenp = 0;
	printf("\33[1;34mTest %s \33[1;0m\n", "12_1");
	t12_1_len = ft_printf("-1 =  %d ", -1);
	printf("\n");
t12_1_lenp  = printf("-1 =  %d ", -1);
	printf("\nLength ft: %i\nLength:    %i", t12_1_len, t12_1_lenp);
	printf("\n");
	printf("\n");
	//Test12_2
	int t12_2_len = 0;
	int t12_2_lenp = 0;
	printf("\33[1;34mTest %s \33[1;0m\n", "12_2");
	t12_2_len = ft_printf("%pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void
*)LINT_MAX);
	printf("\n");
	t12_2_lenp = printf("%pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void
*)LINT_MAX);
	printf("\nLength ft: %i\nLength:    %i", t12_2_len, t12_2_lenp);
	printf("\n");
	printf("\n");
	//Test12_3
	int t12_3_len = 0;
	int t12_3_lenp = 0;
	printf("\33[1;34mTest %s \33[1;0m\n", "12_3");
	t12_1_len = ft_printf("%d", 0);
	printf("\n");
	t12_1_len = printf("%d", 0);
	printf("\nLength ft: %i\nLength:    %i", t12_3_len, t12_3_lenp);
	printf("\n");
	printf("\n");
	printf("\n=====================================\n");
	printf("+++ Tests %%u                          \n");
	printf("=====================================\n\n");
	//Test13
	int t13_len = 0;
	int t13_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 13);
	t13_len = ft_printf("This is a unsigned int:  %u", 234123490);
	printf("\n");
	t13_lenp = printf("This is a unsigned int:  %u", 234123490);
	printf("\nLength ft: %i\nLength:    %i", t13_len, t13_lenp);
	printf("\n");
	printf("\n");
	//Test14
	int t14_len = 0;
	int t14_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 14);
	t14_len = ft_printf("This is a unsigned int:  %u", -1234490);
	printf("\n");
	t14_lenp = printf("This is a unsigned int:  %u", -1234490);
	printf("\nLength ft: %i\nLength:    %i", t14_len, t14_lenp);
	printf("\n");
	printf("\n");
	//Test14_1
	int t14_1_len = 0;
	int t14_1_lenp = 0;
	printf("\33[1;34mTest %s \33[1;0m\n", "14_1");
	t14_1_len = ft_printf("%u", 0);
	printf("\n");
	t14_1_lenp = printf("%u", 0);
	printf("\nLength ft: %i\nLength:    %i", t14_1_len, t14_1_lenp);
	printf("\n");
	printf("\n");
	printf("\n=====================================\n");
	printf("+++ Tests %%x                          \n");
	printf("=====================================\n\n");
	//Test15
	int t15_len = 0;
	int t15_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 15);
	t15_len = ft_printf("Hexadecimal of %d is %x", 1234490, 1234490);
	printf("\n");
	t15_lenp = printf("Hexadecimal of %d is %x", 1234490, 1234490);
	printf("\nLength ft: %i\nLength:    %i", t15_len, t15_lenp);
	printf("\n");
	printf("\n");
	//Test15_1
	int t15_1_len = 0;
	int t15_1_lenp = 0;
	printf("\33[1;34mTest %s \33[1;0m\n", "15_1");
	t15_1_len = ft_printf(" %x ", 0);
	printf("\n");
	t15_1_lenp = printf(" %x ", 0);
	printf("\nLength ft: %i\nLength:    %i", t15_1_len, t15_1_lenp);
	printf("\n");
	printf("\n");
	//Test15_2
	int t15_2_len = 0;
	int t15_2_lenp = 0;
	printf("\33[1;34mTest %s \33[1;0m\n", "15_2");
	t15_2_len = ft_printf("%x", INT_MAX);
	printf("\n");
	t15_2_lenp = printf("%x", INT_MAX);
	printf("\nLength ft: %i\nLength:    %i", t15_2_len, t15_2_lenp);
	printf("\n");
	printf("\n");
	//Test15_3
	int t15_3_len = 0;
	int t15_3_lenp = 0;
	printf("\33[1;34mTest %s \33[1;0m\n", "15_3");
	t15_3_len = ft_printf("%x", -10);
	printf("\n");
	t15_3_lenp = printf("%x", -10);
	printf("\nLength ft: %i\nLength:    %i", t15_3_len, t15_3_lenp);
	printf("\n");
	printf("\n");
	//Test15_4
	int t15_4_len = 0;
	int t15_4_lenp = 0;
	printf("\33[1;34mTest %s \33[1;0m\n", "15_4");
	t15_4_len = ft_printf("%x", -200000);
	printf("\n");
	t15_4_lenp = printf("%x", -200000);
	printf("\nLength ft: %i\nLength:    %i", t15_4_len, t15_4_lenp);
	printf("\n");
	printf("\n");
	printf("\n=====================================\n");
	printf("+++ Tests %%X                          \n");
	printf("=====================================\n\n");
	//Test16
	int t16_len = 0;
	int t16_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 16);
	t16_len = ft_printf("HeXadecimal of %d is %X", 1234490, 1234490);
	printf("\n");
	t16_lenp = printf("HeXadecimal of %d is %X", 1234490, 1234490);
	printf("\nLength ft: %i\nLength:    %i", t16_len, t16_lenp);
	printf("\n");
	printf("\n");
	printf("\n=====================================\n");
	printf("+++ Tests %%p                          \n");
	printf("=====================================\n\n");
	//Test17
	int t17_len = 0;
	int t17_lenp = 0;
	char *addr = "address";
	printf("\33[1;34mTest %d \33[1;0m\n", 17);
	t17_len = ft_printf("Address is %p", addr);
	printf("\n");
	t17_lenp = printf("Address is %p", addr);
	printf("\nLength ft: %i\nLength:    %i", t17_len, t17_lenp);
	printf("\n");
	printf("\n");
	//Test17_1
	int t17_1_len = 0;
	int t17_1_lenp = 0;
	printf("\33[1;34mTest %s \33[1;0m\n", "17_1");
	t17_1_len = ft_printf(" %p %p", (void *)0,(void *)0);
	printf("\n");
	t17_1_lenp = printf(" %p %p", (void *)0, (void *)0);
	printf("\nLength ft: %i\nLength:    %i", t17_1_len, t17_1_lenp);
	printf("\n");
	printf("\n");
	printf("\n=====================================\n");
	printf("+++ Tests %%i                          \n");
	printf("=====================================\n\n");
	//Test19
	int t19_len = 0;
	int t19_lenp = 0;
	printf("\33[1;34mTest %d \33[1;0m\n", 19);
	//Test19
	int t19_1_len = 0;
	int t19_1_lenp = 0;
	printf("\33[1;34mTest %s \33[1;0m\n", "19_1");
	t19_1_len = ft_printf("This is a digit:  \"%d\"", 123);
	printf("\n");
	t19_1_lenp = printf("This is a digit:  \"%d\"", 123);
	printf("\nLength ft: %i\nLength:    %i", t19_len, t19_lenp);
	printf("\n");
	printf("\n");
	printf("\n=====================================\n");
	printf("+++ Tests %%                          \n");
	printf("=====================================\n\n");
	//Test18
	int t18_len = 0;
	int t18_lenp = 0;
	int ptr = 123;
	printf("\33[1;34mTest %d \33[1;0m\n", 18);
	t18_len = ft_printf("let's start with %%. %p of integer %i and we also have digit %d and this instead is a \"%s\" but this is a char \'%c\'", &ptr, ptr, 57902, "string", 'F');
	printf("\n");
	t18_lenp = printf("let's start with %%. %p of integer %i and we also have digit %d and this instead is a \"%s\" but this is a char \'%c\'", &ptr, ptr, 57902, "string", 'F');
	printf("\nLength ft: %i\nLength:    %i", t18_len, t18_lenp);
	printf("\n");
}
