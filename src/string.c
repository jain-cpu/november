#include<string.h>
#include<stdio.h>

char *my_strcpy(char *t,char *s)
{
	char *p=t;
	while(*t++=*s++)
		return p;
}

size_t my_strlen(char *s)
{
	const char *p=s;
	while(*p)
		++p;
	return(p-s);
}

int main()
{
	char p1[32];
	int i;
	char *s[]={"Git tutorials","tutorials point"};
	for(i=0;i<2;i++)
	{
		printf("String length of %s =%d \n",s[i],my_strlen(s[i]));
		printf("%s\n",my_strcpy(p1,"Hello, World"));
		return 0;
}

