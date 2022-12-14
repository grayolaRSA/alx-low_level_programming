#include "main.h"


/**
 *_isalpha - checks whether its a letter
 * @c: description - parameter or member uppercase or lowercase
 * Return: 0 or 1
*/

int _isalpha(int c)

{
	int r;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
