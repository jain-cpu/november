#include<string.h>
#include<stdio.h>
size_t my_strlen(char *s)
{
	const char *p=s;
	while(*p)
		++p;
	return(p-s);
}

int main()
{
	int i;
	char *s[]={"Git tutorials","tutorials point"};
	for(i=0;i<2;i++)
		printf("String length of %s =%d \n",s[i],my_strlen(s[i]));
	return 0;
}

