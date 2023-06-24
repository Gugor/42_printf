

#include "printf.h"

char *ft_set_c(char *format, va_list *arg, char *flagpos)
{
	t_formater formater;
	int lengthtoflag;

	lengthtoflag = flagpos - format;
	formater->formatlen = ft_strlen(format);
	formater->addition = va_arg(args, char);
	formater->previous = ft_substr(format,format,lengthtoflag);
	if (!formater->newformat)
	{
		MALLOC_STATE = -1;
		return (NULL);
	}
	formateur->reminder = ft_substr(format,lengthtoflag + 2,ft_strlen(format));
	formater->swap = ft_calloc(lengthtoflag + ft_strlen(formater->addition) + (formater->formatlen - (lengthtoflag + 2)), sizeof(char));
	ft_strlcpy();
	ft_strlcat(formateur->swap,formater->addition);
	printf("%i\n",lengthtoflag);
	//Get lenth to flag format - flagpos
	//Get arg lenth
	//malloc new format length
	//free old format
	return (NULL);
}
