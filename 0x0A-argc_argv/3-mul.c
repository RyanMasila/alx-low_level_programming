#include <stdio.h>
#include <stdlib.h>
int main( int argc, char *argv[] )
{
	int i, sum = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
