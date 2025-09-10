#include <stdio.h>

char *myname(void)
{
	static char me[] = "FNU Ashwine";

	return(me);
}

int main()
{
	printf("This course's author is %s\n", myname() );

	return(0);
}

