#include<stdio.h>

int function(void)
{
	static int x=5; /* If we use the keyword 'static', the variable are only intialized once */
	printf("%d\n",x);
	x++;
	return 0;

}

int main(void)
{
	function();
	function();
	function();
	return 0;
}
