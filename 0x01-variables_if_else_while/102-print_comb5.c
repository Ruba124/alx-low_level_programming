#include <stdio.h>
/**
 * main -entry point
 * Return: always 0
 */
int main(void)
{
	int r, u, b, a;

	for (r = 48; r <= 57; r++)
{
	for (u = 48; u <= 57; u++)
{
	for (b = 48; b <= 57; b++)
{
	for (a = 48; a <= 57; a++)
{
	if ((r == u) && (u == b) && (b == a))
	{ continue; }
	if ((r == b) && (u == a))
	{ continue; }
	if ((r == a) && (u == b))
	{ continue; }
	if ((r > b) && (u > a))
	{ continue; }
	if ((r == u) && (b > a))
	{ continue; }
	if (r > b)
	{ continue; }
	if ((r == b) && (u > a))
	 {continue; }
	putchar (r);
	putchar (u);
	putchar (32);
	putchar (b);
	putchar (a);
	if ((r == 57) && (u == 56) && (b == 57) && (a == 57))
	{ continue; }
	putchar(',');
	putchar (32); }}}}
	return (0); }
