#include <conio.h>
#include <stdio.h>

/* Created by Rizky Khapidsyah */

int main() {
	char S[] = "RizkyKhapidsyah";
	char* p;

	/* Cara 1 */
	p = S;

	/* Cara 2 */
	for (int i = 0; i < 20; i++)
	{
		printf("%c", *p);
		p++;
	}

	_getch();
	return 0;
}