#include <stdio.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	char input[64];		/* 63 characters plus null */
	int len;

	printf("Instructions: ");

	fgets(input, 64, stdin);
	len = strlen(input);
	printf("You typed %d characters of instructions.\n", len);

	_getch();
	return(0);
}