#include <stdio.h>

int title_screen()
{
	puts("----------");
	puts("LOVE SHIT  ");
    	puts("----------");
	return 0;
}

int main()
{
	int count = 0;
	while (count < 5) 
	{
	          count++;
                  title_screen();
	          puts("");
	}
	return 0;	
}
