#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *src;
	char *src1;

	src = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	src1 = 0;
	if (src)
	{
		src1 = src;
		while (*s1)
			*src++ = *s1++;
		*src = '\0';
	}
	return (src1);
}
