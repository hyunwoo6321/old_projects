#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[20]="1234567890";
	char dest1[5];
	char dest2[5];

	strcpy(dest1, src);

	strncpy(dest2, src, sizeof(dest2)-1);
	dest2[sizeof(dest2)-1]='\0';

	printf("dest1: %s \n", dest1);
	printf("dest2: %s \n", dest2);

	return 0;
}