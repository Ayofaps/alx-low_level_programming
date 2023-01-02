/**
 * _memcpy - function that copies memory area
 *
 * @dest: buffer where we will copy to
 * @src: what we are to copy
 * @n: n bytes of @src
 *
 * Return: Always 0 (Sucess)
 */

char *_memcpy(char *dest, char *src, unsigned in n)
{
	unsigned in i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
