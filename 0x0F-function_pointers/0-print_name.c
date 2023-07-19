#include <stdio.h>
/**
 *print_name -main entry.
 *@myname:char pointer
 *@p: pointer to a function
 *Description:Function that prints a string in reverse.
 * Return:void
 **/
void print_name(char *myname, void (*p)(char *))
{
	if (myname != NULL && p != NULL)
		(*p)(myname);
}
