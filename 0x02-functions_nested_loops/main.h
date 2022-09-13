
/**
  * _putchar -writes the character c to stdout
  * @c: the character to print
  *
  * Return: Always returns 0(success)
  * On error, -1 is returned, and err is set appropriately.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
