
/**
  * print_name - prints name
  * @name: member 1
  * @f: callback function
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
