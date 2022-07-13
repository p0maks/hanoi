
#include <iostream>

int num = 0;

void Show(char x, char y)
{
	num++; 
	printf("%c->%c\n", x, y);
}

void Hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		Show(a, c);
	}
	else
	{
		Hanoi(n - 1, a, c, b); 
		Show(a, c); 
		Hanoi(n - 1, b, a, c); 
	}
}

int main()
{
	Hanoi(4, 'a', 'b', 'c');
	printf("%d\n", num);
}
