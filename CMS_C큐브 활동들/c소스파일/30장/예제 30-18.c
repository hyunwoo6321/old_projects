#include <stdio.h>

int main(void)
{  
#undef  DATE
#define DATE   "11월: 24일"
	printf("오늘은 %s \n", DATE);

#undef  DATE
#define DATE   "11월: 25일"
	printf("내일은 %s \n", DATE);

#undef  DATE
#define DATE   "11월: 26일"
	printf("모레는 %s \n", DATE);

	return 0;
}