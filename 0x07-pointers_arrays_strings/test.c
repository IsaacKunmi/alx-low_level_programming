#include "main.h"

void simple(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
		while (i < size)
		{
			if (i % 10)
			{
				printf(" ");
			}

			if (!(i % 10) && i)
			{
				printf("\n");
			}

		printf("%10x", buffer[i]);
		i++;
		}

	printf("\n");
}


char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);

		i++;
	}

	return (dest);
}

int main(void)
{
	char buffer[100] = {0};

	char buffer2[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 , 13, 14};

	simple(buffer, 100);

	_memcpy(buffer + 50, buffer2, 14);

	printf("-------\n");

	simple(buffer, 100);

		return (0);
}
