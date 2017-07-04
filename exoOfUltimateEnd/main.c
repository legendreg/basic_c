#include <stdio.h>
int main (void)
{
	char str[] = "";
	char str2[] = "salut";
	mystrcmp(str,str2);
	printf("%d\n",mystrcmp(str,str2));
	return(0);
}
