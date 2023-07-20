#include <stdio.h>
int main() {
	int a = 1;
	int y = 0;
	int x = 0;
	while ( a > 0 )
	{
		printf( "enter a number : ");
		scanf ("%d" ,&a);
		y += a;
		x++;
	}
	printf("%d\n", y - a);
	printf("%f\n", (float) (y-a) / (float) (x-1));
	return 0;
}
