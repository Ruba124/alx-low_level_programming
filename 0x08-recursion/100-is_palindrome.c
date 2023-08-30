#include "main.h"
int length(char *s);
/**
 * length - fun
 * @s:string
 * Return:length
 */
int is_palindrome(char *s);
int to(char *s, int start, int end, int is);
int length(char *s)
{
	int l = 0;

	if (*s > '\0')
	{
		l += length(s + 1) + 1;
	}
	return (l);
}
/**
 * is_palindrome - functoin
 * @s:int
 * Return:0 -1
 */
int is_palindrome(char *s)
{
int end = length(s);
return (to(s, 0, end - 1, end % 2));
}
/**
 * to - function
 * @s:string
 * @start:int
 * @end:int2
 * @is:int3
 * Return:0
 */
int to(char *s, int start, int end,int is)
{
if ((s[start] == s[end] && is != 0) || (s[start] == s[end + 1] && is == 0))
	return (1);
else if (s[start] != s[end])
	return (0);
else
	return (to(s, start + 1, end - 1, is));
}

