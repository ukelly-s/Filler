#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void *dest;

	if ((unsigned char*)dst == NULL && (unsigned char*)src == NULL)
		return (NULL);
	dest = dst;
	while (n--)
		*((unsigned char*)dst++) = *((unsigned char*)src++);
	return (dest);
}
