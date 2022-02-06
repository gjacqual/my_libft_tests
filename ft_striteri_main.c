#include <stdio.h>
#include "../libft.h"

static void
iter(unsigned int i, char *s) {
	(void) i;
	printf("%s\n", (s));
}

int main(void)
{
	char str[] = "string test";
	
	printf("%s\n", str);
	ft_striteri(str, iter);
	printf("%s\n", str);

	return (0);
}
