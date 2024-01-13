#include <stdio.h>

/**
  *main - iogh
  *
  *@:x
  *
  *
  */
int main(int argc, char const *argv[])
{
	while(argc--)
	{
		printf("%s",*argv);
		argv++;
	}

	return (0);
}
