
#include "printf.h"

char *ft_set_d(char *format, va_list *args, char flag, char *flagpos)
 {
	 t_formater formater;
	 int lengthtoflag;
	 int tmp;
	 char *addition;

     if (flag != 'd')
         return (format);
     formater.format = format;
     lengthtoflag = flagpos - format;
     formater.formatlen = ft_strlen(format);
     tmp = va_arg(*args, int);
	 addition = ft_itoa(tmp);
     formater.additionlen = ft_strlen(addition);
     ft_fill_format(&formater, addition, lengthtoflag);
     return (formater.result);
 }
