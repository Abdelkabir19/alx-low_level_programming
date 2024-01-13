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
		printf("%s\n",*argv);
		argv++;
	}

	return (0);
}
